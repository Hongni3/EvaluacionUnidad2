#include <iostream>
#include "Principal.cpp"
using namespace std;

void agregarNota(int nota, char materia[], int promedio);
void mostrarNotaMaxMin(int nota);

void agregarNota(){
    if (nota.empty()){
        cout << "No se han registrado Nota"<<endl;
    } else {
        for (int i = 0; i < nota; i++){
            cout << nota.first<< ":"<<nota.second<<endl;
        }
        float promedio = accumulate(notas.begin(), notas.end(), 0.0,
        [](float acumulado, const pair<string, float>& nota){
            return acumulado + nota.second;
        }) / notas.size();
        cout << "Promedio: " << promedio << endl;
}
}

void mostrarNotaMaxMin(int nota){
    if (notas.empty()) {
        cout << "No se registraron las notas aun" << endl;
    } else {
        auto notas_extremas = minMaxElement(notas.begin(), notas.end(),
            [](const pair<string, float>& nota1, const pair<string, float>& nota2) {
                return nota1.second < nota2.second;
            });
        cout << "Nota más alta: " << notas_extremas.second->second << endl;
        cout << "Nota más baja: " << notas_extremas.first->second << endl;
    }
}