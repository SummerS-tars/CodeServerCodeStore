#include <iostream>
#include <string>

using namespace std;

int main()
{
    //实际上是双指针的应用
    int n ;
    cin >> n;

    for ( int i = 1 ; i <= n ; i ++ ) 
    {
        string s ;
        cin >> s ;

        //第一思路：分块
        string r [ 200 ] ;
        int k = 0 ;
        r [ 0 ] += s [ 0 ] ;
        for ( int j = 1 ; j < s.size() ; j ++ ) 
        {
            if ( s [ j ] == s [ j - 1 ] ) r [ k ] += s [ j ] ;
            else k ++ , r [ k ] += s [ j ] ;
        }
        
        int max = 0 , d = 0 ;
        for ( int j = 0 ; j <= k ; j ++ ) 
            if ( max < r [ j ].size() ) 
                max = r [ j ].size() , d = j ;
        
        cout << r [ d ] [ 0 ] << ' ' << max << endl ;
    }

    return 0;
}