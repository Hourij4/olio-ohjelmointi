#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal{
public:
    virtual ~Animal(){
        cout << "Animal tuhoutuu" << endl;
    }
    virtual void callOut() const{
        cout << "Eläin ääntelee." << endl;
    }
};

#endif // ANIMAL_H
