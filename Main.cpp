#include<iostream>
#include<string>

int main()
{
	std::string str("There are two needles in this haystack with needles");
	std::string str2("needle");
	size_t found;

	found = str.find(str2);

	if (found != std::string::npos)
	{
		std::cout << "first 'needle' found at: "
			<< int(found) << '\n';
	}

	found = str.find("needles", found + 1);

	if (found != std::string::npos)
	{
		std::cout << "second 'needle' found at: "
			<< int(found) << '\n';
	}

	return 0;
}