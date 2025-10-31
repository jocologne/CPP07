
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F>
void iter(T* array, const int len, F func) {
	if (array == NULL || len <= 0)
		return;
	std::cout << "Not const" << std::endl;
	for (int i = 0; i < len; i++) {
		func(array[i]);
	}
}

template <typename T, typename F>
void iter(const T* array, const int len, F func) {
	if (array == NULL || len <= 0)
		return;
	std::cout << "Const" << std::endl;
	for (int i = 0; i < len; i++) {
		func(array[i]);
	}
}

//TESTS
template <typename T>
void print(const T& item) {
	std::cout << item << std::endl;
}

template <typename T>
void increment(T& item) {
	item++;
}

template <typename T>
void appendX(T& item) {
	item += "_X";
}

#endif