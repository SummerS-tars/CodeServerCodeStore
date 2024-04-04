#include <iostream>

using namespace std;

int main()
{
    int L;

    cin >> L ;
    cout << (int)(L / 30.0 * 60.0) << " minutos" << endl ;
    //here the ".0" is important to output the right answer when "L/30" is float
    //and cout will automatically use scientific notation(科学计数法),so plus a (int) to confirm the output to be an integer.
    return 0;
}