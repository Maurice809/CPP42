/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoret <maurice809@hotmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:50:09 by tmoret            #+#    #+#             */
/*   Updated: 2023/01/28 13:50:22 by tmoret           ###   Lausanne.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact     _contacts[8];
    int         _readInput(void) const;

public:
    PhoneBook();
    ~PhoneBook();
    void    addContact(void);
    void    printContacts(void) const;
    void    search(void) const;
    void    welcome(void) const;
};

#endif // PHONEBOOK_HPP
