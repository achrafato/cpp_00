/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:53:55 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/21 10:21:02 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

PhoneBook::PhoneBook() : numBooks(0) {};

void PhoneBook::add_contact(Contact &c)
{
	if (numBooks > 7)
	{
		con[numBooks % 8] = c;
		numBooks++;
	}
	else
		con[numBooks++] = c;
}

void PhoneBook::print_contact(string n)
{
	int i = 0;
	while ((i < numBooks) && numBooks)
	{
		dd.str("");
		dd.clear();
		dd << (i + 1);
		if (!(n.compare(dd.str())))
		{
			cout << "index : " << dd.str() << endl;
			con[i].print_data();
			break ;
		}
		i++;
	}
}

void PhoneBook::custom_get_line(string *param)
{
	getline(cin, *param);
	if (cin.eof())
		exit(1);
}

void PhoneBook::display_contacts(void)
{
	int i;

	i = 0;
	if (numBooks != 0)
	{
		cout << "     Index|First Name| Last Name| Nick Name\n";
		cout << "---------------------------------------------\n";
	}
	dd.str("");
	dd.clear();
	while (i < numBooks && i <= 7)
	{
		dd << (i + 1);
		con[i].display_data(dd.str());
		i++;
		dd.str("");
		dd.clear();
	}
}

int	PhoneBook::vary_space_or_null(string str)
{
	int i = 0;

	if (str[0] == '\n' || !str[0])
		return (0);
	while (str[i] && str[i] == ' ')
		i++;
	if (!str[i])
		return (0);
	return (1);
}
