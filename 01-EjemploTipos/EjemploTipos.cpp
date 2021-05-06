#include <iostream>
#include <cassert>
using std::string ;
  
  int main () {

  int Entero=-9;
  bool Booleana=true;
  unsigned Unsigned=70;
  char Caracter='a';
  string  Cadena="adios";
  double Doble=3.14;

 assert (Entero==-9);
 assert (Booleana==true);
 assert (Unsigned!=60);
 assert (Caracter!='b');
 assert (Cadena!="hola");
 assert (Doble==3.14);

 }
