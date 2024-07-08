#ifndef CAR_H
#define CAR_H
#include "Seat.h"

#include <memory>
#include <string>
class Car
{
protected:
    std::string make;
    std::string model;
    int year;
    int seatCount;
    std::unique_ptr<Seat[]> seats;

public:
    Car(std::string _make, std::string _model, int _year, int _seatCount);
    Car(const Car&);
    Car& operator=(const Car&);

    std::string getMake();
    std::string getModel();
    int getYear();

    void setMake(std::string);
    void setModel(std::string);
    void setYear(int);

    virtual void drive() = 0;

    ~Car() = default;
};
#endif
