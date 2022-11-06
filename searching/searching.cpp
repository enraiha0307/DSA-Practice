#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// With Duplicates
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
            }
        }
    }
    return end // here start==end
}

int main()
{
    vector<int> nums = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1};
    cout << "answer is: " << search(nums, 2) << endl;
    return 0;
}
