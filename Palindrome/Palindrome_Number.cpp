#include <iostream>
#include <cctype>

bool is_palindrome(int x) {
	
	int y = x;
	int mod_num{ 0 };
	while (y > 0) {
		mod_num *= 10;
		mod_num += y % 10;
		y /= 10;
	}
	
	if (x < 0 || mod_num != x) {
		return false;
	}
	return true;
	
}
int main()
{ 
	std::cout << std::boolalpha;
	std::cout << is_palindrome(1234567899) << std::endl;

	return 0;
}