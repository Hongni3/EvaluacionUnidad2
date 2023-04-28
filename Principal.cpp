#include <iostream>
using namespace std;
#define MAX 100

int main(int argc, char const *argv[]){

    int materia, nota, promedio, acomulado;
    cout<< "Ingrese la materia:"<<endl;
    cin>> materia;
    cout<< "Ingrese la nota: " <<endl;
    cin>> nota;
    cin>> promedio;
    cin>> acomulado;

    if (nota < 0 || nota > 100){
        cout << "La nota no es valida"<<endl;
    }else
    {
        cout << "Nota agregada correctamente" << endl;
    }
    return 0;
}

int main() {
    float>> notas;
    while (true) {
        cout << "1. Agregar nota" << endl;
        cout << "2. Mostrar notas y promedio" << endl;
        cout << "3. Mostrar nota más alta y más baja" << endl;
        cout << "4. Salir" << endl;
        int opcion;
        cout << "Ingrese una opción: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                 agregarNota();
                break;
            case 2:
                mostrarNotas(notas);
                break;
            case 3:
                mostrarNotaMaxMin(notas);
                break;
            case 4:
                return 0;
            default:
                cout << "Opción no válida" << endl;
                break;
        }
    }
}