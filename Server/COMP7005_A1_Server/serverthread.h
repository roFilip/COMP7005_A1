#ifndef SERVERTHREAD_H
#define SERVERTHREAD_H

#include <QThread>
#include <QtNetwork>

class ServerThread : public QThread
{
    Q_OBJECT
public:
    ServerThread(int, QStringList, QObject *);
     void run();

signals:
     void BytesReady(QByteArray);

private slots:
     void readSocket();
     void writeToSocket(QByteArray);

private:
     int _socketDescriptor;
     QStringList _fileList;
     QTcpSocket *_tcpSocket;
};

#endif // SERVERTHREAD_H
