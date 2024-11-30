#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

void Swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

};

void BubbleSort()
{
	int arr[] = { 1,3,5,9,8,7,2,3,8 };
	for (int i = 0; i < 9 - 1; i++)
	{
		for (int j = 0; j < 9 - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int k = 0; k < 8; k++)
	{
		cout << arr[k] << ",";
	}
	cout << arr[8] << endl;
}



