Na pasta voce achara o arquivo OpenMP_integral.c, esse e o codigo utilizado para fazer os testes!
Ele recebe o numero de threds como parametro e se vc quiser pode mudar as variaveis a(comeco do intervalo),b(final do intervalo),n (numero de trapezios) pode mudar no codigo!
Para os testes de tempo utilizei 6 threads com as variaveis a=0,b=3.14 e n=1000000!!

![Capturar](https://github.com/chesco502/Computa-o-paralela/assets/97119222/64746830-9f63-4f54-a0eb-82cc587c45d1)

o Arquivo compila !!

1)1. Qual o tempo de execução serial e paralelo para 1, 2, 4, 6 e 8 processadores? Desenhe um gráfico contendo todos os tempos de execução

A)Tempo serial

1-Processador

![Capturar](https://github.com/chesco502/Computa-o-paralela/assets/97119222/ace05c3c-b6f7-4deb-8059-390b4a7c930d)

2-Processadores
      
![Capturar](https://github.com/chesco502/Computa-o-paralela/assets/97119222/ace05c3c-b6f7-4deb-8059-390b4a7c930d)

3-Processadores
      
![Capturar2](https://github.com/chesco502/Computa-o-paralela/assets/97119222/eb493796-4107-462e-b140-07d917110970)

4-Processadores
      
![image](https://github.com/chesco502/Computa-o-paralela/assets/97119222/f79d8c0d-d762-4c58-8549-33374c1362ce)


6-Processadores
      
![Capturar4](https://github.com/chesco502/Computa-o-paralela/assets/97119222/57973896-766f-4f90-a750-c494d39dd27f)

8-Processadores
      
![Capturar5](https://github.com/chesco502/Computa-o-paralela/assets/97119222/6daa4d60-c965-40c1-a00e-1080a0a971cc)

Como esperado obtivemos o tempos similares nos 5 testes 

Grafico:

![Capturar](https://github.com/chesco502/Computa-o-paralela/assets/97119222/8a089280-4f56-4a14-ba00-c9daafbc1e99)


B)Tempo serial
1-Processador
      
![Capturar](https://github.com/chesco502/Computa-o-paralela/assets/97119222/851e78a5-df2e-4953-9d78-aa2fba5e4901)


2-Processadores
      
![Capturar](https://github.com/chesco502/Computa-o-paralela/assets/97119222/b11b02ac-61dc-4171-a02b-96fe39ceb0f6)



4-Processadores
      
![Capturar](https://github.com/chesco502/Computa-o-paralela/assets/97119222/55f9f6c6-e796-44bc-86c6-dfe3e45e95be)




6-Processadores

      
![Capturar](https://github.com/chesco502/Computa-o-paralela/assets/97119222/a67ffa39-f723-4055-a247-4121f75d3d38)



8-Processadores
      
![Capturar5](https://github.com/chesco502/Computa-o-paralela/assets/97119222/f4e2fafa-9514-4394-9be3-e6766281deb7)

Como podemos ver temos uma melhora de 1 ate 6 processadores porem uma piora no teste com 8 porvavelmente por alguma anomalia.

Grafico:

![Capturar](https://github.com/chesco502/Computa-o-paralela/assets/97119222/263d177c-7cf7-4936-90d4-9781102fbd72)


      








