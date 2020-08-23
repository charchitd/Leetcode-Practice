#include <isostream>


class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
      bool flag = true ;
        int a  = coordinates[0][0] ;
        int b = coordinates[0][1] ;
         int x  = coordinates[1][0] ;
        int y = coordinates[1][1] ;
		
		// condition for slope is inf !
        if(x-a==0){
             for(int i=2 ; i<coordinates.size() ; i++){
            if(coordinates[i][0] == coordinates[0][0]){
              //  cout<<1<<endl;
                continue ;
            }else{
                flag = false ;
                break ;
            }
        }
        }
        else{
        float m = float(y-b)/(x-a) ;
        float c = float(b - m*a) ;
        for(int i=2 ; i<coordinates.size() ; i++){
            if(coordinates[i][1] == m*coordinates[i][0] + c){
              //  cout<<1<<endl;
                continue ;
            }else{
                flag = false ;
                break ;
            }
        }
        }
        return flag ;
    }
};


// DSA:  vector 
// TC: O(log(n))

