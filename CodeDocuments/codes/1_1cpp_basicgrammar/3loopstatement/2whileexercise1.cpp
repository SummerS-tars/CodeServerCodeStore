#include <iostream>

using namespace std;

int main ()
{
    int i = 1 , s = 0 ;

    while ( i <= 100 ) 
    {
        s += i * i * i ;
        i ++;

    }

    cout << s << endl ;

    return 0;
    
}