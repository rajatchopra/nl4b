#ifndef _ERROR_HXX__
#define _ERROR_HXX__

include <string>

class Error {
    public:
        Error(string &);
        Error();
        ~Error();
    public:
        string operator += (string &);
        string operator = (const char *);
        string operator = (string &);
    public:
        void Fprint(FILE *fp);
        void Fprint(int fd);
        const char* Error();
    private:
        string errString_;
}

#endif
