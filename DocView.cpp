#include "DocView.h"
#include "./ui_DocView.h"
#include <QFileDialog>
#include <QDebug>


DocView::DocView(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DocView)
{
    ui->setupUi(this);

//    connect(ui->textEdit, SIGNAL(), SLOT(adText2textBrowser(QString)));
//    connect(ui->pBGenerateFile, SIGNAL(str), SLOT(adText2textBrowser(QString)));
//    connect(ui->pBSaveFile, SIGNAL(clicked()), SLOT(adText2textBrowser(QString)));
//    connect(ui->pBgetFile, SIGNAL(clicked()), SLOT(adText2textBrowser(QString)));
}

DocView::~DocView()
{
    delete ui;

    if(doc){
        delete doc;
    }
}

void DocView::on_pBgetFile_clicked()
{
//    ui->textBrowser->setText("Create new document");

    str += "Get new document /n";
    ui->textEdit->setText(str);
    doc = new PrimitiveController(ui->lineEditName->text().toStdString());

    if(ui->lineEditName->text().toStdString() == ""){
            ui->textEdit->setText("No name File");
        str += "No name File /n";
    }

    QString file_name = QFileDialog :: getOpenFileName (NULL, "Title", ".", "");
    ui->lineEditFile->setText(file_name);


//    emit textBrowserChanged(str);
}

void DocView::on_tBCircle_clicked()
{    
    str += "Create Circle /n";
    ui->textEdit->setText(str);
    doc->drawPrimitive(new CircleModel());

//    emit textBrowserChanged(str);
}


void DocView::on_tBTriangle_clicked()
{    
    str += "Create Triangle /n";
    qDebug() << str;
    ui->textEdit->setText(str);
    doc->drawPrimitive(new TriangleModel());

//    emit textBrowserChanged(str);
}


void DocView::on_tBSquare_clicked()
{    
    str += "Create Square /n";
    ui->textEdit->setText(str);
    doc->drawPrimitive(new SquareModel());

//    emit textBrowserChanged(str);
}


void DocView::on_pBGenerateFile_clicked()
{    
    str += "Create new document /n";
    qDebug() << str;
    ui->textEdit->setText(QString(str));
    doc = new PrimitiveController("Unkow file");
//    if(ui->lineEditName->text().toStdString() == "")
//            ui->textBrowser->setText("No name File");

//    emit textBrowserChanged(str);
}

///
/// \brief DocView::on_pBSaveFile_clicked
///
void DocView::on_pBSaveFile_clicked()
{
    str += "Save new document /n";
    ui->textEdit->setText(str);
    doc->rename(ui->lineEditName->text().toStdString());

//    emit textBrowserChanged(str);
}

void DocView::adText2textBrowser(QString)
{
    ui->textEdit->setText(str);
}


void DocView::on_textEdit_textChanged()
{
    ui->textEdit->setText(str);
}

