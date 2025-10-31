
#include "iter.hpp"

int main(void) {
	int arr1[] = {1,2,3,4};
	const int arr2[] = {5,6,7,8};
	std::string arr3[] = {"ab", "cd", "ef", "gh", "ij"};
	const std::string arr4[] = {"ab", "cd", "ef", "gh", "ij"};

	//Print arr1
	iter(arr1, 4, print<int>);
	std::cout << std::endl;

	//Increment then print arr1
	iter(arr1, 4, increment<int>);
	iter(arr1, 4, print<int>);
	std::cout << std::endl;

	//Print arr2
	iter(arr2, 4, print<int>);
	std::cout << std::endl;

	//Print elements of arr3
	iter(arr3, 5, print<std::string>);
	std::cout << std::endl;

	//Append 3 elements then print arr3
	iter(arr3, 3, appendX<std::string>);
	iter(arr3, 5, print<std::string>);
	std::cout << std::endl;

	//Print arr4
	iter(arr4, 5, print<std::string>);

	return 0;
}