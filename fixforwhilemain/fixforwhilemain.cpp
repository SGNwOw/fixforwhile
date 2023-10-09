#include  <cmath>
#include <iostream>
#include <algorithm>
const int size = 10;
double arr[size]{ 1.1,0,1.1,1.1,5.1,0,7.1,-8.1,0,-10.2 };
template <class T, class Function>
T f_9_8_7(T start, T end, T init, Function function) {

	for (; start <= end; start++)
	{
		init += function(init, start);
	}
	return init;
}
template <class BinaryOparation>
int  f2_12_11(int start, int end, int result, BinaryOparation func) {
	for (; start < end; start++)
	{
		result = func(result, start);
	}
	return result;
}
////template <class UnaryOperation>
////void f1_2_3(int start, int end, UnaryOperation func) {
////	for (; start < end; start++)
////	{
////		func(start);
////	}
//}

template <class T, class BinaryOperation>
double f10_12_13(T start, T end, double result, BinaryOperation func) {
	for (; start < end; start++)
	{
		result = func(result, start);
	}
	return result;
}
int f15(int value, int times) {
	int result = 1;
	while (times--)
	{
		result *= value;
	}
	return result;
}
template < class T, class BinaryOperation>
T f3(T start, T end, int result, BinaryOperation func) {
	for (; start < end; end--)
	{
		result = func(result, end);
	}
	return result;
}
void f1(int n, int k) {
	for (int i = 0; i < n; i++)
	{
		std::cout << k << std::endl;
	}
}
template <class T, class BinaryOpearation>
T f4_5_6(T start, T end,T result, T price, BinaryOpearation func) {
	for (; start < end; start++)
	{
		result = func(result, start, price);
	}
	return result;
}
int  f16(double a, int n) {
	int res = 0;
	for (int i = 0; i <= n; ++i)
	{
		res = pow(a, i);
	}
	return res;
}
double Fact(int value) {
	if (value == 0 || value == 1) {
		return 1;
	}
	return value * Fact(value - 1);
}
template <class T, class BinaryOpearation>
T f22_(T start, T end, T result, T variable, BinaryOpearation func) {
	for (; start < end; start++)
	{
		result = func(result, start, variable);
	}
	return result;
}
template < class Operation>
int find_using_iterating(int start, int end, Operation predecate, int step = 1) {
	for (; start != end; start += step)
	{
		if (predecate(start))
		{
			return start;
		}
	}
	return -1;
}
int while13(int start, int end, int a) {
	double k = 1;
	return find_using_iterating(start, end, [&k, a](int value) {
		int bimbimbambam = 1 / k;
		bimbimbambam += value;
		return k > a;
		});

}
template <class T, class BinaryOperation >
T while2(T start, T end, T result, BinaryOperation func) {
	int count = 0;
	while (start > end)
	{
		result = func(start, end);
		start -= end;
		count++;
	}
	std::cout << count << std::endl;;
	return result;
}
void w1(int start, int end)///1
{
	std::cout << while2(start, end, 0, [](int start, int end) {return start - end; });///1
}
void w2(int start, int end)///2
{
	std::cout << while2(start, end, 0, [](int start, int end) {return 0; });///2
}
void w3(int start, int end) {
	std::cout << while2(start, end, 0, [](int start, int end) {return start - end; });//3
}
template < class Operation, class Step>
int find_using_iterating_with_step(int start, int end, Operation predecate, Step step) {
	for (; start < end; start = step(start))
	{
		if (predecate(start))
		{
			return start;
		}
	}
	return -1;
}
template<class Operation>
void  for_each(int start, int end, Operation operation) {
	for (; start < end; ++start)
	{
		operation(start);
	}
}
int while6(int start, int end, int n) {
	return find_using_iterating(start, end, [n](int value) { return  n * (n - 2 * value); });
}
int while7(int start, int end, int n) {
	return find_using_iterating(start, end, [n](int value) { return  value * value > n; });
}
int while8(int start, int end, int n) {
	return find_using_iterating(start, end, [n](int value) {return value * value < n; }, -1);
}
int while9(int start, int end, int n) {
	return find_using_iterating(start, end, [n](int value) { return std::pow(3, value) > n; });
}
//int while10(int start,int end,int n)
bool while4(int value, int power) {
	while (value > 0)
	{
		if (value % power != 0)
			return false;
		value /= power;
		if (value == 1)
		{
			return true;
		}
	}
	return false;
}
int while11(int start, int end, int n) {
	int k = 0;
	return find_using_iterating(start, end, [&k, n](int value) {
		k += value;
		return k >= n;
		});
}
int sum(int start, int end, int result = 0) {
	for_each(start, end, [&result](int i) { return result += i; });
	return result;
}
int Sn(int a1, int an) {
	return  (a1 + an) * an / 2;
}
int while12(int start, int end, int n) {
	return find_using_iterating(start, end, [n](int value) {

		return Sn(1, value) <= n;
		}, -1);
}

