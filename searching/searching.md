# Problems

## Easy

- [Square Root](https://leetcode.com/problems/sqrtx/)

    ```cpp
    //1st solution
    int mySqrt(int x) {
       return pow(10,log10(x)/2);
    }

    //2nd solution

    int mySqrt(int x) {
        if (x == 0)
        return 0;
    int left = 1, right = INT_MAX;
    while (true) {
        int mid = left + (right - left)/2;
        if (mid > x/mid) {
            right = mid - 1;
        } else {
            if (mid + 1 > x/(mid + 1))
                return mid;
            left = mid + 1;
        }
    }
    }



    ```

- [Guess Number Higher or Lower](https://leetcode.com/problems/guess-number-higher-or-lower/)

    ```cpp
    int guessNumber(int n) {
        int s =1,e=n;
        int ans=0;
        do{
        int mid = s + (e-s)/2;
        if(guess(mid)==-1){
            e = mid-1;
        }else if(guess(mid)==1){
            s=mid+1;
        }else{
            ans=mid;
            break;
        }
    }while(true);
        return ans;
    }
    ```

- [First Bad Version](https://leetcode.com/problems/first-bad-version/)

    ```cpp

  int firstBadVersion(int n) {
        long long start = 1, end = n;
        while (start < end) {
            long long mid = start+ (end - start) / 2;
            if (isBadVersion(mid)) {
                end = mid ;
            } else {
                start = mid + 1;
            }
        }
        return start;
    } 
    ```

- [Two Sum II - Input array is sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)

    ```cpp

    vector<int> twoSum(vector<int>& numbers, int target) {
            int l = 0;
        int r = numbers.size() -1;

        while(l < r){
            if(numbers[l] + numbers[r] == target){
            
                return {l+1,r+1};;
            }
            else if(numbers[l] + numbers[r] > target){
                r--;
            }
            else{
                l++;
            }
        }
        return {};
        }
    ```

- [Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square/)

    ```cpp
    bool isPerfectSquare(int num) {
        long long s=1,e=num,mid=0;
        while(s<=e){
            mid = s + (e-s)/2;
            cout<<mid<<endl;
            if(mid*mid == num){
                return true;
                
            }else if(mid*mid < num){
                s = mid+1;
            }else {
                e=mid-1;
            }
        }
        return false;
    }

    ```

- [Arranging Coins(Easy)](https://leetcode.com/problems/arranging-coins/)

    ```cpp
   /* Concept:

    1+2+3+...+x = n
    -> (1+x)x/2 = n
    -> x^2+x = 2n
    -> x^2+x+1/4 = 2n +1/4
    -> (x+1/2)^2 = 2n +1/4
    -> (x+0.5) = sqrt(2n+0.25)
    -> x = -0.5 + sqrt(2n+0.25)
    */
    int arrangeCoins(int n) {
    return floor(-0.5+sqrt((double)2*n+0.25));
    }

    //using second equation

    //convert int to long to prevent integer overflow
        long nLong = (long)n;
        
        long st = 0;
        long ed = nLong;
        
        long mid = 0;
        
        while (st <= ed){
            mid = st + (ed - st) / 2;
            
            if (mid * (mid + 1) <= 2 * nLong){
                st = mid + 1;
            }else{
                ed = mid - 1;
            }
        }
        
        return (int)(st - 1);

    ```

- [Find Smallest Letter Greater Than Target](https://leetcode.com/problems/find-smallest-letter-greater-than-target/)

    ``` cpp
    char nextGreatestLetter(vector<char>& letters, char target) {
     if (letters.back() <= target) return letters.front();
        int low = 0, high = letters.size() - 1;
        while (low < high) {
            auto mid = (low + high) / 2;
            if (target < letters[mid]) high = mid;
            else low = mid + 1;
        }
        return letters[low];
    }
    ```

- [Kth Missing Positive Number](https://leetcode.com/problems/kth-missing-positive-number/)
- [Search Insert Position](https://leetcode.com/problems/search-insert-position/)

```cpp
   int searchInsert(vector<int>& nums, int target) {
        int mid=0;
        int r= nums.size()-1;
        int l=0;
        
        while(l<r){
            mid = l + (r-l)/2;
            if (nums[mid]==target) return mid;
            if (nums[mid]<target) l=mid+1;
            else r=mid;
        }
        return nums[l] < target ? l + 1: l;
        
        
        
    }

```

- [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)
- [Count Negative Numbers in a Sorted Matrix](https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/)
- [Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/)
- [Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/)
- [Fair Candy Swap](https://leetcode.com/problems/fair-candy-swap/)
- [Check If N and Its Double Exist](https://leetcode.com/problems/check-if-n-and-its-double-exist/)
- [Special Array With X Elements Greater Than or Equal X](https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/)
- [Binary Search](https://leetcode.com/problems/binary-search/)

## Medium

- [Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)
- [Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/)
- [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)
- [Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/)
- [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)
- [Find Peak Element](https://leetcode.com/problems/find-peak-element/)
- [Find Right Interval](https://leetcode.com/problems/find-right-interval/)
- [Reach a Number](https://leetcode.com/problems/reach-a-number/)
- [Maximum Value at a Given Index in a Bounded Array](https://leetcode.com/problems/maximum-value-at-a-given-index-in-a-bounded-array/)
- [Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/)
- [Minimum Absolute Sum Difference](https://leetcode.com/problems/minimum-absolute-sum-difference/)
- [Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)
- [Find a Peak Element II](https://leetcode.com/problems/find-a-peak-element-ii/)
- [Frequency of the Most Frequent Element](https://leetcode.com/problems/frequency-of-the-most-frequent-element/)
- [Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)
- [Capacity To Ship Packages Within D Days](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/)
- [4 Sum](https://leetcode.com/problems/4sum/)

## Hard

- [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)
- [Find Minimum in Rotated Sorted Array II](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/)
- [Aggressive cows](https://www.spoj.com/problems/AGGRCOW/)
- [Book allocation](https://www.geeksforgeeks.org/allocate-minimum-number-pages/)
- [Split Array Largest Sum](https://leetcode.com/problems/split-array-largest-sum/)
- [Find in Mountain Array](https://leetcode.com/problems/find-in-mountain-array/)
- [Count smaller number after Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/)
- [Divide Chocolate Problem](https://curiouschild.github.io/leetcode/2019/06/21/divide-chocolate.html)
