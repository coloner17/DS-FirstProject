#ifndef STORE_H
#define STORE_H
#include <QObject>
#include <QMainWindow>
#include <linkedlist.h>
#include <QDir>
#include <QFile>
#include <QIODevice>
#include <QDataStream>
#include <QPushButton>
#include <QDialog>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QLabel>
#include <QCheckBox>
#include <QDialogButtonBox>
#include <QFormLayout>
#include "stack.h"


namespace Ui
{
    class Store;
}

class Store : public QMainWindow
{
    Q_OBJECT
public:
     Store(QWidget *parent = 0);
    void addCustomer();
    void addBook();
    void readFile();
    void writeFile();



    void printBooks();
private:
    void deleteBook(QString name);
    LinkedList books;
    int turns;
    int latest_turn;
    Ui::Store* ui;

signals:
    void turn_up();

public slots:
};

#endif // STORE_H
