#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
 
int main(){
 
  int cantidad;
  string producto;
  float precio_unidad = 0, total_descuento = 0, porcentaje_descuento;
  float iva = 21, impuestoIva = 0;
  float total_pagar = 0, precio_anterior = 0;
  float descuento_porcentaje = 0, descuento_con_por = 0, porcentaje_primero = 0;
 
  cout << " *** TIENDA MANIA *** " << endl;
  cout << endl << "Ingrese la cantidad de producto: " << endl;
  cin >> cantidad;
  cout << "Ingrese el nombre del producto: " << endl;
  cin >> producto;
  cout << "Ingrese el precio Unitario: $ " ;
  cin >> precio_unidad;
 
  total_pagar = cantidad * precio_unidad;
  precio_anterior = total_pagar;
 
 
  if (cantidad > 0 && cantidad >= 6 && cantidad <= 12){
    porcentaje_primero = 10;
    descuento_porcentaje = 10;
    total_pagar = cantidad * precio_unidad;
    precio_anterior = total_pagar;
    descuento_porcentaje = (total_pagar * descuento_porcentaje) / 100;
    descuento_con_por = total_pagar - descuento_porcentaje;
    impuestoIva = (descuento_con_por * iva) / 100;
    total_pagar = impuestoIva + descuento_con_por;

  }else if(cantidad >= 13){
    porcentaje_primero = 15;
    descuento_porcentaje = 15;
    total_pagar = cantidad * precio_unidad;
    precio_anterior = total_pagar;
    descuento_porcentaje = (total_pagar * descuento_porcentaje) / 100;
    descuento_con_por = total_pagar - descuento_porcentaje;
    impuestoIva = (descuento_con_por * iva) / 100;
    total_pagar = impuestoIva + descuento_con_por;
  }else{
    impuestoIva = (total_pagar * iva) / 100;
    total_pagar = impuestoIva + total_pagar;
  }
 
    cout << endl << "*********************************************" << endl;
    cout << "   ** FACTURAS DE COMPRAS DE PRODUCTOS **" << endl;
    cout << "*********************************************" << endl;
    cout << endl << "----------------------------------------------------" << endl;
    cout << "Cantidad | Producto        | Precio Unit. | Total" << endl;
    cout << "----------------------------------------------------" << endl;

    cout << fixed << setprecision(2);
    cout << setw(8) << left << cantidad << " | ";
    cout << setw(15) << left << producto << " | ";
    cout << setw(7) << left << "$ " << precio_unidad << " | ";
    cout << "$ " << precio_anterior << endl;
    cout << "----------------------------------------------------" << endl;
    
    cout << "                               Total      | $ " << precio_anterior << endl;
    if (cantidad > 5){
        cout << "                               Desc." << setprecision(0)<< porcentaje_primero << "%   | $ " << setprecision(2)<< descuento_porcentaje << endl;
    }else{
        cout << "                               Desc." << setprecision(2)<< porcentaje_primero << "% | $ " << setprecision(2)<< descuento_porcentaje << endl;
    }
    
    cout << "                               Total-Desc | $ " << descuento_con_por << endl;
    cout << "                               I.V.A 21%  | $ " << impuestoIva << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "                           Total a Pagar  | $ " << total_pagar << endl;
    cout << "----------------------------------------------------" << endl;

    cout << endl << "Programador: Sergio Alejandro Sopelana" << endl;
    cout << "Fecha: 04 de Junio de 2024" << endl;
  return 0;
}