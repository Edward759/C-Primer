#pragma once
#include <iostream>
#include <string>
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