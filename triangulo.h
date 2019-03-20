#ifndef TRIANGULO_H
#define TRIANGULO_H
class triangulo{
  private:
    double Lado1;
    double Lado2;
    double Lado3;
  public:
    triangulo(double a, double b, double c);
    ~triangulo();
    double area();
    double GetLado1();
    double GetLado2();
    double GetLado3();
    double operator+(triangulo T);
};
#endif
