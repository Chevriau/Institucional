#include <iostream>

using namespace std;

int main()
{
    float x;
    cout << "Ingrese la velocidad numericamente en Mts/seg" << endl;
    cin >> x;
    cout << "La velocidad en Kmts/hr es:" << x*3.6 << endl;
    return 0;
}
