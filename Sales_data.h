#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<iostream>
#include<string>
using namespace std;

struct Sales_data{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

	void CalcRevenue(double price);
	double CalcAveragePrice();
	void setData(Sales_data data);
	void addData(Sales_data data);
	void Print();
};

void Sales_data::CalcRevenue(double price)
{
	revenue = units_sold*price;
}

double Sales_data::CalcAveragePrice()
{
	if (units_sold != 0)
		return revenue / units_sold;
	return 0.0;
}

void Sales_data::setData(Sales_data data)
{
	bookNo = data.bookNo;
	units_sold = data.units_sold;
	revenue = data.revenue;
}

void Sales_data::addData(Sales_data data)
{
	if (data.bookNo != bookNo)
		return;
	units_sold += data.units_sold;
	revenue += data.revenue;
}

void Sales_data::Print()
{
	cout << bookNo << " " << units_sold << " " << revenue << " ";
	double averagePrice = CalcAveragePrice();
	if (averagePrice != 0.0)
		cout << averagePrice << endl;
	else
		cout << "(no sales)" << endl;
}

#endif