#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
     int a, b; 
     
     scanf("%d%d", &a, &b);
     //"%d" integer(整数)
     //"%f" get float variable
     //"%c" get char variable
     //"&" take address symbol(取地址符号)
     //!dont leave above things out
     //scanf's function is identifying what we input to define the "a" and "b" 

     printf("a + b =%d\na * b =%d\n", a + b, a * b);
     //+advantage:formatted(格式化的) information output
     return 0;
}
//the use of printf
//scanf and printf are in cstdio