#include "AggregationA.h"

AggregationA::AggregationA(ClassB &value):refB(value)
{
}

std::string AggregationA::getBinfo()
{
    return refB.getInfo();
}

void AggregationA::setBinfo(const std::string& value)
{
    refB.setInfo(value);
}
