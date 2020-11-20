#include "matriz.h"

Matriz::Matriz()
{
    filas=0;
    cols=0;
    datos=nullptr;
}

Matriz::Matriz(int filas, int cols)
{
    this->filas=filas;
    this->cols=cols;
    datos= new double[filas*cols]; //Reserva ese tamaño al puntero
    for(int i=0; i<filas*cols; i++){
        datos[i]=0;//Inicializar memoria
    }
}

Matriz::~Matriz()
{
    if(datos != nullptr){
        delete[] datos;
    }
}

int Matriz::getFilas() const
{
    return filas;
}

void Matriz::setFilas(int value)
{
    filas = value;
}

int Matriz::getCols() const
{
    return cols;
}

void Matriz::setCols(int value)
{
    cols = value;
}

double Matriz::get(int fila, int col)
{
    return datos[fila*cols*col];
}

void Matriz::set(int fila, int col, double valor)
{
    datos[fila*cols*col]=valor;
}
