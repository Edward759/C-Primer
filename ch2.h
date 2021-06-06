#include<iostream>
#include"Sales_item.h"
#include"Sales_data.h"

using namespace std;

void exe_2_3()
{
	unsigned u = 10, u2 = 42;
	cout << u2 - u << endl;
	cout << u - u2 << endl;
	cout << UINT_MAX - 32 << endl;

	int i = 10, i2 = 42;
	cout << i2 - i << endl;
	cout << i - i2 << endl;
	cout << i - u << endl;
	cout << u - i << endl;

}

void exe_2_8()
{
	cout << "2M" << endl;
	cout << "2\tM\n" << endl;
}

void exe_2_18()
{
	int v1 = 10, v2=20;
	int *p1 = &v1, *p2 = p1;

	p1 = &v2;

	*p2 = v2;

	cout << "v1=" << v1 << endl;
	cout << "v2=" << v2 << endl;
	cout << "*p1=" << *p1 << endl;
	cout << "*p2=" << *p2 << endl;
}

void exe_2_34()
{
	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	auto &g = ci;

	a = 42;
	b = 42;
	c = 42;
	//d = 42;
	//e = 42;
	//g = 42;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	//cout << "d = " << d << endl;
	//cout << "e = " << e << endl;
	//cout << "g = " << g << endl;
}

//exe_2_40
struct Sales_data
{
	string bookName;
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	double price = 0.0;
};

void exe_2_41()
{
	Sales_data data1, data2;
	double price = 0;

	cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold*price;

	cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold*price;

	if (data1.bookNo == data2.bookNo)
	{
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;

		cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";

		if (totalCnt != 0)
			cout << totalRevenue / totalCnt << endl;
		else
			cout << "(no sales)" << endl;
	}
	else{
		cerr << "Data must refer to the same ISBN" << endl;
	}
}

void exe_2_42_1()
{
	Sales_data data;
	double price;
	cin >> data.bookNo >> data.units_sold >> price;
	data.CalcRevenue(price);
	data.Print();
}

void exe_2_42_2()
{
	Sales_data book1, book2;
	double price1, price2;
	cin >> book1.bookNo >> book1.units_sold >> price1;
	cin >> book2.bookNo >> book2.units_sold >> price2;
	book1.CalcRevenue(price2);
	book2.CalcRevenue(price1);

	if (book1.bookNo == book2.bookNo)
	{
		book1.addData(book2);
		book1.Print();
	}
	else
		cerr << "Data must refer to same ISBN" << endl;
}

void exe_2_42_3()
{
	Sales_data total;
	double totalPrice;
	if (cin >> total.bookNo >> total.units_sold >> totalPrice)
	{
		total.CalcRevenue(totalPrice);
		Sales_data trans;
		double transPrice;
		while (cin>>trans.bookNo>>trans.units_sold>>transPrice)
		{
			trans.CalcRevenue(transPrice);
			if (total.bookNo == trans.bookNo)
				total.addData(trans);
			else
			{
				total.Print();
				total.setData(trans);
			}
		}
		total.Print();
	}
	else
		cerr << "no data" << endl;
}