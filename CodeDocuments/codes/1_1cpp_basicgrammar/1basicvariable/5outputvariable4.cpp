#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
     float a, b; 
     //"scanf and printf" method will identify the kind of the variables
     
     scanf("%f%f", &a, &b);

     printf("a + b =%.2f\na * b =%.3f\n", a + b, a* b);
     //here we can add ".1" ".2" etc. to "%" and "f" to decide how many decimal places we want

     return 0;
}
//cin and cout are usually slower than scanf and printf