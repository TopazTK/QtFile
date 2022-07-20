#include "qtfile.h"

QtFile::QtFile(QString Input)
{
    _innerFile.setFileName(Input);
    _innerFile.open(QIODevice::ReadWrite);

    _innerStream.setDevice(&_innerFile);
    _innerStream.setByteOrder(QDataStream::LittleEndian);
}

void QtFile::seekTo(long Position)
{
    _innerFile.seek(Position);
}

char QtFile::readByte()
{
    char _return;
    _innerStream >> _return;

    return _return;
}

short QtFile::readShort()
{
    short _return;
    _innerStream >> _return;

    return _return;
}

int QtFile::readInteger()
{
    int _return;
    _innerStream >> _return;

    return _return;
}

QByteArray QtFile::readArray(uint Size)
{
    return _innerFile.read(Size);
}
