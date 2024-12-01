#include "car.h"

int main(){
    // hp, tilavuus, vannekoko, kesä/talvirengas, auto
    Car myCar(150, 2.5, 16, "kesärengas", "Toyota Corolla");

    myCar.displayDetails();

    return 0;
}
