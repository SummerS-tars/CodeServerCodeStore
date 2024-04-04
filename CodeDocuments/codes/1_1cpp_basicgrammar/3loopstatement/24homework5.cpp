#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin >> n ;

    int in = 0 , out = 0 ;
    for ( int i = 1 ; i <= n ; i ++ )
    //执行n次可以简化为 while ( n -- )
    {
        int x ;
        cin >> x ;

        if ( x >= 10 && x <= 20 ) in ++ ;
        else out ++ ;
    }

    cout << in << " in" << endl << out << " out" << endl ;

    return 0;
}