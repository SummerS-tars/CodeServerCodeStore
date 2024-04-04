#include <iostream>

using namespace std;

class Solution
{
    public :
        int sum = 0 ;
        int getSum ( int n ) 
        {
            sum += n ;
            ( n ) && ( getSum ( n - 1 ) ) ;
            //短路操作: only n>0 才会进入后面这一部分

            return sum ;
        }
};