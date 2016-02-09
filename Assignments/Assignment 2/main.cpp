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

	auto lowerBound = std::find(numberSet.begin(), numberSet.end(), -5);
	auto upperBound = std::find(lowerBound, numberSet.end(), 5);
	std::cout << "The values between -5 and 5 inclusively are:" << std::endl;
	for (auto it = lowerBound; it != upperBound; ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	lowerBound = std::lower_bound(numberSet.begin(), numberSet.end(), -5);
	upperBound = std::upper_bound(lowerBound, numberSet.end(), 5);
	std::cout << "The values between -5 and 5 inclusively are:" << std::endl;
	for (auto it = lowerBound; it != upperBound; ++it) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	return (0);
}