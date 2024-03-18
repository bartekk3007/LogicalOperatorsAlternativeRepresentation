#include <iostream>

int main()
{
	bool log1 = true;
	bool log2 = false;
	bool log3 = true;

	if (log1 && log3)
	{
		std::cout << "This is logical operator AND\n";
	}
	if (log1 and log3)
	{
		std::cout << "This is alternative version of logical operator AND\n";
	}
	if (log1 || log2)
	{
		std::cout << "This is logical operator OR\n";
	}
	if (log1 or log2)
	{
		std::cout << "This is alternative version of logical operator OR\n";
	}
	if (!log2)
	{
		std::cout << "This is logical operator NOT\n";
	}
	if (not log2)
	{
		std::cout << "This is alternative version of logical operator NOT\n";
	}

	return 0;
}