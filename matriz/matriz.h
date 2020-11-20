#ifndef MATRIZ_H
#define MATRIZ_H


class Matriz
{
public:
    Matriz();
    Matriz(int filas, int cols);
    ~Matriz();

    int getFilas() const;
    void setFilas(int value);

    int getCols() const;
    void setCols(int value);

    double get(int fila, int col);
    void set(int fila, int col, double valor);
private:
    int filas,cols;
    double* datos; //Reservar memoria dinámica

};

#endif // MATRIZ_H
