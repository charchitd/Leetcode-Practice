#include <iostream>
#include <set>
#include <stack>
#include <map>
#include <string>

using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) 
    {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
       
       // function starts 
        int n = num.size();
        
        stack<char> s;
        
        //store the final string to the stack
        
        for (char x: num)
        {
            while(!s.empty() && k>0 && s.top()>x)
            {
                s.pop();
                k -= 1;
                
                
            }
            
            if (!s.empty() || x!='0')
                s.push(x);
            
        }
        // Now remove the largest element from the top of the stack
        while(!s.empty() && k--)
            s.pop();
        
        if(s.empty())
            return "0";
        
        
    
    // retriving the new string from the stack
    
    while(!s.empty())
    {
        num[n-1] = s.top();
        s.pop();
        n -= 1;
    }
    return num.substr(n);
}
};


// DSA: Stack Data Structure
// Time complexity: O(n)
// Space : O(n)