#include<iostream>

using namespace std;

void _2_8()
{
	cout << "2M" << endl;
	cout << "2\tM\n" << endl;
}

void _2_18()
{
	int v1 = 10, v2=20;
	int *p1 = &v1, *p2 = p1;

	p1 = &v2;//更改指针的值

	*p2 = v2;//更改指针所指对象的值

	cout << "v1=" << v1 << endl;
	cout << "v2=" << v2 << endl;
	cout << "*p1=" << *p1 << endl;
	cout << "*p2=" << *p2 << endl;
}

int main()
{
	_2_18();

	system("pause");
	return 0;
}