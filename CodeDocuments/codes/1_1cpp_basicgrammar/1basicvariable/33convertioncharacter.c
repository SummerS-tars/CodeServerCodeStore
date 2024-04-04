#include <stdio.h>

int main()
{
    printf("响铃 \a\n") ;
    printf("退格 1234\b5\n") ;//去掉上一个字符
    printf("                       回车符 \r你好（编码在回车符之后）\n") ;//会对之前的字符进行掩盖
    printf("水平制表符 1\t1（在1之间）\n") ;
    printf("反斜杠 \\\n") ;
    printf("单引号 \'\n") ;
    printf("双引号 \"\n") ;
    printf("百分号 %%\n") ;//用于输出%
    
    return 0;
}