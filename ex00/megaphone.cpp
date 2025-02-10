#include <iostream>

using std::cout;
using std::endl;
using std::islower;
using std::string;
using std::toupper;

int main(int argc, char *argv[])
{
	int i = 0;
	int ar = 1;
	string s;

	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * \n";
	while (argc > ar)
	{
		i = 0;
		s = argv[ar];
		while (s[i])
		{
			if (islower(s[i]))
				s[i] = toupper(s[i]);
			i++;
		}
		if (argc - 1 == ar)
		{
			cout << s << endl;
			break ;
		}
		cout << s;
		ar++;
	}
	return (0);
}
