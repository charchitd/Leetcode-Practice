class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) 
    {
       int size = trust.size();
        
        if(size == 1) return trust[0][1];
        if(N==1) return 1;
        
        //Using Map Data Structure
        
        map<int, int> m1;// stores public's data
        map<int, int> m2; // stores town judge data
        
        // Public's loop
        
        for (int i = 0; i <size; i++)
        {
            m1[trust[i][0]]++;
            m2[trust[i][1]]++;
        }
        
        // finding town judge by auto iteration method
        
    for (int i = 1; i<=N; i++ )
    {
        
        auto it1 = m1.find(i);
        
        if(it1 == m1.end())
        {
            auto it2 = m2.find(i);
            
            if(it2 == m2.end())
                
                break;
            
            else if (it2->second == N-1)
                return i;
        }
        
        
        
    } 
        return -1;
    }
};


// DSA: Mapping technique.
// TC: log(n)