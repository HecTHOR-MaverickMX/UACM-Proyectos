#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "Por favor, ingrese un número entero positivo." << endl;
        return 1;
    }

    for (int i = 0; i <= n; i++) {
        suma += i;
    }

    cout << "La suma de los primeros " << n << " números naturales es: " << suma << endl;

    return 0;
}