#include <iostream>
using namespace std;

int main() {
    double venta;
    double totalVentas;
    int ventasGrandes;
    char repetir;

    do{
        //reiniciar los valores para una nueva jornada
        totalVentas = 0;
        ventasGrandes = 0;
        
        cout << "======================================\n";
        cout << "          REGISTRO DE VENTAS\n";
        cout << "======================================\n";
        
        //===============================================

        for(int ventaNumero = 1; ventaNumero <= 5; ventaNumero++) {

            cout << "ingrese el valor de la venta "
                 << ventaNumero <<": $";

            cin >> venta;

            // ==================================================
            // CICLO WHILE 

        for(int ventaNumero = 1; ventaNumero <= 5; ventaNumero++) {
            //=======================================

        while ( venta <= 0) {

            cout << "el valor debe ser mayor que$0.\n";

            cout << "ingrese nuevamente la venta: $";
            cin >> venta;


            }
        for(int ventaNumero = 1; ventaNumero <= 5; ventaNumero++) {
            totalVentas = totalVentas + venta;

            //===============================================
            //CONTADOR
            //===============================================

            if (venta > 100000) {
                ventasGrandes++;

                cout << "\n==========================================\n";
                cout << "                  RESUMEN VENTAS\n";
                cout << "============================================\n";

                cout <<"Total vendido: $"
                     <<totalVentas << endl;

                cout << "Ventas superiores a $100.000: "
                     << ventasGrandes << endl;
            }
        }
            }
        }

    }
}
