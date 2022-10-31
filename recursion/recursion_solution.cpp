#include <iostream>
#include <bits/stdc++.h>
#include <string>
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
        return Prod(y, x);
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

int FindX(long long n, int a)
{
    if (n == 1)
    {
        return 0;
    }
    if (n % a == 0)
    {
        return (1 + FindX(n / a, a));
    }
    return -1;
}

string RemoveDuplicates(string p, string up)
{
    if (up == "")
    {
        return p;
    }
    if (p == "")
    {

        p.push_back(up.front());
        up = up.substr(1);
    }
    char ch = p.back();
    if (up.front() != ch)
    {
        p.push_back(up.front());
        up = up.substr(1);
        return RemoveDuplicates(p, up);
    }
    else
    {
        up = up.substr(1);
        return RemoveDuplicates(p, up);
    }
}
bool isPalindrome(string str, int low, int high)
{

    while (low < high)
    {
        if (str[low] != str[high])
            return false;
        low++;
        high--;
    }
    return true;
}
void PrintPalindromicPartitionsUtil(vector<vector<string>> &allans, vector<string> &currans, int start, int n, string str)
{
    if (start >= n)
    {
        allans.push_back(currans);
        return;
    }
    for (int i = start; i < n; i++)
    {
        if (isPalindrome(str, start, i))
        {
            currans.push_back(str.substr(start, i - start - 1));
            PrintPalindromicPartitionsUtil(allans, currans, i + 1, n, str);
            // reverting the changes; backtracking; removing the substring str[start:i]
            currans.pop_back();
        }
    }
}
void PrintPalindromicPartitions(string str)
{
    int n = str.length();
    vector<vector<string>> allans;
    vector<string> currans;
    PrintPalindromicPartitionsUtil(allans, currans, 0, n, str);
    for (int i = 0; i < allans.size(); i++)
    {
        for (int j = 0; j < allans[i].size(); j++)
            cout << allans[i][j] << " ";
        cout << "\n";
    }
}
vector<string> Permutations(string p, string up)
{
    if (up.empty())
    {
        vector<string> ans;
        ans.push_back(p);
        // cout << "##" << p << endl;
        return ans;
    }
    char ch = up.front();
    up = up.substr(1);
    vector<string> ans_list1;
    vector<string> ans_list2;
    ans_list1 = Permutations(p, up);
    ans_list2 = Permutations(string(p + ch), up);
    ans_list1.insert(ans_list1.end(), ans_list2.begin(), ans_list2.end());
    sort(ans_list1.begin(), ans_list1.end());
    return ans_list1;
}

bool checkForG(string sub)
{
    int cg = 0, co = 0, ct = 0;
    for (int i = 0; i < sub.length(); i++)
    {
        if (sub[i] == 'g')
        {
            cg++;
        }
        else if (sub[i] == 'o')
        {
            co++;
        }
        else if (sub[i] == 't')
        {
            ct++;
        }
    }
    if (cg > co && cg > ct)
    {
        return true;
    }
    return false;
}

int MinLengthSubstring(string S, int N)
{
    if (S.length() < 2)
        return -1;
    int ans = N + 1;
    string sub = "";
    int n = S.length();
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
            {
                sub = S.substr(i, j - i + 1);
                if (checkForG(sub))
                {
                    ans = min(ans, j - i + 1);
                }
            }
    }
    if (ans == N + 1)
    {
        return -1;
    }
    return ans;
}

int main()
{
    // int arr[10] = {1, 2, 3, 4, 5, -8, 20};
    // string str = "geeksforgeeKs";
    // char str[] = "ABCD";
    // int n = sizeof(arr) / sizeof(arr[0]);
    // cout<<n<<endl;
    // cout<<findMin(arr,n)<<endl;
    // cout<<findMax(arr,n)<<endl;
    // cout<<findUpper(str,0)<<endl;
    // cout<<findLen(str)<<endl;
    // cout<<RecSum(12345)<<endl;
    // cout<<Prod(5,3)<<endl;
    // cout<<isPrime(11)<<endl;
    // cout << SumN(6) << endl;
    // cout << FindX(64, 2) << endl;
    // cout << RemoveDuplicates("", "aaaabbbngggb") << endl;
    // string up = "geeks";
    // string p = "";
    // PrintPalindromicPartitions(up);
    // std::string s("abc");
    // for (const std::string &t : generateSubstrings(s))
    // {
    //     std::cout << t << std::endl;
    // }
    // string up = "abc";
    // string p = "";
    // vector<string> result = Permutations(p, up);
    // for (auto x : result)
    // {
    //     cout << x << endl;
    // }

    // ----------CRED DSA QUESTION------------
    int T = 0, N = 0;
    string S;
    cout << "enter No. of testcases" << endl;
    cin >> T;
    while (T--)
    {
        cout << "enter length of the string" << endl;
        cin >> N;
        cout << "enter the string" << endl;
        cin >> S;
        int minL = MinLengthSubstring(S, N);
        cout << "Minimun Length Substrig is : " << minL << endl;
    }

    return 0;
}