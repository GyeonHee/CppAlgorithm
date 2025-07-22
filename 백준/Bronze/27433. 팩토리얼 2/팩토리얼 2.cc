#include <iostream>

long Fact(int num)
{
	if (num <= 1) return 1;

	return num * Fact(num-1);
}

int main()
{
	int n;
	std::cin >> n;

	std::cout << Fact(n);
}