#include <cmath>
#include "myHeader.hpp"
#define PI 3.14
using namespace std;


void circulo(){
  float raio;
  cout << "Digite o valor do Raio: ";
  cin >> raio;
  float area = pow(raio, 2) * PI;
  cout << "A área do círculo é " << area << endl;
}

void ret(){
float base, altura;
  cout << "Digite o valor da base: ";
  cin >> base;
  cout << "Digite o valor da altura: ";
  cin >> altura;
  float area = base*altura;
  cout << "A área do retângulo é " << area << endl;
}

void triang(){
  float base, altura;
  cout << "Digite o valor da base: ";
  cin >> base;
  cout << "Digite o valor da altura: ";
  cin >> altura;
  float area = (base*altura)/2;
  cout << "A área do triângulo é " << area << endl;
}