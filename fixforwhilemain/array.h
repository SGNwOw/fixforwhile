#pragma once
#include  <cmath>
#include <iostream>
#include <algorithm>
#include <vector>
namespace mylib {
	template<class Iterator, class T>
	T sum_of_numbers(Iterator first, Iterator last, T result) {//1
		for (; first != last; ++first)
		{
			result += *first;
		}
		return result;
	}
	template<class Iterator, class T>
	T the_product_of_numbers(Iterator first, Iterator last, T result) {//2
		for (; first != last; ++first)
		{
			result *= *first;
		}
		return result;
	}
	template<class Iterator, class T>
	T arithmetic_mean_of_number(Iterator first, Iterator last, T result) {//3
		int size = last - first;
		for (; first != last; ++first)
		{
			result += *first;
		}
		return result/size;
	}
	template<class Iterator,class T>
	void product_and_sum_of_the_set(Iterator first,Iterator last, T sum,T product) {//4
		for (; first !=last; ++first)
		{
			sum += *first;
			product *= *first;
		}
		std::cout << sum << std::endl << product << std::endl;
	}
	template<class Iterator,class T>
	T sum_of_integer_parts_of_numbers(Iterator first,Iterator last, T result) {//5
		for (; first != last; ++first)
		{
			double fraction = *first - floor(*first);
			*first = *first - fraction;
			std::cout << *first << " ";
			result += *first;
		}
		return result;
	}
	template<class Iterator,class T>
	T product_of_fractional_parts(Iterator first,Iterator last,T result) {//6
		for (; first != last; ++first)
		{
			double fraction = *first - floor(*first);
			std::cout << fraction << std::endl;
			result *= fraction;
		}
		return result;
	}
	template<class Iterator>
	int sum_of_rounded_values(Iterator first,Iterator last,int  result) {//7
		for (; first != last; ++first)
		{
			int roundnum = round(*first);
			std::cout << roundnum << std::endl;
			result += roundnum;
		}
		return result;
	}
	template<class Iterator>
	int output_of_even_numbers(Iterator first,Iterator last, int count) {//8
		for (; first !=last; ++first)
		{
			if (static_cast<int>(*first) % 2 == 0)
			{
				std::cout << *first << std::endl;
				count++;
			}
		}
		return count;
	}
	template<class Iterator>
	int output_of_odd_numbers(Iterator first,Iterator last, int count) {//9
		for (; first != last; ++first)
		{
			if (static_cast<int>(*first) % 2 != 0)
			{
				std::cout << *first << std::endl;
				count++;
			}
		}
		return count;
	}
	template<class Iterator>
	bool determining_the_sign_of_a_number(Iterator first,Iterator last) {//10
		for (; first != last; ++first)
		{
			if (*first>0)
			{
				return true;
				break;
			}
		}
		return false;
	}
	template<class Iterator,class T>
	T comparing_numbers_with_a_constant(Iterator first , Iterator last, T value) {//11
		for (; first != last ; ++first)
		{
			if (*first < value)
			{
				return true;
				break;
			}
		}
		return false;
	}
	template<class Iterator>
	int counting_numbers_to_zero(Iterator first,Iterator last,int count) {//12
		for (;first != last; ++first)
		{
			if (*first == 0)
			{
				break;
			}
			count++;
		}
		return count;
	}
	template<class Iterator,class T>
	T sum_of_even_numbers_up_to_zero(Iterator first,Iterator last,T sum) {//13
		for (; first != last; ++first)
		{
			if (static_cast<int>(*first) % 2 == 0)
			{
				sum += *first;
			}
			if (*first == 0)
			{
				break;
			}
		}
		if (!sum)
		{
			return 0;
		}
		return sum;
	}
	template<class Iterator,class T>
	T output_the_number_of_numbers_to_zero_less_value(Iterator first,Iterator last, T value,int count) {//14
		for (; first != last; ++first)
		{
			if (*first < value)
			{
				count++;
			}
			if (*first == 0)
			{
				break;
			}
		}
		return count;
	}
	template<class Iterator,class T>
	T output_of_the_first_number_of_a_larger_value(Iterator first,Iterator last, T value,int count) {//15
		for (; first !=  last; ++first)
		{
			if (*first > value)
			{
				break;
			}
			if (*first == 0)
			{
				break;
			}
			count++;
		}
		if (!(*first > value))
		{
			return 0;
		}
		return count;
	}
	template<class Iterator,class T>
	T outputting_last_element_before_value(Iterator first, Iterator last,T value, int count) {
		int size = last - first;
		for (; last!=first;--last)
		{
			if (*last > value)
			{
				break;
			}
			if (*last == 0)
			{
				break;
			}
			count++;
		}
		if (!(*last > value))
		{
			return 0;
		}
		return size - count;
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
	template <class Iterator,class T>
	void sort_ascending(Iterator first, Iterator last, T value) {//17
		int size = last - first;
		bubbleSort(first, size);
		for (; first != last; ++first)
		{
			std::cout << *first << " " << value << std::endl;
		}
	}
	template <class T>
	void output_of_various_elements(T arr, int size) {//18
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
	template <class Iterator>
	int displaying_elements_smaller_than_the_previous_one(Iterator first, Iterator last,int count) {//19
		for (; first != last; ++first)
		{
			if (*first < *(first-1))
			{
				std::cout << *first << std::endl;
				count++;
			}
		}
		return count;
	}
	template <class Iterator>
	int output_of_elements_larger_than_the_following(Iterator first, Iterator last,int count) {//20
		for (; first != last ; ++first)
		{
			if (*first < *(first + 1))
			{
				std::cout << *first << std::endl;
				count++;
			}
		}
		return count;
	}
	template <class Iterator>
	bool checking_and_violating_descending_sequence(Iterator first, Iterator last,int count) {//21
		int size = last - first;
		for (;first != last; ++first)
		{
			if (*first < *(first+1))
			{
				count++;
			}
		}
		if (size == count)
		{
			return true;
		}
		return false;
	}
	template <class Iterator>
	int checking_for_decrease_and_finding_breakdowns(Iterator first, Iterator last, int count) {
		int size = last - first;
		for (; first != last; ++first)
		{
			if (*first>*(first+1))
			{
				count++;
			}
			if (!(*first > *(first+1)))
			{
				break;
			}
		}
		if (size == count)
		{
			return 0;
		}
		return count + 1;
	}	
	template <class Iterator>
	int sawtooth_check(Iterator first,Iterator last,int count) {//23
		int size = last - first;
		for (; first != last; ++first)
		{
			if (*(first + 1) < *first && *first > *(first - 1) || *first < *(first + 1) && *first < *(first - 1))
			{
				count++;
			}
			if (!(*(first + 1) < *first && *first > *(first - 1) || *first < *(first + 1) && *first < *(first - 1)))
			{
				break;
			}
		}
		if (size == count + 1)
		{
			return 0;
		}
		return count + 1;
	}
	template <class Iterator, class T>
	int sum_between_first_and_last_zeros(Iterator first, Iterator last, int count1, int count2, T sum) {//24
		int size = last - first;
		for (; last != first; --last)
		{
			count1++;
			if (*last == 0)
			{
				break;
			}
		}
		for (;last-count1 != first; ++count1)
		{
			if (last - count1 == 0)
			{
				break;
			}
			count2++;
		}
		//count2 = count2 + count1;
		for (; size - count2 != size - count1; --count2)
		{
			sum += *(first + count2 );
		}
		return sum;
	}
	template<class Iterator,class T>//25
	T sum_between_last_zeros(Iterator first, Iterator last, int count1, int count2,T sum) {
		int size = last - first;
		for (;first!=last; ++first)
		{
			if (*first == 0)
			{
				break;
			}
			count1++;
		}
		for (; last!=first; --last)
		{
			if (*last == 0)
			{
				break;
			}
			count2++;
		}
		for (; count1 != size-count2; ++count1)
		{
			sum += *(first+count1 - 1);
		}
		return sum;
	}
	template <class T>
	void raising_elements_to_powers(T arr, int size, int value) {//26
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
}