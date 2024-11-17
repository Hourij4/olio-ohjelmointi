#include <iostream>
#include <memory>
#include <string>
#include "car.h"
#include "rectangle.h"
#include "student.h"

int main(){
    Car myCar;
    myCar.setBrand("BMW");
    myCar.setModel("320");
    myCar.setYearModel(2004);
    myCar.printData();

    Rectangle* myRectangle = new Rectangle();
    myRectangle->setWidth(50.0);
    myRectangle->setHeight(200.0);
    std::cout << "Rectangle Area: " << myRectangle->getArea() << std::endl;
    std::cout << "Rectangle Circumference: " << myRectangle->getCircum() << std::endl;
    delete myRectangle;

    std::shared_ptr<Student> myStudent = std::make_shared<Student>();
    myStudent->setName("Matti Pekka");
    myStudent->setStudentNumber(69420);
    myStudent->setAverage(3.5);
    std::cout << "Student Info: " << myStudent->getName() << ", "
              << "Student Number: " << myStudent->getStudentNumber() << ", "
              << "Average: " << myStudent->getAverage() << std::endl;

    return 0;
}
