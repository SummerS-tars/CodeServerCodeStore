//vector定义以及初始化方式
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a ; //定义长度可变的一维数组a，其中存int类型数据
    vector<double> a1 ; //存double
    vector<int> a2 { 1 , 2 , 3,  4 , 5 } ; //多元素初始化

    vector<int> b ( 10 ) ; //固定长度为10
    vector<int> b1 ( 20 , 1 ) ; //统一初始化

    vector<int> c1 ( a2 ) ;//拷贝初始化
    vector<int> c2 = b1 ;//拷贝初始化

    //二维
    vector<int> d [ 5 ] ; //定义一维固定，二维可变长的二维数组d
    //理解：d [ 0 ] ~ d [ 4 ] 每个都是长度可变的一维数组
    vector<vector<int>> d1 ;//此时定义的就是一维二维均可变的数组
}