#include "addpackage.h"
#include "ui_addpackage.h"

AddPackage::AddPackage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddPackage)
{
    ui->setupUi(this);
}

AddPackage::~AddPackage()
{
    delete ui;
}

void AddPackage::on_btnSave_clicked()
{
    QString packageName = ui->txtPackageName->text();
    QString packageDescription = ui->txtDescription->toPlainText();
    QString amount = ui->txtAmount->text();

    qDebug() << "Package Name " << packageName << "Package Description: " <<packageDescription << "Amount: "<<amount;

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("F:/LEARNING JOURNEY/MyProjects/Tourist_Manager/database/MyTouristManager.db");

    if(QFile::exists("F:/LEARNING JOURNEY/MyProjects/Tourist_Manager/database/MyTouristManager.db"))
    {
        qDebug() << "Database file exists";
    }

    else{

        qDebug() << "Database file doesn't exist";
        return;
    }

    if(!database.open())
    {
        qDebug() << "Error: Unable to open database";
        return;
    }

    else
    {
        qDebug() << "Database open successfully..";
    }

    QSqlQuery query(database);

    query.prepare("insert into Package (PackageName, PackageDescription, Amount) values('" + packageName +"','" + packageDescription +"','" + amount +"')");
    query.exec();
    qDebug() << "Last error: "<<query.lastError().text();
    database.close();
}

