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
//	// ���庯��ָ�����ͣ�ָ���������double����������double�ĺ���
//	typedef double (*FuncPtr)(double, double);
//
//	// ����ָ�����飬�洢�ĸ����㺯��
//	FuncPtr operations[] = { add, sub, mul, div };
//
//	double num1 = 0;
//	double num2 = 0;
//	char op = {};
//	int opIndex = -1;
//
//	// ��ȡ�û�����
//	cout << "�����������������������(��ʽ��a b +,-,*,/)��" << endl;
//	cin >> num1 >> num2 >> op;
//
//	// ���������ȷ����Ӧ�ĺ���ָ������
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
//	// ͨ������ָ����ö�Ӧ�����㺯����������
//	double result = operations[opIndex](num1, num2);
//	if (op != '/' || num2 != 0)
//	{
//		cout << num1 << " " << op << " " << num2 << " = " << result << endl;
//	}
//	system("pause");
//	return 0;
//}