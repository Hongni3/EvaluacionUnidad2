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
