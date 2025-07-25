#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
	int n;
	std::cin >> n;
	std::vector<int> v;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		int temp;
		std::cin >> temp;
	    v.push_back(temp);
	}

	std::sort(v.begin(), v.end());

	for (int i = 0; i < n; ++i)
	{
		std::cout << v[i] << "\n";
	}
}