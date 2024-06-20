#include"sizeof_class.hpp"

Mystring::Mystring(const char* initbuffer)
{
    buffer_ = NULL;
    if(initbuffer != NULL)
    {
        buffer_ = new char[strlen(initbuffer)];
        strcpy(buffer_ , initbuffer);
    }
}

Mystring::Mystring(const Mystring& copysource)
{
    buffer_ = NULL;
    if(copysource.buffer_ != NULL)
    {
        buffer_ = new char[strlen(copysource.buffer_)];
        strcpy(buffer_,copysource.buffer_);
    }
}