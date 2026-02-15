#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QTableWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    vingenere = new Vingenere();
    pleyfer = new Pleyfer();

    fileDialog = new QFileDialog();
    fileDialog->setNameFilter("Текстовые файлы (*.txt)");
    fileDialog->setFileMode(QFileDialog::ExistingFile);
    fileDialog->setAcceptMode(QFileDialog::AcceptOpen);

    fileDialogSave = new QFileDialog();
    fileDialogSave->setFileMode(QFileDialog::AnyFile);
    fileDialogSave->setAcceptMode(QFileDialog::AcceptSave);

    changeTable(1);
    changeTable(2);
    changeTable(3);
    changeTable(4);
}

QString MainWindow::openFileTxt()
{
    if (fileDialog->exec() == QFileDialog::Accepted){
        QString fileName = fileDialog->selectedFiles().first();
        if (!fileName.endsWith(".txt", Qt::CaseInsensitive)){
            QMessageBox::warning(this, "Ошибка", "Выберите файл .txt");
        } else {
            QFile file = QFile(fileName);
            if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
                return file.readAll();
            }
        }
    }
    return QString();
}

void MainWindow::changeTable(int nTable)
{
    QTableWidget *tables;
    Table *table;
    switch (nTable) {
    case 0: return;
    case 1: { tables = ui->TB1; table = &table1; break;}
    case 2: { tables = ui->TB2; table = &table2; break;}
    case 3: { tables = ui->TB3; table = &table3; break;}
    case 4: { tables = ui->TB4; table = &table4; break;}
    };
    QString goodText = pleyfer->cleanCode(ui->PTECipher->toPlainText());
    size_t k = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j){
            tables->setItem(i, j, new QTableWidgetItem( goodText[k]));
            (*table)[i][j] = goodText[k];
            k++;
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PBProced_clicked()
{
    if (ui->RBWidger->isChecked()){
        ui->PTEResult->setPlainText( vingenere->cipherText( ui->PTEText->toPlainText(), ui->PTECipher->toPlainText()));
    } else {
        ui->PTEResult->setPlainText( pleyfer->cipherText( ui->PTEText->toPlainText(), table1, table2, table3, table4));
    }
}

//дешифрация, забыл переименовать
void MainWindow::on_pushButton_clicked()
{
    if (ui->RBWidger->isChecked()){
        ui->PTEResult->setPlainText( vingenere->deCipherText( ui->PTEText->toPlainText(), ui->PTECipher->toPlainText()));
    } else {
        ui->PTEResult->setPlainText( pleyfer->deCipherText( ui->PTEText->toPlainText(), table1, table2, table3, table4));
    }
}


void MainWindow::on_PBClear_clicked()
{
    ui->PTEResult->clear();
    ui->PTECipher->clear();
    ui->PTEText->clear();
}


void MainWindow::on_PBFileText_clicked()
{
    ui->PTEText->setPlainText( openFileTxt());
}


void MainWindow::on_PBFileResult_clicked()
{
    ui->PTEResult->setPlainText( openFileTxt());
}


void MainWindow::on_PBFileCipher_clicked()
{
    QString text = openFileTxt();
    if (!text.isNull()) ui->PTECipher->setPlainText( text);
}


void MainWindow::on_PTECipher_textChanged()
{
    changeTable(ui->comboBox->currentIndex());
}


void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    changeTable(index);
}


void MainWindow::saveFileTxt(QString text)
{
    if (fileDialogSave->exec() == QFileDialog::Accepted){
        QString fileName = fileDialogSave->selectedFiles().first();
        if (!fileName.endsWith(".txt", Qt::CaseInsensitive)) fileName += ".txt";

        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            file.write(text.toUtf8());
            file.close();
        }
    }
}


void MainWindow::on_PBSaveText_clicked()
{
    saveFileTxt(ui->PTEText->toPlainText());
}


void MainWindow::on_PBSaveResult_clicked()
{
    saveFileTxt(ui->PTEResult->toPlainText());
}


void MainWindow::on_PBSaveCipher_clicked()
{
    saveFileTxt(ui->PTECipher->toPlainText());
}

