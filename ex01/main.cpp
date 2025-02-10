/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:51:02 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/17 14:23:59 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

int main()
{
	PhoneBook	p;
	string		first_name;
	string		last_name;
	string		nickname;
	string		phone;
	string		darkest_secret;
	string		option;
	string		num;

	while (1)
	{
		cout << "ADD " << "SEARCH " << "EXIT" << endl;
		p.custom_get_line(&option);
		if (option.compare("ADD") == 0)
		{
			cout << "Insert first name \n";
			p.custom_get_line(&first_name);
			cout << "Insert last name \n";
			p.custom_get_line(&last_name);
			cout << "Insert nickname \n";
			p.custom_get_line(&nickname);
			cout << "Insert phone number \n";
			p.custom_get_line(&phone);
			cout << "Insert darkest secret \n";
			p.custom_get_line(&darkest_secret);
			if (!p.vary_space_or_null(first_name) || !p.vary_space_or_null(last_name) ||
			!p.vary_space_or_null(nickname) || !p.vary_space_or_null(phone) || !p.vary_space_or_null(darkest_secret))
				;
			else
			{
				Contact c_1(first_name, last_name, nickname, phone, darkest_secret);
				p.add_contact(c_1);
			}
		}
		else if (option.compare("SEARCH") == 0)
		{
			p.display_contacts();
			cout << "Contact number \n";
			p.custom_get_line(&num);
			p.print_contact(num);
		}
		else if (option.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
