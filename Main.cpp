/*TP 5 Perimetro
Franco Godoy
K1051
27/05/2015 */

#include <iostream>

using namespace std;

int main ();
{
  int nros;
  int num;
  int mayor;
  
  cout << "Ingrese la cantidad de numeros que desea colocar: " ;
  cin >> nros;
  
  for (i=0, i<nros, i=i+1)
  {
    cout << endl << "Ingrese un numero: " << endl;
        cin >> num;
        
         if (num>mayor)
        {
            mayor = num;
        }    
  }
  
  cout << "El mayor valor del conjunto de nros ingresados es:  " << mayor << endl;
  
}
