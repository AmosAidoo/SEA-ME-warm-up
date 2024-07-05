#ifndef CONTACT_H
#define CONTACT_H

#include <string>


class Contact
{
    std::string name;
    std::string phoneNumber;
    std::string nickname;
    bool isBookmarked;
public:
    Contact(std::string _name, std::string _phoneNumber, std::string _nickname);
    std::string getName();
    std::string getPhoneNumber();
    std::string getNickname();
    bool getIsBookmarked();
    void setIsBookmarked(bool _setIsBookmarked);
};

#endif // CONTACT_H
