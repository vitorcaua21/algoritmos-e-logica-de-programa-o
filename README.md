questão 1

#include <stdio.h>   // Biblioteca para entrada e saída de dados
Inclui a biblioteca stdio.h, que contém funções padrão de entrada e saída, como printf e scanf.
Sem ela, você não conseguiria imprimir na tela nem ler valores do teclado.

int main() {
Declara a função principal do programa, chamada main.
Todo programa em C começa a execução a partir dela. O int indica que a função vai retornar um número inteiro (normalmente 0 para indicar sucesso).

int a, b, c;          // Variáveis para guardar os 3 números
    int resultado;        // Variável para guardar a soma dos quadrados

 Declara quatro variáveis do tipo inteiro:
	•	a, b, c → vão armazenar os números digitados pelo usuário.
	•	resultado → vai armazenar a soma dos quadrados de a, b e c.

 printf("Digite tres valores inteiros: ");
 Exibe na tela a mensagem “Digite tres valores inteiros: “.
O usuário verá isso como instrução para inserir os números.

scanf("%d %d %d", &a, &b, &c);   // Lê os 3 números digitados
Lê três valores inteiros digitados pelo usuário e armazena em a, b e c.
	•	O "%d" indica que o valor esperado é um inteiro.
	•	O & é necessário porque scanf precisa do endereço de memória da variável para guardar o valor lido.

 resultado = (a * a) + (b * b) + (c * c);  // Calcula a soma dos quadrados
 Calcula a soma dos quadrados dos três números:
	•	a * a é o quadrado de a.
	•	b * b é o quadrado de b.
	•	c * c é o quadrado de c.
	•	O resultado da soma é guardado na variável resultado.

printf("A soma dos quadrados eh: %d\n", resultado); // Mostra o resultado
Exibe na tela a frase: “A soma dos quadrados eh: X”, onde X será substituído pelo valor da variável resultado.
	•	O %d é o especificador de formato usado para imprimir inteiros.
	•	\n serve para pular uma linha após a mensagem.

 return 0;  // Indica que o programa terminou bem
}
Finaliza a função main.
	•	return 0; significa que o programa terminou corretamente (sem erros)

 
questão 2
#include <stdio.h>
Inclui a biblioteca padrão de entrada e saída (stdio.h), necessária para usar printf e scanf.

int main() {
Função principal do programa, onde a execução começa.
O int indica que a função retorna um número inteiro (geralmente 0 para indicar sucesso).

int n, resultado;
Declara duas variáveis inteiras:
	•	n → vai guardar o número digitado pelo usuário.
	•	resultado → vai armazenar o cálculo final.

printf("Digite um numero inteiro: ");
Mostra na tela a mensagem pedindo que o usuário digite um número inteiro.

scanf("%d", &n);   // Lê o número digitado
Lê o número digitado pelo usuário e guarda dentro da variável n.
	•	%d → indica que será lido um número inteiro.
	•	&n → passa o endereço de memória de n, para que scanf consiga armazenar o valor.

// Sucessor do triplo: (3 * n + 1) // Antecessor do dobro: (2 * n - 1)
 •	Sucessor do triplo: pega o triplo de n (3 * n) e soma 1.
	•	Antecessor do dobro: pega o dobro de n (2 * n) e subtrai 1.

resultado = (3 * n + 1) + (2 * n - 1);
Calcula a soma do sucessor do triplo com o antecessor do dobro.
	•	(3 * n + 1) → triplo do número mais 1.
	•	(2 * n - 1) → dobro do número menos 1.
	•	O resultado da soma vai para a variável resultado.

printf("O resultado eh: %d\n", resultado);
Exibe na tela a mensagem: “O resultado eh: X”, onde X será substituído pelo valor da variável resultado.
	•	%d → imprime um valor inteiro.
	•	\n → pula uma linha depois da mensagem.

return 0;
}

Finaliza a função main.
	•	return 0; → significa que o programa terminou com sucesso, sem erros.

 questão 3
 	#include <stdio.h>
#include <math.h>   // Necessário para usar sqrt() (raiz quadrada)
Inclui duas bibliotecas:
	•	stdio.h → para usar printf e scanf.
	•	math.h → para usar funções matemáticas, como sqrt() (raiz quadrada).

