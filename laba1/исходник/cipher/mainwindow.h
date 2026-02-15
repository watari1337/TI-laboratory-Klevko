#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vingenere.h>
#include <pleyfer.h>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_PBProced_clicked();

    void on_PBClear_clicked();

    void on_PBFileText_clicked();

    void on_PBFileResult_clicked();

    void on_PBFileCipher_clicked();

    void on_pushButton_clicked();

    void on_PTECipher_textChanged();

    void on_comboBox_currentIndexChanged(int index);

    void on_PBSaveText_clicked();

    void on_PBSaveResult_clicked();

    void on_PBSaveCipher_clicked();

private:
    void saveFileTxt(QString text);
    QString openFileTxt();
    void changeTable(int nTable);

    Ui::MainWindow *ui;
    Vingenere *vingenere;
    Pleyfer *pleyfer;
    QFileDialog *fileDialog;
    QFileDialog *fileDialogSave;
    Table table1, table2, table3, table4;
};
#endif // MAINWINDOW_H
