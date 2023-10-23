#pragma once
#include  <cmath>
#include <iostream>
#include <algorithm>
template<typename T>
int sum_of_two_dimensional_array(T arr1,int rows,int cols) {//29
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j <  cols; j++)
		{
			sum += *(*(arr1+i)+j);
		}
	}
	return sum;
}
template<typename T>
int find_the_sum_of_the_rows( T arr1, int rows, int cols) {//30
	int sum_for_row1 = 0;
	int sum_for_row2 = 0;
	for (int j = 0; j < cols; j++)
	{
		if (*(*(arr1)+j) > 0)
			sum_for_row1 += *(*(arr1)+j);
	}
	for (int j = 0; j < cols; j++)
	{
		if ((*(*arr1+1)+j)> 0)
			sum_for_row2 += *(*(arr1+1)+j);
	}
	std::cout << sum_for_row2 << std::endl;
	return sum_for_row1;
}

template<typename T>
int checking_the_line_row_presence_2(T arr1, int rows, int cols) {//31
	int count = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (*(*(arr1+i) + j) == 2)
			{
				count++;
				return count;
			}
		}
	}
	return 0;
}

template<typename T>
int number_of_the_first_element_equal_to_2(T arr1, int rows, int cols) {//32
	int count = -1;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			count++;
			if (*(*(arr1+i)+j)==2)
			{
				return count;
				break;
			}
		}
	}
	return 0;
}

template<typename T>
int number_of_the_last_element_equal_to_2( T arr1, int rows, int cols) {//33
	for (int i = 0; i < rows; i++)
	{
		int pos = 0;
		for (int j = 0; j < cols; j++)
		{
			if (*(*(arr1 + i) + j) == 2 && pos == 0)
			{
				pos = j + 1;
			}
		}
		std::cout << pos << std::endl;
	}
	return 0;
}

template<typename T>
int the_sum_of_the_row_if_there_is_2( T arr1, int rows, int cols) {//34
	int sum_for_row1 = 0;
	int sum_for_row2 = 0;
	for (int j = 0; j < cols; j++)
	{
		if (*(*(arr1)+j) == 2)
		{
		}
		sum_for_row1 += *(*(arr1)+j);
	}
	std::cout << sum_for_row1 << std::endl;
	for (int j = 0; j < cols; j++)
	{
		if ((*(*arr1 + 1) + j) == 2)
			sum_for_row2 += *(*(arr1 + 1) + j);
	}
	std::cout << sum_for_row2 << std::endl;
	return 0;
}
template<typename T>
int finding_the_total_number_of_elements(T arr1, int rows, int cols) {//35
	int count1 = 0;
	int count2 = 0;
	int overall_count = 0;
	for (int j = 0; j < rows; j++)
	{
		for (int j = 0; j < cols; j++)
		{
			count1++;
			if (*(*(arr1)+j) == 0)
			{
				break;
			}
		}
		for (int j = 0; j < cols; j++)
		{
			count2++;
			if (*(*(arr1 + 1) + j) == 0)
			{
				break;
			}
		}
		break;
	}
	std::cout << count2 << std::endl;
	std::cout << count1 << std::endl;
	return count1+count2;
}
template<typename T>
int checking_for_ascending_and_descending(T arr1, int rows, int cols) {//37
	int count = 0;
	for (int j = 0; j < cols; j++)
	{
		if (*(*(arr1)+j) < (*(*arr1) + j + 1) || *(*(arr1)+j) > (*(*arr1) + j + 1))
		{
			if (*(*(arr1)+j) == 0)
			{
				break;
			}
			count += 1;
		}
		if (*(*(arr1 + 1) + j) < (*(*arr1 + 1) + j + 1) || *(*(arr1 + 1) + j) > (*(*arr1 + 1) + j + 1))
		{
			if (*(*(arr1 + 1) + j) == 0)
			{
				break;
			}
			count += 1;
		}
		return count;
	}
	return 0;
}

template<typename T>
int checking_for_ascending_and_descending_1(T arr1, int rows, int cols) {//38
	for (int j = 0; j < cols; j++)
	{
		if (*(*(arr1)+j) > (*(*arr1) + j + 1))
		{
			if (*(*(arr1)+j) == 0)
			{
				break;
			}
			std::cout << "-1" << std::endl;
		}
		if (*(*(arr1)+j) < (*(*arr1) + j + 1))
		{
			if (*(*(arr1)+j) == 0)
			{
				break;
			}
			std::cout << "1" << std::endl;
		}
		if (*(*(arr1 + 1) + j) > (*(*arr1 + 1) + j + 1))
		{
			if (*(*(arr1 + 1) + j) == 0)
			{
				break;
			}
			std::cout << "-1" << std::endl;
		}
		if (*(*(arr1 + 1) + j) < (*(*(arr1 + 1) + j + 1)))
		{
			if (*(*(arr1 + 1) + j) == 0)
			{
				break;
			}
			std::cout << "1" << std::endl;
		}
		return 0;
	}
}

template<typename T>
int checking_for_sawtooth_in_two_dimensions(T arr1, int rows, int cols) {//39
	int count = 0;
	for (int j = 0; j < cols; j++)
	{
		if (*(*(arr1) + j) < *(*(arr1) + j + 1) && *(*(arr1) + j) < *(*(arr1) + j - 1) || *(*(arr1) + j) > *(*(arr1) + j + 1) && *(*(arr1) + j) > *(*(arr1) + j - 1))
		{
			if (*(*(arr1)+j) == 0)
			{
				break;
			}
			count += 1;
		}
		if (*(*(arr1+1) + j) < *(*(arr1+1) + j + 1) && *(*(arr1+1) + j) < *(*(arr1+1) + j - 1) || *(*(arr1+1) + j) > *(*(arr1+1) + j + 1) && *(*(arr1+1) + j) > *(*(arr1+1) + j - 1))
		{
			if (*(*(arr1+1)+j) == 0)
			{
				break;
			}
			count += 1;
		}
		return count;
	}
	return 0;
}

template<typename T>
	int checking_for_sawtooth_in_two_dimensions_1(T arr1, int rows, int cols) {//40
		int count = 0;
		for (int j = 0; j < cols; j++)
		{
			count++;
			if (*(*(arr1)+j) < *(*(arr1)+j + 1) && *(*(arr1)+j) < *(*(arr1)+j - 1) || *(*(arr1)+j) > *(*(arr1)+j + 1) && *(*(arr1)+j) > *(*(arr1)+j - 1))
			{
				if (*(*(arr1)+j) == 0)
				{
					break;
				}
			}
			if (*(*(arr1 + 1) + j) < *(*(arr1 + 1) + j + 1) && *(*(arr1 + 1) + j) < *(*(arr1 + 1) + j - 1) || *(*(arr1 + 1) + j) > *(*(arr1 + 1) + j + 1) && *(*(arr1 + 1) + j) > *(*(arr1 + 1) + j - 1))
			{
				if (*(*(arr1 + 1) + j) == 0)
				{
					break;
				}
			}
		}
		return count;
	}

