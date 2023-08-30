#include <iostream>

using namespace std;

int main() {
  string palabra;

  cout << "Ingrese una cadena de palabras" << endl;
  getline(cin, palabra);

  int longitud = palabra.length();
  if (longitud > 10) {
    cout << palabra << " supera los 10 caracteres con exactamente " << longitud << " caracteres" << endl;
  }

  return 0;
}

