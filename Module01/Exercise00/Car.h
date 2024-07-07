#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
class Car
{
    std::string name;
    double speed;

public:
    Car(std::string _name, double _speed);
    Car(const Car&);
    Car& operator=(const Car&);

    friend std::ostream& operator<<(std::ostream& os, const Car& car);

    void setName(std::string);
    void setSpeed(double);

    std::string getName() const;
    double getSpeed() const;

    ~Car() = default;
};
#endif