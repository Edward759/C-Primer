#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

istream& exe_1(istream& in)
{
    string str;
    in >> str;
    cout << str << endl;
    in.clear();
    return in;
}

void exe_4(string path)
{
    ifstream infile(path);
    vector<string> v;
    string line;
    if(infile)
    {
        while(getline(infile, line))
            v.push_back(line);
    }

    for(const auto &s:v)
        cout << s << endl;
}

void exe_5(string path)
{
    ifstream infile(path);
    vector<string> v;
    string word;
    if(infile)
    {
        while(infile >> word)
            v.push_back(word);
    }

    for(const auto &s:v)
        cout << s << endl;
}

class Sales_data {
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

public:
    Sales_data() = default;
    Sales_data(const std::string &s):bookNo(s) { }
    Sales_data(const std::string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(n*p){ }
    Sales_data(std::istream &is) { read(is, *this); }

    std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);
    
private:
    inline double avg_price() const;        

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

inline
double Sales_data::avg_price() const
{
    return units_sold ? revenue/units_sold : 0;
}

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

// friend functions
std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

void exe_6(string path)
{
    ifstream input(path);
    
    Sales_data total;
    if (read(input, total))
    {
        Sales_data trans;
        while (read(input, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
    }
}

void exe_7(string srcPath, string distPath)
{
    ifstream input(srcPath);
    ofstream output(distPath);

    Sales_data total;
    if (read(input, total))
    {
        Sales_data trans;
        while (read(input, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(output, total) << endl;
                total = trans;
            }
        }
        print(output, total) << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
    }
}

void exe_8(string srcPath, string distPath)
{
    ifstream input(srcPath);
    ofstream output(distPath, ofstream::app);

    Sales_data total;
    if (read(input, total))
    {
        Sales_data trans;
        while (read(input, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(output, total) << endl;
                total = trans;
            }
        }
        print(output, total) << endl;
    }
    else
    {
        cerr << "No data?!" << endl;
    }
}

void exe_9()
{
    istringstream is("aaa");
    exe_1(is);
}

void exe_10()
{
    ifstream file("test.txt");
    string line;
    vector<string> v;
    if(file)
    {
        while (getline(file, line))
            v.push_back(line);
    }
    
    for(auto &s:v)
    {
        istringstream is(s);
        string word;
        while (is>>word)
            cout << word << endl;
    }
}

struct PersonInfo{
    string name;
    vector<string> phones;
};

void exe_11()
{
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while(getline(cin,line))
    {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while(record>>word)
            info.phones.push_back(word);
        people.push_back(info);
    }

    for(auto &p:people)
    {
        cout << p.name << ' ';
        for(auto &n:p.phones)
            cout << n << ' ';
        cout << endl;
    }
}

void exe_13()
{
    ifstream file("test.txt");
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    if(file)
    {
        while (getline(file, line))
        {
            PersonInfo info;
            record.clear();
            record.str(line);
            record >> info.name;
            while(record>>word)
                info.phones.push_back(word);
            people.push_back(info);
        }
    }

    for(auto &p:people)
    {
        cout << p.name << ' ';
        for(auto &n:p.phones)
            cout << n << ' ';
        cout << endl;
    }
}