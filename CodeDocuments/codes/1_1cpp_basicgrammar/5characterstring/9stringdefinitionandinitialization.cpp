#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string s1 ;//默认初始化，s1为空字符
    cin >> s1 ;
    //getline ( cin , s1 ) 
    /*不支持使用scanf输入，但可以用printf输出！！！*/

    string s2 = s1 ;
    //可以直接对不同字符串之间进行复制，极大简化操作~

    string s3 = "Hello World!" ;
    //可以用具体的字符串进行初始化

    string s4 ( 10 , '!' ) ;
    //此时s4是cccccccccc

    printf ("%s\n" , s1.c_str()/*调用此函数可以输出存储该字符串的数组*/ );
    puts ( s2.c_str() ) ;
    cout << s3 << endl ;

    string s5 ;
    cout << s4.empty() << endl ;
    cout << s5.empty() << endl ;
    //空字符串则输出true

    cout << s4.size() << endl ;
    cout << strlen( s4.c_str() ) << endl ;
    /*strlen()复杂度为o(n) ,而string.size()复杂度为o(1)
    因为string本身会存字符串的长度*/

    for ( char c : s4 ) cout << c << endl ;
    /*1.char变量类型——也可以写成auto，让编译器自主识别变量类型
    2.s4——数组
    3.c会依次变为s4中的各个元素
    其中如果还想改变一下变量元素的值时：
    再c前加上&
    此时&c和s4完全等价，相当于给s4另外一个命名*/
    return 0;
}