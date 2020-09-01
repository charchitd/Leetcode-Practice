#include <isostream>

class Solution {
    

public:
    int singleNonDuplicate(vector<int>& nums) 
    {
      
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);
        
      int h = nums.size() - 1;
      int l = 0;
      int mid;
        
     // boundary case;
        
        if (h==0)
            return nums[0];
        else if (nums[0] != nums[1])
            return nums[0];
        else if (nums[h] != nums[h-1])
            return nums[h];
        
    while(l<=h)
    {
        mid = l+(h-l)/2;
        
        //condition for unique elem
        
        if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid-1])
            return nums[mid];
        
        if(((mid%2)==0 && nums[mid] == nums[mid+1]) || ((mid%2)==1 && nums[mid] == nums[mid-1]))
            l = mid + 1;
    
         else 
             h = mid - 1;
    }
        
       return -1; 
        
        
        }
    
};

// DSA: Binary Search
// TC: log(n)
// Space: O(1)  since, no extra space is being used