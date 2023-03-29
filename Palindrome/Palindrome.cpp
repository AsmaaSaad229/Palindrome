#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>
#include <cctype>
#include <vector>
#include <iomanip>
#include <string>


bool is_palindrome(const std::string& s) {
	std::deque<char> word = {};
	
	for (char c : s) {//O(n)
		if (isalnum(c)) {
			word.push_back(toupper(c));
		}
	}
	std::deque<char>::iterator it = word.begin();
	std::deque<char>::reverse_iterator rit = word.rbegin();

	for (it,rit ; it != word.end(); ++it, ++rit) {//O(n)
		if (*it != *rit) {
			return false;
		}
		
	}
	return true;
}
int main()
{
	std::vector<std::string> test_strings{ "abna ","a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
	   "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
	   "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };

	std::cout << std::boolalpha;
	std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
	for (const auto& s : test_strings) {
		std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
	}
	std::cout << std::endl;

	return 0;
}











