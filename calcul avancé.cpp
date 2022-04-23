#include <iostream>
using namespace std;

int main()
{
   int a(0), b(0), c(0);

   cout << "Bienvenue dans le programme de calcul !" << endl;

   cout << "Donnez une valeur pour a : "; 
   cin >> a;

   cout << "Donnez une valeur pour b : "; 
   cin >> b;

    cout << "Donnez une valeur pour c : "; 
    cin>> c;

   int const resultat(a % b + c); 
   cout << a << " / " << b << " + " << c << " = " << resultat << endl;
   
   return 0;
}