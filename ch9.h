#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <list>
#include <deque>
#include <forward_list>
using namespace std;

bool exe_4(vector<int>::const_iterator cbegin, vector<int>::const_iterator cend, int i)
{
    while(cbegin != cend)
    {
        if(*cbegin == i)
            return true;
        cbegin++;
    }
    return false;
}

vector<int>::iterator exe_5(vector<int>::iterator cbegin, vector<int>::iterator cend, int i)
{
    while(cbegin != cend)
    {
        if(*cbegin == i)
            return cbegin;
        cbegin++;
    }
    return cend;
}

void exe_13()
{
    list<int> l{1, 2, 3};
    vector<double> v(l.cbegin(), l.cend());
    for (auto iter = v.cbegin(); iter != v.cend();++iter)
        cout << *iter << ' ';
    cout << endl;

    vector<int> v1{1, 2, 3};
    vector<int> v2(v1);
    for (auto iter = v2.cbegin(); iter != v2.cend();++iter)
        cout << *iter << ' ';
    cout << endl;
}

void exe_14()
{
    list<char *> li{"aaa", "bbb", "ccc"};
    vector<string> v;
    v.assign(li.cbegin(),li.cend());

    for(auto &s : v)
        cout << s << ' ';
    cout << endl;
}

void exe_15()
{
    vector<int> v1{1, 2, 3};
    vector<int> v2{1, 2, 3, 4};
    if(v1==v2)
        cout << "equal" << endl;
    else
        cout << "unequal" << endl;
}

void exe_18()
{
    deque<string> de;
    string str;
    while(cin>>str)
        de.push_back(str);

    for (auto iter = de.cbegin(); iter != de.cend();++iter)
        cout << *iter << endl;
}

void exe_19()
{
    list<string> de;
    string str;
    while(cin>>str)
        de.push_back(str);

    for (auto iter = de.cbegin(); iter != de.cend();++iter)
        cout << *iter << endl;
}

void exe_20()
{
    deque<int> d1, d2;
    list<int> li{1, 2, 3, 4, 5, 6, 7};

    for(auto &x : li)
    {
        if(x & 0x1)
            d1.push_back(x);
        else
            d2.push_back(x);
    }

    for(auto &x : d1)
        cout << x << ' ';
    cout << endl;

    for(auto &x : d2)
        cout << x << ' ';
    cout << endl;
}

void exe_24(vector<int>v)
{
    cout << v.at(0) << endl;
    cout << v[0] << endl;
    cout << *v.begin() << endl;
    cout << v.front() << endl;
}

void exe_26()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> v(ia, end(ia));
    list<int> l(v.begin(), v.end());

    for (auto iter = v.begin(); iter != v.end(); )
    {
        if(*iter & 0x1)
            iter = v.erase(iter);
        else
            ++iter;
    }

    for (auto iter = l.begin(); iter != l.end(); ++iter)
    {
        if(!(*iter & 0x1))
            iter = l.erase(iter);
        else
            ++iter;
    }

    for(auto &x:v)
        cout << x << ' ';
    cout << endl;

    for(auto &x:l)
        cout << x << ' ';
    cout << endl;
}

void exe_27()
{
    forward_list<int> fl{0, 1, 2, 3, 4, 5};
    auto remove_odds = [](int x)
    { return x & 0x1; };

    fl.remove_if(remove_odds);

    for(auto &x:fl)
        cout << x <<' ';
    cout << endl;
}

void exe_28(forward_list<string>&fl, string str1, string str2)
{
    auto pre = fl.before_begin();
    for (auto cur = fl.begin(); cur != fl.end();++cur)
    {
        if(*cur==str1)
        {
            fl.insert_after(cur, str2);
            return;
        }
        else
            pre = cur;
    }

    fl.insert_after(pre, str2);
}

void exe_31_1()
{
    list<int> data { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for(auto cur = data.begin(); cur != data.end();)
        if (*cur & 0x1)
            cur = data.insert(cur, *cur), advance(cur, 2);
        else
            cur = data.erase(cur);
    for (auto i : data) cout << i << " ";
}

void exe_31_2()
{
    forward_list<int> data { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for(auto cur = data.begin(), prv = data.before_begin(); cur != data.end();)
        if (*cur & 0x1)
            cur = data.insert_after(prv, *cur),
            advance(cur, 2),
            advance(prv, 2);
        else
            cur = data.erase_after(prv);
    for (auto i : data)
        cout << i << " ";
}

void exe_41()
{
    vector<char> v = {'h', 'e', 'l', 'l', 'o'};
    string s(v.cbegin(), v.cend());
    cout << s << endl;
}