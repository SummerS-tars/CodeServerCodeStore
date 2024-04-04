#include <iostream>

using namespace std;

int main()
{
    double x , y ;

    cin >> x >> y ;

    /*
    x==0 || y== 0
        x == 0 && y == 0 Origem
        x == 0 Eixo Y
        Eixo X
    x > 0
        y > 0 Q1
        Q4
    (x<0)
        y > 0 Q2
        Q3*/
    if ( x == 0 || y == 0 ) //x == 0 还可以写成 !x
    {
        if ( x == 0 && y == 0 ) cout << "Origem" << endl ;
        else if ( x == 0 ) cout << "Eixo Y" << endl ;
        else cout << "Eixo X" << endl ;

    }
    else
    {
        if ( x > 0 )
        {
            if ( y > 0) cout << "Q1" << endl ;
            else cout << "Q4" << endl ;

        }
        else
        {
            if ( y > 0 ) cout << "Q2" << endl ;
            else cout << "Q3" << endl;

        }

        return 0;
    }
}