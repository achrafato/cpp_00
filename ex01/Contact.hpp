/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 09:59:13 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/21 11:11:20 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Contact
{
private:
	string	first_name;
	string	last_name;
	string	nickname;
	string	phone_number;
	string	darkest_secret;

public:
    Contact(void);
	Contact(string first, string last, string nickname, string phone, string darkest_secret);
	void truncate_str(string str, int l);
	void print_data(void);
	void display_data(string index);
};
