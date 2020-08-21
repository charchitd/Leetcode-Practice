
class Solution {
public:
    int firstUniqChar(string s) 
    {
        vector<int>v(26);
        int n = s.size();
        
        for(int i=0;i<n;i++)
            v[s[i]-'a']++;
        
        for(int i=0;i<n;i++)
        {
            if(v[s[i]-'a']==1)
                return i;
        }

    return -1;   
    }
};

// DSA: Vectors 
// TC: O(n) 	n -> string size

