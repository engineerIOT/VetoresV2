// generate algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::generate
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand
//#include <array>

// function generator:
int RandomNumber() {
	return (std::rand() % 100);
}

int main() {
	std::srand(unsigned(std::time(0)));

	std::vector<int> myvector(10);

	std::generate(myvector.begin(), myvector.end(), RandomNumber);

	std::cout << "myvector contains:";
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end();
			++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	std::make_heap(myvector.begin(), myvector.end());
	std::cout << "initial max heap   : " << myvector.front() << '\n';

	std::pop_heap(myvector.begin(), myvector.end());
	myvector.pop_back();
	std::cout << "max heap after pop : " << myvector.front() << '\n';

	//myvector.push_back(99); std::push_heap (myvector.begin(),myvector.end());
	//std::cout << "max heap after push: " << myvector.front() << '\n';

	std::sort_heap(myvector.begin(), myvector.end());
	std::cout << "final sorted range :";
	for (unsigned i = 0; i < myvector.size(); i++)
		std::cout << ' ' << myvector[i];

	//Find the min element
	std::cout << "\nMin Element before = "
			<< *min_element(myvector.begin(), myvector.end());

	// Find the min element
	std::cout << "\nMax Element = "
			<< *max_element(myvector.begin(), myvector.end()) << '\n';

	return 0;
}
