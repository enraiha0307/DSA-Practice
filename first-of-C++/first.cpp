#include <iostream>
#include <cmath>

using namespace std;

bool CheckEvenOrOdd(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    return false;
}
void Greeting()
{
    string name;
    cout << "enter your name" << endl;
    cin >> name;
    cout << "Hello " << name << ", Nice to meet you!" << endl;
}
void CalculateSimpleInterest()
{
    float P = 0, T = 0, R = 0;
    cout << "enter Principal, Rate and Time" << endl;
    cin >> P >> R >> T;
    float SI = (P * R * T) / 100;
    cout << "Your SI is: " << SI << endl;
}
void Calculator()
{
    char op;
    int a = 0, b = 0;
    cout << "enter two numbers and an operand(+,-,*,/)" << endl;
    cin >> a >> b >> op;
    if (op == '+')
    {
        cout << a + b << endl;
    }
    else if (op == '-')
    {
        cout << a - b << endl;
    }
    else if (op == '*')
    {
        cout << a * b << endl;
    }
    else if (op == '/')
    {
        cout << a / b << endl;
    }
    else
    {
        cout << "wrong operator";
    }
}
void FindLargest()
{
    int a = 0, b = 0;
    cout << "enter two numbers" << endl;
    cin >> a >> b;

    cout << "a is:" << a << "b is: " << b << endl;
    if (a < b)
    {
        cout << b << " is greater than " << a << endl;
    }
    else
    {
        cout << a << " is greater than " << b << endl;
    }
}
void INRToUSD()
{
    float money = 0.0, convMoney;
    float exchangeRate = 76.06;
    cout << "Enter in Rupees" << endl;
    cin >> money;
    convMoney = money / exchangeRate;
    cout << "Your money in USD is $" << convMoney << endl;
}
int Fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return Fib(n - 1) + Fib(n - 2);
}
void CalcFibN()
{
    int n = 0;
    cout << "enter the number 'n' upto which to calculate fibonacci series" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << Fib(i) << " ";
    }
}

bool CheckPalin()
{
    string t;
    cout << "enter a string" << endl;
    cin >> t;
    for (int i = 0; i < t.length() / 2; i++)
    {
        if (t[i] != t[t.length() - i - 1])
            return false;
    }

    return true;
}

int main()
{
    // cout << CheckEvenOrOdd(4) << endl;
    //  Greeting();
    // CalculateSimpleInterest();
    // Calculator();
    // FindLargest();
    // INRToUSD();
    // CalcFibN();
    // if (CheckPalin())
    // {
    //     cout << "true" << endl;
    // }
    // else
    // {
    //     cout << "False" << endl;
    // }

    return 0;
}