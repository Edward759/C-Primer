## exe_1
1. list
2. deque
3. vector

## exe_2
list<deque<int>>l

## exe_3
- 他们指向同一个容器中的元素，或是容器最后一个元素之后的位置；
- 可以通过反复递增begin到达end。

## exe_6
list的迭代器不支持<操作，应改为while(iter1 != iter2)

## exe_7
vector<int>::size_type

## exe_8
读：list<string>::const_iterator
写：list<string>::iterator

## exe_9
begin可以改变元素值，cbegin不能改变元素值

## exe_10
value_type;
value_type;
vector<int>::iterator
vector<int>::const_iterator

## exe_11
vector<int>v; 没有值
vector<int>v(v2); v与v2的值一样
vector<int>v=v2; v与v2的值一样
vector<int>v{0, 1, 2}; 0,1,2
vector<int>v={0, 1, 2}; 0,1,2
vector<int>v(v2.begin(), v2.end()); v与v2的值一样

## exe_12
对于接受一个容器作为创建其拷贝的构造函数，两个容器的类型和元素类型都必须匹配；而接受迭代器创建拷贝的构造函数，不要求容器类型及元素类型一致，只要能将拷贝的元素转换为要初始化的容器元素类型即可。

## exe_16
vector<int>不能和list<int>比较

## exe_17
1. 容器类型必须相同
2. 元素类型必须相同
3. 元素可以进行<运算

## exe_21
每一次插入新值后都返回指向第一个元素的迭代器，最后迭代器指向vector的头部

## exe_22
每一次插入后迭代器都会失效。应改为：mid = (iv.begin() + iv.end()) / 2

## exe_23
都是那个元素的值

## exe_25
1. elem1与elem2相等，不会删除元素；
2. elem2为尾后迭代器，会删除elem1到最后一个元素；
3. elem1和elem2都为尾后迭代器，不会删除元素。

## exe_29
1. 向尾部添加75个值为0的元素
2. 删除后面15个元素

## exe_30
1. 元素需要有默认构造函数
2. 如果没有默认构造函数，则需要提供初始值

## exe_32

## exe_33
insert后迭代器会失效

## exe_34
死循环，因为++iter在while循环外面。

## exe_42
先用reserve()分配足够的空间