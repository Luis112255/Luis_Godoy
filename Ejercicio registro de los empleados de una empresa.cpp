#include <iostream>
#include <conio.h>

using namespace std;

struct persona {
  char nombre[20];
  int edad;
  double altura;
  char tez[20];
  char nacionalidad[20];
  char genero[20];
};

int main() {
  struct persona persona2[2];

  
  int opcion;
  do {
    cout << "¿Qué datos desea modificar?" << endl;
    cout << "1. Nombre" << endl;
    cout << "2. Edad" << endl;
    cout << "3. Altura" << endl;
    cout << "4. Tez" << endl;
    cout << "5. Nacionalidad" << endl;
    cout << "6. Género" << endl;
    cout << "7. Salir" << endl;
    cin >> opcion;

    
    if (opcion > 0 && opcion < 7) {
      cout << "Ingrese los nuevos datos:" << endl;
      switch (opcion) {
        case 1:
          cin.getline(persona2[0].nombre, 20, '\n');
          break;
        case 2:
          cin >> persona2[0].edad;
          break;
        case 3:
          cin >> persona2[0].altura;
          break;
        case 4:
          cin.getline(persona2[0].tez, 20, '\n');
          break;
        case 5:
          cin.getline(persona2[0].nacionalidad, 20, '\n');
          break;
        case 6:
          cin.getline(persona2[0].genero, 20, '\n');
          break;
      }
    }
  } while (opcion != 7);


  cout << "¿Desea guardar los cambios?" << endl;
  cout << "1. Sí" << endl;
  cout << "2. No" << endl;
  cin >> opcion;

  
  if (opcion == 1) {
    
  }

  getch();
  return 0;
}

