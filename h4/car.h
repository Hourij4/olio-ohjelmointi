#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
#include <string>

using namespace std;

class Car{
private:
    Engine engine;
    Wheel wheel;
    string brand;

public:
    Car(int hp, double disp, int wheelSize, string wheelType, string carBrand);
    void displayDetails();
};

#endif  // CAR_H
