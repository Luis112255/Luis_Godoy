#include <iostream>

using namespace std;

int main() {
  
  string nombres[] = {"Elvis", "Ruben", "Pedro", "Luis", "Iker"};

 
  cout << "Ingrese un nombre: ";
  string nombre_usuario;
  cin >> nombre_usuario;


  int posicion = -1;
  for (int i = 0; i < sizeof(nombres) / sizeof(nombres[0]); i++) {
    if (nombre_usuario == nombres[i]) {
      posicion = i;
      break;
    }
  }

 
  if (posicion >= 0) {
    cout << "El nombre " << nombre_usuario << " se encuentra en la posición " << posicion << endl;
  } else {
    cout << "El nombre " << nombre_usuario << " no se encuentra en la lista" << endl;
  }

  return 0;
}

