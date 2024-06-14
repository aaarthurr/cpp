/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 22:37:52 by arthur            #+#    #+#             */
/*   Updated: 2024/06/13 14:23:28 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::welcome(void) const {
    std::cout << std::endl;
    std::cout << "---:  PHONE BOOK  :---" << std::endl;
    std::cout << std::endl;
    std::cout << "ADD\t: To add a contact." << std::endl;
    std::cout << "SEARCH\t: To search inside the phonebook." << std::endl;
    std::cout << "EXIT\t: to quite." << std::endl;
    std::cout << "- - - - - - - - - - - -" << std::endl;
    std::cout << std::endl;
}

void    PhoneBook::addContact(void) {
    static int  i;
    this->_contacts[i % 8].init();
    this->_contacts[i % 8].setIndex(i % 8);
    i++;
}

void    PhoneBook::printContacts(void) const {
    std::cout << "------------- CONTACTS -------------" << std::endl;
    for (size_t i = 0; i < 8; i++) {
        this->_contacts[i].view(i);
    }
    std::cout << std::endl;
}

int     PhoneBook::_readInput() const {
    int     input = -1;
    bool    valid = false;
    do
    {
        std::cout << "Please enter the contact index: " << std::flush;
        std::cin >> input;
        if (std::cin.good() && (input >= 0 && input <= 8)) {
            //everything went well, we'll get out of the loop and return the value
            valid = true;
        } else {
            //something went wrong, we reset the buffer's state to good
            std::cin.clear();
            //and empty it
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Invalid index; please re-enter." << std::endl;
        }
    } while (!valid);
    return (input);
}

void    PhoneBook::search(void) const {
    int i = this->_readInput();
    this->_contacts[i].display(i);
}