#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string s1 , s2 ;
    cin >> s1 >> s2 ;
    if ( s1.size() < s2.size() ) swap ( s1 , s2 ) ;

    string a ;
    int i = 0 ;
    for ( char c : s1 ) 
    {
        if ( c == s2 [ i ] ) 
        {
            i ++ ;
            a += c ;
        }
        else
        {
            i = 0 ;
            a = '\0' ;
        }
        
        if ( i == s2.size() ) 
        {
            cout << "true" << endl ;
        
            return 0 ;
        }
    }

    cout << "false" << endl ;

    return 0;
}