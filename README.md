questão 1
Declaração de variáveis:
	•	a, b, c → vão armazenar os 3 números digitados.
	•	resultado → armazena a soma dos quadrados.
	2.	Entrada de dados:
O comando scanf("%d %d %d", &a, &b, &c); lê três valores inteiros.
	3.	Processamento:
O cálculo (a * a) + (b * b) + (c * c) faz o quadrado de cada número e soma.
	4.	Saída:
printf exibe o resultado final.

questão 2
	•	n → número digitado.
	•	triplo_sucessor → (3 × n) + 1.
	•	dobro_antecessor → (2 × n) - 1.
	•	resultado → soma dos dois valores.
	2.	Entrada:
scanf("%d", &n); lê o número.
	3.	Processamento:
	•	Triplo e depois soma +1 → sucessor.
	•	Dobro e depois subtrai 1 → antecessor.
	•	Soma os dois.
	4.	Saída:
 Mostra os cálculos parciais e o resultado final.

 questão 3
 	Biblioteca <math.h>:
Usada porque precisamos da função sqrt() (raiz quadrada).
	2.	Declaração:
	•	a e b → catetos do triângulo.
	•	h → hipotenusa.
	3.	Entrada:
scanf("%f %f", &a, &b); lê dois valores decimais (float).
	4.	Processamento:
Fórmula de Pitágoras:
h = \sqrt{a^2 + b^2}
	5.	Saída:
printf("Hipotenusa = %.2f\n", h); → mostra resultado com 2 casas decimai
