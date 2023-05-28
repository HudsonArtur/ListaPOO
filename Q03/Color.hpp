#ifndef COLOR_HPP
#define COLOR_HPP

class Color{
private:

  float r,g,b; // cores no intervalo 0-255

public:
  // construtor da classe
  // guarda o estado inicial do objeto
  Color(float _r=0, float _g=0, float _b=0);

  ~Color();

  // pares de fun��es get e set
  float getR();
  float getG();
  float getB();
  void setR(float r_);
  void setG(float g_);
  void setB(float b_);

  // retorna um novo individuo de cor igual a media
  // da sua cor com a cor passada como parametro
  Color operator+(const Color c);

  // se for fornecido um dos parentais do individuo
  // a funcao descobre qual eh a cor do outro parental
  Color operator-(const Color c);

  // retorna true se o individuo c possui cor igual
  // ao proprio objeto, e false, caso contrario
  bool operator==(const Color &c);
};

#endif // COLOR_HPP