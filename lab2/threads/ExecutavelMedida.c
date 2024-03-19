
#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define Coluna 10
#define Linha 10
#define N_threads Coluna
// DefiniC'C#o da struct
struct Dados
{
  int vetor[Linha];
  int results[Linha];			// Vetor de tamanho 3
  int matriz[Coluna][Linha];	// Matriz 3x3
  int id;
};

void displayVector(int vector[]) {
    int i;
    printf("[ ");
    for (i = 0; i < Linha; ++i) {
        printf("%d ", vector[i]);
    }
    printf("]\n");
}

void FreeVector(int vector[]) {
    int i;
   
    for (i = 0; i < Linha; ++i) {
        vector[i]=0;
    }
    
}

void displayMatrix(int matrix[Coluna][Linha]) {
    
    for (int i = 0; i < Linha; i++) {
        printf("[");
        for (int j = 0; j < Coluna; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("]");
        printf("\n");
    }
}



sem_t mutex;

void *
multiplyMatrixVector (void *add)
{
  struct Dados *dados = (struct Dados *) add;
  int id;
  sem_wait (&mutex);
  id=dados->id;
  dados->id += 1;
  sem_post (&mutex);
  

        for (int j = 0; j < Coluna; ++j) {
            dados ->results[id] += dados-> matriz[j][id] * dados->vetor[j];
        }
    
  
  

}



int
main ()
{
 
  struct Dados dados = {
	.vetor = {1, 2, 3, 4 , 5 ,  6,7,8,9,10},		
	.matriz = {
			   {1, 2, 3,4,5,6,7,8,9,10},		
			   {1, 2, 3,4,5,6,7,8,9,10},		
			   {1, 2, 3,4,5,6,7,8,9,10},
			   {1, 2, 3,4,5,6,7,8,9,10},
			   {1, 2, 3,4,5,6,7,8,9,10},
			   {1, 2, 3,4,5,6,7,8,9,10},
			   {1, 2, 3,4,5,6,7,8,9,10},
			   {1, 2, 3,4,5,6,7,8,9,10},
			   {1, 2, 3,4,5,6,7,8,9,10},
			   {1, 2, 3,4,5,6,7,8,9,10},
			   },
	.id = 0
  };

  pthread_t threads[N_threads];
  sem_init (&mutex, 0, 1);
  
  for(int i = 0 ; i<100;++i){
    dados.id =0;
    FreeVector(dados.results);
  for (int i = 0; i < N_threads; ++i)
	{

	  pthread_create (&threads[i], NULL, multiplyMatrixVector,
					  (void *) &dados);


	}


  for (int i = 0; i < N_threads; ++i)
	{
	  pthread_join (threads[i], NULL);

	}
  }
    printf("vetor:\n");
    displayVector(dados.vetor);
    printf("matriz:\n");
    displayMatrix(dados.matriz);
    printf("resultado:\n");
    displayVector(dados.results);
    



}
