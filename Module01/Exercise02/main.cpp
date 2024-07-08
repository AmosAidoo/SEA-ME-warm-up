#include "SportsCar.h"

int main()
{
    // Car is an abstract class so it cannot be instantiated directly
    // But it can store references to its concrete derived classes
    Car *car;

    // SportsCar is a concrete derived class of Car so can be instantiated
    SportsCar sportsCar("Toyota", "Corolla", 2020, 240);
    sportsCar.drive();

    // Polymorphism
    // Store a reference of sportsCar in car
    car = &sportsCar;

    // This will call sportCar's methos
    car->setYear(2021);
    car->drive();
    
    return 0;
}
