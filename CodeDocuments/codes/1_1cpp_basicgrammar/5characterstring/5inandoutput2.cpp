//输入一行包含space的字符串
#include <iostream>

using namespace std;

int main()
{
    char str [ 100 ] ;

    fgets ( str , 100 , stdin/*一般是这个，系统中已经定义好的文件*/ ) ;
    //gets函数因不安全渐渐被淘汰
    //注意fgets不会删除行末的enter

    /*getline只可读入到string中（？）*/

    cout << str << endl ;

    string s ;

    getline ( cin , s ) ;

    cout << s << endl ;

    return 0;
}