#include <iostream>

using namespace std;

int main()
{
    int a , b ,c, d ,e , f ;
    cin >> a >> b >> c >> d >> e >> f ;

    if (a > b && (c < d || !(e == f))) cout << "good" << endl ;
    else cout << "shit" << endl ;

    return 0;

}
//tip: we can simplify "a % b !=" 0 to "a % b"