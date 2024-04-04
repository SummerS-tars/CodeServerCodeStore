#include <iostream>
#include <string>

using namespace std;

int main()
{
    double k ;
    string s1 , s2 ;
    //string在iostream中是有的
    cin >> k >> s1 >> s2 ;

    int sum = 0 ;
    for ( int i = 0 ; i < s1.size() ; i ++ ) 
        if ( s1 [ i ] == s2 [ i ] ) sum ++ ;

    if ( (double)sum/*不要大意了！！*/ / s1.size() < k ) cout << "no" << endl ;
    else cout << "yes" << endl ;

    return 0;
}