class Solution {
public:
    bool isPerfectSquare(int num)
    {
        
        if(num == 0 || num == 1)
            return true;
        
        
        long long int l = 0;
        long long int h = num/2;
        
        while(l<=h)
        {
            long long int m = (l+h)/2;
            
            if ( m*m < num)
                 l = m + 1;
            
           else if(m*m > num)
               h = m - 1;
            
            if(m*m == num)
                return true;
        }
        return false;
    }
        
       
};

// TC: Log(n/2)