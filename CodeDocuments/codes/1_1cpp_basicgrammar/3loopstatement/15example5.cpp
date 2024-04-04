#include <iostream>

using namespace std;

int main()
{
    /*思路；
    1)for i 1~100 i++ int compare = 0 cin >> x 
    2)if x > compare int d = i
    3)compare = x*/

    int d ;
    for ( int i = 1 , compare = 0 ; i <= 100 ; i ++ )
    {
        int x ;
        cin >> x ;
        if ( x > compare )  d = i , compare = x ;

    }
    cout << d << endl ;

    return 0;
}