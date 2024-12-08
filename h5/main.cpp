#include <iostream>
#include "ClassB.h"
#include <string>
#include "AssosiationA.h"
#include "AggregationA.h"

int main(){

    ClassB objB;
    objB.setInfo("Ilion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    int a = 5;
    int b = 10;

    int* myPointer = &b;
    int& refA = a;

    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");

    std::cout << "Muuttuja a:n arvo: " << a << " ja osoite on: " << &a << std::endl;
    std::cout << "Muuttuja b:n arvo: " << b << " ja osoite on: " << &b << std::endl;
    std::cout << std::endl;

    std::cout << "Pointterin osoittama osoite on: " << (void*)myPointer << std::endl;
    std::cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << std::endl;
    std::cout << std::endl;

    std::cout << "refA osoittaa osoitteeseen: " << (void*)&refA << std::endl;
    std::cout << "refA:n osoittaman muistipaikan arvo on: " << refA << std::endl;
    std::cout << std::endl;

    std::cout<<"Assosiaatio esimerkki:"<<std::endl;
    std::cout<<"objB: "<<objB.getInfo()<<std::endl;
    std::cout<<"objAss: "<<objAss.getBinfo()<<std::endl;
    std::cout << std::endl;

    std::cout<<"Aggregaatio esimerkki:"<<std::endl;
    objAggr.setBinfo("Olion Agr asettama info");
    std::cout<<"objB: "<<objB.getInfo()<<std::endl;
    std::cout<<"objAggr "<<objAggr.getBinfo()<<std::endl;



    return 0;
}
