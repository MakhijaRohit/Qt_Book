#include <QtGui>

#include "../02CreateDialog/finddialog.h"
#include "../02GoToCellDialog/gotocelldialog.h"
#include "mainwindow.h"
#include "../02ShapeChangingDialog/sortdialog.h"
#include "../spreadsheet/spreadsheet.h"

MainWindow::MainWindow()
{
    spreadSheet = new Spreadsheet;
    setCentralWidget(spreadSheet);

    createActions();
    createMenus();
    createContextMenu();
    createToolBars();
    createStatusBars();

    readSettings();
    findDialog = 0;

    setWindowIcon(QIcon(":/images/icons.png"));
    setCurrentFile("");
}
