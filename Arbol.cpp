#include <iostream>
using namespace std;

// Estructura del nodo
struct Nodo {
    int dato;
    Nodo* izquierda;
    Nodo* derecha;
};

// Crear un nuevo nodo
Nodo* crearNodo(int valor) {
    Nodo* nuevo = new Nodo();
    nuevo->dato = valor;
    nuevo->izquierda = NULL;
    nuevo->derecha = NULL;
    return nuevo;
}

// Recorrido PREORDEN
void preorden(Nodo* raiz) {
    if (raiz != NULL) {
        cout << raiz->dato << " ";
        preorden(raiz->izquierda);
        preorden(raiz->derecha);
    }
}

// Recorrido INORDEN
void inorden(Nodo* raiz) {
    if (raiz != NULL) {
        inorden(raiz->izquierda);
        cout << raiz->dato << " ";
        inorden(raiz->derecha);
    }
}

// Recorrido POSORDEN
void posorden(Nodo* raiz) {
    if (raiz != NULL) {
        posorden(raiz->izquierda);
        posorden(raiz->derecha);
        cout << raiz->dato << " ";
    }
}

int main() {

    // Crear el árbol binario
    Nodo* raiz = crearNodo(1);

    raiz->izquierda = crearNodo(2);
    raiz->derecha = crearNodo(3);

    raiz->izquierda->izquierda = crearNodo(4);
    raiz->izquierda->derecha = crearNodo(5);

    raiz->derecha->izquierda = crearNodo(6);
    raiz->derecha->derecha = crearNodo(7);

    // Mostrar recorridos
    cout << "RECORRIDO PREORDEN: ";
    preorden(raiz);

    cout << "\nRECORRIDO INORDEN: ";
    inorden(raiz);

    cout << "\nRECORRIDO POSORDEN: ";
    posorden(raiz);

    return 0;
}