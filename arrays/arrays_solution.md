# My Solutions

### Easy
1. [Build Array from Permutation](https://leetcode.com/problems/build-array-from-permutation/)
```
 vector<int> buildArray(vector<int>& nums) {
        int size= nums.size()-1;
        int index=0;
        vector<int> ans;
        for(int i=0;i<=size;i++){
            index=nums[i];
            ans.push_back(nums[index]);
        }
        return ans;
    }
```
2. [Concatenation of Array](https://leetcode.com/problems/concatenation-of-array/)

```
  vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(2*size);
        for(int i = 0;i<size;i++){
            ans[i] = nums[i];
            ans[i+size] = nums[i];
        }
        return ans;
    }

```

3. [Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/)

```
 vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        int size=nums.size();
        vector<int> runningSum;
        for(int i=0;i<size;i++){
            sum+=nums[i];
            runningSum.push_back(sum);
        }
        return runningSum;
    }
```

4. [Richest Customer Wealth](https://leetcode.com/problems/richest-customer-wealth/)

```
 int maximumWealth(vector<vector<int>>& accounts) {
        int row = accounts.size();
        int col = accounts[0].size();
        int maxWealth = 0;
        int sum = 0;
        for(int i=0;i<row;i++){
            sum=0;
            for(int j=0;j<col;j++){
                sum=sum+ accounts[i][j];
            }
            if(sum>=maxWealth){
                maxWealth = sum;
            }
        }
        return maxWealth;
    }
```

5. [Shuffle the Array](https://leetcode.com/problems/shuffle-the-array/)

```
  vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        int j=0;
        for(int i=0;i<nums.size();i=i+2){
            ans[i] = nums[j];
            ans[i+1] = nums[j+n];
            j++;
        }
        return ans;
    }

```
6. [Kids With the Greatest Number of Candies](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/)

```
  vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxCandies= *max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            int partialSum = 0;
            partialSum = candies[i] + extraCandies;
            if(partialSum > maxCandies||partialSum == maxCandies){
                result.push_back(true);
            }else{
                 result.push_back(false);
            }
           
        }
        return result;
    }
```

7. [Number of Good Pairs](https://leetcode.com/problems/number-of-good-pairs/)

```
 int numIdenticalPairs(vector<int>& nums) {
        int pair = 0;
        for (int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    pair++;
                }
            }
        }
        return pair;
    }

```

8. [How Many Numbers Are Smaller Than the Current Number](https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/)

```
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int partialCount=0;
        for(int i=0;i<nums.size();i++){
            partialCount=0;
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    if(nums[j]<nums[i]){
                        partialCount++;
                    }
                }
            }
            ans.push_back(partialCount);
        }
        return ans;
    }

    //Can be optimized
```

9. [Create Target Array in the Given Order](https://leetcode.com/problems/create-target-array-in-the-given-order/)

```
 vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        for(int i=0;i<nums.size();i++){
            int ind = index[i];
            if(ind<i){
                target.insert(target.begin()+ind,nums[i]);
            }else{
                target.push_back(nums[i]);
            }
        }
        return target;
    }
```

10. [Check if the Sentence Is Pangram](https://leetcode.com/problems/check-if-the-sentence-is-pangram/)

```
bool checkIfPangram(string str) {
        int size = str.length();
        cout<<size;
        bool res =true;
        
        for(char ch ='a';ch>='a'&& ch<='z';ch++){
            if(str.find(ch)==std::string::npos){
                return false;
            }
        }
        return res;
    }

```

11. [Count Items Matching a Rule](https://leetcode.com/problems/count-items-matching-a-rule/)

```
int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int row = items.size();
        int col = items.size();
        int ans=0;
        
           if(ruleKey == "type"){
               
               for(int i = 0;i<row;i++){
                   if(items[i][0]==ruleValue){
                       ans++;
                   }
               }
               
           }else if(ruleKey == "color"){
               for(int i = 0;i<row;i++){
                   if(items[i][1]==ruleValue){
                       ans++;
                   }
               }
           }else if(ruleKey == "name"){
               for(int i = 0;i<row;i++){
                   if(items[i][2]==ruleValue){
                       ans++;
                   }
               }
           }
        return ans;
    }

    //can be optimized
```

12. [Find the Highest Altitude](https://leetcode.com/problems/find-the-highest-altitude/)

```
 int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        // cout<<n;
   
        vector<int> arr(n+1);
        // cout<<arr.size();
        arr[0]=0;
        int highest=arr[0];
        for(int i=1;i<arr.size();i++){
            arr[i] = gain[i-1] + arr[i-1];
            // cout<<arr[i]<<" ";
             if(highest<arr[i]){
                highest = arr[i];
            }
        }
        
        return highest;
    }
```

13. [Flipping an Image](https://leetcode.com/problems/flipping-an-image/)

```
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int row = image.size();
        int col = image[0].size();
        cout<<col;
        vector<int> x;
        vector<vector<int>> res;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<< image[i][col-1-j]<<",";
               
                if(image[i][col-1-j]==0){
                     x.push_back(1);
                }else{
                    x.push_back(0);
                }
            }
            res.push_back(x);
            x.clear();
        }
        return res;
}

//can be optimized
```

14. [Cells with Odd Values in a Matrix](https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/)

```

```

15. [Matrix Diagonal Sum](https://leetcode.com/problems/matrix-diagonal-sum/)

```
int diagonalSum(vector<vector<int>>& mat) {
        int d1=0,d2=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(i==j){
                    d1+=mat[i][j];
                }
                
                if(i+j == mat.size()-1 && i!=j){
                d2+=mat[i][j];
                }

                }
        }
        return d1+d2;
    }

```

16. [Find Numbers with Even Number of Digits](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/)

```
 int findNumbers(vector<int>& nums) {
        int count=0;
        for(auto x:nums){
            int digits = log10(x)+1;
            if(digits%2==0){
                count ++;
            }
        }
        return count;
    }
```

17. [Transpose Matrix](https://leetcode.com/problems/transpose-matrix/)
```
 vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans(matrix[0].size(),vector<int>(matrix.size()));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
              ans[j][i]= matrix[i][j];
            }
        }
        return ans;
    }
```
18. [Add to Array-Form of Integer](https://leetcode.com/problems/add-to-array-form-of-integer/)
19. [Maximum Population Year](https://leetcode.com/problems/maximum-population-year/)
20. [Determine Whether Matrix Can Be Obtained By Rotation](https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/)
21. [Two Sum](https://leetcode.com/problems/two-sum/)
```
 vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> res;
        for(int i=0;i<nums.size();i++){
            int complement = target - nums[i];
            
            auto ind = find(nums.begin(),nums.end(),complement);
            if(ind != nums.end() && ind-nums.begin()!=i){
                
                res.push_back(i);
                res.push_back(ind-nums.begin());
                break;
            }

        }
        
        return res;
    }

    Can be optimized using unordered_maps

```
22. [Find N Unique Integers Sum up to Zero](https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/)
```
vector<int> sumZero(int n) {
        vector<int> ans;
        int i=0,j=1;
        if(n&1 && ans.empty()){
            ans.push_back(0);
            --n;
        }
        while(i<n/2){
            ans.push_back(j);
            ans.push_back(-j);
            ++j;
            ++i;
        }
        return ans;
    }
```
23. [Lucky Number In a Matrix](https://leetcode.com/problems/lucky-numbers-in-a-matrix/)
24. [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)
25. [Reshape the Matrix](https://leetcode.com/problems/reshape-the-matrix/)
26. [Plus One](https://leetcode.com/problems/plus-one/)
27. [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)
28. [Minimum Cost to Move Chips to The Same Position](https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/)

### Medium
1. [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)
2. [Spiral Matrix II](https://leetcode.com/problems/spiral-matrix-ii/)
3. [Spiral Matrix III](https://leetcode.com/problems/spiral-matrix-iii/)
4. [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)
5. [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)
6. [Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)
7. [Jump Game](https://leetcode.com/problems/jump-game/)
8. [Rotate Array](https://leetcode.com/problems/rotate-array/)
9. [Sort Colors](https://leetcode.com/problems/sort-colors/)
10. [House Robber](https://leetcode.com/problems/house-robber/)

### Hard
1. [Max Value of Equation](https://leetcode.com/problems/max-value-of-equation/)
2. [First Missing Positive](https://leetcode.com/problems/first-missing-positive/)
3. [Good Array](https://leetcode.com/problems/check-if-it-is-a-good-array/)
