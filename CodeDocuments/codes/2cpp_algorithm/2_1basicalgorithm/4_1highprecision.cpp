#include <iostream>
#include <vector>

using namespace std;

vector <int> add ( vector<int> &A , vector<int> &B)//引用避免copy一次，提高效率
{
    vector <int> C ;

    int t = 0 ;
    for ( int i = 0 ; i < A.size() || i < B.size() ; i ++ )
    {
        if ( i < A.size() ) t += A [ i ] ;
        if ( i < B.size() ) t += B [ i ] ;
        C.push_back( t % 10 ) ;
        t /= 10 ;
    }//t存储 进位+当前位的值

    if ( t ) C.push_back( t ) ;
    return C ;
}

int main()
{
    string a , b ;
    vector <int> A , B ;

    cin >> a >> b ;
    for ( int i = a.size() - 1 ; i >= 0 ; i -- ) A.push_back( a[ i ] - '0' ) ;//不要忘记a[ i ]算是char字符类型
    for ( int i = b.size() - 1 ; i >= 0 ; i -- ) B.push_back( b[ i ] - '0' ) ;
    //存入部分

    auto C = add ( A , B ) ;

    for ( int i = C.size() - 1 ; i >= 0 ; i -- ) printf ( "%d" , C [ i ] ) ;

    return 0; 
}