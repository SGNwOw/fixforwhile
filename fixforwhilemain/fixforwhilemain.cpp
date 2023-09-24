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

template <class T, class UnaryOperation>
T f10_12_13(T start, T end, T result, UnaryOperation func) {
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
T f4_5_6(T start, T end, T result, T price, BinaryOpearation func) {
	for (; start < end; start++)
	{
		func(result);
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
int main()
{
	std::cout << f10_12_13(1, 10, 0, [](double acamulator, double  value) { return acamulator + (1 / Fact(value)); });
	//std::cout << f10_12_13(1, 5, 0, [](int acamulator, int value) { return acamulator + Fact(value); });//f20//
	//std::cout << Fact(5);//f19
	//std::cout << f10_12_13(0, 4, 0, [](int acamulator, int value) { return acamulator + std::pow(value, 2); });//f17
	//std::cout << f16(2, 5);
	//std::cout << f4_5_6(1, 10, 0, 5, [](int acamulator, int value, int price) { return acamulator + value * price; });//f4,f5,f6
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
}