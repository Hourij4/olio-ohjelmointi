#ifndef CLASSB_H
#define CLASSB_H


#include <string>

class ClassB{
private:
    std::string info;
public:
    std::string getInfo() const;

    void setInfo(const std::string& newInfo);
};

#endif // CLASSB_H
