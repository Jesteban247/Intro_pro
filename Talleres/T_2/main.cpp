#include <iostream>
using namespace std;

int main() 
{
    int senior, junior, multiple;
    char estado, carro;
    double total, t_senior, t_junior, t_multiple;

    cout << "Bienvenidos al parque del cafe" << endl << endl;
    cout << "Info de pasaportes" << endl;
    cout << "Pasaporte Senior (S)	Mayores de 70 	$48.000" << endl;
    cout << "Pasaporte Junior (J)	Menores de 12	$54.000" << endl;
    cout << "Pasaporte Múltiple (M)	Entre 12 y 70 	$77.000" << endl;
    cout << "-------------------" << endl << endl;
    cout << "Cuantos pasaportes desea comprar?" << endl;

    cout << "Pasaportes senior: ";
    cin >> senior;
    cout << "Pasaportes junior: ";
    cin >> junior;
    cout << "Pasaportes multiple: ";
    cin >> multiple;

    cout << "-------------------" << endl << endl;
    cout << "Resumen de compra" << endl;
    cout << "Pasaportes senior: " << senior << " x $48.000 = " << senior * 48000 << endl;
    cout << "Pasaportes junior: " << junior << " x $54.000 = " << junior * 54000 << endl;
    cout << "Pasaportes multiple: " << multiple << " x $77.000 = " << multiple * 77000 << endl;
    
    //Discounts

    cout << "-------------------" << endl << endl;
    cout << "Eres turista (T) o local (L)?" << endl;
    cin >> estado;

    while (estado != 'T' && estado != 'L')
    {
        cout << "Opcion invalida" << endl;
        cout << "Eres turista (T) o local (L)?" << endl;
        cin >> estado;
    }


    cout << "-------------------" << endl << endl;
    cout << "Se aplican descuentos:" << endl;

    switch (estado)
    {
        case 'T':

            //Senior
            cout << "Para Senior: ";

            if (senior == 0)
            {
                cout << "No hay porque es 0" << endl;
            }

            else if (senior <3)
            {
                cout << "Descuento de 1% por ser turista" << endl;
                t_senior = (senior * 48000) - ((senior * 48000) * 0.01);
            }

            else if (senior >= 3 && senior <= 5)
            {
                cout << "Descuento de 2% por ser turista" << endl;
                t_senior = (senior * 48000) - ((senior * 48000) * 0.02);
            }

            else if (senior > 5)
            {
                cout << "Descuento de 5% por ser turista" << endl;
                t_senior = (senior * 48000) - ((senior * 48000) * 0.05);
            }
            
            //Junior

            cout << "Para Junior: ";
            if (junior == 0)
            {
                cout << "No hay porque es 0" << endl;
            }

            else if (junior <3)
            {
                cout << "Descuento de 2% por ser turista" << endl;
                t_junior = (junior * 54000) - ((junior * 54000) * 0.02);
            }

            else if (junior >= 3 && junior <= 5)
            {
                cout << "Descuento de 3% por ser turista" << endl;
                t_junior = (junior * 54000) - ((junior * 54000) * 0.03);
            }

            else if (junior > 5)
            {
                cout << "Descuento de 7% por ser turista" << endl;
                t_junior = (junior * 54000) - ((junior * 54000) * 0.07);
            }


            //Multiple
            cout << "Para Multiple: ";

            if (multiple == 0)
            {
                cout << "No hay porque es 0" << endl;
            }

            else if (multiple <3)
            {
                cout << "Descuento de 3% por ser turista" << endl;
                t_multiple = (multiple * 77000) - ((multiple * 77000) * 0.03);
            }

            else if (multiple >= 3 && multiple <= 5)
            {
                cout << "Descuento de 4% por ser turista" << endl;
                t_multiple = (multiple * 77000) - ((multiple * 77000) * 0.04);
            }

            else if (multiple > 5)
            {
                cout << "Descuento de 9% por ser turista" << endl;
                t_multiple = (multiple * 77000) - ((multiple * 77000) * 0.09);
            }

            total = t_senior + t_junior + t_multiple;

            break;

        case 'L':

            cout << "Descuento por ser local" << endl;

            //Senior
            cout << "Para Senior: ";

            if (senior == 0)
            {
                cout << "No hay porque es 0" << endl;
            }

            else if (senior <3)
            {
                cout << "No hay descuento por ser local" << endl;
                t_senior = (senior * 48000);
            }

            else if (senior >= 3 && senior <= 5)
            {
                cout << "Descuento de 1% por ser local" << endl;
                t_senior = (senior * 48000) - ((senior * 48000) * 0.01);
            }

            else if (senior > 5)
            {
                cout << "Descuento de 2% por ser local" << endl;
                t_senior = (senior * 48000) - ((senior * 48000) * 0.02);
            }
            
            //Junior
            cout << "Para Junior: ";

            if (junior == 0)
            {
                cout << "No hay porque es 0" << endl;
            }

            else if (junior <3)
            {
                cout << "No hay descuento por ser local" << endl;
                t_junior = (junior * 54000);
            }

            else if (junior >= 3 && junior <= 5)
            {
                cout << "Descuento de 1% por ser local" << endl;
                t_junior = (junior * 54000) - ((junior * 54000) * 0.01);
            }

            else if (junior > 5)
            {
                cout << "Descuento de 2% por ser local" << endl;
                t_junior = (junior * 54000) - ((junior * 54000) * 0.02);
            }


            //Multiple
            cout << "Para Multiple: ";

            if (multiple == 0)
            {
                cout << "No hay porque es 0" << endl;
            }

            else if (multiple <3)
            {
                cout << "Descuento de 1% por ser local" << endl;
                t_multiple = (multiple * 77000) - ((multiple * 77000) * 0.01);
            }

            else if (multiple >= 3 && multiple <= 5)
            {
                cout << "Descuento de 2% por ser local" << endl;
                t_multiple = (multiple * 77000) - ((multiple * 77000) * 0.02);
            }

            else if (multiple > 5)
            {
                cout << "Descuento de 3% por ser local" << endl;
                t_multiple = (multiple * 77000) - ((multiple * 77000) * 0.03);
            }

            total = t_senior + t_junior + t_multiple;

            break;

        default:
            cout << "No hay descuentos" << endl;
            break;
    }

    cout << "-------------------" << endl << endl;
    cout << "Va a ir en carro S/N?" << endl;
    cin >> carro;

    while (carro != 'S' && carro != 'N')
    {
        cout << "Opcion invalida" << endl;
        cout << "Va a ir en carro S/N?" << endl;
        cin >> carro;
    }

    if (carro == 'S')
    {
        cout << "Se suma el valor del parqueadero $5.000" << endl;
        total += 5000;
    }

    else if (carro == 'N')
    {
        cout << "No se suma el valor del parqueadero" << endl;
    }

    cout << "-------------------" << endl << endl;
    cout << "El total a pagar es: " << total << endl;


    return 0;
}
