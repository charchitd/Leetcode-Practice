
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) 

    {
     
    	int n = A.size();
    	int max_sum = INT_MIN; // max sum of arr without wrap
    	int min_sum = INT_MAX; // min sum of arr without wrap
    	int arr_sum = 0;  // total sum of an arr
    	int temp_maxSUM = 0; // max sum possible with wrap 
    	int temp_minSUM = 0; // min sum possible with wrap

         
    	for (int i=0; i<n; i++)
    	{
    		arr_sum += A[i];

    		temp_maxSUM += A[i];
    		max_sum = max_sum < temp_maxSUM? temp_maxSUM:max_sum;
    		temp_maxSUM = temp_maxSUM < 0?0:temp_maxSUM;

    		temp_minSUM += A[i];
    		min_sum = min_sum > temp_minSUM? temp_minSUM:min_sum;
    		temp_minSUM = temp_minSUM > 0?0:temp_minSUM;

    	}

    	if (arr_sum == min_sum)
    		return max_sum; // storing minimum possible negative element
    	return max(max_sum, (arr_sum - min_sum));

    }
};


// DSA: Array
// TC: O(N)
