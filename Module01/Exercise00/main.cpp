#include "Car.h"
#include <iostream>

int main()
{
    Car carA("First Car", 20.);
    Car carB("Second Car", 35.);
    Car carC = carA; // Copy the content of carA into carC
    carC.setName("Third Car");
    Car carD(carB); // Copy the content of carB into carD by invoking the copy constructor
    carD.setName("Fourth Car");
    carD.setSpeed(99.);
    std::cout << carA << std::endl;
    std::cout << carB << std::endl;
    std::cout << carC << std::endl;
    std::cout << carD << std::endl;
}