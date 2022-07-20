#ifndef QTFILE_H
#define QTFILE_H

#include <QtCore>

class QtFile
{
    private:
        QFile _innerFile;
        QDataStream _innerStream;

    public:
        void seekTo(long);

        char readByte();
        short readShort();
        int readInteger();

        QByteArray readArray(uint);

        QtFile(QString Input);
};

#endif // QTFILE_H
