#include<iostream>
#include"Sales_item.h"

using namespace std;

void exe_3()
{
	cout << "Hello, World!" << endl;
}

void exe_4()
{
	cout << "input two numbers:" << endl;
	int num1, num2;
	cin >> num1;
	cin >> num2;
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
}

void exe_5()
{
	cout << "input two numbers:" << endl;
	int num1, num2;
	cin >> num1;
	cin >> num2;
	cout << num1;
	cout << " * ";
	cout << num2;
	cout << " = ";
	cout << num1 * num2;
	cout << endl;
}

void exe_6()
{
	cout << "Invalid. After modified:" << endl;
	int v1 = 1, v2 = 2;
	cout << "The sum of " << v1
		<< " and " << v2
		<< " is " << v1 + v2 << endl;
}

void exe_8()
{
	cout << "/*";
	cout << "*/";
	cout << /* "*/" /* "/*" */;
}

void exe_9()
{
	int i = 50;
	int ans = 0;
	while (i <= 100)
	{
		ans += i;
		i++;
	}
	cout << "sum of 50 to 100 is: " << ans << endl;
}

void exe_10()
{
	int i = 10;
	while (i > 1)
	{
		cout << --i << ' ';
	}
	cout << endl;
	
}

void exe_11()
{
	int v1 = 0, v2 = 0;
	int i = 0;

	cout << "Input two numbers:" << endl;
	cin >> v1 >> v2;

	i = v1;

	cout << "All numbers from " << v1 << " to " << v2  << ":" << endl;
	while (i >= v1 && i <= v2)
	{
		cout << i << " ";
		i++;
	}

	cout << endl;
}

void exe_12()
{
	cout << "This function calculates the sum from -100 to 100." << endl;
	cout << "Sum is 0." << endl;
}

void exe_13()
{
	//9
	int ans = 0;
	for(int i = 50; i <= 100; ++i)
		ans += i;

	cout << ans << endl;

	//10
	for(int i = 10; i > 1;)
		cout << --i << ' ';
	cout << endl;

	//11
	int v1 = 0, v2 = 0;

	cout << "Input two numbers:" << endl;
	cin >> v1 >> v2;

	cout << "All numbers between " << v1 << " and " << v2  << ":" << endl;
	
	for(int i = v1 + 1; i < v2; ++i)
		cout << i << ' ';
	cout << endl;
}

void exe_16()
{
	int sum = 0, v = 0;

	while (cin >> v)
		sum += v;
	cout << sum << endl;
}

void exe_19()
{
	int v1 = 0, v2 = 0;

	cout << "Input two numbers:" << endl;
	cin >> v1 >> v2;

	if(v1 < v2)
	{
		cout << "The first number should be greater than the second one." << endl;
		exe_19();
	}
	else
	{
		cout << "All numbers between " << v1 << " and " << v2  << ":" << endl;
	
		for(int i = v1 + 1; i < v2; ++i)
			cout << i << ' ';
		cout << endl;
	}
}

void exe_20()
{
	Sales_item item;
	while (cin>>item)
		cout << item;
}

void exe_21()
{
	Sales_item item1, item2;
	cin >> item1 >> item2;
	cout << item1 + item2 << endl;
}

void exe_22()
{
	Sales_item total;
	if (cin >> total)
	{
		Sales_item trans;
		while (cin>>trans)
		{
			if (trans.isbn() == total.isbn())
				total += trans;
			else
			{
				cout << total << endl;
				total = trans;
			}
		}
		cout << total << endl;
	}
	else
	{
		cerr << "no data" << endl;
	}
}

void exe_23()
{
	Sales_item item1,item2;
	int cnt = 0;

	if (cin >> item1)
	{
		cnt = 1;
		while (cin>>item2)
		{
			if (item1.isbn() == item2.isbn())
				cnt++;
			else
			{
				cout << item1.isbn() << ":" << cnt << endl;
				item1 = item2;
				cnt = 1;
			}
		}
		cout << item1.isbn() << ":" << cnt << endl;
	}
	else
	{
		cerr << "no data" << endl;
	}
}