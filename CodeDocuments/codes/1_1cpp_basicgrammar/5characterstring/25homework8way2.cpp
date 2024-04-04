#include <iostream>
#include <sstream>
//采用stringstream的拆分写法

using namespace std;

int main()
{
    string s ;
    getline ( cin , s ) ;
    if ( s.back() == '.' ) s.pop_back() ;
    /*得到无句号的句子
    其中.back()表字符串的结尾,.pop_back() 表去除字符串末尾的字符
    此处不能直接将末尾改为'\0'，否则最后一个字符串长度依然还是大1(?)*/

    stringstream ssin ( s ) ;

    string a , l ;
    int max = 0 ;
    while ( ssin >> a )
        if ( max < a.size() )
            max = a.size() , l = a ;
    //此处max记录最长单词的长度以用于比较，l为最长单词的字符串

    cout << l << endl ;

    return 0;
}