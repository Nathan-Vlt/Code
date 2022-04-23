#include <ioStream>
using namespace std;
int main ()
{
    int nbBalles (1);

    switch (nbBalles)
    {
        case 0:
        cout << " Pas de balles pour vous " << endl; 
        break;

         case 1:
        cout << " Seulement 1 balle pas assez " << endl; 
        break;

         case 2:
        cout << " Nombre parfait de balles " << endl; 
        break;

         default:
        cout << " trop de balles " << endl;
        break; 
    }

    return 0;
    }

