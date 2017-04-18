#ifndef CONN
#define CONN


#include <QSqlDatabase>
#include <QDebug>

bool connectiondatabes()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("NYTab");
    db.setUserName("root");
    db.setPassword("123");
    if(db.open())
    {
        qDebug() << "database is established!";
    }
    else
    {
        qDebug() << "build error!";
        return false;
    }

    return true;
}


#endif // CONN

