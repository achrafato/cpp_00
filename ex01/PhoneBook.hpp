/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:52:15 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/21 11:11:33 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <sstream>
#include "./Contact.hpp"

using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::stringstream;

class PhoneBook
{
private:
	stringstream		dd;
	Contact				con[8];
	int					numBooks;

public:
	PhoneBook(void);
	int	vary_space_or_null(string str);
	void add_contact(Contact &c);
	void print_contact(string n);
	void custom_get_line(string *param);
	void display_contacts(void);
};

#endif
