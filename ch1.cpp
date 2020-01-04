#include<iostream>
#include"Sales_item.h"

using namespace std;

void _1_11()
{
	int v1 = 0, v2 = 0;
	int i = 0;

	cout << "请输入两个数：" << endl;
	cin >> v1 >> v2;

	i = v1;

	cout << v1 << "和" << v2 << "之间的数有：" << endl;
	while (i >= v1&&i <= v2)
	{
		cout << i << " ";
		i++;
	}

	cout << endl;
}

void _1_16()
{
	int sum = 0, v = 0;

	while (cin >> v)
		sum += v;
	cout << sum << endl;
}

void _1_20()
{
	Sales_item item;
	while (cin>>item)
		cout << item;
}

void _1_21()
{
	Sales_item item1, item2;
	cin >> item1 >> item2;
	cout << item1 + item2 << endl;
}

void _1_22()
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

void _1_23()
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

int main()
{
	_1_22();

	system("pause");
	return 0;
}