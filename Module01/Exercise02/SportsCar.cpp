#include "SportsCar.h"
#include <iostream>

SportsCar::SportsCar(std::string _make, std::string _model, int _year, double _topSpeed)
    : Car(_make, _model, _year), topSpeed(_topSpeed) {}

SportsCar::SportsCar(const SportsCar& sportsCar)
    : Car(sportsCar), topSpeed(sportsCar.topSpeed) {}

SportsCar& SportsCar::operator=(const SportsCar& sportsCar) {
    if (this != &sportsCar) {
        Car::operator=(sportsCar);
        topSpeed = sportsCar.topSpeed;
    }
    return *this;
}

void SportsCar::drive() {
    std::cout << "Driving " << "\"" << make << "\" " << "\"" << model << "\" " << "\"" << year << "\" edition.";
    std::cout << "Top speed: " << topSpeed << std::endl;
}
