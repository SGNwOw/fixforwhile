#include  <cmath>
#include <iostream>

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
	std::cout << while2(start, end, 0, [](int start, int end) {return start - end; });
}
void w4(int start, int end) {
	std::cout << while2(start, end, 0, [](int start,int end) {
		if (start %3== 0)
		{
			start / 3;
			std::cout << "true";
		}
		else
		{
			std::cout << "false";
			return 0;
		}
		});
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
//int while6(int start,int end,int n)
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


int main()
{
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

//int find_maximum_entring(int length1, int length2) {



}