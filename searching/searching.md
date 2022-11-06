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
        while (low <= high) {
            auto mid = low+(high- low) / 2;
            if (target < letters[mid]) high = mid-1;
            else low = mid + 1;
        }
        return letters[low];
    }
    ```

- [Find Greatest Letter Smaller Than Target](https://leetcode.com/problems/find-smallest-letter-greater-than-target/)

    ``` cpp
    char nextGreatestLetter(vector<char>& letters, char target) {
      if (letters.back() <= target) return letters.front();
        int low = 0, high = letters.size() - 1;
        while (low <= high) {
            auto mid = low+(high- low) / 2;
            if (target < letters[mid]) high = mid-1;
            else low = mid + 1;
        }
        return letters[high];
    }
    ```

- [Kth Missing Positive Number](https://leetcode.com/problems/kth-missing-positive-number/)

    ```cpp
        // did not use binary search here
    int findKthPositive(vector<int>& arr, int k) {
            int ans=0,n=1;
            while(true){
                if(find(arr.begin(),arr.end(),n)==arr.end()){
                    ++ans;
                    if(ans==k){
                        break;
                    }
                    ++n;
                    
                }else{
                    ++n;
                }
            }
            return n;
        }

        // With use of binary search
    int findKthPositive(vector<int>& arr, int k) {
        int low = 0;
        int high = A.size()-1 ;
        int mid;
        while (low <= high) {
                mid = (low + high) / 2;
                if (A[mid] - (1 + mid) < k)  //A[m]-(m+1)   --> This gives umber of missing number before m'th index
                    low = mid + 1;
                else
                    high = mid-1;
            }
            return low + k;
    }
    
    //Two lines of code fastest
       int findKthPositive(vector<int>& arr, int k) {
            for (auto a : arr) if (a <= k) k++;
            return k;
       }

    ```

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

- Find target element in an infinite sorted array

```cpp
int findingAns(vector<int>& nums,int target){
// first find the range
// first start with box of size 2
int start =0;
int end= 1;

//condition for target to lie in the range
if (target >nums[end]){

    // this like temp
    int newStart = end+1;
    //double the box value
    // end = previous end + size of box * 2
    end=end + (end-start +1)*2;
    // update start
    start = newStart;
}
return binarysearch(nums,target,start,end);

}
int binarysearch(vector<int>& nums,int target,int start, int end){
    while(start<=end){
    int mid = start + (end-start)/2;
        if(target<nums[mid]){
            end=mid-1;
        }else if(target>nums[mid]){
            start=mid+1;
        }else return mid;
    }
    return -1;
}

```

- [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)

```cpp

 int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        while(s<e){
            int mid = s+(e-s)/2;
            if(arr[mid]>arr[mid+1]){
                //you are in dec part of arr
                //arr[mid] is greater and might be a possible ans 
                //this is why e!=arr[mid-1]
                e=mid;
            }else{
                s=mid+1;
            }
            
        }
        return s;
    }
```

- [Count Negative Numbers in a Sorted Matrix](https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/)
- [Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/)
- [Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/)
- [Fair Candy Swap](https://leetcode.com/problems/fair-candy-swap/)
- [Check If N and Its Double Exist](https://leetcode.com/problems/check-if-n-and-its-double-exist/)
- [Special Array With X Elements Greater Than or Equal X](https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/)
- [Binary Search](https://leetcode.com/problems/binary-search/)

## Medium

- [Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)

```cpp

  vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans={-1,-1};
        // check for first occurrence 
        ans[0] = searchUtil(nums,target,true);
        if(ans[0]!=-1)     {
           ans[1]= searchUtil(nums,target,false); 
        }
   
        return ans;
      
    }
    
int searchUtil(vector<int> nums, int target, bool findStartIndex){
    int ans=-1;
         int s=0,e=nums.size()-1;
        
        while(s<=e){
            int mid= s+(e-s)/2;
            if(target<nums[mid]) e=mid-1;
            else if(target>nums[mid])s=mid+1;
            // portential answer is found
            else {
                ans=mid;
                if(findStartIndex){
                    e=mid-1;
                }else{
                    s=mid+1;
                }
            };
        }
        return ans;
    }

```

- [Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/)
- [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)

```cpp

int search(vector<int>& nums, int target) {
        int pivot = findPivot(nums);
        //cout<<"pivot:"<<nums[pivot];
        if(pivot==-1){
            //just do normal binary search
            return binarysearch(nums,target,0,nums.size()-1,true);
        }
        //but if pivot is found then you will have 2 asc sorted arrays
        //3 cases 
        if(nums[pivot]==target)return pivot;
        //if target>start search in s-pivot
        if(target>=nums[0]) {
            return binarysearch(nums,target,0,pivot,true);
        }else{
        return binarysearch(nums,target,pivot+1,nums.size()-1,true);
        }
        
    }
    
    
