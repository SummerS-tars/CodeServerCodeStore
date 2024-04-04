#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n1 , n2 , n3 , n4 ;

    cin >> n1 >> n2 >> n3 >> n4 ;

    float x =(n1 * 2 + n2 * 3 + n3 * 4 + n4 ) / 10.0 ;
    printf("Media: %.1f\n", x);

    if ( x >= 7.0 ) cout << "Aluno aprovado." << endl ;
    else if ( x < 5.0 ) cout << "Aluno reprovado." << endl;
    else if ( x >= 5.0 && x < 7.0 ) 
    {
        cout << "Aluno em exame." << endl ;
        float y ;
        cin >> y ;
        printf("Nota do exame: %.1f\n", y );
        float z = (x + y ) / 2.0 ;
        if ( z >= 5.0 ) cout << "Aluno aprovado." << endl ;
        else cout << "Aluno reprovado." << endl ;
        printf("Media final: %.1f\n" , z ) ;

         
    }

    return 0;
}