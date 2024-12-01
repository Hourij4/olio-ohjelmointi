#include "car.h"
#include <iostream>

using namespace std;

Car::Car(int hp, double disp, int wheelSize, string wheelType, string carBrand)
    : engine(hp, disp), wheel(wheelSize, wheelType), brand(carBrand){}

void Car::displayDetails(){
    cout << "Auto: " << brand << endl;
    cout << "Moottori: " << engine.getHorsepower() << " HP, "
         << engine.getDisplacement() << " L" << endl;

    cout << "Rengas 1: " << wheel.getSize() << " tuumaa, "
         << wheel.getType() << endl;
    cout << "Rengas 2: " << wheel.getSize() << " tuumaa, "
         << wheel.getType() << endl;
    cout << "Rengas 3: " << wheel.getSize() << " tuumaa, "
         << wheel.getType() << endl;
    cout << "Rengas 4: " << wheel.getSize() << " tuumaa, "
         << wheel.getType() << endl;
}
