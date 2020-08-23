#include <isostream>


class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
      
      int n = coordinates.size();

      if (n <= 2)
      	return true;

      // for calc slope y2-y1/x2-x1


      float y2,x2,y1,x1;

      y2-y1 = coordinates[1][1] - coordinates[0][1];
      x2-x1 = coordinates[1][0] - coordinates[0][0];

      float slope = (y2-y1)/(x2-x1);

      // for checking same point in slope

      for (i=2; i<=n-1; i++)
      {

      	if(coordinates[i+1][0] - coordinates[i][0] == 0)
      		continue;

      	float new_slope = ( (coordinates[i+1][1] - coordinates[i][1])/ (coordinates[i+1][0] - coordinates[i][0]));

      	if (new_slope != slope)
      	{
      		return false;
      	}
      


      }
        
      return true;  
    }
};


// DSA:  vector 
// TC: O(log(n))

