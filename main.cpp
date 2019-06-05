#include <iostream>

int main() {
    using namespace std;

    int n;
    double fact = 1;

    cout << "Introduce un numero entero: " << endl;
    cin >> n;

    for(int i = 0; i < n; i++){
        fact *= (n - i);
    }

    cout << fact << endl;

    return 0;
}