#include <iostream>

using namespace std;

class Solution 
{
    public:
        string replaceSpaces(string &str) 
        {
            string restr ;
            for ( char c : str ) 
                if ( c == ' ' ) restr += "%20" ;
                else restr += c ;

            return restr ;
        }
};