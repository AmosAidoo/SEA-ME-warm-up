#ifndef CAR_H
#define CAR_H
#include <string>
class Car
{
protected:
    std::string make;
    std::string model;
    int year;

public:
    Car(std::string _make, std::string _model, int _year);
    Car(const Car&);
    Car& operator=(const Car&);

    virtual void drive();

    ~Car() = default;
};
#endif
