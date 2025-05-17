#include <iostream>
#include <string>
using namespace std;

int Resta (int a, int b){
    cout << "Ingresa el primer numero a restar: ";
    cin >> a;

    cout << "Ingresa el segundo numero a restar: ";
    cin >> b;

    return a - b;
 }
 
int suma (int a, int b) {
    cout << "ingrese el primer numero" << endl;
    cin >> a;
    cout << "ingrese el segundo numero" << endl;
    cin >> b;
    return a + b; 
}

int Multi (int a, int b){
    cout << "Ingresa el primer numero a multiplicar: ";
    cin >> a;
    
    cout << "Ingresa el segundo numero a multiplicar: ";
    cin >> b;
    return a * b;
}
    
int divi (int a, int b){
    cout << "Ingresa el primer numero a dividir: ";
    cin >> a;

    cout << "Ingresa el segundo numero a dividir: ";
    cin >> b;
    return a / b; 
}

int main() {
    cout << "la suma es: " << suma << endl;
    cout << "la resta es: " << Resta << endl;
    cout << "la multiplicacion es: " << Multi << endl;
    cout << "la division es: " << divi<< endl;

    return 0;
}

