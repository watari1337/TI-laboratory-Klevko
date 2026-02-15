/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_5;
    QWidget *wingera;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *PBFileText;
    QPushButton *PBSaveText;
    QSpacerItem *verticalSpacer_4;
    QPlainTextEdit *PTEText;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QPushButton *PBProced;
    QPushButton *pushButton;
    QPushButton *PBClear;
    QSpacerItem *verticalSpacer;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_4;
    QPushButton *PBFileResult;
    QPushButton *PBSaveResult;
    QSpacerItem *verticalSpacer_2;
    QPlainTextEdit *PTEResult;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_3;
    QPushButton *PBFileCipher;
    QPushButton *PBSaveCipher;
    QSpacerItem *verticalSpacer_5;
    QPlainTextEdit *PTECipher;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_6;
    QWidget *widget_10;
    QGridLayout *gridLayout;
    QTableWidget *TB2;
    QTableWidget *TB1;
    QTableWidget *TB4;
    QSpacerItem *horizontalSpacer_5;
    QTableWidget *TB3;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QRadioButton *RBWidger;
    QSpacerItem *horizontalSpacer_2;
    QRadioButton *RBPlayfer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(919, 713);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        verticalLayout_5 = new QVBoxLayout(widget_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        wingera = new QWidget(widget_2);
        wingera->setObjectName("wingera");
        horizontalLayout_4 = new QHBoxLayout(wingera);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, -1, 0, -1);
        widget = new QWidget(wingera);
        widget->setObjectName("widget");
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        PBFileText = new QPushButton(widget_4);
        PBFileText->setObjectName("PBFileText");
        PBFileText->setMinimumSize(QSize(35, 35));
        PBFileText->setMaximumSize(QSize(35, 35));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        PBFileText->setIcon(icon);

        verticalLayout_2->addWidget(PBFileText);

        PBSaveText = new QPushButton(widget_4);
        PBSaveText->setObjectName("PBSaveText");
        PBSaveText->setMinimumSize(QSize(35, 35));
        PBSaveText->setMaximumSize(QSize(35, 35));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        PBSaveText->setIcon(icon1);

        verticalLayout_2->addWidget(PBSaveText);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        horizontalLayout_3->addWidget(widget_4);

        PTEText = new QPlainTextEdit(widget);
        PTEText->setObjectName("PTEText");

        horizontalLayout_3->addWidget(PTEText);


        horizontalLayout_4->addWidget(widget);

        widget_3 = new QWidget(wingera);
        widget_3->setObjectName("widget_3");
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName("verticalLayout");
        PBProced = new QPushButton(widget_3);
        PBProced->setObjectName("PBProced");

        verticalLayout->addWidget(PBProced);

        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        PBClear = new QPushButton(widget_3);
        PBClear->setObjectName("PBClear");

        verticalLayout->addWidget(PBClear);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_4->addWidget(widget_3);

        widget_5 = new QWidget(wingera);
        widget_5->setObjectName("widget_5");
        horizontalLayout_2 = new QHBoxLayout(widget_5);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName("widget_6");
        verticalLayout_4 = new QVBoxLayout(widget_6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        PBFileResult = new QPushButton(widget_6);
        PBFileResult->setObjectName("PBFileResult");
        PBFileResult->setMinimumSize(QSize(35, 35));
        PBFileResult->setMaximumSize(QSize(35, 35));
        PBFileResult->setIcon(icon);

        verticalLayout_4->addWidget(PBFileResult);

        PBSaveResult = new QPushButton(widget_6);
        PBSaveResult->setObjectName("PBSaveResult");
        PBSaveResult->setMinimumSize(QSize(35, 35));
        PBSaveResult->setMaximumSize(QSize(35, 35));
        PBSaveResult->setIcon(icon1);

        verticalLayout_4->addWidget(PBSaveResult);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout_2->addWidget(widget_6);

        PTEResult = new QPlainTextEdit(widget_5);
        PTEResult->setObjectName("PTEResult");

        horizontalLayout_2->addWidget(PTEResult);


        horizontalLayout_4->addWidget(widget_5);


        verticalLayout_5->addWidget(wingera);

        widget_7 = new QWidget(widget_2);
        widget_7->setObjectName("widget_7");
        widget_7->setMaximumSize(QSize(16777215, 150));
        horizontalLayout_5 = new QHBoxLayout(widget_7);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_8 = new QWidget(widget_7);
        widget_8->setObjectName("widget_8");
        verticalLayout_3 = new QVBoxLayout(widget_8);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        PBFileCipher = new QPushButton(widget_8);
        PBFileCipher->setObjectName("PBFileCipher");
        PBFileCipher->setMinimumSize(QSize(35, 35));
        PBFileCipher->setMaximumSize(QSize(35, 35));
        PBFileCipher->setIcon(icon);

        verticalLayout_3->addWidget(PBFileCipher);

        PBSaveCipher = new QPushButton(widget_8);
        PBSaveCipher->setObjectName("PBSaveCipher");
        PBSaveCipher->setMinimumSize(QSize(35, 35));
        PBSaveCipher->setMaximumSize(QSize(35, 35));
        PBSaveCipher->setIcon(icon1);

        verticalLayout_3->addWidget(PBSaveCipher);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_5);


        horizontalLayout_5->addWidget(widget_8);

        PTECipher = new QPlainTextEdit(widget_7);
        PTECipher->setObjectName("PTECipher");
        PTECipher->setMinimumSize(QSize(0, 0));

        horizontalLayout_5->addWidget(PTECipher);

        comboBox = new QComboBox(widget_7);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setMinimumSize(QSize(250, 0));

        horizontalLayout_5->addWidget(comboBox);


        verticalLayout_5->addWidget(widget_7);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);

        widget_10 = new QWidget(widget_2);
        widget_10->setObjectName("widget_10");
        gridLayout = new QGridLayout(widget_10);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(42, -1, -1, -1);
        TB2 = new QTableWidget(widget_10);
        if (TB2->columnCount() < 5)
            TB2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TB2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (TB2->rowCount() < 5)
            TB2->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TB2->setItem(0, 0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TB2->setItem(0, 1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        TB2->setItem(0, 2, __qtablewidgetitem3);
        TB2->setObjectName("TB2");
        TB2->setEnabled(true);
        TB2->setMinimumSize(QSize(127, 127));
        TB2->setMaximumSize(QSize(127, 127));
        TB2->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        TB2->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        TB2->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TB2->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        TB2->setShowGrid(true);
        TB2->setCornerButtonEnabled(true);
        TB2->setRowCount(5);
        TB2->setColumnCount(5);
        TB2->horizontalHeader()->setVisible(false);
        TB2->horizontalHeader()->setMinimumSectionSize(25);
        TB2->horizontalHeader()->setDefaultSectionSize(25);
        TB2->horizontalHeader()->setHighlightSections(false);
        TB2->verticalHeader()->setVisible(false);
        TB2->verticalHeader()->setMinimumSectionSize(25);
        TB2->verticalHeader()->setDefaultSectionSize(25);
        TB2->verticalHeader()->setHighlightSections(false);
        TB2->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        gridLayout->addWidget(TB2, 1, 1, 1, 1);

        TB1 = new QTableWidget(widget_10);
        if (TB1->columnCount() < 5)
            TB1->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        TB1->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        if (TB1->rowCount() < 5)
            TB1->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        TB1->setItem(0, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        TB1->setItem(0, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        TB1->setItem(0, 2, __qtablewidgetitem7);
        TB1->setObjectName("TB1");
        TB1->setEnabled(true);
        TB1->setMinimumSize(QSize(127, 127));
        TB1->setMaximumSize(QSize(127, 127));
        TB1->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        TB1->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        TB1->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TB1->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        TB1->setShowGrid(true);
        TB1->setCornerButtonEnabled(true);
        TB1->setRowCount(5);
        TB1->setColumnCount(5);
        TB1->horizontalHeader()->setVisible(false);
        TB1->horizontalHeader()->setMinimumSectionSize(25);
        TB1->horizontalHeader()->setDefaultSectionSize(25);
        TB1->horizontalHeader()->setHighlightSections(false);
        TB1->verticalHeader()->setVisible(false);
        TB1->verticalHeader()->setMinimumSectionSize(25);
        TB1->verticalHeader()->setDefaultSectionSize(25);
        TB1->verticalHeader()->setHighlightSections(false);
        TB1->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        gridLayout->addWidget(TB1, 1, 2, 1, 1);

        TB4 = new QTableWidget(widget_10);
        if (TB4->columnCount() < 5)
            TB4->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        TB4->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        if (TB4->rowCount() < 5)
            TB4->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        TB4->setItem(0, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        TB4->setItem(0, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        TB4->setItem(0, 2, __qtablewidgetitem11);
        TB4->setObjectName("TB4");
        TB4->setEnabled(true);
        TB4->setMinimumSize(QSize(127, 127));
        TB4->setMaximumSize(QSize(127, 127));
        TB4->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        TB4->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        TB4->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TB4->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        TB4->setShowGrid(true);
        TB4->setCornerButtonEnabled(true);
        TB4->setRowCount(5);
        TB4->setColumnCount(5);
        TB4->horizontalHeader()->setVisible(false);
        TB4->horizontalHeader()->setMinimumSectionSize(25);
        TB4->horizontalHeader()->setDefaultSectionSize(25);
        TB4->horizontalHeader()->setHighlightSections(false);
        TB4->verticalHeader()->setVisible(false);
        TB4->verticalHeader()->setMinimumSectionSize(25);
        TB4->verticalHeader()->setDefaultSectionSize(25);
        TB4->verticalHeader()->setHighlightSections(false);
        TB4->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        gridLayout->addWidget(TB4, 3, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 3, 1, 1);

        TB3 = new QTableWidget(widget_10);
        if (TB3->columnCount() < 5)
            TB3->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        TB3->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        if (TB3->rowCount() < 5)
            TB3->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        TB3->setItem(0, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        TB3->setItem(0, 1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        TB3->setItem(0, 2, __qtablewidgetitem15);
        TB3->setObjectName("TB3");
        TB3->setEnabled(true);
        TB3->setMinimumSize(QSize(127, 127));
        TB3->setMaximumSize(QSize(127, 127));
        TB3->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        TB3->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        TB3->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        TB3->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        TB3->setShowGrid(true);
        TB3->setCornerButtonEnabled(true);
        TB3->setRowCount(5);
        TB3->setColumnCount(5);
        TB3->horizontalHeader()->setVisible(false);
        TB3->horizontalHeader()->setMinimumSectionSize(25);
        TB3->horizontalHeader()->setDefaultSectionSize(25);
        TB3->horizontalHeader()->setHighlightSections(false);
        TB3->verticalHeader()->setVisible(false);
        TB3->verticalHeader()->setMinimumSectionSize(25);
        TB3->verticalHeader()->setDefaultSectionSize(25);
        TB3->verticalHeader()->setHighlightSections(false);
        TB3->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        gridLayout->addWidget(TB3, 3, 1, 1, 1);


        verticalLayout_5->addWidget(widget_10);

        widget_9 = new QWidget(widget_2);
        widget_9->setObjectName("widget_9");
        horizontalLayout_6 = new QHBoxLayout(widget_9);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        RBWidger = new QRadioButton(widget_9);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(RBWidger);
        RBWidger->setObjectName("RBWidger");
        RBWidger->setChecked(true);

        horizontalLayout_6->addWidget(RBWidger);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        RBPlayfer = new QRadioButton(widget_9);
        buttonGroup->addButton(RBPlayfer);
        RBPlayfer->setObjectName("RBPlayfer");

        horizontalLayout_6->addWidget(RBPlayfer);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_5->addWidget(widget_9);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(widget_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 919, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        PBFileText->setText(QString());
        PBSaveText->setText(QString());
        PTEText->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\270\321\201\321\205\320\276\320\264\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202", nullptr));
        PBProced->setText(QCoreApplication::translate("MainWindow", "\320\267\320\260\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\264\320\265\321\210\320\270\321\204\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        PBClear->setText(QCoreApplication::translate("MainWindow", "\320\276\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        PBFileResult->setText(QString());
        PBSaveResult->setText(QString());
        PTEResult->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\275\321\213\320\271 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        PBFileCipher->setText(QString());
        PBSaveCipher->setText(QString());
        PTECipher->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\272\320\273\321\216\321\207", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\272\320\273\321\216\321\207 \320\264\320\273\321\217 \320\262\320\270\320\266\320\265\320\275\320\265\321\200\320\260", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\272\320\273\321\216\321\207 \320\237\320\273\320\265\320\271\321\204\320\265\320\271\321\200\320\260 \321\202\320\260\320\261\320\273\320\270\321\206\320\260 1", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\320\272\320\273\321\216\321\207 \320\237\320\273\320\265\320\271\321\204\320\265\320\271\321\200\320\260 \321\202\320\260\320\261\320\273\320\270\321\206\320\260 2", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\320\272\320\273\321\216\321\207 \320\237\320\273\320\265\320\271\321\204\320\265\320\271\321\200\320\260 \321\202\320\260\320\261\320\273\320\270\321\206\320\260 3", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\320\272\320\273\321\216\321\207 \320\237\320\273\320\265\320\271\321\204\320\265\320\271\321\200\320\260 \321\202\320\260\320\261\320\273\320\270\321\206\320\260 4", nullptr));


        const bool __sortingEnabled = TB2->isSortingEnabled();
        TB2->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = TB2->item(0, 0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = TB2->item(0, 1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = TB2->item(0, 2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        TB2->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = TB1->isSortingEnabled();
        TB1->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem3 = TB1->item(0, 0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = TB1->item(0, 1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = TB1->item(0, 2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        TB1->setSortingEnabled(__sortingEnabled1);


        const bool __sortingEnabled2 = TB4->isSortingEnabled();
        TB4->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = TB4->item(0, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = TB4->item(0, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = TB4->item(0, 2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        TB4->setSortingEnabled(__sortingEnabled2);


        const bool __sortingEnabled3 = TB3->isSortingEnabled();
        TB3->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem9 = TB3->item(0, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = TB3->item(0, 1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = TB3->item(0, 2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        TB3->setSortingEnabled(__sortingEnabled3);

        RBWidger->setText(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\204\321\200 \320\222\320\270\320\266\320\265\320\275\320\265\321\200\320\260, \320\277\321\200\321\217\320\274\320\276\320\271 \320\272\320\273\321\216\321\207", nullptr));
        RBPlayfer->setText(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\204\321\200 \320\237\320\273\320\265\320\271\321\204\320\265\320\271\321\200\320\260 \321\201 4 \321\202\320\260\320\261\320\273\320\270\321\206\320\260\320\274\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
