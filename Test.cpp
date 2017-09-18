#include <iostream>
#include <math.h>

using namespace std;

void Cientifica(){
  double a = 27200053;
  cout.precision(3);
  cout << a << endl;
}
int Esfera(float radio)
{
  float volumen = (4.0/3.0) *M_PI * pow(radio, 3.0);
  cout<<"El Volumen de la Esfera es : "<<volumen<<endl;
  float area = 4.0 *M_PI * pow(radio, 2.0);
  cout<<"El Area de la Esfera es : "<<area<<endl;
  return 0;
}

int Fahrenheit(float grados)
{
  float fahr = (9.0/5.0 * grados) + 32;
  cout<<grados<<"° Celsius son equivalentes a "<<fahr<<"° Fahrenheit"<<endl;
  return 0;
}

void Convertir(float centimetros)
{
  float milimetros = centimetros*10;
  float metros = centimetros/100;
  float pulgadas= centimetros*0.393701;
  float pies = centimetros*0.0328084;
  cout<<centimetros<<" centimetros = " <<milimetros<<" milimetros\n";
  cout<<centimetros<<" centimetros = " <<metros<<" metros\n";
  cout<<centimetros<<" centimetros = " <<pulgadas<<" pulgadas\n";
  cout<<centimetros<<" centimetros = " <<pies<<" pies\n";
}

int main()
{
  Cientifica();
  float grados, radio, centimetros;
  cout << "5) Ingrese el Radio de la esfera: ";
  cin>>radio;
  Esfera(radio);
  cout << "6) Ingrese la temperatura en grados Celsius: ";
  cin>>grados;
  Fahrenheit(grados);
  cout << "7) Ingrese la cantidad de centimetros: ";
  cin>>centimetros;
  Convertir(centimetros);
  cout<<"a) i= "<<2<<endl;
  cout<<"b) i= "<<1/2<<endl;
  cout<<"c) i= "<<2/4<<endl;
  cout<<"d) i= "<<2.0/4<<endl;
  cout<<"e) x= "<<2.0/4.0<<endl;
  cout<<"f) x= "<<2.0/4<<endl;
  cout<<"g) x= "<<2/4<<endl;
  cout<<"h) x= "<<1/2<<endl;
  return 0;
}
