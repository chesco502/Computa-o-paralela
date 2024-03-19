1) para um programa generico, a programacao paralela melhoraria seu desempenho nao liniarmente a quantidade de processadores tempo ganhos menos significativos quantos mais processadores sao adicionados.
   O meu programa ja foi feito de forma paralela entao fiz um grafico de desempenho serial e paralelo generico:
   
![Capturar](https://github.com/chesco502/Computa-o-paralela/assets/97119222/9a5b99e2-9b71-4778-917e-a1af3aace3c3)



   

2) Com o intuto de demonstrar o a diferencas de tempo fiz um programa com uma tarefa mais complexa: A multiplicacao de uma matriz 10x10 cem vezes esse programa pode ser encontrado como "MultiplicacaoMedida".
   infelizmente minha maquina pessoal e windows e e imcompativel com pthreds e o ambite aws nao e possivel criar uma maquina virtual com mais que uma cpu no plano free

   ![Capturar](https://github.com/chesco502/Computa-o-paralela/assets/97119222/b8b31b23-ea64-4ca7-af19-c335f81e2dea)


   Quando tento conectar a uma maquina t2.medium(2cpus) esse erro e mostrado
   
   ![Capturar2](https://github.com/chesco502/Computa-o-paralela/assets/97119222/cd8082dc-2b90-4eeb-be21-23344f638658)


   



3)com meus conheciamentos atuais acredito que nao ha um jeito de melhorar o meu algoritmo para obter maior benefício com o paralelismo