/*int while14(int start, int end, int a) {
	int k = 0;
	return find_using_iterating(start, end, [&k, a](int value) {
		//1 / k += value;
		return k <= a;
		});
}*/
template <class Operation>
int compound_interest_hard_percent(int start, int end, int percent, int result, Operation operation ) {
	
	for ( ; start < end; )
	{
		result = operation(start, end, percent);
	}
	return result;
}
int while15_1(int start, int end, int percent) {
	return compound_interest_hard_percent(start, end, percent,0, [](int value, int percent, int result) {
		result + value + (value * percent/100) ;
		return result;
		});
}
int while15(double percent) {
	int contribution = 1000;
	int month = 0;
	while (contribution<1100)
	{
		month++;
		contribution += contribution * percent/100;

	}
	std::cout << contribution << std::endl;
	return month;
}
int while16(int percent) {
	int start_distance = 10;
	int days = 0;
	while (start_distance<200)
	{
		days++;
		start_distance += start_distance * percent/100;
	}
	std::cout << start_distance << std::endl;
	return days;
}
int output_of_numbers_1(int value) {
	while (value > 0)
	{
		std::cout << value % 10 << " ";
		value /= 10;
	}
	return value;
}
int finding_the_quantity_and_sum_of_digits(int value) {
	int result = 0;
	int number_of_digits = 0;
	while (value > 0)
	{
		number_of_digits++;
		result += value % 10;
		value /= 10;
	}
	std::cout << number_of_digits << std::endl;
	return result;
}
int reading_numbers_from_right_to_left(int value) {
	int temp = 0;
	while (value > 0)
	{
		int digit = value % 10;
		temp = temp * 10 + digit;
		value /= 10;
	}
	return temp;
}

bool check_for_number(int value) {
	while (value > 0)
	{
		value /= 10;
		if ((value > 0) && value % 10 == 2)
		{
			return true;
		}
	}
	return false;
}
bool checking_numbers_for_parity(int value) {
	while (value > 0 && ((value % 10) % 2 == 0))
		value /= 10;
	{
		if ((value % 10) % 2 == 1)
		{
			return true;
		}
	}
	return false;
}
void is_the_number_prime(int value) {
	int temp = 2;
	while ((temp < value - 1) && (value % temp != 0))
	{
		++temp;
	}
	if ((value % temp) != 0)
	{
		std::cout << true << std::endl;
	}
	else {
		std::cout << false << std::endl;
	}
}

int sum_of_numbers() {//1
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *(arr + i);
	}
	return sum;
}

int the_product_of_numbers() {//2
	int result = 1;
	for (int i = 0; i < size; i++)
	{
		result *= *(arr + i);
	}
	return result;
}

double arithmetic_mean_of_number() {//3
	double result = 0;
	for (int i = 0; i < size; i++)
	{
		result += (*(arr + i)) ;
	}
	return result/size;
}

void product_and_sum_of_the_set() {//4
	int sum = 0;
	int product = 1;
	for (int i = 0; i < size; i++)
	{
		sum += *(arr + i);
		product *= *(arr + i);
	}
	std::cout << sum << std::endl << product << std::endl;
}
double sum_of_integer_parts_of_numbers() {//5
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
double product_of_fractional_parts() {//6
	double product = 1;
	for (int i = 0; i < size; i++)
	{
		double fraction = *(arr + i) - floor(*(arr + i));
		std::cout << fraction << std::endl;
		product *= fraction;
	}
	return product;
}
int sum_of_rounded_values() {//7
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		int roundnum = round(*(arr + i));
		std::cout << roundnum << std::endl;
		sum += roundnum;
	}
	return sum;
}
double output_of_even_numbers() {//8
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
double output_of_odd_numbers() {//9
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (static_cast<int>(*(arr+i)) % 2 != 0)
		{
			std::cout << *(arr + i) << std::endl;
			count++;
		}
	}
	return count;
}

