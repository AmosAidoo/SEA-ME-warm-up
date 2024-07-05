#include "Phonebook.h"
#include <iostream>
#include <limits>

int main()
{
    Phonebook phonebook;
    std::cout << "Phonebook Application.\nUse the following commands to interact with application." << std::endl;
    std::cout << "ADD: Add new contact" << std::endl;
    std::cout << "SEARCH: List all contacts" << std::endl;
    std::cout << "REMOVE: Add new contact" << std::endl;
    std::cout << "BOOKMARK: List bookmarked contacts" << std::endl;
    std::cout << "EXIT: Shut down application\n" << std::endl;
    while (true) {
        std::cout << "COMMAND >> ";
        std::string command;
        std::cin >> command;

        if (command == "ADD") {
            std::string name, phoneNumber, nickname;
            std::cout << "ADD >> " << "Name: ";
            std::getline(std::cin >> std::ws, name);
            std::cout << "ADD >> " << "Phone Number: ";
            std::getline(std::cin, phoneNumber);
            std::cout << "ADD >> " << "Nickname: ";
            std::getline(std::cin, nickname);

            Contact newContact(name, phoneNumber, nickname);
            if (!phonebook.addContact(newContact)) {
                std::cout << "Phone number already exists" << std::endl;
            }
        } else if (command == "SEARCH") {
            auto contacts = phonebook.getContacts();
            for (int i = 0; i < contacts.size(); i++) {
                std::cout << i+1 << ": " << contacts[i].getName() << std::endl;
            }
            std::cout << "Enter index to view or use 0 to return to main application" << std::endl;
            int index;
            bool condition = true;
            do {
                std::cout << "SEARCH >> ";
                std::cin >> index;
                condition = !(index >= 0 && index <= contacts.size());
                if (condition)
                    std::cout << "Please enter a valid index" << std::endl;
            } while (condition);
            if (index) {
                std::cout << contacts[index-1].getName() << "(" << contacts[index-1].getNickname() << "), " << contacts[index-1].getPhoneNumber() << std::endl;

                char answer;
                do {
                    std::cout << "Would you like to bookmark this contact? (y/n): ";
                    std::cin >> answer;
                    if (std::tolower(answer) == 'y') {
                        phonebook.bookmarkContact(index);
                    }
                } while (std::tolower(answer) != 'y' && std::tolower(answer) != 'n');
            }
        } else if (command == "REMOVE") {
            std::cout << "DI {validIndex}: Remove a contact by index" << std::endl;
            std::cout << "DP {validPhoneNumber}: Remove a contact by phone number" << std::endl;

            std::string removeCommand;
            bool condition = true;
            do {
                std::cout << "REMOVE >> ";
                std::cin >> removeCommand;
                condition = removeCommand != "DI" && removeCommand != "DP";
                if (condition)
                    std::cout << "Invalid remove command" << std::endl;
            } while (condition);

            if (removeCommand == "DI") {
                int index;
                std::cin >> index;
                while(!std::cin.good()) {
                    std::cout << "Please enter a valid integer" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "DI >> ";
                    std::cin >> index;
                }
                phonebook.removeContact(index);
            } else {
                std::string phoneNumber;
                std::cin >> phoneNumber;
                phonebook.removeContact(phoneNumber);
            }
        } else if (command == "BOOKMARK") {
            auto contacts = phonebook.getContacts();
            for (int i = 0; i < contacts.size(); i++) {
                if (!contacts[i].getIsBookmarked()) continue;
                std::cout << i+1 << ": " << contacts[i].getName() << "(" << contacts[i].getNickname() << "), " << contacts[i].getPhoneNumber() << std::endl;
            }
        } else if (command == "EXIT") {
            std::cout << "Exitting..." << std::endl;
            break;
        } else {
            std::cout << "Invalid command: " << command << ". Valid commands are ADD, SEARCH, REMOVE, BOOKMARK, EXIT" << std::endl;
        }
        std::cout << "\n";
    }
    return 0;
}
