#include <iostream>
using namespace std;
void digitacion(int numeros[]);
void copia(int numeros[]);
void devolver(int numeros[], double num[]);
void devolver2(int numeros[], double num[]);

int main() {
cout<<"Bienvenido almacenes De Prati\n";
cout<<"Digite diez numeros en el rango de 50 - 100: \n";
int numeros[10];
double num[10];
digitacion(numeros);

return 0;
}

void digitacion(int numeros[]){
  for(int i=0; i<10; i++)
{
    do{
      cout<<"Ingrese el numero["<<(i+1)<<"]: ";
    cin>>numeros[i];
    if (numeros[i]<50 || numeros[i]>100){
      cout<<"Porfavor, Ingrese un numero en el rango de 50-100: \n";
    }
    }
    while (numeros[i]<50 || numeros[i]>100);
}
copia(numeros);
}

void copia(int numeros[]){
  double num[10];
  for(int i=0; i<10; i++)
  {
  num[i]= numeros[i]*0.5;
  }
  devolver(numeros, num);
}


void devolver(int numeros[], double num[])
{
cout<<"================================================\n";
cout<<"Arreglo original\n(";
  for(int i=0; i<10; i++)
  {
      cout<<numeros[i]<<", ";
  }
  cout<<")\n";
  devolver2(numeros, num);
}


void devolver2(int numeros[], double num[])
{
cout<<"Arreglo multiplicado por 0.5\n(";
  for(int i=0; i<10; i++)
  {
      cout<<num[i]<<", ";
  }
  cout<<")";
}

