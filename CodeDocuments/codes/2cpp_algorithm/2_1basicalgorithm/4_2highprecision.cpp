#include <iostream>
#include <vector>

using namespace std;

bool cmp ( vector<int> &A , vector<int> &B )
{
    if ( A.size() < B.size() ) return false ;//不等位数，位大者较大
    if ( A.size() == B.size() )//等位数，从大位开始比较
        for ( int i = A.size() - 1 ; i >= 0 ; i -- )
            if ( A [ i ] > B [ i ] ) return false ;
            else if ( A [ i ] < B [ i ] ) return true ;
    return false ;
}

vector <int> subtract ( vector<int> &A , vector<int> &B )
{
    vector <int> C ;

    for ( int i = 0 , t = 0 ; i < A.size() ; i ++ )
    {
        t = A [ i ] - t ;
        if ( i < B.size() ) t -= B [ i ] ;
        C.push_back( ( t + 10 ) % 10 ) ;//将t与t<0的情况均包含在内
        if ( t < 0 ) t = 1 ;//借位
        else t = 0 ;
    }

    while ( C.size() > 1 && C.back() == 0 ) C.pop_back() ;//除去开头的0

    return C;
}

int main()
{
    string a , b ;
    cin >> a >> b ;

    vector <int> A , B ;
    for ( int i = a.size() - 1 ; i >= 0 ; i -- ) A.push_back( a [ i ] - '0' ) ;
    for ( int i = b.size() - 1 ; i >= 0 ; i -- ) B.push_back( b [ i ] - '0' ) ;

    if ( cmp ( A , B ) ) swap ( A , B ) ;//调整A为较大的数

    auto C = subtract ( A , B ) ;
    for ( int i = C.size() - 1 ; i >= 0 ; i -- ) printf ( "%d" , C [ i ] ) ;

    return 0;
}