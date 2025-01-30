# 📖 Desafio: Contagem Mínima de Viradas de Página

## **Descrição do Problema**
Dado um livro com `n` páginas, um aluno deseja abrir o livro em uma página específica `p`. Ele pode começar a virar as páginas a partir da **frente** (página 1) ou a partir do **final** (página `n`).

Cada virada de página revela **duas páginas ao mesmo tempo**, exceto a última página, que pode estar sozinha.

O objetivo é encontrar o **mínimo número de viradas** necessárias para chegar na página `p`.

---

## **Formato de Entrada**
- Um inteiro `n` representando o número total de páginas do livro.
- Um inteiro `p` representando a página desejada.

### **Exemplo 1**
📥 **Entrada:**
```
6
2
```
📤 **Saída:**
```
1
```
📖 **Explicação:**
- Se começarmos do **início**, precisamos de **1 virada** (`1 → 2`).
- Se começarmos do **fim**, precisaríamos de **2 viradas** (`6 → 5`, depois `4 → 3`).
- O **mínimo é 1**.

### **Exemplo 2**
📥 **Entrada:**
```
5
4
```
📤 **Saída:**
```
0
```
📖 **Explicação:**
- Se começarmos do **início**, precisaríamos de **2 viradas** (`1 → 2`, `3 → 4`).
- Se começarmos do **fim**, já estaríamos na página `4`, então **0 viradas** são necessárias.
- O **mínimo é 0**.

---

## **Solução e Abordagem**
Para calcular o número mínimo de viradas, consideramos **dois caminhos possíveis**:

### **1️⃣ Contagem de Viradas a partir do Início**
Cada virada revela **duas páginas**.  
Fórmula:  
\[
\text{fromFront} = p \div 2
\]

### **2️⃣ Contagem de Viradas a partir do Final**
A última página pode ser isolada se `n` for ímpar, mas ainda seguimos a mesma lógica.  
Fórmula:  
\[
\text{fromBack} = (n \div 2) - (p \div 2)
\]
Aqui, `(n / 2)` representa o total de viradas necessárias para chegar ao final, e `(p / 2)` remove as viradas desnecessárias.

### **3️⃣ Pegamos o Mínimo entre os Dois Caminhos**
\[
\min(\text{fromFront}, \text{fromBack})
\]

---

## **Código em C**
```c
#include <stdio.h>

int pageCount(int n, int p) {
    int fromFront = p / 2;          // Viradas a partir do início
    int fromBack = (n / 2) - (p / 2); // Viradas a partir do final
    return fromFront < fromBack ? fromFront : fromBack;
}

int main() {
    int n, p;
    scanf("%d %d", &n, &p);
    printf("%d\n", pageCount(n, p));
    return 0;
}
```

---

## **Complexidade da Solução**
- **Tempo:** `O(1)`, pois apenas realizamos **divisões e subtrações** simples.
- **Espaço:** `O(1)`, pois utilizamos apenas **algumas variáveis inteiras**.

---

## **Conclusão**
Essa abordagem resolve o problema de forma **simples, eficiente e elegante**, comparando o número de viradas pelo início e pelo fim do livro. 🚀📖

_[HackerRank challenge](https://www.hackerrank.com/challenges/drawing-book/)_
