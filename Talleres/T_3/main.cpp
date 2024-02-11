#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    int cant,mayor=0, menor=0;

    // Leer el txt
    ifstream archivo;
    archivo.open("info.txt");
    archivo >> cant;
    for (int i = 0; i < cant; i++)
    {
        int numero, it=0;
        archivo >> numero;
    
        while (numero != 6174 && it < 8)
        {
            int num = numero;
            int digitos[4];
            for (int i = 0; i < 4; i++)
            {
                digitos[i] = num % 10;
                num /= 10;
            }

            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (digitos[j] < digitos[j+1])
                    {
                        int temp = digitos[j];
                        digitos[j] = digitos[j+1];
                        digitos[j+1] = temp;
                    }
                }
            }

            mayor = 0;
            for (int i = 0; i < 4; i++)
            {
                mayor = mayor * 10 + digitos[i];
            }

            menor = 0;
            for (int i = 3; i >= 0; i--)
            {
                menor = menor * 10 + digitos[i];
            }

            numero = mayor - menor;
            //cout << mayor << " - " << menor << " = " << numero << endl;
            it++;
        }

        cout << "Iteraciones: " << it << endl;
    }

    return 0;
}
