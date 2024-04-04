#include <iostream>

using namespace std;

int main()
{
    for ( int i = 1 ; i <= 1000 ; i ++ )
    {
        bool p = true ;
        for ( int k = 2 ; k < i ; k ++ )
        {
            if ( i % k == 0 ) 
            {
                p = false ;
                break;
            }
        }

        if (p) cout << i << " " ;
    }

    return 0;
}