void determining_the_sign_of_a_number() {//10
	for (int i = 0; i < size; i++)
	{
		if (*(arr+i)>0)
		{
			std::cout << true << std::endl;
		}
		if (*(arr+i)<0)
		{
			std::cout << false << std::endl;
		}
	}
}
void comparing_numbers_with_a_constant(int value) {//11
	for (int i = 0; i < size; i++)
	{
		if (*(arr+i)>value)
		{
			std::cout << true << std::endl;
		}
		if (*(arr+i)<value)
		{
			std::cout << false << std::endl;
		}
	}
}
double counting_numbers_to_zero() {//12
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
double sum_of_even_numbers_up_to_zero(){//13
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
int output_the_number_of_numbers_to_zero_less_value(int value){//14
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr+i)<value)
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
int output_of_the_first_number_of_a_larger_value(int value) {//15
	int count = 1;
	for (int i = 0; i < size;  i++)
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
bool isIncreasingSequence() {//16
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
		for (int j = size - 1; j >i; j--)
		{
			if (arrForSort[j]<arrForSort[j-1])
			{
				double buff = arrForSort[j - 1];
				arrForSort[j - 1] = arrForSort[j];
				arrForSort[j] = buff;
			}
		}
	}
	return 0;
}
void sort_ascending(int value) {//17
	bubbleSort(arr, size);
	for (int i = 0; i < size; i++)
	{
		std::cout << value << " ";
		std::cout << *(arr + i) << std::endl;
	}
}

void output_of_various_elements(int size) {//18
	bubbleSort(arr, size);
	int j = 0;
	for (int i = 0; i < size; ++i) {
		if (*(arr + i) != *(arr + i - 1)) {
			*(arr + j++) = *(arr + i);
		}
	}
	size = j;
	for (int i = 0; i < size; ++i) {
		std::cout << *(arr + i) << std::endl <<  " ";
	}
}
int displaying_elements_smaller_than_the_previous_one() {//19
	int count = 0;
	for (int i = 1; i < size; i+=2)
	{
		if (*(arr + i) < *(arr + i - 1))
		{
			std::cout << *(arr + i) << std::endl;
			count++;
		}
	}
	return count;
}

int output_of_elements_larger_than_the_following() {//20
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

int checking_and_violating_descending_sequence() {//21
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr+i)<*(arr + i + 1 ))
		{
			count++;
			std::cout << count << std::endl;
			return 0;
		}
	}
	return count;
}
void task_number_22() ///22
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

