#include "ClassB.h"
#include <string>

std::string ClassB::getInfo() const{
    return info;
}

void ClassB::setInfo(const std::string& newInfo){
    info = newInfo;
}
