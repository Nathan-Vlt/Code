#include <iostream>
using namespace std;

int main()
{ int a(25), b(45);
cout << " a vaut : " << a << " et b vaut " << b << endl;
a = b;
cout << " affectation ! "<< " desormais a vaut : " << a << " et b vaut toujours " << b << endl;

return 0;
}
