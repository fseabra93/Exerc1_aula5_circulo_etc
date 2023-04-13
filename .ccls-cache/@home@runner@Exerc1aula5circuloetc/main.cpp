#include <iostream>
#include <string>
#include "myHeader.hpp"
using namespace std;

int main(int argc, char *argv[]) {

  string figura = argv[1];
  if (figura == "circulo"){
    circulo();
  } else if (figura == "retangulo"){
    ret();
  } else if (figura == "triangulo"){
    triang();
  }

}