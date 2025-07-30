#include <iostream>
#include <list>

int main()
{
	std::string s;
	std::cin >> s;

	std::list<char> list;
	for (auto c : s) list.push_back(c);
	auto cursor = list.end();
	int n;
	std::cin >> n;
	while (n--)
	{
		char op;
		std::cin >> op;
		switch (op)
		{
		case 'P':
			char add;
			std::cin >> add;
			list.insert(cursor, add);
			break;
		case 'L':
			if (cursor != list.begin()) cursor--;
			break;
		case 'D':
			if (cursor != list.end()) cursor++;
			break;
		case 'B':
			if (cursor != list.begin())
			{
				cursor--;
				cursor = list.erase(cursor);
			}
			break;
		}
	}
	
	for (auto c : list) std::cout << c;
}