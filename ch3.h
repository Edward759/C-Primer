#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void exe_2_1()
{
    string line;
    while(getline(cin, line))
        cout << line << endl;
}

void exe_2_2()
{
    string word;
    while(cin >> word)
        cout << word << endl;
}

void exe_4_1()
{
    string str1, str2;
    cin >> str1 >> str2;
    if(str1!=str2)
        cout << (str1 > str2 ? str1 : str2) << endl;
    else
        cout << "EQUAL" << endl;
}

void exe_4_2()
{
    string str1, str2;
    cin >> str1 >> str2;
    if(str1.size()!=str2.size())
        cout << (str1.size() > str2.size() ? str1 : str2) << endl;
    else
        cout << "str1.size == str2.size" << endl;
}

void exe_5()
{
    string str1, str2("");
    while(cin>>str1)
        str2 += str1;
    cout << str2 << endl;
}

void exe_6()
{
    string str;
    cin >> str;
    for(auto &c : str)
        c = 'X';
    cout << str << endl;
}

void exe_7()
{
    string str;
    cin >> str;
    for(char &c : str)
        c = 'X';
    cout << str << endl;
}

void exe_8()
{
    string str;
    cin >> str;

    decltype(str.size()) index = 0;
    while(index < str.size())
        str[index++] = 'X';

    cout << "while:" << str << endl;

    for (; index < str.size(); ++index)
        str[index] = 'X';
    cout << "for:" << str << endl;
}

void exe_10()
{
    string str;
    cin >> str;

    for (auto iter = str.cbegin(); iter != str.cend(); iter++)
        if(ispunct(*iter))
            str.erase(iter);
    cout << str << endl;
}

void exe_21()
{
    vector<int> v = {1, 2, 3, 4, 5};
    for (auto it = v.cbegin(); it != v.cend();it++)
        cout << *it << endl;
}

void exe_22()
{
    string str;
    cin >> str;
    for (auto it = str.begin(); it != str.end();++it)
        *it = toupper(*it);
    cout << str << endl;
}

void exe_23()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (auto it = v.begin(); it != v.end();it++)
        *it = 2 * (*it);
    for(auto i:v)
        cout << i << ' ';
    cout << endl;
}

void exe_24()
{
    int i;
    vector<int> v;

    while(cin>>i)
        v.push_back(i);

    for(auto it = v.begin() + 1; it != v.end();it++)
        cout << (*it) - *(it - 1) << ' ';
    cout << endl;

    auto l = v.begin(), r = v.end() - 1;
    while(l!=r)
    {
        cout << (*l) - (*r) << ' ';
        l++;
        r--;
    }
    cout << endl;
}

void exe_25()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    auto it = scores.begin();
    while (cin >> grade)
    {
        if(grade <= 100)
            ++(*(it + grade / 10));
    }
    for(auto i:scores)
        cout << i << ' ';
    cout << endl;
}