//if-else嵌套写法
#include <iostream>

using namespace std;

int main()
{
    int grade ;
    cin >> grade ;

    if ( grade >= 85 ) cout << 'A' << endl ;
    else
    {
        if (grade >= 70 ) cout << 'B' << endl ;
        else
        {
            if ( grade >= 60 ) cout << 'C' << endl ;
            else
            {
                cout << 'D' << endl ;
            }
        }
    }
    return 0;
}