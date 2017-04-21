// Fila circular
#ifndef FILA_H
#define FILA_H

template <class T>
class Fila{
	private:
		T *vetor;
		int primeiro, ultimo, tam, numElementos;
	public:
		Fila(int);				// construtor
		bool vazia();			// verifica se est� vazia
		bool cheia();			// verifica se est� cheia
		bool insere(T);			// insere elemento no fim
		bool remove();			// remove primeiro elemento
		T primeiroElem();		// retorna o valor do primeiro elemento
		int getTam();			// retorna o tamanho m�ximo da fila
		int getNumElementos();	// retorna o numero de elementos atualmente na fila
		T operator[](int);		// retorna o i-�simo elemento da fila (come�ando por 0)
};

#endif
