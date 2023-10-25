#include "dnumeric array.h"
#include "array.h"
namespace mylib1 {
	template <class T, class Function>
	T find_the_value_of_an_expression_on_an_interval(T start, T end, T init, Function function) {
		for (; start <= end; start++)
		{
			init += function(init, start);
		}
		return init;
	}
	template <class BinaryOparation>
	int  find_the_value_of_an_expression3(int start, int end, int result, BinaryOparation func) {
		for (; start < end; start++)
		{
			result = func(result, start);
		}
		return result;
	}
	template <class T, class BinaryOperation>
	double find_the_value_of_an_expression1(T start, T end, double result, BinaryOperation func) {
		for (; start < end; start++)
		{
			result = func(result, start);
		}
		return result;
	}
	template<class T>
	int find_value_to_the_power_of_n(T value, int times,T result) {
		while (times--)
		{
			result *= value;
		}
		return result;
	}
	template < class T, class BinaryOperation>
	T Display_in_descending_order(T start, T end, T result, BinaryOperation func) {
		for (; start < end; end--)
		{
			result = func(result, end);
		}
		return result;
	}
	template<class T>
	void print_the_value_n_times(T variable, T value,T start) {
		for (;start!=variable; ++start)
		{
			std::cout << value << std::endl;
		}
	}
	template <class T, class BinaryOpearation>
	T find_the_cost(T start, T end, T result, T price, BinaryOpearation func) {
		for (; start < end; start++)
		{
			result = func(result, start, price);
		}
		return result;
	}
	template<class T>
	void output_all_power_numbers_up_to_variable(T start,T value, int variable,T result) {
		for (; start != variable; ++start)
		{
			result = pow(value, start);
			std::cout << result << std::endl;
		}
	}
	template<class T>
	T Fact(T value) {
		if (value == 0 || value == 1) {
			return 1;
		}
		return value * Fact(value - 1);
	}
	template <class T, class BinaryOpearation>
	T Find_the_value_of_an_expression(T start, T end, T result, T variable, BinaryOpearation func) {
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
	template <class T, class BinaryOperation >
	T find_using_iterating_1(T start, T end, T result,BinaryOperation func) {
		int count = 0;
		while (start > end)
		{
			start -= end;
			result = func(start, end);
			count++;
		}
		std::cout << count << std::endl;;
		return result;
	}
	void find_the_length_of_the_unoccupied_part_of_the_segment(int start, int end)///1
	{
		std::cout << find_the_value_of_an_expression_on_an_interval(start, end, 0, [](int start, int end) {return start - end; });///1
	}
	void find_the_number_of_segments_placed_on_the_other_segment(int start, int end)///2
	{
		std::cout << find_using_iterating_1(start, end, 0, [](int start, int end) {return 0; });///2
	}
	void find_the_quotient_of_a_whole_division_as_well_as_the_remainder_of_this_division(int start, int end) {
		std::cout << find_using_iterating_1(start, end, 0, [](int start, int end) {return start - end; });//3
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
	int double_fact(int start, int end, int variable) {
		return find_using_iterating_1(start,end,0, [&variable](int value,int result) {
			return  variable * (variable - 2 * value); });
	}
	/*int find_k_whose_square_exceeds_value(int start, int end, int n) {
		return find_using_iterating_1(start, end,0, [n](int value) { return  value * value > n; });
	}*/
	int find_k_whose_square_does_not_exceed_value(int start, int end, int n) {
		return find_using_iterating(start, end, [n](int value) {return value * value < n; }, -1);
	}
	int to_the_power_3_of_k_over_value(int start, int end, int n) {
		return find_using_iterating(start, end, [n](int value) { return std::pow(3, value) > n; });
	}
	bool test_for_power_of_3(int value, int power) {
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
	int find_numbers_k_greater_than_or_equal_to_value(int start, int end, int n) {
		int k = 0;
		return find_using_iterating(start, end, [&k, n](int value) {
			k += value;
			return k >= n;
			});
	}
	int sum(int start, int end, int result = 0) {//11
		for_each(start, end, [&result](int i) { return result += i; });
		return result;
	}
	int Sn(int a1, int an) {
		return  (a1 + an) * an / 2;
	}
	int find_numbers_k_greater_than_or_equal_to_value1(int start, int end, int n) {
		return find_using_iterating(start, end, [n](int value) {

			return Sn(1, value) <= n;
			}, -1);
	}

	int sum_is_less_than_value(int start, int end, int a) {
		int k = 0;
		return find_using_iterating(start, end, [&k, a](int value) {
			k += value;
			return k <= a;
			});
	}
	template<class T>
	T compound_interest_when_calculating_contributions(double percent,T contribution,int month) {//15
		while (contribution < 1100)
		{
			month++;
			contribution += contribution * percent / 100;

		}
		std::cout << contribution << std::endl;
		return month;
	}
	template<class T>
	T compound_interest_when_calculating_distance(int percent,T start_distance,int days) {//16
		while (start_distance < 200)
		{
			days++;
			start_distance += start_distance * percent / 100;
		}
		std::cout << start_distance << std::endl;
		return days;
	}
	template<class T>
	T output_of_numbers_1(T value) {//17
		while (value > 0)
		{
			std::cout << value % 10 << " ";
			value /= 10;
		}
		return value;
	}
	template<class T>
	T finding_the_quantity_and_sum_of_digits(T value,T result,int number_of_digits) {//18
		while (value > 0)
		{
			number_of_digits++;
			result += value % 10;
			value /= 10;
		}
		std::cout << number_of_digits << std::endl;
		return result;
	}
	template<class T>
	int reading_numbers_from_right_to_left(T value,T temp) {//19
		while (value > 0)
		{
			int digit = value % 10;
			temp = temp * 10 + digit;
			value /= 10;
		}
		return temp;
	}
	template<class T>
	bool check_for_number(T value) {//20
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
	template<class T>
	bool checking_numbers_for_parity(T value) {//21
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
	template<class T>
	void is_the_number_prime(T value,T temp) {//22
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
	int gcd(int value, int value1) {//23
		if (value1 == 0)
			return value;
		if (value > value1)
			return gcd(value1, value % value1);
		else
			return gcd(value, value1 % value);
	}
	int fibonacci_numbers(int value) {//24
		int i, y, z, b;
		y = z = b = 1;
		bool q;
		q = 0;
		for (int i = 0; i < value; i++)
		{
			z = y;
			y = b;
			b = z + y;
			if (b == value) { q = 1; }
		}
		if (q)
			std::cout << "true";
		else
			std::cout << "false";
		return 0;
	}
	int find_the_first_fibonacci_number(int value) {//25
		int a = 1, b = 1, c = 0;
		while (c < value + 1)
		{
			c = a + b;
			b = a;
			a = c;
		}
		std::cout << c << std::endl;
		return 0;
	}

	int find_fib_numbers_before_number_and_after(int value) {//26
		int a = 1, b = 1, c = 0;
		while (c < value)
		{
			c = a + b;
			b = a;
			a = c;
		}
		std::cout << b << " " << a + b << std::endl;
		return 0;
	}
	int find_serial_number(int value) {//27
		int a = 1, b = 1, c = 0, k = 2;
		while (c < value)
		{
			++k;
			c = a + b;
			b + a;
			a = c;
		}
		std::cout << k << " ";
		return 0;
	}
	void Find_the_first_of_the_K_numbers(double value)
	{
		double a1 = 0, ak = 1, k = 2;

		while (abs(ak - a1) >= value)
		{
			a1 = ak;
			ak = 2 + 1 / a1;
			k++;
		}
		std::cout << k << a1 << ak;
	}
	int Find_the_first_of_the_K_numbers_1(int value) {//29
		double ak1 = 1, ak = 2, ak2;
		int k = 2;
		while (fabs(ak - ak1) >= value) {
			ak2 = ak1;
			ak1 = ak;
			ak = (ak2 + 2 * ak1) / 3;
			++k;
		}
		std::cout << k << std::endl << ak1 << std::endl << ak;
		return 0;
	}
	double Find_the_number_of_squares_placed_on_the_rectangle(double vertex, double vertex1, double vertex2) {//30
		int k = 0;
		float temp;
		while ((vertex - vertex2) >= 0) {
			vertex -= vertex2;
			temp = vertex2;
			while (temp - vertex2 >= 0) {
				temp -= vertex2;
				++k;
			}
			std::cout << k;
			return 0;
		}
	}
	//////////////////////////////
	template<class T>
	T find_the_length_as_well_as_the_set_of_points(T begin,T value1, T value2, int number_of_segments,T result) {//29 i next
		int length = (value2 - value1) / number_of_segments;
		for (; begin != number_of_segments + 1; ++begin)
		{
			result = value1 + begin * length;
			std::cout << result << std::endl;
		}
		return length;
	}
	template<class T>
	T find_the_length_as_well_as_the_values_​​of_the_function(T begin,T value1, T value2, int number_of_segments,T result) {
		int length = (value2 - value1) / number_of_segments;
		for (;begin != number_of_segments + 1; ++begin)
		{	
			result = 1 - sin(value1 + begin * length);
			std::cout << result << std::endl;
		}
		return length;
	}
	template<class T>
	void find_elements(T begin,T end,T value) {
		for (; begin != end; ++begin)
		{
			value= 2 + 1 / value;
			std::cout << value << std::endl;
		}
	}
	template<class T>
	void find_elements1(T value,T begin,T end,T variable) {
		for (;begin != end; ++begin) {
			value = (value + 1) / variable;
			std::cout << value << std::endl;
		}
	}
	template <class T>
	void fib(T value,T begin,T end,T value1) {
			for (; begin != end; ++begin)
			{
				value = value + value1;
				value1 = value - value1;
				std::cout << value << std::endl;
			}
		}
	template<class T>
	T find_sum_of_powers_of_number(T value,T begin,T end,T result) {
		for (; begin != end; ++begin)
		{
			result += pow(value, begin);
		}
		return result;
	}
	template<class T>
	T find_sum_of_powers_of_number1(T begin,T end,T result) {
		for (; begin != end; ++begin)
		{
			result += pow(begin, begin);
		}
		return result;
	}
	template<class T>
	T find_sum_of_powers_of_number2(T begin,T end,T result) {
		T value = end - begin;
		for (; begin != end; ++begin, value--)
		{
			result += pow(begin, value);
		}
		return result;
	}
	template<class T>
	void the_number_should_be_printed_as_many_times_as_its_value(T begin,T end) {
		for (; begin != end; ++begin)
		{
			for (int count=0; count!=begin; ++count)
			{
				std::cout << begin << std::endl;
			}
		}

	}
	template<class T>
	void the_number_should_be_printed_as_many_times_as_its_value1(T begin, T end) {
		for (int value=0; value != end - begin + 1 ; ++value)
		{
			for (int count = 0; count != value; ++count)
			{
				std::cout << value + begin - 1 << std::endl;
			}
		}
	}
}

int main()
{
	const int rows = 2;
	const int cols = 5;
	double arr1[rows][cols]{ {1,2,1,2,1},{10,9,8,7,6} };
	const int size = 10;
	double arr[size]{1,2,3,4,5,4,3,2,2,1};
	mylib1::the_number_should_be_printed_as_many_times_as_its_value1(5,10);
	//mylib::sort_ascending(arr, arr + 10,1.0);
	//std::cout << mylib::sum_between_last_zeros(arr, arr + 10, 0,0,0);
	//std::cout << mylib::determining_the_sign_of_a_number(arr,arr+10);
	//mylib::product_and_sum_of_the_set(arr, arr + 10, 0, 1);
	//std::cout << sum_of_two_dimensional_array(arr1,rows,cols);
	//std::cout << sum_of_numbers(arr,size);
	//std::cout << Find_the_value_of_an_expression(1.0, 5.0, 0.0, 0.5, [](double acamulator, int value, double variable){return acamulator + pow(-1, value - 1) * (2 * value - 3) * pow(variable, value) / (2 * value); });//f28
	//std::cout << Find_the_value_of_an_expression(1.0, 5.0, 0.0, 0.5, [](double acamulator, int value, double variable) {return acamulator + (2 * value - 1) * pow(variable, (2 * value - 1)) / (2 * value) * (2 * value + 1); });//f27
	//std::cout << Find_the_value_of_an_expression(1.0, 5.0, 0.0, 0.5, [](double acamulator, int value, double variable) {return acamulator + pow(-1, value) * pow(variable, 2 * value + 1) / (2 * value + 1); });//f26
	//std::cout << Find_the_value_of_an_expression(1.0, 5.0, 0.0, 0.5, [](double acamulator, int value, double variable) { return acamulator + pow(-1, value - 1) * pow(variable, value) / value; });//f25
	//std::cout << Find_the_value_of_an_expression(1.0, 5.0, 0.0, 2.0, [](double acamulator, int value, int variable) { return acamulator + pow(-1, value) * pow(variable, 2 * value) / Fact(2 * value); });//f24
	//std::cout << Find_the_value_of_an_expression(1.0, 5.0, 0.0, 2.0, [](double acamulator, int value, int variable) {return acamulator + pow(-1, value) * pow(variable, 2 * value + 1) / Fact(2 * value + 1); });//f23
	//std::cout << Find_the_value_of_an_expression(1.0, 6.0, 0.0, 2.0, [](double acamulator, double value, int variable) { return acamulator + pow(variable, value) / Fact(value); });//f22
	//std::cout << find_the_value_of_an_expression1(1, 5, 1, [](double acamulator, double  value) { return acamulator + (1 / Fact(value)); });//f21
	//std::cout << find_the_value_of_an_expression1(1, 5, 0, [](int acamulator, int value) { return acamulator + Fact(value); });//f20//
	//std::cout << Fact(5);//f19
	//std::cout << find_the_value_of_an_expression1(0, 4, 0, [](int acamulator, int value) { return acamulator + std::pow(value, 2); });//f17
	//std::cout << f16(2, 5);
	//std::cout << find_the_cost(1, 10, 0, 5, [](int acamulator, int value, int price) {return acamulator + (value * price); }) << std::endl;//f4
	//std::cout << find_the_cost(0.1, 1, 0.0, 5.0, [](int acamulator, int value, int price) {return acamulator + (value * price); }) << std::endl;//f5//?
	//std::cout << find_the_cost(1.2, 2.0,0.0,5.0, []( int acamulator,int value, int price) {return acamulator + (value* price); }) << std::endl;//f6
	 //Print_the_value_n_times(2, 5); 
	/*std::cout << find_the_value_of_an_expression3(1, 4, 0, [](int acamulator, int value) {return acamulator + std::pow(value + 1, 2); });//f11
	std::cout << find_the_value_of_an_expression3(1, 4, 0, [](int acamulator, int value) {return acamulator * value; });*///f12
	//find_the_value_of_an_expression3(1, 10, 0, [](int _acamulator, int value) { std::cout << value; return 0; });//f2
	//Display_in_descending_order(0, 9, 0, [](int acamulator, int value) {std::cout << value; return 0; });//f3
	//std::cout << find_the_value_of_an_expression1(1, 10, 0, [](int acamulator, int value) {return acamulator + value; });//f10
	//std::cout << find_the_value_of_an_expression1(1, 10, 0, [](int acamulator, int value) {return acamulator * value; });//f12
	//std::cout << find_the_value_of_an_expression1(1, 4, 0, [](int acamulator, int value) {return value % 2 == 0 ? acamulator - value : acamulator + value; });//f13
	//std::cout << find_the_value_of_an_expression1(1, 3, 0, [](int acamulator, int value) {return acamulator + std::pow(value* 2, 2); });//f11
	//std::cout << find_the_value_of_an_expression1(1, 4, 0, [](int acamulator, int value) {return acamulator + value *2 -1; });//f14
	//std::cout << find_value_to_the_power_of_n(3,5) << std::endl;//f15
	//std::cout << find_the_value_of_an_expression1(1, 4, 0, [](double acamulator, double value){return acamulator + (pow(value,2) * pow(-1, value +1)); });//f13
	//std::cout << find_the_value_of_an_expression1(1, 4, 0, [](double acamulator, double value) {return acamulator + (value * pow(-1, value + 1)); });//f13
}