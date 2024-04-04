#include <iostream>

using namespace std;

int main()
{
    int y ;
    cin >> y;

    if ( y % 4 == 0)
    {
        if ( y % 100 == 0 ) 
        {
            if ( y % 400 == 0 ) cout << "yes" << endl ;
            else cout << "no" << endl ;
        }
        else cout << "yes" << endl ;
    
    }
    else cout << "no" << endl ;

    return 0; 

}