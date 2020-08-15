#include <map>
#include <algorithm>
#include <set>


class Solution {
public:
    bool canConstruct(string rN, string mag) 
    
    {
        
        multiset<char> s;
        
        
        int l = 0;
        
        for (auto x : mag)
        {
            s.insert(x);
            
        }
    
        for (auto x : rN)
        {
            if (s.count(x))
            {
                s.erase(s.lower_bound(x));
                l++;
            }
        }
        
    return l==rN.size()?true:false;
    
    }
};


// DSA :- MultiSet

// Time compl : Log(n)