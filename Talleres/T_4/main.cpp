#include <iostream>
using namespace std;


int menu()
{
    int opcion;
    cout << "MENU" << endl;
    cout << "1. Piramide" << endl;
    cout << "2. Numeros primos" << endl;
    cout << "3. Fibonacci" << endl;
    cout << "4. Salir" << endl;
    cin >> opcion;
    cout << "-----------------" << endl << endl;
    return opcion;
}

void Pyramid() {
    for(int i = 1; i <= 9; i++) {
        for(int j = i; j <= 9; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void Prime(int n)
{
    int i, m=0, flag=0;
    m = n/2;
    for(i = 2; i <= m; i++)
    {
        if(n%i == 0)
        {
            cout<<"Numero no primo"<<endl;
            flag=1;
            break;
        }
    }
    if (flag==0)
        cout << "Numero primo" << endl;

}

void Fibonacci(int longitud)
{
    //Default values: 0,1
    //Long=4 -> 0 1 1 2 3 5
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";
    for (int i = 2; i < longitud+2; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
    
}

int main()
{
    int opcion;
    do
    {
        opcion = menu();
        switch (opcion)
        {
            case 1:
                cout << "Piramide" << endl;
                Pyramid();
                break;
            case 2:
                cout << "Numeros primos" << endl;
                cout << "Ingrese un numero: ";
                int n;
                cin >> n;
                while (n >0)
                {
                    cout << "Numero: " << n << endl;
                    Prime(n);
                    cout << "Ingrese otro numero: ";
                    cin >> n;
                }
                break;
            case 3:
                cout << "Fibonacci" << endl;
                cout << "Ingrese la longitud de la serie: ";
                int longitud;
                cin >> longitud;
                Fibonacci(longitud);
                break;
            case 4:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
                break;
        }

        cout << "-----------------" << endl << endl;

    } while (opcion != 4);
   
    return 0;
}