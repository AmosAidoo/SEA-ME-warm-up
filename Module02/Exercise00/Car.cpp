#include "Car.h"

Car::Car(std::string _make, std::string _model, int _year, int _seatCount = 5)
    : make(_make), model(_model), year(_year), seatCount(_seatCount) {
    seats = std::make_unique<Seat[]>(_seatCount);
}

Car::Car(const Car& other) : make(other.make), model(other.model), year(other.year), seatCount(other.seatCount) {}

Car& Car::operator=(const Car& other) {
    make = other.make;
    model = other.model;
    year = other.year;
    seatCount = other.seatCount;
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
