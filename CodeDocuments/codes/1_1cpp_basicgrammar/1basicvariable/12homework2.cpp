//fetch 4 integers,and calculate (A*B-C*D)
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int A, B, C, D;

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    //?how to use "scanf" to reach this effect?
    printf("DEFERENCE = %d",(A * B - C * D));

    return 0;
}