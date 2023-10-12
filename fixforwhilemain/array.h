#pragma once
#include  <cmath>
#include <iostream>
#include <algorithm>
template<typename T>
double sum_of_numbers(T arr,int size) {//1
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *(arr + i);
	}
	return sum;
}
template<typename T>
double the_product_of_numbers(T arr,int size) {//2
	double result = 1;
	for (int i = 0; i < size; i++)
	{
		result *= *(arr + i);
	}
	return result;
}
template<typename T>
double arithmetic_mean_of_number(T arr, int size) {//3
	double result = 0;
	for (int i = 0; i < size; i++)
	{
		result += (*(arr + i));
	}
	return result / size;
}
template<typename T>
void product_and_sum_of_the_set(T arr, int size) {//4
	int sum = 0;
	int product = 1;
	for (int i = 0; i < size; i++)
	{
		sum += *(arr + i);
		product *= *(arr + i);
	}
	std::cout << sum << std::endl << product << std::endl;
}
template<typename T>
double sum_of_integer_parts_of_numbers(T arr, int size) {//5
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		double fraction = *(arr + i) - floor(*(arr + i));
		*(arr + i) = *(arr + i) - fraction;
		std::cout << *(arr + i) << " ";
		sum += *(arr + i);
	}
	return sum;
}
template<typename T>
double product_of_fractional_parts(T arr, int size) {//6
	double product = 1;
	for (int i = 0; i < size; i++)
	{
		double fraction = *(arr + i) - floor(*(arr + i));
		std::cout << fraction << std::endl;
		product *= fraction;
	}
	return product;
}
template<typename T>
int sum_of_rounded_values(T arr, int size) {//7
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		int roundnum = round(*(arr + i));
		std::cout << roundnum << std::endl;
		sum += roundnum;
	}
	return sum;
}
template<typename T>
double output_of_even_numbers(T arr, int size) {//8
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (static_cast<int>(*(arr + i)) % 2 == 0)
		{
			std::cout << *(arr + i) << std::endl;
			count++;
		}
	}
	return count;
}
template<typename T>
double output_of_odd_numbers(T arr, int size) {//9
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (static_cast<int>(*(arr + i)) % 2 != 0)
		{
			std::cout << *(arr + i) << std::endl;
			count++;
		}
	}
	return count;
}
template<typename T>
void determining_the_sign_of_a_number(T arr, int size) {//10
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > 0)
		{
			std::cout << true << std::endl;
		}
		if (*(arr + i) < 0)
		{
			std::cout << false << std::endl;
		}
	}
}
template<typename T>
void comparing_numbers_with_a_constant( T arr, int size,int value) {//11
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > value)
		{
			std::cout << true << std::endl;
		}
		if (*(arr + i) < value)
		{
			std::cout << false << std::endl;
		}
	}
}
template<typename T>
double counting_numbers_to_zero(T arr, int size) {//12
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) == 0)
		{
			break;
		}
		count++;
	}
	return count;
}
template<typename T>
double sum_of_even_numbers_up_to_zero(T arr, int size) {//13
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (static_cast<int>(*(arr + i)) % 2 == 0)
		{
			sum += *(arr + i);
		}
		if (*(arr + i) == 0)
		{
			break;
		}
	}
	return sum;
}
template<typename T>
int output_the_number_of_numbers_to_zero_less_value(T arr, int size,int value) {//14
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < value)
		{
			std::cout << *(arr + i) << std::endl;
			count++;
		}
		if (*(arr + i) == 0)
		{
			break;
		}
	}
	return count;
}
template<typename T>
int output_of_the_first_number_of_a_larger_value(T arr,int size,int value) {//15
	int count = 1;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > value)
		{
			std::cout << *(arr + i) << std::endl;
			break;
		}
		if (*(arr + i) == 0)
		{
			break;
		}
		count++;
	}
	return count;
}
template<typename T>
bool isIncreasingSequence(T arr, int size) {//16
	for (int i = 0; i < size; i++) {
		if (*(arr + i) >= *(arr + i + 1)) {
			return false;
		}
	}
	return true;
}
template <class T>
T bubbleSort(T arrForSort, int size) {
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arrForSort[j] < arrForSort[j - 1])
			{
				double buff = arrForSort[j - 1];
				arrForSort[j - 1] = arrForSort[j];
				arrForSort[j] = buff;
			}
		}
	}
	return 0;
}
template <class T>
void sort_ascending(T arr, int size,int value) {//17
	bubbleSort(arr, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << value << " ";
		std::cout << *(arr + i) << std::endl;
	}
}
template <class T>
void output_of_various_elements(T arr,int size) {//18
	bubbleSort(arr, size);
	int j = 0;
	for (int i = 0; i < size; ++i) {
		if (*(arr + i) != *(arr + i - 1)) {
			*(arr + j++) = *(arr + i);
		}
	}
	size = j;
	for (int i = 0; i < size; ++i) {
		std::cout << *(arr + i) << std::endl << " ";
	}
}
template <class T>
int displaying_elements_smaller_than_the_previous_one(T arr, int size) {//19
	int count = 0;
	for (int i = 1; i < size; i += 2)
	{
		if (*(arr + i) < *(arr + i - 1))
		{
			std::cout << *(arr + i) << std::endl;
			count++;
		}
	}
	return count;
}
template <class T>
int output_of_elements_larger_than_the_following(T arr, int size) {//20
	int count = 0;
	for (int i = 0; i < size; i += 2)
	{
		if (*(arr + i) > *(arr + i + 1))
		{
			std::cout << *(arr + i) << std::endl;
			count++;
		}
	}
	return count;
}
template <class T>
int checking_and_violating_descending_sequence(T arr, int size) {//21
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) < *(arr + i + 1))
		{
			count++;
			std::cout << count << std::endl;
			return 0;
		}
	}
	return count;
}
template <class T>
void task_number_22(T arr, int size) ///22
{
	for (int i = 0; i < size - 1; i++) {
		if ((*(arr + i) > *(arr + i + 1))) {
			std::cout << "0";
			break;
		}
		std::cout << *(arr + i);
		break;
	}
}
template <class T>
int sawtooth_check(T arr, int size) {//23
	int count = 0;
	for (int i = 1; i < size; i++)
	{
		if (*(arr + 1) < *(arr + i) && *(arr + i) > *(arr + i - 1) || *(arr + i) < *(arr + i + 1) && *(arr + i) < *(arr + i - 1))
		{
			count++;
			std::cout << count << std::endl;
		}
	}
	return 0;
}
//int sum_between_two_last_zeros() {
//	//?
//}
template <class T>
double sum_between_zeros_first_and_last_zeros(T arr, int size) {//25
	double sum = 0;
	int f_zero = 0;
	int s_zero = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) == 0)
		{
			f_zero = i;
			break;
		}
	}
	for (int i = f_zero + 1; i < size; i++)
	{
		if (*(arr + i) == 0)
		{
			s_zero = i;
		}
	}
	if (f_zero + 1 == s_zero)
	{
		return 0;
	}
	for (int i = f_zero + 1; i < s_zero; i++)
	{
		sum += *(arr + i);
	}
	return sum;
}
template <class T>
void raising_elements_to_powers(T arr, int size,int value) {//26
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = pow(*(arr + i), value);
		std::cout << *(arr + i) << std::endl;
	}
}
template <class T>
void raising_elements_to_the_power_of_element_number(T arr, int size) {//27
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = pow(*(arr + i), i);
		std::cout << *(arr + i) << std::endl;
	}
}
template <class T>
void exponentiation_of_size_in_reverse(T arr, int size) {//28
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = pow(*(arr + i), size - i);
		std::cout << *(arr + i) << std::endl;
	}
}