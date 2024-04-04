#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str [ 100 ] ;

    fgets ( str , 100 , stdin ) ;

    cout << str << endl ;

    printf ( "LENGTH : %d\n" , strlen(str) ) ;
    /*strlen(str) 
    求字符串str的长度（不包含最后的\0字符）*/

    char s1 [ 100 ] , s2 [ 100 ] ;

    cin >> s1 >> s2 ;

    cout << strcmp ( s1 , s2 ) << endl ;
    /*strcmp(s1 , s2 ) 
    比较两个字符串
    依照顺序为字典序（一一对应）
    比较数值为ASCII码的大小
    s1 < s2 -1
    s1 == s2 0
    s1 > s2 1*/

    char str1 [ 100 ] , str2 [ 100 ] ;

    cin >> str1 ;

    strcpy ( str2 , str1 ) ;
    /*strcpy(str1 , str2)
    将str2复制给str1（后映前）*/

    cout << str2 << endl ;

    return 0;
}