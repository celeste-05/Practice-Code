//#include <iostream>
//using namespace std;
//
//double add(double a, double b)
//{
//	return a + b;
//}
//
//double sub(double a, double b)
//{
//	return a - b;
//}
//
//double mul(double a, double b)
//{
//	return a * b;
//}
//
//double div(double a, double b)
//{
//	if (b == 0)
//	{
//		cout << "Error! div can not be zero!" << endl;
//		return 0;
//	}
//	return a / b;
//}
//
//int main()
//{
//	// 定义函数指针类型，指向接收两个double参数并返回double的函数
//	typedef double (*FuncPtr)(double, double);
//
//	// 函数指针数组，存储四个运算函数
//	FuncPtr operations[] = { add, sub, mul, div };
//
//	double num1 = 0;
//	double num2 = 0;
//	char op = {};
//	int opIndex = -1;
//
//	// 获取用户输入
//	cout << "请输入两个操作数和运算符(格式：a b +,-,*,/)：" << endl;
//	cin >> num1 >> num2 >> op;
//
//	// 根据运算符确定对应的函数指针索引
//	switch (op)
//	{
//		case '+': opIndex = 0; break;
//		case '-': opIndex = 1; break;
//		case '*': opIndex = 2; break;
//		case '/': opIndex = 3; break;
//		default:
//			cout << "Error! Invalid operator!" << endl;
//			return -1;
//	}
//
//	// 通过函数指针调用对应的运算函数并输出结果
//	double result = operations[opIndex](num1, num2);
//	if (op != '/' || num2 != 0)
//	{
//		cout << num1 << " " << op << " " << num2 << " = " << result << endl;
//	}
//	system("pause");
//	return 0;
//}