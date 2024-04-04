#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    /*模板：
    for ( int i = 0 ; i < n ; i ++)
    {
        //j的定义
        while ( j < n && check ( i , j ) ) j ++ ;

        //题目具体逻辑
    }*/

    //例如输入一段字符串，有若干单词，以空格隔开，单独每行输出每个的单词
    string a ;
    getline ( cin , a ) ;

    for ( int i = 0 ; i < a.size() ; i ++ )
    {
        int j = i ; 
        while ( j < a.size() && a [ j ] != ' ' )
            j ++ ;
        
        for ( int k = i ; k < j ; k ++ )
            printf ( "%c" , a [ k ] ) ;
        printf ("\n") ;

        i = j ;
    }

    return 0 ;
}