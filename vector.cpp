#include <iostream>
#include <vector>

int main()
{
	////insert
	//std::vector<int> myvector(3, 100);
	//std::vector<int>::iterator it;
	//std::cout << "myvector contains:";
	//for (it = myvector.begin(); it<myvector.end(); it++)
	//	std::cout << ' ' << *it;
	//std::cout << '\n';
	//it = myvector.begin();
	//it = myvector.insert(it, 200);
	//std::cout << "myvector contains:";
	//for (it = myvector.begin(); it<myvector.end(); it++)
	//	std::cout << ' ' << *it;
	//std::cout << '\n';
	//myvector.insert(it, 2, 300);
	//std::cout << "myvector contains:";
	//for (it = myvector.begin(); it<myvector.end(); it++)
	//	std::cout << ' ' << *it;
	//std::cout << '\n';
	//// "it" no longer valid, get a new one:
	//it = myvector.begin();
	//std::vector<int> anothervector(2, 400);
	//myvector.insert(it + 2, anothervector.begin(), anothervector.end());
	//std::cout << "myvector contains:";
	//for (it = myvector.begin(); it<myvector.end(); it++)
	//	std::cout << ' ' << *it;
	//std::cout << '\n';
	//int myarray[] = { 501,502,503 };
	//myvector.insert(myvector.begin(), myarray, myarray + 3);
	//std::cout << "myvector contains:";
	//for (it = myvector.begin(); it<myvector.end(); it++)
	//	std::cout << ' ' << *it;
	//std::cout << '\n';
	//return 0;

	//emplace
	//std::vector<int> myvector = { 10,20,30 };

	//auto it = myvector.emplace(myvector.begin() + 1, 100);
	//std::cout << "myvector contains:";
	//for (auto& x : myvector)
	//	std::cout << ' ' << x;
	//std::cout << '\n';
	//myvector.emplace(it, 200);
	//std::cout << "myvector contains:";
	//for (auto& x : myvector)
	//	std::cout << ' ' << x;
	//std::cout << '\n';
	//myvector.emplace(myvector.end(), 300);
	//std::cout << "myvector contains:";
	//for (auto& x : myvector)
	//	std::cout << ' ' << x;
	//std::cout << '\n';
	//myvector.emplace(myvector.begin(), 120);

	//std::cout << "myvector contains:";
	//for (auto& x : myvector)
	//	std::cout << ' ' << x;
	//std::cout << '\n';

	//return 0;

	//// comparing size, capacity and max_size
	//std::vector<int> myvector;

	//// set some content in the vector:
	//for (int i = 0; i<100; i++) myvector.push_back(i);

	//std::cout << "size: " << (int)myvector.size() << '\n';
	//std::cout << "capacity: " << (int)myvector.capacity() << '\n';
	//std::cout << "max_size: " << (int)myvector.max_size() << '\n';
	//return 0;

	//vector::reserve
	std::vector<int>::size_type sz;

	std::vector<int> foo;
	sz = foo.capacity();
	std::cout << "making foo grow:\n";
	for (int i = 0; i < 100; ++i) {
		foo.push_back(i);
		if (sz != foo.capacity()) {
			sz = foo.capacity();
			std::cout << "capacity changed: " << sz << '\n';
		}
	}

	std::vector<int> bar;
	sz = bar.capacity();
	bar.reserve(100);   // this is the only difference with foo above
	std::cout << "making bar grow:\n";
	for (int i = 0; i < 100; ++i) {
		bar.push_back(i);
		if (sz != bar.capacity()) {
			sz = bar.capacity();
			std::cout << "capacity changed: " << sz << '\n';
		}
	}
	return 0;
}


