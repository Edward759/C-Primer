## exe_2_1
1. sizeof(short) < sizeof(int) < sizeof(long) < sizeof(long long)。
2. 无符号数只能表示大于等于0的数，有符号数可以表示小于0的数。
3. float有6位有效数字，double有10位有效数字。

## exe_2_2
double或者float

## exe_2_3
32; UINT_MAX - 31; 32; -32; 0; 0.

## exe_2_5
(a)字符型字面值；宽字符型字面值；字符串；宽字符型字符串；
(b)int, unsigned int, long, unsigned long, 八进制, 十六进制；
(c)double, float, long;
(d)int, unsigned int, double, double.

## exe_2_6
第一组是十进制，第二组是八进制，且09不合法，因为八进制没有09.

## exe_2_7
(a)'i','\n';
(b)long double;
(c)不合法，只有在浮点数后面才能加f;
(d)long double;

## exe_2_9
(a)int input_value; std::cin >> input_value;
(b)在C++11标准下，会得到warning: warning: implicit conversion from 'double' to 'int' changes value from 3.14 to 3.
在非C++11标准下, 会报error: error: type 'double' cannot be narrowed to 'int' in initializer list.
(c)double wage; double salary = wage = 9999.99;
(d)合法，但是会损失精度。

## exe_2_10
global_str = "";
global_int = 0;
local_int值随机;
local_str = "";

## exe_2_11
(a)定义；
(b)声明;
(c)声明.

## exe_2_12
(a)double是关键字；
(c)变量名不可包含‘-’；
(d)变量名不可以数字开头。

## exe_2_13
100

## exe_2_14
100 45

## exe_2_15
(b)引用的初始值必须是一个对象；
(d)引用必须初始化。

## exe_2_16
四个操作都合法，其中(c)(d)会损失精度.

## exe_2_17
10 10

## exe_2_19
1. 指针本身是一个对象，而引用是一个对象的别名；
2. 一旦被初始化后，引用就跟对象绑定了，无法再绑定其他对象；而指针可以再指向其他对象
3. 指针可以不被初始化，引用必须初始化。

## exe_2_20
将i的值变为42*42

## exe_2_21
(a)非法，类型不一致；
(b)非法，ip类型是int*，而i的类型是int。

## exe_2_22
判断p是否为空；
判断p所指对象是否为0.

## exe_2_23
不能，指针仅仅表示一个对象的起始地址。

## exe_2_24
void可以转换为任何类型。

## exe_2_25
(a)ip是int*, i是int，r是i的引用；
(b)i是int，ip是int*;
(c)ip是int*, ip2是int。

## exe_2_26
(a)非法，const对象必须初始化；
(b)合法；
(c)合法；
(d)++sz非法，const对象的值不能被改变。

## exe_2_27
(b)(c)(d)(e)(g)合法
(c)初始化常量引用时允许用任意表达式作为初始值。

## exe_2_28
(a)cp必须初始化；
(b)p2必须初始化；
(c)ic必须初始化；
(d)p3必须初始化.

## exe_2_29
(a)合法
(b)p1是普通指针，而p3是常量指针；
(c)p1是普通指针，ic是常量；
(d)(e)(f)p3,p2,ic的值都不可改变。

## exe_2_30
顶层：v2，p3
底层：p2，p3，r2
r2：用于声明引用的const都是底层const

## exe_2_31
r1 = v2; 合法，顶层const被忽略；
p1 = p2; 非法，p2有底层const而p1没有；
p2 = p1; 合法，int* 可以转换为const int*；
p1 = p3; 非法，p3有底层const而p1没有；
p2 = p3; 合法，p2和p3都有底层const。

## exe_2_32
非法。int null = 0, *p = &null;

## exe_2_33
d和e都是指针，要用地址赋值；
g是const引用，不可改变值。

## exe_2_35
auto会忽略掉顶层const，保留底层const
int j;
const int &k;
const int *p;
const int j2;
const int &k2;

## exe_2_36
int c; 4;
int &d; 4;

## exe_2_37
int c; 3;
int &d; 43;

## exe_2_38
decltype会保留顶层const和引用；auto会忽略顶层const和引用。

二者指定类型一样：
int i = 1;
decltype(i) a = i;
auto b = i;

二者指定类型不一样：
const int i = 1;
decltype(i) a = i; //const int
auto b = i;  //int

## exe_2_39
会报错：[Error] expected ';' after struct definition