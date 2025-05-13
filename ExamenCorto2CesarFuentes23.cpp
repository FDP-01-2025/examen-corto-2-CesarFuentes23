#include <iostream>
using namespace std;
int edad, cliente, plato;
float descuento, precio, total, restante, dinero;
int main()
{
    dinero=7;
    cout << "Ingrese su edad: \n";
    cin >> edad;
    if (edad>= 12)
    {
        cout << "Ingrese que tipo de cliente es para aplicar un descuento especifico en su compra: \n 1. Para Estudiante \n 2. Para Adulto Mayor  \n3 Para Ver todo \n";
        cin >> cliente;
        switch (cliente)
        {
        case 1:
            cout << "Su saldo es de $7\n";
            cout << "Para Estudiante (descuento del 25%):\n 1.Combo Hamburguesa: $8\n 2.Combo Pizza Personal: $7\n 3.AlmuerzoEjecutivo: $10\n";
            cin >> plato;
            switch (plato)
            {
            case 1:
                descuento = (8 / 100) * 25;
                precio = 8 - descuento;
                
                break;
            case 2:
                descuento = (7 / 100) * 25;
                precio = 7 - descuento;
                break;
            case 3:
                descuento = (10 / 100) * 25;
                precio = 10 - descuento;
                break;
            default:
                cout << "Ingrese una opcion valida. Intente de nuevo\n";
                break;
            }
            total = dinero - precio;
            if (total > 0)
            {
                switch (plato)
                {

                case 1:
                    cout << "La compra fue exitosa, usted compro el combo de hamburguesa y tiene un saldo restante de $" << total << "\n";

                case 2:
                    cout << "La compra fue exitosa, usted compro el combo de pizza y tiene un saldo restante de $" << total << "\n";

                    break;
                case 3:
                    cout << "La compra fue exitosa, usted compro el almuerzo ejecutivo y tiene un saldo restante de $" << total << "\n";
                    break;
                }
            }
            else
            {
                restante = total * (-1);
                switch (plato)
                {

                case 1:
                    cout << "No se puede completar la compra, usted ordeno el combo de hamburguesa y le falta $" << restante << "\n";

                case 2:
                    cout << "No se puede completar la compra, usted ordeno el combo de pizza y le falta $" << restante << "\n";

                    break;
                case 3:
                    cout << "No se puede completar la compra, usted ordeno el almuerzo ejecutivo y le falta $" << restante << "\n";
                    break;
                }
            }

            break;
        case 2:
            cout << "Su saldo es de $7\n";
            cout << "Para Adulto Mayor (descuento del 30%): \n 1.Sopa Nutritiva: $6\n 2.Plato Casero: $9\n 3.Postre + Café: $5\n";
            cin >> plato;
            switch (plato)
            {
            case 1:
                descuento = (6 / 100) * 30;
                precio = 6 - descuento;
                break;
            case 2:
                descuento = (9 / 100) * 30;
                precio = 9 - descuento;
                break;
            case 3:
                descuento = (5 / 100) * 30;
                precio = 5 - descuento;
                break;
            default:
                cout << "Ingrese una opcion valida. Intente de nuevo\n";
                break;
            }
            total = dinero - precio;
            if (total > 0)
            {
                switch (plato)
                {

                case 1:
                    cout << "La compra fue exitosa, usted compro la sopa y tiene un saldo restante de $" << total << "\n";

                case 2:
                    cout << "La compra fue exitosa, usted compro el plato casero y tiene un saldo restante de $" << total << "\n";

                    break;
                case 3:
                    cout << "La compra fue exitosa, usted compro el cafe con postre y tiene un saldo restante de $" << total << "\n";
                    break;
                }
            }
            else
            {
                restante = total * (-1);
                switch (plato)
                {

                case 1:
                    cout << "No se puede completar la compra, usted ordeno la sopa y le falta $" << restante << "\n";

                case 2:
                    cout << "No se puede completar la compra, usted ordeno el plato casero y le falta $" << restante << "\n";

                    break;
                case 3:
                    cout << "No se puede completar la compra, usted ordeno el cafe con postre y le falta $" << restante << "\n";
                    break;
                }
            }

            break;
        case 3:
            cout << "Su saldo es de $7\n";
            cout << "Para Estudiante (descuento del 25%):\n 1.Combo Hamburguesa: $8\n 2.Combo Pizza Personal: $7\n 3.AlmuerzoEjecutivo: $10\n";
            cout << "Para Adulto Mayor (descuento del 30%): \n 1.Sopa Nutritiva: $6\n 2.Plato Casero: $9\n 3.Postre + Café: $5\n";
            cin >> plato;
            switch (plato)
            {
            case 1:
                descuento = (8 / 100) * 25;
                precio = 8 - descuento;
                break;
            case 2:
                descuento = (7 / 100) * 25;
                precio = 7 - descuento;
                break;
            case 3:
                descuento = (10 / 100) * 25;
                precio = 10 - descuento;
                break;
            case 4:
                descuento = (6 / 100) * 30;
                precio = 6 - descuento;
                break;
            case 5:
                descuento = (9 / 100) * 30;
                precio = 9 - descuento;
                break;
            case 6:
                descuento = (5 / 100) * 30;
                precio = 5 - descuento;
                break;
            default:
                cout << "Ingrese una opcion valida. Intente de nuevo\n";
                break;
            }
            if (total > 0)
            {
                switch (plato)
                {

                case 1:
                    cout << "La compra fue exitosa, usted compro el combo de hamburguesa y tiene un saldo restante de $" << total << "\n";

                case 2:
                    cout << "La compra fue exitosa, usted compro el combo de pizza y tiene un saldo restante de $" << total << "\n";

                    break;
                case 3:
                    cout << "La compra fue exitosa, usted compro el almuerzo ejecutivo y tiene un saldo restante de $" << total << "\n";
                    break;
                case 4:
                    cout << "La compra fue exitosa, usted compro la sopa y tiene un saldo restante de $" << total << "\n";

                case 5:
                    cout << "La compra fue exitosa, usted compro el plato casero y tiene un saldo restante de $" << total << "\n";

                    break;
                case 6:
                    cout << "La compra fue exitosa, usted compro el cafe con postre y tiene un saldo restante de $" << total << "\n";
                    break;
                }
            }
            else
            {
                restante = total * (-1);
                switch (plato)
                {

                case 1:
                    cout << "No se puede completar la compra, usted ordeno el combo de hamburguesa y le falta $" << restante << "\n";

                case 2:
                    cout << "No se puede completar la compra, usted ordeno el combo de pizza y le falta $" << restante << "\n";

                    break;
                case 3:
                    cout << "No se puede completar la compra, usted ordeno el almuerzo ejecutivo y le falta $" << restante << "\n";
                    break;
                case 4:
                    cout << "No se puede completar la compra, usted ordeno la sopa y le falta $" << restante << "\n";

                case 5:
                    cout << "No se puede completar la compra, usted ordeno el plato casero y le falta $" << restante << "\n";

                    break;
                case 6:
                    cout << "No se puede completar la compra, usted ordeno el cafe con postre y le falta $" << restante << "\n";
                    break;
                }
            }

            break;
        default:
            cout << "Ingrese una opcion valida. Intente de nuevo\n";
            break;
        }
    }

    else
    {
        cout << "No tiene la edad adecuada para comprar en el establecimiento, venga acompañado de una persona mayor\n";
    }

    return 0;
}