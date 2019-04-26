#include<iostream>
#include<list>
#include <utility>      // std::move std::swap
#include <vector>       // std::vector
#include <string>       // std::string

int main()
{
	/*list::assign

	std::list<int> first;
	std::list<int> second;

	//void assign (size_type n, const value_type& val);
	first.assign(7, 100);

	//void assign(InputIterator first, InputIterator last);
	second.assign(first.begin(), first.end());

	//assigning from array
	int myints[] = { 1776,7,3 };
	first.assign(myints, myints + 3);

	std::cout << "Size of first: " << int(first.size()) << '\n';
	std::cout << "Size of second: " << int(second.size()) << '\n';
	return 0;
	
	*/

	/*list::back

	std::list<int> mylist;
	mylist.push_back(10);
	while (mylist.back() != 0)
	{
		mylist.push_back(mylist.back() - 1);
	}

	std::cout << "mylist contains:";
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it) {
		std::cout << ' ' << *it;
	}
	std::cout << '\n';

	return 0;

	*/

	/*list::begin
	int myints[] = { 75,23,65,42,13 };
	std::list<int> mylist(myints, myints + 5);

	std::cout << "mylist contains:";
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
		std::cout << ' ' << *it;

	std::cout << '\n';

	return 0;
	*/

	/* std::move
	std::string foo = "foo-string";
	std::string bar = "bar-string";
	std::vector<std::string> myvector;

	myvector.push_back(foo);                    // copies
	myvector.push_back(std::move(bar));         // moves

	std::cout << "myvector contains:";
	for (std::string& x : myvector) std::cout << ' ' << x;
	std::cout << '\n';

	std::cout <<"foo_value:"<< foo << std::endl;
	std::cout <<"bar_value:"<< bar << std::endl;

	return 0;
	*/

}