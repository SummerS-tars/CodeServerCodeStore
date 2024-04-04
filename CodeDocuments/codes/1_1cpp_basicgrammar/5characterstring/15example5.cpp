#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    char change ;
    cin >> str >> change ;

    for ( char &c : str ) 
        if ( c == change ) c = '#' ;
    
    cout << str << endl ;

    return 0;
}