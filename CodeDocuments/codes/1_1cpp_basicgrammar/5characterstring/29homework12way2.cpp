#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s , s1 , s2 ;
    getline ( cin , s , ',' ) ;//getline三参数用法（3rd自定义分隔符）
    getline ( cin , s1 , ',' ) ;
    getline ( cin , s2 ) ;
    /*倘若不用这种写法
    可以改成
    string str;
    cin >> str ;

    string s , s1 , s2 ;
    int x = 0 ;
    while ( str [ x ] != ',' ) s += str [ x ++ ] ;
    k ++ ;
    while ( str [ x ] != ',' ) s1 += str [ x ++ ] ;
    k ++ ;
    while ( k < str.size() ) s2 += str [ x ++ ] ;*/

    //双指针遍历,记录最左边s1之后第一位的位置p1与最右s2左侧字符位置p2
    int p1 = -1 , p2 = -1 ;
    for ( int i = 0 ; i < s.size() ; i ++ ) 
    {
        if ( p1 == -1 ) 
        {
            //条件解析：因为只要知道最左边的s1位置即可，所以只需一次赋值
            int j = i ;
            while ( j < s.size() && s [ j ] == s1 [ j - i ] ) 
            {
                j ++ ;

                if ( j - i == s1.size() ) 
                {
                    p1 = j ;

                    break ;
                }
            }
        }
        //p1的确定

        int k = i ;
        while ( k < s.size() && s [ k ] == s2 [ k - i ] )
        {
            k ++ ;

            if ( k - i == s2.size() && i != 0 )
            //条件解析：i不能取0防止越界
                p2 = i - 1 ;
                //此处不用break而可以取到最后一个s2
        }
        //p2的确定
    }
    /*一阶段过渡判断：
    1.如果存在s1,s2则p1,p2必然非-1
    2.根据上述条件第一波筛选
    3.p2 - p1 >= -1才可以继续(s1与s2相接的情况需要注意一下)*/

    if ( p1 == -1 || p2 == -1 ) cout << "-1" << endl ;
    else if ( p2 - p1 < -1 ) cout << "-1" << endl ;
    else cout << p2 - p1 + 1 << endl ;

    return 0;
}