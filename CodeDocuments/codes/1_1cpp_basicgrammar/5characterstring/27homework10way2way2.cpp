#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*思路：
    1.输入s1 , s2 , 并将s1 固定为较长串
    2.对s1进行移位
    3.判断s2是否为子串
        1/是 输出true
        2/否 返回2再次执行 至s1长度数后若仍为否进入4
    4.判断为非 输出false
    
    实现方法：
    1.一次移位操作
        way1 分两部分在反过来输出
        way2 从+1开始读入 并在末尾加上首字符(substr)
    2.字串判断
        way1 双指针算法
        way2 枚举对比*/
    
    string s1 , s2 ;
    cin >> s1 >> s2 ;
    if ( s1.size() < s2 .size() ) swap ( s1 , s2 ) ;
    //固定s1为长串
    
    for ( int k = 0 ; k < s1.size() ; k ++ )
    {
        /*way1
        string str1 , str2 ;
        for ( int x = 0 ; x < s1.size() ; x ++ )
            if ( x < k ) str1 += s1 [ x ] ;
            else str2 += s1 [ x ] ;
        
        string s3 ;
        s3 += str2 ;
        s3 += str1 ;
        //用s3表示位移k次后的s1*/

        //way2
        s1 = s1.substr( 1 ) + s1 [ 0 ] ;

        for ( int i = 0 ; i < s1.size() ; i ++ )
        {
            int j = i ;
            while ( j < s1.size() && s1 [ j ] == s2 [ j - i ] )
            //当匹配到s2首字符时开始字典序比较
            {
                j ++ ;
                if ( j - i == s2.size() )
                {
                    cout << "true" << endl ;
                    
                    return 0;
                }
            }
        }
        //运用一个双指针算法判定包含关系存在与否
        //一旦符合就会结束，否则就会运行到输出false
    }
    cout << "false" << endl ;

    return 0;
}