int sawtooth_check() {//23
	int count = 0;
	for (int i = 1; i < size; i++)
	{
		if (*(arr + 1) < *(arr + i) && *(arr + i) > *(arr + i - 1) || *(arr + i) < *(arr + i + 1) && *(arr + i) < *(arr + i - 1))
		{
			count++;
			std::cout << count  << std::endl;
		}
	}
	return 0;
}
int sum_between_two_last_zeros() {
	//?
}
double sum_between_zeros_first_and_last_zeros() {
	double sum = 0;
	int f_zero = 0;
	int s_zero = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr+i)==0)
		{
			f_zero = i;
			break;
		}
	}
	for (int i = f_zero + 1 ; i < size; i++)
	{
		if (*(arr + i) == 0)
		{
			s_zero = i;
		}
	}
	if (f_zero + 1==s_zero)
	{
		return 0;
	}
	for (int i = f_zero + 1; i < s_zero; i++)
	{
		sum += *(arr + i);
	}
	return sum;
}
int main()
{
	std::cout << sum_between_two_last_zeros();
	//std::cout << sum_between_zeros();
	//std::cout << checking_and_violating_descending_sequence();
	//std::cout << isIncreasingSequence();
	//is_the_number_prime(4);
	//std::cout << sawtooth_check();
	//std::cout << output_of_elements_larger_than_the_following();
	//std::cout << displaying_elements_smaller_than_the_previous_one();
	//output_of_various_elements(10);
	//sort_ascending(5);
	//std::cout << checking_numbers_for_parity(21);
	//std::cout << check_for_number(1334);
	//std::cout << reading_numbers_from_right_to_left(1234);
	//std::cout << finding_the_quantity_and_sum_of_digits(123);
	//std::cout <<output_of_numbers_1(123);
    //output_of_the_last_number_of_a_larger_value(8);
	//std::cout << output_of_the_first_number_of_a_larger_value(5);
	//std::cout << output_the_number_of_numbers_to_zero_less_value(5);
	//std::cout << sum_of_even_numbers_up_to_zero();
	//std::cout << counting_numbers_to_zero();
	//comparing_numbers_with_a_constant(3);
	//determining_the_sign_of_a_number();
	//std::cout << output_of_odd_numbers();
	//std::cout << output_of_even_numbers();
	//std::cout << sum_of_rounded_values();
	//std::cout << product_of_fractional_parts();
	//std::cout << sum_of_integer_parts_of_numbers();
	//product_and_sum_of_the_set();
	//std::cout << arithmetic_mean_of_number();
	//std::cout << the_product_of_numbers();
	//std::cout << sum_of_numbers();
	//std::cout << while6(1, 0, 4);
	//std::cout << while15_1(1000, 1100, 5);
	//std::cout << output_of_numbers(123);
	//std::cout << while16(30);
	//std::cout << while15(5);
	//std::cout << while13(1, 5, 9);
	//w4(6,4);
	//w3(10, 3);
	//w1(14, 3);
	//w2(10,3);
	//std::cout << while1(10, 3);
	//std::cout << f22_(1.0, 5.0, 0.0, 0.5, [](double acamulator, int value, double variable) {return acamulator + pow(-1, value - 1) * (2 * value - 3) * pow(variable, value) / (2 * value); });//f28
	//std::cout << f22_(1.0, 5.0, 0.0, 0.5, [](double acamulator, int value, double variable) {return acamulator + (2 * value - 1) * pow(variable, (2 * value - 1)) / (2 * value) * (2 * value + 1); });//f27
	//std::cout << f22_(1.0, 5.0, 0.0, 0.5, [](double acamulator, int value, double variable) {return acamulator + pow(-1, value) * pow(variable, 2 * value + 1) / (2 * value + 1); });//f26
	//std::cout << f22_(1.0, 5.0, 0.0, 0.5, [](double acamulator, int value, double variable) { return acamulator + pow(-1, value - 1) * pow(variable, value) / value; });//f25
	//std::cout << f22_(1.0, 5.0, 0.0, 2.0, [](double acamulator, int value, int variable) { return acamulator + pow(-1, value) * pow(variable, 2 * value) / Fact(2 * value); });//f24
	//std::cout << f22_(1.0, 5.0, 0.0, 2.0, [](double acamulator, int value, int variable) {return acamulator + pow(-1, value) * pow(variable, 2 * value + 1) / Fact(2 * value + 1); });//f23
	//std::cout << f22_(1.0, 6.0, 0.0, 2.0, [](double acamulator, double value, int variable) { return acamulator + pow(variable, value) / Fact(value); });//f22
	//std::cout << f10_12_13(1, 5, 1, [](double acamulator, double  value) { return acamulator + (1 / Fact(value)); });//f21
	//std::cout << f10_12_13(1, 5, 0, [](int acamulator, int value) { return acamulator + Fact(value); });//f20//
	//std::cout << Fact(5);//f19
	//std::cout << f10_12_13(0, 4, 0, [](int acamulator, int value) { return acamulator + std::pow(value, 2); });//f17
	//std::cout << f16(2, 5);
	//std::cout << f4_5_6(1, 10, 0, 5, [](int acamulator, int value, int price) {return acamulator + (value * price); }) << std::endl;//f4
	//std::cout << f4_5_6(0.1, 1, 0.0, 5.0, [](int acamulator, int value, int price) {return acamulator + (value * price); }) << std::endl;//f5//?
	//std::cout << f4_5_6(1.2, 2.0,0.0,5.0, []( int acamulator,int value, int price) {return acamulator + (value* price); }) << std::endl;//f6
	 //f1(2, 5); 
	/*std::cout << f2_12_11(1, 4, 0, [](int acamulator, int value) {return acamulator + std::pow(value + 1, 2); });//f11
	std::cout << f2_12_11(1, 4, 0, [](int acamulator, int value) {return acamulator * value; });*///f12
	//f2_12_11(1, 10, 0, [](int _acamulator, int value) { std::cout << value; return 0; });//f2
	//f3(0, 9, 0, [](int acamulator, int value) {std::cout << value; return 0; });//f3
	//std::cout << f10_12_13(1, 10, 0, [](int acamulator, int value) {return acamulator + value; });//f10
	//std::cout << f10_12_13(1, 10, 0, [](int acamulator, int value) {return acamulator * value; });//f12
	//std::cout << f10_12_13(1, 4, 0, [](int acamulator, int value) {return value % 2 == 0 ? acamulator - value : acamulator + value; });//f13
	//std::cout << f10_12_13(1, 3, 0, [](int acamulator, int value) {return acamulator + std::pow(value* 2, 2); });//f11
	//std::cout << f10_12_13(1, 4, 0, [](int acamulator, int value) {return acamulator + value *2 -1; });//f14
	//std::cout << f15(3,5) << std::endl;//f15
	//std::cout << f10_12_13(1, 4, 0, [](double acamulator, double value){return acamulator + (pow(value,2) * pow(-1, value +1)); });//f13
	//std::cout << f10_12_13(1, 4, 0, [](double acamulator, double value) {return acamulator + (value * pow(-1, value + 1)); });//f13
	//std::cout << while12(20, 1, 14) << std::endl;
	//std::cout << Sn(1, 5);
	//std::cout << while11(1,5,9);
	//std::cout << sum(0,10);
	//find_using_iterating_with_step(1, 100, [](int value) {return value +2; });
	//std::cout << while7(1, 25, 100);
	//std::cout << while8(50,7,100);
	//std::cout << while9(1, 10, 20);
	//std::cout << while4(6, 2);
	//int find_maximum_entring(int length1, int length2) 
}