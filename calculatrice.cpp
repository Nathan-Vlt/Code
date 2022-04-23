#include <iostream>
using namespace std;

int main()
{
    double a(0), b(0);
    cout << " Bienvenue sur la calculatrice " << endl;
    cout << " donnez une valeur pour a " << endl;
    cin >> a;
    cout << " et maintenant pour le b " << endl;
    cin >> b;
    cout << " bien maintenant voyons les resultats de votre addition " << endl;
    double const resultat (a + b);
    cout << a << " + " << b << " = " << resultat << endl;
    return 0;
}
