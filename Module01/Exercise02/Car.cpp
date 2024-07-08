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

std::string Car::getMake() {
    return make;
}

std::string Car::getModel() {
    return model;
}

int Car::getYear() {
    return year;
}

void Car::setMake(std::string _make) {
    make = _make;
}
void Car::setModel(std::string _model) {
    model = _model;
}

void Car::setYear(int _year) {
    year = _year;
}
