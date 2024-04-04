#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> divide ( vector<int> &A , int b , int &r)
{
    vector<int> C ;
    r = 0;
    for ( int i = A.size() -1 ; i >= 0 ; i -- )
    {
        r = r * 10 + A [ i ] ;
        C.push_back( r / b ) ;
        r %= b ;
    }//与前三种有所不同的是，除法的商从最高位开始存（包含0），因此需要逆转处理

    reverse( C.begin() , C.end() ) ;
    while ( C.size() > 1 && C.back() == 0 ) C.pop_back() ;    
    return C ;
}

int main()
{
    string a ;
    int b ;
    cin >> a >> b ;

    vector<int> A ;
    for ( int i = a.size() - 1 ; i >= 0 ; i -- )
        A.push_back( a [ i ] ) ;
    
    int r ;
    auto C = divide ( A , b , r ) ;
    for ( int i = C.size() - 1 ; i >= 0 ; i -- )
        printf("%d" , C [ i ] ) ;
    printf("\n%d" , r ) ;
    
    return 0;
}