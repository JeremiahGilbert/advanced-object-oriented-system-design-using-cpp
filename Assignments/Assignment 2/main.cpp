#include <algorithm>
#include <iostream>
#include <list>
#include <set>

int main() {
	int temp;
	std::list<int> inputList;
	while (std::cin >> temp) {
		inputList.push_back(temp);
	}
	std::multiset<int> numberSet{inputList.begin(), inputList.end()};

	auto lowerBound = numberSet.find(-5);
	auto upperBound = numberSet.find(5);
	std::cout << "The values between -5 and 5 inclusively are:" << std::endl;
	for (auto it = lowerBound; it != upperBound && it != numberSet.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	lowerBound = numberSet.lower_bound(-5);
	upperBound = numberSet.upper_bound(5);
	std::cout << "The values between -5 and 5 inclusively are:" << std::endl;
	for (auto it = lowerBound; it != upperBound && it != numberSet.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	return (0);
}