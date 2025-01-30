#!/bin/bash

# Verificando se foi passado um diretório como argumento
if [ -z "$1" ]; then
  echo "Por favor, forneça um diretório."
  exit 1
fi

DIR=$1

# Verificando se o diretório existe, se não, criando o diretório
if [ ! -d "$DIR" ]; then
  echo "Diretório não existe. Criando o diretório $DIR."
  mkdir -p "$DIR"
fi

# Criando o arquivo main.c com o código básico dentro do diretório
cat <<EOF > "$DIR/main.c"
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
EOF

# Criando o arquivo README.md com o link formatado dentro do diretório
cat <<EOF > "$DIR/README.md"
_[HackerRank challenge](https://www.hackerrank.com/challenges/)_
EOF

echo "Arquivos main.c e README.md foram criados com sucesso no diretório $DIR!"
