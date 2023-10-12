#pragma once
#include  <cmath>
#include <iostream>
#include <algorithm>
const int rows = 2;
const int cols = 5;
double arr[rows][cols]{ {1,2,1,2,1},{10,9,8,7,6} };
int sum_of_two_dimensional_array() {//29
	int sum = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j <  cols; j++)
		{
			sum += *(*(arr+i)+j);
		}
	}
	return sum;
}
int find_the_sum_of_the_rows() {//30M+-
	int sum_for_row1 = 0;
	int sum_for_row2 = 0;
	for (int j = 0; j < cols; j++)
	{
		if (*(*(arr)+j) > 0)
			sum_for_row1 += *(*(arr)+j);
	}
	for (int j = 0; j < cols; j++)
	{
		if ((*(*arr+1)+j)> 0)
			sum_for_row2 += *(*(arr+1)+j);
	}
	std::cout << sum_for_row2 << std::endl;
	return sum_for_row1;
}
int checking_the_line_row_presence_2() {//31
	int count = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (*(*(arr+i) + j) == 2)
			{
				count++;
				return count;
			}
		}
	}
	return 0;
}
int number_of_the_first_element_equal_to_2() {//32
	int count = -1;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			count++;
			if (*(*(arr+i)+j)==2)
			{
				return count;
				break;
			}
		}
	}
	return 0;
}
int number_of_the_last_element_equal_to_2() {//33?
	for (int i = 0; i < rows; i++)
	{
		int pos = 0;
		for (int j = 0; j < cols; j++)
		{
			if (*(*(arr + i) + j) == 2 && pos == 0)
			{
				pos = j + 1;
			}
		}
		std::cout << pos << std::endl;
	}
	return 0;
}
int the_sum_of_the_row_if_there_is_2() {//34M+-
	int sum_for_row1 = 0;
	int sum_for_row2 = 0;
	for (int j = 0; j < cols; j++)
	{
		if (*(*(arr)+j) == 2)
		{
		}
		sum_for_row1 += *(*(arr)+j);
	}
	std::cout << sum_for_row1 << std::endl;
	for (int j = 0; j < cols; j++)
	{
		if ((*(*arr + 1) + j) == 2)
			sum_for_row2 += *(*(arr + 1) + j);
	}
	std::cout << sum_for_row2 << std::endl;
	return 0;
}
int finding_the_total_number_of_elements() {//35M+-
	int count1 = 0;
	int count2 = 0;
	int overall_count = 0;
	for (int j = 0; j < rows; j++)
	{
		for (int j = 0; j < cols; j++)
		{
			count1++;
			if (*(*(arr)+j) == 0)
			{
				break;
			}
		}
		for (int j = 0; j < cols; j++)
		{
			count2++;
			if (*(*(arr + 1) + j) == 0)
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
int checking_twodimensional_for_increasing() {//36
	int count = 0;
		for (int j = 0; j < cols; j++)
		{
			if (*(*(arr)+j) < (*(*arr)+j + 1))
			{
				if (*(*(arr)+j) == 0)
				{
					break;
				}
				count += 1;
			}
			if (*(*(arr + 1) + j) < (*(*arr + 1) + j + 1))
			{
				if (*(*(arr + 1) + j) == 0)
				{
					break;
				}
				count += 1;
			}
			return count;
		}
		return 0;
	}
int checking_for_ascending_and_descending() {//37
	int count = 0;
	for (int j = 0; j < cols; j++)
	{
		if (*(*(arr)+j) < (*(*arr) + j + 1) || *(*(arr)+j) > (*(*arr) + j + 1))
		{
			if (*(*(arr)+j) == 0)
			{
				break;
			}
			count += 1;
		}
		if (*(*(arr + 1) + j) < (*(*arr + 1) + j + 1) || *(*(arr + 1) + j) > (*(*arr + 1) + j + 1))
		{
			if (*(*(arr + 1) + j) == 0)
			{
				break;
			}
			count += 1;
		}
		return count;
	}
	return 0;
}
int checking_for_ascending_and_descending_1() {//38
	for (int j = 0; j < cols; j++)
	{
		if (*(*(arr)+j) > (*(*arr) + j + 1))
		{
			if (*(*(arr)+j) == 0)
			{
				break;
			}
			std::cout << "-1" << std::endl;
		}
		if (*(*(arr)+j) < (*(*arr) + j + 1))
		{
			if (*(*(arr)+j) == 0)
			{
				break;
			}
			std::cout << "1" << std::endl;
		}
		if (*(*(arr + 1) + j) > (*(*arr + 1) + j + 1))
		{
			if (*(*(arr + 1) + j) == 0)
			{
				break;
			}
			std::cout << "-1" << std::endl;
		}
		if (*(*(arr + 1) + j) < (*(*arr + 1) + j + 1))
		{
			if (*(*(arr + 1) + j) == 0)
			{
				break;
			}
			std::cout << "1" << std::endl;
		}
		return 0;
	}
}
int checking_for_sawtooth_in_two_dimensions() {//39
	int count = 0;
	for (int j = 0; j < cols; j++)
	{
		if (*(*(arr) + j) < *(*(arr) + j + 1) && *(*(arr) + j) < *(*(arr) + j - 1) || *(*(arr) + j) > *(*(arr) + j + 1) && *(*(arr) + j) > *(*(arr) + j - 1))
		{
			if (*(*(arr)+j) == 0)
			{
				break;
			}
			count += 1;
		}
		if (*(*(arr+1) + j) < *(*(arr+1) + j + 1) && *(*(arr+1) + j) < *(*(arr+1) + j - 1) || *(*(arr+1) + j) > *(*(arr+1) + j + 1) && *(*(arr+1) + j) > *(*(arr+1) + j - 1))
		{
			if (*(*(arr+1)+j) == 0)
			{
				break;
			}
			count += 1;
		}
		return count;
	}
	return 0;
}
int checking_for_sawtooth_in_two_dimensions_1() {
	int count = 0;
	for (int j = 0; j < cols; j++)
	{
		count++;
		if (*(*(arr)+j) < *(*(arr)+j + 1) && *(*(arr)+j) < *(*(arr)+j - 1) || *(*(arr)+j) > *(*(arr)+j + 1) && *(*(arr)+j) > *(*(arr)+j - 1))
		{
			if (*(*(arr)+j) == 0)
			{
				break;
			}
		}
		if (*(*(arr + 1) + j) < *(*(arr + 1) + j + 1) && *(*(arr + 1) + j) < *(*(arr + 1) + j - 1) || *(*(arr + 1) + j) > *(*(arr + 1) + j + 1) && *(*(arr + 1) + j) > *(*(arr + 1) + j - 1))
		{
			if (*(*(arr + 1) + j) == 0)
			{
				break;
			}
		}
	}
	return count;
}

