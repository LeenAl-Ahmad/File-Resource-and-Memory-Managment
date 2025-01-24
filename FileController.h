#ifndef FILE_CONTROLLER_H
#define FILE_CONTROLLER_H

#include "StandardInclude.h"

class FileController : public Singleton<FileController>
{
public:
    // Constructors/Destructors
    FileController();
    virtual ~FileController();

    // Methods
    string GetCurDirectory();
    int GetFileSize(string _filePath);
    bool ReadFile(string _filePath, unsigned char* _buffer, unsigned int _bufferSize);

private:
    FILE* m_handle;
};

#endif // FILE_CONTROLLER_H
