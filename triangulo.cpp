#include "triangulo.h"
#include <math.h>

Triangulo::Triangulo(int a, int b, int c){
  Lado1 = a;
  Lado2 = b;
  Lado3 = c;
}
Triangulo::~Triangulo(){}
double Triangulo::area(){
  double p = (Lado1+Lado2+Lado3)/2;
  double areazinha = sqrt(p*(p-Lado1)*(p-Lado2)*(p-Lado3));
  return areazinha;
}
double Triangulo::GetLado1(){
  return Lado1;
}
double Triangulo::GetLado2(){
  return Lado2;
}
double Triangulo::GetLado3(){
  return Lado3;
}
Triangulo::Triangulo operator+(Triangulo t){
  double a = t.GetLado1();
  double b = t.GetLado2();
  double c = t.GetLado3();
  double soma = t.area() + area();
  return soma;
}
