#include "Car.h"

Car::Car(std::string _name, double _speed) : name(_name), speed(_speed) {}

Car::Car(const Car& other) : name(other.name), speed(other.speed) {}

Car& Car::operator=(const Car& other) {
    name = other.name;
    speed = other.speed;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Car& car) {
    os << "{ Name: " << car.name << ", Speed: " << car.speed << " }";
    return os;
}

void Car::setName(std::string _name) {
    name = _name;
}

void Car::setSpeed(double _speed) {
    speed = _speed;
}

std::string Car::getName() const {
    return name;
}

double Car::getSpeed() const {
    return speed;
}