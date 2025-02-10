#include <iostream>
#include <string>
#include <iomanip> 

#include "./Contact.hpp"

using std::string;
using std::cout;
using std::endl;
Contact::Contact() : first_name(""), last_name("") , nickname(""), phone_number(""), darkest_secret(""){}

Contact::Contact(string first, string last, string nickname, string phone, string darkest_secret)
{
	this->first_name = first;
	this->last_name = last;
	this->nickname = nickname;
	this->phone_number = phone;
	this->darkest_secret = darkest_secret;
}

void Contact::truncate_str(string str, int l)
{
	int i;
	int widden;

	i = 0;
	widden = 10 - str.length() + 1;
	std::cout << std::setw(widden);
	while (str[i] && i <= 9)
	{
		cout << str[i];
		i++;
		if (str.length() > 10 && i >= 9)
			break ;
	}
	if (str[i])
		cout << ".";
	if (l == 0)
		cout << "|";
	else
	 	cout << endl;
}

void Contact::print_data(void)
{
	cout << "First name : " << this->first_name << endl;
	cout << "Last name : " << this->last_name << endl;
	cout << "Nick-name : " << this->nickname << endl;
	cout << "Phone : " << this->phone_number << endl;
	cout << "Darkest secret : " << this->darkest_secret << endl;
}

void Contact::display_data(string index)
{
	truncate_str(index, 0);
	truncate_str(this->first_name, 0);
	truncate_str(this->last_name, 0);
	truncate_str(this->nickname, 1);
}
