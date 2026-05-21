# Calculadora de Derivadas Analíticas em C

Este miniprojeto foi desenvolvido com o objetivo de fixar conceitos de modularização, funções e manipulação de strings em C, aplicando-os no cálculo de derivadas analíticas.

## Funcionalidades

O programa aceita a escolha de uma operação através de um menu de caracteres e calcula a derivada em um ponto $x$:
* **`P` (Potência):** Calcula a derivada de $x^n$, aplicando a regra do tombo ($n \cdot x^{n-1}$).
* **`L` (Logaritmo):** Calcula a derivada de $\ln(x)$, resultando em $1/x$.
* **`T` (Trigonométrica):** Calcula a derivada de funções trigonométricas e suas variações com sinal negativo (`sen`, `cos`, `-sen` e `-cos`).

## Como Compilar e Executar

Como o projeto utiliza a biblioteca matemática `<math.h>`, lembre-se de incluir a flag `-lm` ao compilar no Linux:

```bash
gcc derivadas.c -o derivadas -lm
./derivadas
