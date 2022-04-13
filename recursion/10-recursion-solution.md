# Problems

## Easy
- [Sum Triangle from Array](https://www.geeksforgeeks.org/sum-triangle-from-array/) `GFG`

```cpp
void Sum(int arr[], int n){
    if(n<1){
        return;
    }
    int temp[n-1];
    for(int i=0;i<n-1;i++){
        temp[i] = arr[i] + arr[i+1];
    }
    Sum(temp,n-1);
    
    for(int i=0;i<n;i++){
        if(i==n-1){
            cout<<arr[i]<<" ";
        }else{
             cout<<arr[i]<<" ";
        }
    }
cout<<endl;
    
}


```


- [Maximum and Minimum value in an array](https://www.geeksforgeeks.org/recursive-programs-to-find-minimum-and-maximum-elements-of-array/) `GFG`

```cpp
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
```

- [Print all possible palindromic partitions of a string.](https://www.geeksforgeeks.org/given-a-string-print-all-possible-palindromic-partition/) `GFG`

```

```

- [Binary Search using recursion](https://leetcode.com/problems/binary-search/) `leetcode`

```cpp
 int Helper(vector<int>& nums, int target, int start,int end){
         int mid = start + (end-start)/2;
        if(start<=end){
        if(nums[mid] ==target )return mid;
        else if(nums[mid]>target){
            return Helper(nums,target,start,mid-1);
        }else{
           return Helper(nums,target,mid+1,end);
        }
        }
    return -1;
    }
    int search(vector<int>& nums, int target) {
        int end = nums.size()-1;
        int start = 0;
        return Helper(nums,target,start,end);
    }
```

- [First Uppercase Letter in a String](https://www.geeksforgeeks.org/first-uppercase-letter-in-a-string-iterative-and-recursive/) `GFG`

```cpp
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
```

- [Reverse String](https://leetcode.com/problems/reverse-string/) `leetcode`

```cpp
  void reverseString(vector<char>& s) {
        int n = s.size()-1;    
        int i=0;
        while(i<n){
            swap(s[i++],s[n--]);
        }
        
    }
```

- [Print 1 To N Without Loop](https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1/) `GFG`

```cpp
int SumN(int n)
{
    if (n == 0)
        return 0;
    return n + SumN(n - 1);
}
```
- [Fibonacci Number](https://leetcode.com/problems/fibonacci-number/) `leetcode`
```cpp
int Fib(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    return (Fib(n-1)+ Fib(n-2));
}
```
- [Special Fibonacci](https://www.codechef.com/problems/FIBXOR01/) `CodeChef`
```cpp
int FibS(int a, int b, int n){
    if(n==0)return a;
    if(n==1)return b;
    if(n==2)return a^b;
    return (FibS(a,b,n%3));
}

a^b=c  => b^c=a => c^a=b
```
- [Length of string using Recursion](https://www.geeksforgeeks.org/program-for-length-of-a-string-using-recursion/) `GFG`
```cpp
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
```
- [Geek-onacci Number](https://practice.geeksforgeeks.org/problems/geek-onacci-number/0/) `GFG`
```cpp
int Geek(int a, int b, int c){
    if(n==1)return a;
    else if(n==2)return b;
    else if(n==3)return c;
    else return (G(a,b,c,N-1)+G(a,b,c,N-2)+G(a,b,c,N-3));
}
```
- [Recursive Bubble Sort](https://www.geeksforgeeks.org/recursive-bubble-sort/) `GFG`
```cpp
void RecBubble(int arr[], int n){
    if(n<=1)return;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    RecBubble(arr,n-1);
}
```
- [Recursive Insertion Sort](https://www.geeksforgeeks.org/recursive-insertion-sort/) `GFG`
```cpp
void RecInsertion(int arr[], int n){
    if(n<=1)return;
    RecInsertion(arr,n-1);
    int key= arr[n-1];
    int j=n-2;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1] = key;    
}

```
- [Sum of digit of a number using Recursion](https://www.geeksforgeeks.org/sum-digit-number-using-recursion/) `GFG`
```cpp
int RecSum(int N)
{
    if (N <= 1)
        return N;
    int rem = N % 10;
    return (rem + RecSum(N / 10));
}
```
- [Product of two numbers using Recursion](https://www.geeksforgeeks.org/product-2-numbers-using-recursion/) `GFG`
```cpp
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
```
- [Check Prime or not](https://www.geeksforgeeks.org/recursive-program-prime-number/) `GFG`
```cpp
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
```
- [Sum of Natural numbers using Recursion](https://www.geeksforgeeks.org/sum-of-natural-numbers-using-recursion/) `GFG`
```cpp
int SumN(int n)
{
    if (n == 0)
        return 0;
    return n + SumN(n - 1);
}
```
- [Power of Two](https://leetcode.com/problems/power-of-two/) `leetcode`
```cpp
 bool isPowerOfTwo(int n) {
            if(n==1)return true;
            if(n & 1 || n==0)return false;
            else{
                return isPowerOfTwo(n/2);
                }
    }
```
- [Power of Three](https://leetcode.com/problems/power-of-three/) `leetcode`
```cpp
 bool isPowerOfThree(int n) {
        if(n==1)return true;
        if(n==0)return false;
        if(n%3!=0)return false;
        return isPowerOfThree(n/3);
    }
```
- [Power of Four](https://leetcode.com/problems/power-of-four/) `leetcode`
```cpp
 bool isPowerOfFour(int n) {
        if(n==0)return false;
        if(n==1)return true;
        if(n%4!=0)return false;
        return isPowerOfFour(n/4);
    }
```
- Write a recursive function for given n and a to determine x:
```
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
```
- [Remove consecutive duplicate characters from a string.](https://www.geeksforgeeks.org/remove-consecutive-duplicates-string/) `GFG` 

```
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
```
- 

- [Power Set of permutations of a string in Lexicographic order.](https://www.geeksforgeeks.org/powet-set-lexicographic-order/) `GFG`
```
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
    sort(ans_list1.begin(),ans_list1.end());
    return ans_list1;
}

```



## Medium
- [Combination Sum](https://leetcode.com/problems/combination-sum/) `leetcode`
- [Word Search](https://leetcode.com/problems/word-search/) `leetcode`
- [Target sum](https://leetcode.com/problems/target-sum/) `leetcode`
- [Find Kth Bit in Nth Binary String](https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/) `leetcode`
- [K-th Symbol in Grammar](https://leetcode.com/problems/k-th-symbol-in-grammar/) `leetcode`
- [Count Good Numbers](https://leetcode.com/problems/count-good-numbers/) `leetcode`
- [N Digit numbers with digits in increasing order](https://practice.geeksforgeeks.org/problems/n-digit-numbers-with-digits-in-increasing-order5903/1/) `GFG`
- [Pow(x, n)](https://leetcode.com/problems/powx-n/) `leetcode`

```

double myPow(double x, int n) {
        return pow(x,n);
    }
```

