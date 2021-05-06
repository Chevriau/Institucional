#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    float A, B, C, discriminante, raiz1, raiz2;
    cout << "Ingrese el termino cuadratico A, luego el termino lineal B y por ultimo el termino independiente C." << endl;
    cin >> A >> B >> C;
    discriminante= pow(B, 2)-(4*A*C);
    if (A==0 || discriminante<0)
    {
        cout << "Error: Se ingreso 0 como valor del termino cuadratico A o las raices son complejas." << endl;
    }
    else
    {
        raiz1= (-B + pow (discriminante, (float)1/2)) / (2*A);
        raiz2= (-B - pow (discriminante, (float)1/2)) / (2*A);
        cout << "La raiz 1 es:" << raiz1 << endl << "La raiz 2 es:" << raiz2 <<endl;
    }

    return 0;
}