int findPivot(vector<int>& nums){
int start=0;
int end=nums.size()-1;
while(start<=end){
int mid = start+(end-start)/2;
    
    //4 cases 
    
if(mid<end && nums[mid]>nums[mid+1]){
    cout<<end;
    return mid;
}else if(mid>start && nums[mid]<nums[mid-1]){
        return mid-1;
    }else if(nums[mid]<=nums[start]){
        end=mid-1;
    }else{
        start=mid+1;
    }
}
return -1;
  }
    
int binarysearch(vector<int> &nums,int target,int start, int end,bool isAsc){
while(start<=end){
int mid = start + (end-start)/2;
    
    if(nums[mid]==target)return mid;
    else if(isAsc){
        
         if(target<nums[mid]) end=mid-1;
        else start=mid+1;
            
    }
    else
         {
             if(target>nums[mid]) end=mid-1;
             else start=mid+1;
                
            }
    }
    return -1;
}

```

- [Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/)

```cpp

int findPivot(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // 4 cases

        if (mid < end && nums[mid] > nums[mid + 1])
        {
            cout << end;
            return mid;
        }
        else if (mid > start && nums[mid] < nums[mid - 1])
        {
            return mid - 1;
        }
        else if (nums[mid] == nums[start] && nums[mid] == nums[end])
        {
            // duplicates exist so just skip them
            // but first check if start is the pivot
            if (nums[start] > nums[start + 1])
            {
                return start;
            }
            start++;
            // check is end is pivot
            if (nums[end] > nums[end - 1])
            {
                return end;
            }
            end--;
        }
        else
        {
            if (nums[start] < nums[mid] || (nums[start] == nums[mid] && nums[mid] > nums[end]))
            {
                start = mid + 1;
            }
            else if (nums[start] < nums[mid] || nums[start] == nums[mid] && nums[mid] < nums[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int binarysearch(vector<int> &nums, int target, int start, int end, bool isAsc)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
            return mid;
        else if (isAsc)
        {

            if (target < nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else
        {
            if (target > nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
    }
    return -1;
}

int search(vector<int> &nums, int target)
{
    int pivot = findPivot(nums);
    // cout << "pivot:" << nums[pivot];
    if (pivot == -1)
    {
        // just do normal binary search
        return binarysearch(nums, target, 0, nums.size() - 1, true);
    }
    // but if pivot is found then you will have 2 asc sorted arrays
    // 3 cases
    if (nums[pivot] == target)
        return pivot;
    // if target>start search in s-pivot
    if (target >= nums[0])
    {
        return binarysearch(nums, target, 0, pivot, true);
    }
    else
    {
        return binarysearch(nums, target, pivot + 1, nums.size() - 1, true);
    }
}


```

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

```cpp

int splitArray(vector<int> &nums, int k)
{
    int start = 0;
    int end = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        start = max(start, nums[i]);
        end = end + nums[i];
    }

    // binary search
    while (start < end)
    {
        // try for the mid as potential ans
        int mid = start + (end - start) / 2;

        // calculate in how mnay pieces you can divide this in  with this max sum
        int sum = 0;
        int pieces = 1; // atleast the array can be divided into 1

        for (int num : nums)
        {
            if (sum + num > mid)
            {
                // you cannot add this num in this subarray
                //  assign it to a new sub array, the sum=num
                sum = num;
                // increase pieces by one
                pieces++;
            }else{
                sum+=num;
            }
        }
        if(pieces>m){
            start=mid+1;
        }else{
            end=mid;
        }
    }
    return end; // here start==end
}

```

- [Find in Mountain Array](https://leetcode.com/problems/find-in-mountain-array/)

```cpp

 int findInMountainArray(int target, MountainArray &mountainArr) {
        int s=0,index=-1;
        int e = mountainArr.length()-1;
        int peak = findPeakElement(mountainArr);
        index = binarysearch(mountainArr,target,s,peak,true);
        if(index!=-1){
            return index;
        }
        
        return binarysearch(mountainArr,target,peak+1,e,false);
    }
    
int binarysearch(MountainArray &nums,int target,int start, int end,bool isAsc){
while(start<=end){
int mid = start + (end-start)/2;
    
    if(nums.get(mid)==target)return mid;
    else if(isAsc){
        
         if(target<nums.get(mid)) end=mid-1;
        else start=mid+1;
            
    }
    else
         {
             if(target>nums.get(mid)) end=mid-1;
             else start=mid+1;
                
            }
    }
    return -1;
}
    
    
int findPeakElement(MountainArray& arr) {
int s=0;
int e=arr.length()-1;
while(s<e){
    int mid = s+(e-s)/2;
    if(arr.get(mid)>arr.get(mid+1)){
        //you are in dec part of arr
        //arr[mid] is greater and might be a possible ans 
        //this is why e!=arr[mid-1]
        e=mid;
    }else{
        s=mid+1;
    }

}
return s;
}

```

- [Count smaller number after Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/)
- [Divide Chocolate Problem](https://curiouschild.github.io/leetcode/2019/06/21/divide-chocolate.html)
