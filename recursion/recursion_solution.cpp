#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int SumN(int n)
{
    if (n == 0)
        return 0;
    return n + SumN(n - 1);
}

bool Helper(int n, int i)
{
    if (i * i > n)
        return true;
    if (n % i == 0)
        return false;
    return Helper(n, i + 1);
}

bool isPrime(int n)
{
    return Helper(n, 2);
}

int Prod(int x, int y)
{
    if (x < y)
    {
        Prod(y, x);
    }
    else if (y != 0)
    {
        return (x + Prod(x, y - 1));
    }
    else
    {
        return 0;
    }
}

int RecSum(int N)
{
    if (N <= 1)
        return N;
    int rem = N % 10;
    return (rem + RecSum(N / 10));
}
int findLen(char *str)
{
    int len = 0;
    if (*str == '\0')
        return 0;
    else
    {
        return 1 + findLen(str + 1);
    }
}

char findUpper(string str, int i)
{
    if (str[0] == '\0')
        return 0;

    if (isupper(str[i]))
    {
        return str[i];
    }
    else
    {
        return findUpper(str, i + 1);
    }
}
void Sum(int arr[], int n)
{
    if (n < 1)
    {
        return;
    }
    int temp[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        temp[i] = arr[i] + arr[i + 1];
    }
    Sum(temp, n - 1);

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << arr[i] << " ";
        }
        else
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int findMin(int arr[], int n)
{
    if (n < 1)
    {
        return INT_MAX;
    }
    return min(arr[n - 1], findMin(arr, n - 1));
}
int findMax(int arr[], int n)
{
    if (n < 1)
    {
        return INT_MIN;
    }
    return max(arr[n - 1], findMax(arr, n - 1));
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, -8, 20};
    // string str = "geeksforgeeKs";
    char str[] = "ABCD";
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout<<n<<endl;
    // cout<<findMin(arr,n)<<endl;
    // cout<<findMax(arr,n)<<endl;
    // cout<<findUpper(str,0)<<endl;
    // cout<<findLen(str)<<endl;
    // cout<<RecSum(12345)<<endl;
    // cout<<Prod(5,3)<<endl;
    // cout<<isPrime(11)<<endl;
    cout << SumN(6) << endl;
    return 0;
}