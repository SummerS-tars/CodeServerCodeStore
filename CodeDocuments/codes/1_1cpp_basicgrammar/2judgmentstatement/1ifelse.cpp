#include <iostream>

using namespace std;

int main()
{
    int score ; 
    cin >> score ;

    if (score >= 60 )
    {
        cout << "passing" << endl ;
        cout << "good!" << endl ;
    }

    else 
    {
        cout << "not pass" << endl ;
        cout << "keep fighting!" << endl ;
    }

    cout << "over" << endl ;

    return 0;
}