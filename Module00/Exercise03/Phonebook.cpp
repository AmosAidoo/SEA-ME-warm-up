#include "Phonebook.h"
#include <algorithm>

Phonebook::Phonebook() {}

bool Phonebook::phoneNumberExists(std::string phoneNumber) {
    std::vector<Contact>::iterator foundContactIt
        = std::find_if(contacts.begin(), contacts.end(), [phoneNumber](Contact c) -> bool { return c.getPhoneNumber() == phoneNumber; });
    return foundContactIt != std::end(contacts);
}

bool Phonebook::addContact(Contact contact) {
    if (phoneNumberExists(contact.getPhoneNumber()))
        return false;
    contacts.push_back(contact);
    return true;
}

const std::vector<Contact>& Phonebook::getContacts() const {
    return contacts;
}

void Phonebook::bookmarkContact(int index) {
    if (index >= 1 && index <= contacts.size())
        contacts[index-1].setIsBookmarked(true);
}

void Phonebook::removeContact(int index) {
    if (index >= 1 && index <= contacts.size())
        contacts.erase(contacts.begin() + (index - 1));
}

void Phonebook::removeContact(std::string phoneNumber) {
    std::vector<Contact>::iterator foundContactIt
        = std::find_if(contacts.begin(), contacts.end(), [phoneNumber](Contact c) -> bool { return c.getPhoneNumber() == phoneNumber; });

    if (foundContactIt != std::end(contacts))
        contacts.erase(std::next(foundContactIt));
}