int main() {
Início da função principal do programa

 double a, b, hipotenusa;
 Declara três variáveis do tipo double (números reais, com casas decimais):
	•	a → cateto 1 do triângulo.
	•	b → cateto 2.
	•	hipotenusa → resultado da fórmula.

printf("Digite os valores dos catetos a e b: ");
Mostra a mensagem para o usuário digitar os valores dos catetos.

scanf("%lf %lf", &a, &b);   // Lê dois números reais (double)
 Lê dois números do tipo double digitados pelo usuário e armazena em a e b.
	•	%lf → especificador de formato para double.
	•	&a e &b → passam o endereço de memória das variáveis.

hipotenusa = sqrt((a * a) + (b * b));  // Aplica a fórmula: raiz de (a² + b²)
Calcula a hipotenusa pela fórmula do Teorema de Pitágoras:
hipotenusa = \sqrt{a^2 + b^2}
	•	(a * a) → calcula a^2.
	•	(b * b) → calcula b^2.
	•	sqrt(...) → calcula a raiz quadrada da soma.

printf("A hipotenusa eh: %.2lf\n", hipotenusa); // Mostra com 2 casas decimais
 Mostra o valor da hipotenusa na tela.
	•	%.2lf → imprime um número double com 2 casas decimais.
	•	\n → pula uma linha no final.

return 0;
}
 Finaliza o programa e retorna 0, indicando que terminou sem erros.

 questão 4
#include <stdio.h>
Inclui a biblioteca stdio.h, que permite usar funções de entrada e saída, como printf.

int main() {
Início da função principal, onde o programa começa a executar.

double total = 780000.00;   // Valor total do prêmio
    double g1, g2, g3;
Declara as variáveis do tipo double (números reais com casas decimais):
	•	total → recebe o valor fixo do prêmio: R$ 780.000,00.
	•	g1, g2, g3 → vão guardar os valores recebidos pelo primeiro, segundo e terceiro ganhador.

g1 = total * 0.46;          // 46% para o primeiro
 Calcula quanto o primeiro ganhador vai receber:
	•	total * 0.46 → 46% do valor total.

g2 = total * 0.32;          // 32% para o segundo

Calcula quanto o segundo ganhador vai receber:
	•	total * 0.32 → 32% do valor total.

g3 = total - (g1 + g2);     // O restante vai para o terceiro
 Calcula quanto o terceiro ganhador vai receber.
Em vez de multiplicar por 22%, o programa faz:
	•	total - (g1 + g2) → pega o valor total e subtrai o que já foi dado ao primeiro e ao segundo.
Assim, o restante fica para o terceiro.

printf("Primeiro ganhador: R$ %.2lf\n", g1);
    printf("Segundo ganhador: R$ %.2lf\n", g2);
    printf("Terceiro ganhador: R$ %.2lf\n", g3);
 Exibe os valores calculados:
	•	%.2lf → imprime o número com 2 casas decimais, no formato de dinheiro.
	•	O \n serve para pular uma linha após cada impressão.

return 0;
}
Finaliza o programa e retorna 0, indicando que terminou sem erros.

O programa divide R$ 780.000,00 entre três ganhadores:
	•	1º → 46%
	•	2º → 32%
	•	3º → o restante (22%).

 questões 5

#include <stdio.h>
 Inclui a biblioteca stdio.h, que permite usar funções como printf (imprimir na tela) e scanf (ler do teclado).

int main() {
Início da função principal do programa.

char maiuscula, minuscula;
Declara duas variáveis do tipo char (caractere):
	•	maiuscula → vai guardar a letra digitada pelo usuário.
	•	minuscula → vai guardar a mesma letra, mas convertida para minúscula.

printf("Digite uma letra maiuscula: ");
Mostra na tela a mensagem pedindo para o usuário digitar uma letra maiúscula.

scanf(" %c", &maiuscula);   // O espaço antes do %c evita problemas de leitura
Lê o caractere digitado pelo usuário e guarda em maiuscula.
	•	O espaço antes do %c é um truque: ele faz o scanf ignorar espaços em branco e quebras de linha que podem atrapalhar a leitura.
	•	&maiuscula → passa o endereço de memória da variável para armazenar o caractere.

// A diferença entre maiúscula e minúscula na tabela ASCII é 32
    minuscula = maiuscula + 32;
Aqui está o truque:
Na tabela ASCII, cada letra maiúscula e sua correspondente minúscula têm uma diferença de 32 posições.
	•	Exemplo:
	•	'A' = 65
	•	'a' = 97
	•	Diferença = 32
Portanto, somar 32 à letra maiúscula dá a letra minúscula correspondente.

printf("A letra minuscula eh: %c\n", minuscula);
Exibe na tela a mensagem com a letra convertida para minúscula.
	•	%c → imprime um caractere.
	•	\n → pula uma linha no final.

return 0;
}
Finaliza o programa e retorna 0, indicando que terminou com sucesso.
