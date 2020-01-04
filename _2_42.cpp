#include<iostream>
#include<string>
#include"Sales_item.h"
#include"Sales_data.h"
using namespace std;

void _2_42_1()
{
	Sales_data data;
	double price;
	cin >> data.bookNo >> data.units_sold >> price;
	data.CalcRevenue(price);
	data.Print();
}

void _2_42_2()
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

void _2_42_3()
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

int main()
{
	_2_42_1();

	system("pause");
	return 0;
}