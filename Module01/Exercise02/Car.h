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
