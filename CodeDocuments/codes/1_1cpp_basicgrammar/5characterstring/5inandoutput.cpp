#include <iostream>

using namespace std;

int main()
{
    char str [ 100 ] , str2 [ 100 ] ;

    cin >> str ;

    cout << str << endl ;
    printf ( "%s\n" , str ) ;

    //若要输入一行包含空格的字符串，可以使用fgets,见2

    scanf ( "%s" , str2 ) ;

    puts ( str2 ) ;
    //比较简单的常用函数，等价于下面那句
    printf ( "%s\n" , str2 ) ;

    return 0 ;
}