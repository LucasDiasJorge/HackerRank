# Desafio: Imprimir Palavras em Linhas Separadas

## Descrição

O objetivo desse desafio é ler uma frase inserida pelo usuário e imprimir cada palavra dessa frase em uma nova linha. As palavras são separadas por espaços em branco.

## Entrada

A entrada consiste em uma única linha de texto, que pode conter uma ou mais palavras separadas por espaços. Não há limite para o número de palavras.

## Saída

A saída consiste na impressão de cada palavra da frase em uma nova linha.

## Exemplo

### Entrada 1:
```
This is C
```

### Saída 1:
```
This
is
C
```

### Entrada 2:
```
Learning C is fun
```

### Saída 2:
```
Learning
C
is
fun
```

### Entrada 3:
```
How is that
```

### Saída 3:
```
How
is
that
```

## Implementação

Aqui está a implementação da solução em C:

```c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));  // Aloca memória para armazenar a string
    scanf("%[^\n]", s);  // Lê a linha até o caractere de nova linha
    s = realloc(s, strlen(s) + 1);  // Realoca a memória para o tamanho exato da string

    char* token = strtok(s, " ");  // Separa a string em tokens, divididos por espaços

    while (token != NULL) {
        printf("%s\n", token);  // Imprime cada palavra em uma nova linha
        token = strtok(NULL, " ");  // Move para o próximo token
    }

    free(s);  // Libera a memória alocada para a string

    return 0;
}
```

### Explicação do Código:

1. **Leitura da Entrada:**
    - A função `scanf("%[^\n]", s)` lê a linha de entrada até o caractere de nova linha, armazenando tudo na variável `s`.

2. **Separação das Palavras:**
    - A função `strtok(s, " ")` divide a string `s` em tokens, usando o espaço como delimitador. A cada chamada de `strtok(NULL, " ")`, o próximo token é extraído.

3. **Impressão das Palavras:**
    - Em cada iteração do `while`, a palavra extraída é impressa em uma nova linha com `printf("%s\n", token)`.

4. **Liberação de Memória:**
    - Após o processamento, a memória alocada para a string `s` é liberada usando `free(s)`.

## Considerações

- **Memória:** O código aloca memória dinamicamente para armazenar a entrada do usuário e depois a libera, garantindo que não haja vazamentos de memória.
- **Eficiente:** O uso de `strtok` é eficiente para separar a string em palavras, e a alocação de memória inicial é suficiente para lidar com a entrada.

## Limitações

- **Entrada Longa:** Caso a entrada ultrapasse 1024 caracteres, o programa pode não funcionar corretamente, pois a alocação inicial de memória pode não ser suficiente. Uma solução seria aumentar o tamanho da alocação ou usar alocação dinâmica mais robusta.

_[HackerRank challenge](https://www.hackerrank.com/challenges/printing-tokens-/)_
