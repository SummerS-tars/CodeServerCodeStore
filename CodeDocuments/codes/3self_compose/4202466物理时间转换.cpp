#include <iostream>

using namespace std;

int main()
{
    int minute[ 21 ] = { 0 } , second[ 21 ] = { 0 } , rest[ 21 ] = { 0 } ;
    int out1[ 21 ] = { 0 } , out2 [ 21 ] = { 0 } , out3[ 21 ] = { 0 } ;
    float sums[ 21 ] ={ 0 } ;
    int m , s , r ;
    m = s = r = 0 ;

    cout << "format : minute second rest " << endl ;
    for( int i = 0 ; i < 21 ; i ++ )
    {
        cout << "enter the time of the " << i + 1 << "th time gap :" ;
        cin >> minute[ i ] >> second[ i ] >> rest[ i ] ;
        r += rest[ i ] , s += second[ i ] , m += minute[ i ] ;
        s += r / 100 , r %= 100 ;
        m += s / 60 , s %= 60 ;
        out1[ i ] = m , out2[ i ] = s , out3[ i ] = r ;
        sums[ i ] += out1[ i ] * 60 + out2[ i ] + out3[ i ] / 100.0 ;
    }

    for( int i = 0 ; i < 21 ; i ++ )
        printf("%d. %d'%d''%d\t\t%.2f\n" , i + 1 , out1[ i ] , out2[ i ] , out3[ i ] , sums[ i ] ) ;   
    for( int i = 0 ; i < 21 ; i ++ )
        printf("%.2f\n" ,sums[ i ] ) ;   
    return 0;
}