# Projeto Final tartaruga 
Grupo : Francesco Zangrandi Coppola | TIA:32271697 | RA: 10403340
## OBJETIVOS
1. Executar a metodologia de desenvolvimento em paralelismo;
2. Aplicar estratégias de otimização para programas paralelos;
3. Conhecer as bibliotecas e ferramentas de paralelismo.

## Problema 
Considere o movimento da tartaruga, que começa andando rápido e vai diminuindo a velocidade
com o passar do tempo. Nossa tartaruga imaginária tem o movimento modelado pela série de Taylor
da constante de Euler1
, que pode ser expressa da seguinte forma:

![Capturar](https://github.com/chesco502/Computa-o-paralela/assets/97119222/9b492e45-f226-4ada-b39f-e30f676acb94)

## Projeto
  O projeto consiste em construir uma solução paralela cujo valor de S seja o maior possível, ou seja,
  possua a melhor aproximação para a série de Taylor calculando o valor de e. O grupo deverá
  apresentar os seguintes resultados na entrega:
  1.  O valor de e final calculado;
  2. O tempo T que levou para atingir esse valor.

## Resolucao Dos Problemas Idenficados:
1. ### Como obter  a precisão necessaria pra a representacao de euler?
   + **Com a utilizacao da biblioteca mpfr.h!!** com a bliblioteca pude realizar contas com ponto flutuante com precisoes muito maiores que com o padrao da linguagem C.
2. ### Como implementar o paralelismo?
   + Foi utilizado a blioteca omp.h e tecnicas vistas em aula como por exemplo evitar  condições de corrida.

## Como Executar o codigo 
### Assumindo Ubuntu 22.04 como sistema operacional:
- `sudo apt-get install libmpfr-dev`
- `gcc -o euler euler.c -lmpfr -lgomp -fopenmp`
  



## Resultado:
utilizando a seguinte maquina:
![image](https://github.com/chesco502/Computa-o-paralela/assets/97119222/09c17b45-b985-43a2-9d26-d1d5e8ccff0a)



Obtemos os resultados:
Rodando o codigo com 6 threads 7000000 de iteracoes e uma precisao de 1000 bits obetemos o seguinte resultado !!: 
![Capturar](https://github.com/chesco502/Computa-o-paralela/assets/97119222/bd56a69b-dda0-495f-a7af-3fc31defc774)

Rodando o mesmo  codigo com 1 (basicamente rodando de forma seguencial) podemos ver um grande diferenca de tempo:
![Capturar](https://github.com/chesco502/Computa-o-paralela/assets/97119222/f9ed513f-c8f4-45e1-8ab3-20f1349ff47b)

