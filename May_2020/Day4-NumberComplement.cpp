#include <algorithm>
#include <map>
#include <set>
#include <math.h>
#include <iostream>

using namespace std;


    int findComplement(int num) 
    
    {
        int num_bits = floor(log2(num)) + 1;
        int fn = ((1 << num_bits) - 1);
        return fn ^ num;
        
    }


int main()
{
	int num = 22;
	cout << findComplement(num);
	return 0;
}

// DSA:- Bit Manupulation
// Time Complexity : O(1)