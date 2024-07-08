#ifndef SEAT_H
#define SEAT_H

// Simple seat class used inside Car to illustrate
// the usage of smart pointers
class Seat
{
public:
    Seat() = default;
    Seat(const Seat&) = default;
    Seat& operator=(const Seat&) = default;
    ~Seat() = default;
};

#endif // SEAT_H
