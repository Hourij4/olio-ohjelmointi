#ifndef DOG_H
#define DOG_H
#include "animal.h"

class Dog : public Animal{
public:
    ~Dog() override{
        cout << "Dog tuhoutuu" << endl;
    }

    void callOut() const override{
        cout << "Koira haukkuu!" << endl;
    }
};

#endif // DOG_H
