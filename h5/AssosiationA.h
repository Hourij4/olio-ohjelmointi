#ifndef ASSOSIATIONA_H
#define ASSOSIATIONA_H
#include <string>
#include "ClassB.h"

class AssosiationA
{
private:
    ClassB objectB;
public:
    AssosiationA(ClassB);
    std::string getBinfo();
    void setBinfo(const std::string&);
};

#endif // ASSOSIATIONA_H
