#include <iostream>
#include "Principal.cpp"
using namespace std;

void agregarNota(int nota, char materia[]);
void obtenerPromedio(int nota);
void mostrarNotaMaxMin(int nota);

void agregarNota(){
    if (nota.empty()){
        cout << "No se han registrado Nota"<<endl;
    } else {
        for (int i = 0; i < nota; i++){
            cout << nota.first<< ":"<<nota.second<<endl;
        }
         float promedio = acomulado(notas.begin(), notas.end(), 0.0,
            [](float acumulado, const pair<string, float>& nota) {
                return acumulado + nota.second;
            }) / notas.size();
        cout << "Promedio: " << promedio << endl;
    }
    
}