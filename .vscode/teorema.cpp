#include<iostream>

using namespace std;

long factorial(int);
void teorema1();
void teorema2();
void teorema3();
void teorema4();
void teorema5();
void teorema6();

int main() {
    int opcion;
    do {
        cout << "\n\n|---------- Menu ----------|\n\n1. Teorema 1\n2. Teorema 2\n3. Teorema 3\n4. Teorema 4\n5. Teorema 5\n6. Teorema 6\n0. Salir\n";
        
        cout << "\nSelecciona un opcion: ";
        cin >> opcion;
        system("cls");

        switch (opcion) {
            case 1:
                teorema1();
                system("pause");
                system("cls");
                break;
            
            case 2:
                teorema2();
                system("pause");
                system("cls");
                break;
            
             case 3:
                teorema3();
                system("pause");
                system("cls");
                break;
            
            case 4:
                teorema4();
                system("pause");
                system("cls");
                break;

            case 5:
                teorema5();
                system("pause");
                system("cls");
                break;
            
            case 6:
                teorema6();
                system("pause");
                system("cls");
                break;

            case 0:
                break;
            
            default:
                cout << "\nLa opcion ingresada no es valida\n";
                system("cls");
                break;
            }
        }while(opcion != 0);
    
}

long factorial(int n) {
    if (n != 0) return n*factorial(n-1);
    return 1;
}

void teorema1() {
    int n = 0;
    long ans = 0;
    
    cout << "\n|----- PERMUTACIONES n OBJETOS DISTINTOS -----|\n";
    
    cout << "\nIngresa el valor de n(cantidad de objetos a permutar): ";
    cin >> n;

    ans = factorial(n);

    cout << "\nEl numero de permutaciones de " << n << " objetos es: " << ans << "\n\n";
}

void teorema2() {
    int n = 0, r = 0; 
    long ans = 0;

    cout << "\n|----- PERMUTACIONES DE n OBJETOS DISTINTOS TOMADOS DE r A LA VEZ -----|\n";

    cout << "\nIngresa el valor de n(cantidad de objetos a permutar): ";
    cin >> n;

    cout << "\nIngresa el valor de r(grupos): ";
    cin >> r;

    ans = factorial(n)/factorial(n-r);

    cout << "\nEl numero de permutaciones de " << n << " objetos tomados de " << r << " a la vez es: " << ans << "\n\n";
}

void teorema3() {
    int n = 0; 
    long ans = 0;

    cout << "\n|----- PERMUTACIONES DE n OBJETOS ordenados en un circulo -----|\n";

    cout << "\nIngresa el valor de n(cantidad de objetos a permutar): ";
    cin >> n;

    ans = factorial(n-1);

    cout << "\nEl numero de permutaciones de " << n << " objetos ordenados en un círculo es " << ans << "\n\n";
}

void teorema4() {
    int n = 0, i = 0, clases = 0, valorClase = 0; 
    long ans = 0;

    cout << "\n|----- PERMUTACIONES distintas de n OBJETOS en el que n1 son de una clase, n2 de una segunda clase,..., nk de una k-esima clase -----|\n";

    cout << "\nIngresa el valor de n(cantidad de objetos a permutar): ";
    cin >> n;

    cout << "\nIngresa el numero de clases: ";
    cin >> clases;

    ans = factorial(n);
    for (i = 0; i < clases; i++) {
        cout << "\nValor clase " << i+1 << ": ";
        cin >> valorClase;

        ans = ans * 1/factorial(valorClase);
    }

    cout << "\nEl numero de permutaciones de " << n << " objetos tomados en nk clases son: " << ans << "\n\n";
}

void teorema5() {
    int n = 0, i = 0, r = 0, sumaCeldas = 0; 
    long ans = 0;

    cout << "\n|----- El numero de formas de partir cun conjunto de n objetos en r celdas -----|\n";

    cout << "\nIngresa el valor de n(cantidad de objetos a partir): ";
    cin >> n;

    do {
        cout << "\nIngresa el numero de celdas: donde n1 + n2 + ... + nr = n : ";
        cin >> r;

        int celdas[r];
        sumaCeldas = 0;
        for (i = 0; i < r; i++) {
            cout << "\nValor celda " << i+1 << ": ";
            cin >> celdas[i];

            sumaCeldas += celdas[i];
        }

        if (sumaCeldas == n) {
            ans = factorial(n);
            for (i = 0; i < r; i++) 
                ans = ans * 1/factorial(celdas[i]);
    
            cout << "\nEl numero de formas de partir un conjunto " << n << " objetos tomados en r celdas es: " << ans << "\n\n";
        }

        else {
            cout << "\nNo se satisface la condicion de que n1 + n2 + ... + nr = n" << "\n\n";
        }

    }while(sumaCeldas != n);
}

void teorema6() {
    int n = 0, r = 0; 
    long ans = 0;

    cout << "\n|----- COMBINACIONES de n OBJETOS distintos tomados de r a la ves -----|\n";

    cout << "\nIngresa el valor de n(cantidad de objetos a permutar): ";
    cin >> n;

    cout << "\nIngresa el valor de r: ";
    cin >> r;

    ans = factorial(n) / (factorial(r) * factorial(n-r));
    
    cout << "\nEl numero de combinaciones de " << n << " objetos tomados en " << r << " es: " << ans << "\n\n";
}
