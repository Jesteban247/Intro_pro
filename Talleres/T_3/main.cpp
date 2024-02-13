#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    int cant, mayor = 0, menor = 0;

    // Leer el txt
    ifstream archivo;
    archivo.open("info.txt");
    archivo >> cant;

     for (int i = 0; i < cant; i++)
{
    int numero, it = 0;
    archivo >> numero;

    while (numero != 6174 && it < 8)
    {
        int a = numero / 1000;
        int b = (numero / 100) % 10;
        int c = (numero / 10) % 10;
        int d = numero % 10;

        // Sort the digits in ascending order
        for (int j = 0; j < 3; j++)
        {
            if (a > b) { int temp = a; a = b; b = temp; }
            if (b > c) { int temp = b; b = c; c = temp; }
            if (c > d) { int temp = c; c = d; d = temp; }
        }

        // Rearrange the digits
        int num_menor = a * 1000 + b * 100 + c * 10 + d;
        int num_mayor = d * 1000 + c * 100 + b * 10 + a;

        numero = num_mayor - num_menor;


        it++;
    }

    cout << "Iteraciones: " << it << endl;
}

    return 0;
}
