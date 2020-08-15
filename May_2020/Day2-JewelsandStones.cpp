#include<set>
#include<algorithm>
#include<map>

class Solution {
public:
    int numJewelsInStones(string J, string S) 
    {
        int cnt = 0,j,i=0;
        set<char> st;
         
        for (auto x : J)
        {
            st.insert(x);
            
        }
    
        for (i = 0; i < S.size(); i++)
            if(st.count(S[i]))
            {
                cnt++;
            }
    
    return cnt;
    
    }
    
    
    
};


// Time Compl: O(n)
// DSA:- Set function c++ STL 