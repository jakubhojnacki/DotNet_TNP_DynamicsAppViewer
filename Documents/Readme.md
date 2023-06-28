# Readme

Discussion about getters and setters:
https://stackoverflow.com/questions/51615363/how-to-write-c-getters-and-setters

## Unzipping

QuaZip homepage:

https://quazip.sourceforge.net/

QuaZip setup:

```javascript
CONFIG(debug, debug|release) {
    LIBS += -L"C:/Users/Denis/git/ControlloAccessi/quazip-0.7.2/quazip/debug"
    LIBS += -lquazipd
} else {
    LIBS += -L"C:/Users/Denis/git/ControlloAccessi/quazip-0.7.2/quazip/release"
    LIBS += -lquazip
}
```

QuaZip example:

```c++
    QBuffer storageBuff(&QBABufferOut);
    QuaZip zip(&storageBuff);
    if (!zip.open(QuaZip::mdUnzip))
        qDebug() << "error";
    QuaZipFile file(&zip);
    for (bool f = zip.goToFirstFile(); f; f = zip.goToNextFile()) {
        QuaZipFileInfo fileInfo;
        file.getFileInfo(&fileInfo);
        qDebug() << fileInfo.name;
        file.open(QIODevice::ReadOnly);
        
        qDebug() << "Content: " << file.readAll().toBase64();
        file.close();
    }
    zip.close();
```
