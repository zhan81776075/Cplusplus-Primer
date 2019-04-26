#include<iostream>
#include<string>
#include<vector>

int main() {
	std::vector<std::string> svec = { "a","b","c","d","e","f" };
	std::string word;
	auto iter = svec.begin();
	while (std::cin >> word)
	{
		iter = svec.insert(iter, word);
		iter++; iter++;
	}
    for (auto iter = svec.begin(); iter != svec.end(); ++iter)
		std::cout << *iter << " ";
	std::cout << std::endl;

	return 0;
}