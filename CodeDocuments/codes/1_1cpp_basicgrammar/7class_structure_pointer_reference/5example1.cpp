#include <iostream>

using namespace std;

class Solution 
{
    public :
        int Fibonacci ( int n )
        {
            if ( n == 0 ) return 0 ;
            else if ( n == 1 ) return 1 ;

            return Fibonacci ( n - 1 ) + Fibonacci ( n - 2 ) ;
        }
};

int main ()
{
    int n ;
    cin >> n ;

    Solution _n ;
    cout << _n.Fibonacci ( n ) << endl ;

    return 0;
}