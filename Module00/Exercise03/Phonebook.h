#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.h"
#include <vector>
class Phonebook
{
    std::vector<Contact> contacts;
public:
    Phonebook();
    bool addContact(Contact c);
    void removeContact(int index);
    void removeContact(std::string phoneNumber);
    void bookmarkContact(int index);
    const std::vector<Contact>& getContacts() const;

private:
    bool phoneNumberExists(std::string phoneNumber);
    std::vector<Contact>::iterator findContactIter(std::string phoneNumber);
};

#endif // PHONEBOOK_H
