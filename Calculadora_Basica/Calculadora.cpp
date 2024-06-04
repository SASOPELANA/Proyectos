#include <iostream>
using namespace std;
 
int main(){
 
 
  int num1, num2, suma = 0, resta = 0, producto = 0;
  float division = 0;
  int opcion = 0;
 
  cout << endl << "*********************************************" << endl;
  cout << "        --- CALCULADORA BASICA ---" << endl;
  cout << "*********************************************" << endl;
  cout << " " << endl;
 
  cout << "Eliga una opción de las Operaciones Aritméticas Basicas:  " << endl;
  cout << "-- Opcion 1 ---> SUMA --" << endl;
  cout << "-- Opcion 2 ---> RESTA --" << endl;
  cout << "-- Opcion 3 ---> MULTIPLICACIÓN --" << endl;
  cout << "-- Opcion 4 ---> DIVISIÓN --" << endl;
  cin >> opcion;
 
  switch (opcion) {
 
    case 1:
      cout << endl << " -- Suma -- " << endl;
      cout << "Digite un número: " << endl;
      cin >> num1;
      cout << "Digite otro número: " << endl;
      cin >> num2;
      suma = num1 + num2;
      cout << "La suma es: " << suma << endl;
      break;
 
    case 2:
      cout << endl << " -- RESTA -- " << endl;
      cout << "Digite un número: " << endl;
      cin >> num1;
      cout << "Digite otro número: " << endl;
      cin >> num2;
      resta = num1 - num2;
      cout << "La resta es: " << resta << endl;
      break;
 
    case 3:
      cout << endl << " -- MULTIPLICACIÓN -- " << endl;
      cout << "Digite un número: " << endl;
      cin >> num1;                                                     
      cout << "Digite otro número: " << endl;
      cin >> num2;
      producto = num1 * num2;
      cout << "La multiplicación es: " << producto << endl;
      break;
 
    case 4:
      cout << endl << " -- DIVISIÓN -- " << endl;
      cout << "Digite un número: " << endl;
      cin >> num1;                                                     
      cout << "Digite otro número: " << endl;
      cin >> num2;
      division = (float)num1 / num2;
      cout << "La división es: " << division << endl;
      break;
 
    default:
      cout << "Opción no valida." << endl;
      break;
 
  }
 
 
 
  int num, x = 0, resultado = 0;
 
  cout << endl << "-- TABLA DE MULTIPLICAR --" << endl;
 
  cout << "Proporcione el número a multiplicar: " << endl;                     
  cin >> num;
 
  for(x = 1; x <=10;x++){
 
    resultado = x * num;
 
    cout << num << " x " << x << " = " << resultado << endl;
 
  }
 
  cout << endl << "*********************************************" << endl;
  cout << "         --- FIN DEL PROGRAMA ---" << endl;
  cout << "*********************************************" << endl;

  return 0;
}