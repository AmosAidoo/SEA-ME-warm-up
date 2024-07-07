#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "Car.h"

class SportsCar : public Car
{
    double topSpeed;
public:
    SportsCar(std::string _make, std::string _model, int _year, double _topSpeed);

    SportsCar(const SportsCar& sportsCar);
    SportsCar& operator=(const SportsCar& sportsCar);

    void drive() override;

    ~SportsCar() = default;
};

#endif // SPORTSCAR_H
