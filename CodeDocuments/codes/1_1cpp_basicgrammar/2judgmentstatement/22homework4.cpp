#include <iostream>

using namespace std;

int main()
{
    double a , b , c ;

    cin >> a >> b >> c ;

    /*
    step1 rerank
    n1 n2 n3
    a >= b
        a >= c n1 = a n2 = b n3 =c
        n1 = c n2 = a n3 =b
    else(b > a) 
        b >= c n1 = b n2 =a n3 =c
        n1 = c n2 = a n3 = b
    so we cant get n1 to always be the max
    */
    
    double n1 , n2 , n3 ;

    if ( a >= b ) 
    {
        if ( a >= c ) n1 = a , n2 = b , n3 =c ;
        else n1 = c , n2 = a , n3 = b ;

    }
    else 
    {
        if ( b >= c ) n1 = b , n2 = a , n3 = c ;
        else n1 = c , n2 = a , n3 = b ;

    }
    /*
    if ( b > a )
    {
        double t = a ;
        a = b ;
        b = t ;
    }
    if ( c > a )
    {
        double t = a ;
        a = c ;
        c = t ;
    }
    等效于swap函数的方法，将两个值进行比较，若符合条件则借助中间值进行交换，使a保持为最大值
    */

    if ( n1 >= n2 + n3 ) cout << "NAO FORMA TRIANGULO" << endl ;//其实在"（内部）\n"等效于正在末尾加<< endl
    else 
    {
        /*
        step2 judge the kind
        i think that the most simple method is firstly judge the angle then the line
        */

        if ( n1 * n1 == n2 * n2 + n3 * n3 ) 
        {
            cout << "TRIANGULO RETANGULO" << endl ;
            if ( n2 == n3 ) cout << "TRIANGULO ISOSCELES" << endl ;

        }
        else if ( n1 * n1 > n2 * n2 + n3 * n3 ) 
        {
            cout << "TRIANGULO OBTUSANGULO" << endl ;
            if ( n2 == n3 ) cout << "TRIANGULO ISOSCELES" << endl ;

        }
        else 
        {
            cout << "TRIANGULO ACUTANGULO" << endl ;
            if ( n1 == n2 || n2 == n3 || n1 == n3)
            {
                if ( n1 == n2 && n2 == n3 ) cout <<"TRIANGULO EQUILATERO" << endl ;
                else cout << "TRIANGULO ISOSCELES" << endl ;
            }
        }
    }

    return 0;

}