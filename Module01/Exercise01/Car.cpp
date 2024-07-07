#include "Car.h"
#include <iostream>

Car::Car(std::string _make, std::string _model, int _year) : make(_make), model(_model), year(_year) {}

Car::Car(const Car& other) : make(other.make), model(other.model), year(other.year) {}

Car& Car::operator=(const Car& other) {
    make = other.make;
    model = other.model;
    year = other.year;
    return *this;
}

void Car::drive() {
    std::cout << "Driving " << "\"" << make << "\" " << "\"" << model << "\" " << "\"" << year << "\" edition" << std::endl;
}
