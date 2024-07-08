#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "Car.h"

class SportsCar : public Car
{
    double topSpeed;
public:
    SportsCar(std::string _make, std::string _model, int _year, double _topSpeed, int _seatCount);

    SportsCar(const SportsCar& sportsCar);
    SportsCar& operator=(const SportsCar& sportsCar);

    // Needs to be overriden because it is a pure virtual
    // function inside Car
    void drive() override;

    ~SportsCar() = default;
};

#endif // SPORTSCAR_H
