#include <string>
#include <iostream>
#include <algorithm>

int main() {
	std::string s;
	std::cout << "Enter your text: " << std::endl;
	getline(std::cin, s);
	std::cin.ignore();
	auto Count = std::count_if(s.begin(), s.end(), [](auto (c)) {
		return c = '(' , c = ')';
	});
	std::cout << Count << std::endl;
	return 0;
}