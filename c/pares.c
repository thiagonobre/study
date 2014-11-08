#include <stdio.h>

int main () {

    // declaracao das variaveis
    // atual eh o contador (normalmente chamado de i)
    // limite eh o numero maximo do laco
    // pode ser lido da seguinte maneira: armazena pra mim 2 caixas na memoria que caibam um numero inteiro em cada
    int atual, limite;

    // aqui esta dizendo para: escreve na saida (tela), a seguinte string
    printf ("\nOs numeros pares entre 0 e 100 sao:\n");

    // agora eu quero que 
    // para (for) o numero atual recebendo 0 e o limite recebendo 100
    // executa pra mim o codigo a seguir (codigo entre as chaves) enquanto o numero atual for menor ou igual ao limite
    // e apos executar esse codigo, incrementa o numero atual em 1
    // obs: repare que se o numero atual nao for incrementado, o laco seria infinito, pois ele comecaria em 0
    // e nunca mudaria o valor, logo o valor atual sempre seria menor que o limite
    // 0 <= 100? true, depois 0 <= 100? true, ..., 0 <= 100? true < laco infinito
    // 0 <= 100? true, depois 1 <= 100? true, ..., 100 <= 100? true, 101 <= 100? false < sai do laco 
    for (atual = 0, limite = 100; atual <= limite; atual++) {

        // aqui voce esta perguntando se o numero atual eh multiplo de 2
        // ou seja, se o numero atual mod 2 for igual a 0
        if (atual % 2 == 0) {
            // aqui eh quando o resultado for verdadeiro
            // numero atual eh multiplo de 2

            // entao o seu if pode ser lido
            // se o numero atual for multiplo de 2, entao printa na tela o numero e um espaco em branco
            printf ("%d ", atual);
        }
    }

    // printa uma quebra de linha
    printf ("\n");

    // encerra o programa
    return 0;   
}
