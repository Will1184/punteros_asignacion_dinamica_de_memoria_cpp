#include <iostream>

using namespace std;
int main() {
	int numero = 123;
	int *puntero = &numero;
    int *puntero_ent;
    
    cout << "Valor asignado: " << puntero << endl;
    puntero_ent = new int;  
    cout << "Valor asignado dinamicamente: " << *puntero_ent << endl;
	cout << "Valor asignado dinamicamente antes de darle valor: " << puntero_ent << endl;
    
	*puntero_ent = numero;  
    cout << "Valor asignado dinamicamente: " << *puntero_ent << endl;
    cout << "Valor asignado dinamicamente: " << puntero_ent << endl;

    delete puntero_ent;  

    return 0;
}
