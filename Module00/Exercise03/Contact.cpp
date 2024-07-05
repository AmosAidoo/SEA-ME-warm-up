#include "Contact.h"

Contact::Contact(std::string _name, std::string _phoneNumber, std::string _nickname):
    name(_name), phoneNumber(_phoneNumber), nickname(_nickname), isBookmarked(false)
{}

std::string Contact::getName() { return name; }

std::string Contact::getNickname() { return nickname; }

std::string Contact::getPhoneNumber() { return phoneNumber; }

bool Contact::getIsBookmarked() { return isBookmarked; }

void Contact::setIsBookmarked(bool _isBookmarked) { isBookmarked = _isBookmarked; }
