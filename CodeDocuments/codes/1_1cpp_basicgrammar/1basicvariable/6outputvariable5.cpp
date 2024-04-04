#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
     char a, b;

     scanf("%c%c", &a, &b);
     //!watch out that "%c" will identify the " "(space),while that "cin" will not
     //+"cin" can be also used with printf

     printf("%c %c\n", a, b);

     return 0;
}
//?kind of different