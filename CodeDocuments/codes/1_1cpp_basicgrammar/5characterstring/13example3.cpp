#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t ;
    cin >> t ;

    for ( int i = 1 ; i <= t ; i ++ )
    {
        string s1 , s2 ;
        cin >> s1 >> s2 ;

        //暴力分类比较法
        if ( s1 == "Hunter" ) 
        {
            if ( s2 == "Hunter" ) cout << "Tie" << endl ;
            else if ( s2 == "Bear" ) cout << "Player2" << endl ;
            else cout << "Player1" << endl ;
        }
        else if ( s1 == "Bear" ) 
        {
            if ( s2 == "Hunter" ) cout << "Player1" << endl ;
            else if ( s2 == "Bear" ) cout << "Tie" << endl ;
            else cout << "Player2" << endl ;
        }
        else 
        {
            if ( s2 == "Hunter" ) cout << "Player2" << endl ;
            else if ( s2 == "Bear" ) cout << "Player1" << endl ;
            else cout << "Tie" << endl ;
        }
    }

    return 0;
}