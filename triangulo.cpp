#include "triangulo.h"
#include <math.h>

triangulo::triangulo(double a, double b, double c){
  Lado1 = a;
  Lado2 = b;
  Lado3 = c;
}
triangulo::~triangulo(){}
double triangulo::area(){
  double p = (Lado1+Lado2+Lado3)/2;
  double areazinha = sqrt(p*(p-Lado1)*(p-Lado2)*(p-Lado3));
  return areazinha;
}
double triangulo::GetLado1(){
  return Lado1;
}
double triangulo::GetLado2(){
  return Lado2;
}
double triangulo::GetLado3(){
  return Lado3;
}
triangulo triangulo::operator+(triangulo t){
  double soma = area()+t.area();
  return soma;
}
