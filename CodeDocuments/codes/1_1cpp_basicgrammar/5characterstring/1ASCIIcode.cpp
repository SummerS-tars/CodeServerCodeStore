#include <iostream>
#include <string>

using namespace std;

int main()
{
    for ( int i = 1 ; i <= 127 ; i ++ )
        printf ( "ASCII %d : %c\n" , i , (char) i ) ;

    return 0;
}