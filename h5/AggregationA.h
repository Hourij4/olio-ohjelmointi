#ifndef AGGREGATIONA_H
#define AGGREGATIONA_H
#include "ClassB.h"

class AggregationA
{
private:
    ClassB &refB;
public:
    AggregationA(ClassB&);
    std::string getBinfo();
    void setBinfo(const std::string&);
};


#endif // AGGREGATIONA_H
