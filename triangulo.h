#ifndef TRIANGULO_H
#define TRIANGULO_H
class Triangulo{
  private:
    double Lado1;
    double Lado2;
    double Lado3;
  public:
    Triangulo(double a, double b, double c);
    ~Triangulo();
    double area();
    double GetLado1();
    double GetLado2();
    double GetLado3();
    Triangulo operator+(Triangulo T);
};
#endif
