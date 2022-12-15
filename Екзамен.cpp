// Екзамен.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>

using namespace std;

int f(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++)
    {
        a = a + b;
        b = a - b;
    }
    return a;
}
 
int main()
{
    setlocale(LC_CTYPE, "ukr");
    setlocale(0, ".1251");
    std::cout.width(3);
   
    int n;

    std::cout << "Введiть n елемент послiдовностi чисел Фiбоначчi = ";
    cin >> n;
    cout  << "n-й член послiдовностi Фiбоначчi = " << f(n);
    cout << endl;

    system("pause");
    return 0;
}