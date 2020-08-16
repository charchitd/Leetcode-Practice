#include <algorithm>
#include <map>
#include <set>
#include <math.h>
#include <iostream>

using namespace std;


    unsigned int findComplement(num) 
    
    {
        unsigned int mask = 2147483648; //maximum binary number possible
        string bin=" ";
        
        // Converting to Binary
        while(mask > 0)
        {
            if( (num & mask) == 0)
                bin += "0";
            else
                bin += "1";
            
            mask = mask >> 1;
        }
        
         //Removing extra zeros from binary representation
        bin=bin.substr(bin.find("1"));
        
          // Complementing bits in Binary representation
        for(int i=0;i<bin.size();i++)
        {
            if(bin[i]=='1')
                bin[i]='0';
            else
                bin[i]='1';
        }

        // Converting Complemented Binary to Decimal
        unsigned int dec_val = 0, base=0;
        
        for(int i=bin.size()-1;i>=0;i--)
        {
            if(bin[i]=='1')
                dec_val += pow(2,base);
            base++;
        }
                       
    return dec_val;    
         
        
    }


int main()
{
	unsigned int num = 22;
	cout << findComplement(num);
	return 0;
}

// DSA:- Bit Manupulation
// Time Complexity : O(1)