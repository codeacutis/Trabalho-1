/*Nomes dos integrantes: Eduardo Brandão dos Santos, Guilherme Augusto Alves de Faria, João Pedro da Costa Figueiredo, João Pedro Rodrigues Vilas Boas, Lucas Joaquim de Oliveira Soares.*/ 

#include <stdio.h>
#include <limits.h>

float maiornota(float mat[30][3], int quantid){ /*Aqui, foi criada uma função capaz de calcular a maior nota dos alunos. Ela recebe os parâmetros: matriz das notas dos alunos e variável da quantidade de alunos.*/
    
    float maior = 0.0; /*Criação de uma variável do tipo float para comparação inicial e para posterior armazenamento do valor da maior nota. Como a nota deve ser um valor positivo, o menor valor possível para elas é 0.0.*/
    for (int c = 0; c < quantid; c++){ /*Laço de repetição for para verificar as linhas da matriz de notas já preenchida e atribuída à função. O elemento de parada é a quantidade de alunos digitados.*/
        for (int l = 0; l < 3; l++ ){ /*Laço de repetição for para verificar as colunas da matriz de notas já preenchida e atribuída à função.*/
         if(mat[c][l]>maior){ /*Criação de uma estrutura de condição if para realizar a comparação entre as notas dos alunos. Se o valor da matriz atende à condição, ele é repassado para a próxima linha.*/
            maior = mat[c][l]; /*Se o valor apresentado na matriz for maior que valor da variável "maior" (que pode ser o valor de alguma nota anterior ou, inicialmente, ser 0.0), a variável "maior" recebe o conteúdo da matriz na linha e coluna correspondentes. */
           }
        }
    }
    return maior; /*Realizada a verificação de todas as notas possíveis. O valor da maior nota, armazenada na variável "maior", é retornado para a main.*/
}

float menornota(float mat[30][3], int quantid){ /*Aqui, foi criada uma função capaz de calcular a menor nota dos alunos. Ela recebe os parâmetros: matriz das notas dos alunos e variável da quantidade de alunos.*/
    
    float menor = INT_MAX; /*Criação de uma variável do tipo float para comparação inicial e para posterior armazenamento do valor da menor nota. A variável recebe, de início, o valor máximo que uma variável pode receber.*/
    for (int c = 0; c < quantid; c++){ /*Laço de repetição for para verificar as linhas da matriz de notas já preenchida e atribuída à função. O elemento de parada é a quantidade de alunos digitados.*/
        for (int l = 0; l < 3; l++ ){ /*Laço de repetição for para verificar as colunas da matriz de notas já preenchida e atribuída à função.*/
         if(mat[c][l]<menor){ /*Criação de uma estrutura de condição if para realizar a comparação entre as notas dos alunos. Se o valor da matriz atende à condição, ele é repassado para a próxima linha.*/
            menor = mat[c][l]; /*Se o valor apresentado na matriz for menor que valor da variável "menor" (que pode ser o valor de alguma nota anterior ou, inicialmente, ser 2147483647), a variável "menor" recebe o conteúdo da matriz na linha e coluna correspondentes. */
         } 
    }
    }
     return menor; /*Realizada a verificação de todas as notas possíveis. O valor da menor nota, armazenada na variável "menor", é retornado para a main.*/
}

float calcularmedia(float matriz[30][3], int quant, int alunos1[30]){ /*Aqui, foi criada uma função capaz de calcular a media individual dos alunos. Ela recebe os parâmetros: matriz das notas dos alunos, variável da quantidade de alunos digitados e o vetor que armazenou os ID's dos alunos.*/
   float media[30]; /*Criação de um vetor em float para armazenar os valores das medias de cada aluno.*/
   for(int i=0;i<quant;i++){ /*Laço de repetição for para verificar as linhas da matriz de notas já preenchida e atribuída à função. O elemento de parada é a quantidade de alunos digitados.*/
      float media1 = 0.0; /*Criação de uma variável do tipo float para armazenar o conteúdo da média individual. Ela é atribuida dentro do laço de repetição, pois, a cada rodagem do conteúdo do laço, ela deve ser inicializada novamente como 0.0, pois armazenará a média do próximo aluno.*/
      int soma = 0; /*Criação de uma variável do tipo inteiro para armazenar o conteúdo do somatório das notas de cada aluno. Ela é atribuida dentro do laço de repetição, pois, a cada rodagem do conteúdo do laço, ela deve ser inicializada novamente como 0, pois armazenará o somatório do próximo aluno.*/
      for(int j=0;j<3;j++){ /*Laço de repetição for para verificar as colunas da matriz de notas já preenchida e atribuída à função.*/
        soma = soma+matriz[i][j]; /*Estrutura criada para realizar o somatório das notas de cada aluno. A variável, inicialmente 0, recebe o valor da matriz[i][0]; depois, recebe o valor de matriz[i][1] e sucessivamente até o número total de colunas.*/
      }
      media1 = (float) soma/3; /*Depois de realizado o somatório das notas presentes na coluna da matriz, é calculado a média desse somatório.*/
      media[i] = media1; /*A média do somatório é armazenado na posição i do vetor.*/
   }
   
   for(int i=0;i<quant;i++){
      printf("A media do aluno %d eh %.2f\n", alunos1[i], media[i]); /*Depois de armazenado no vetor, é printado a media do aluno na posição i de ID correspondente na posição i do vetor que fora armazenado.*/
   } /*O programa realiza o mesmo processo, agora com as notas presentes nas colunas da linha i+1 até a quantidade de alunos que o usuário digitou.*/
}

float mediageral(float mat[30][3], float quantidade){/*Função capaz de medir a media geral dos alunos, recebendo como parametro a quantidade de alunos e as respectivas notas*/
   float media2[30]; /*Criação de um vetor em float para armazenar os valores das medias de cada aluno.*/
   float soma2 = 0.0;/* Criação de uma variavel armazenar as notas de cada aluno*/
   for(int i=0;i<quantidade;i++){/*Laço de repetição for para verificar as linhas da matriz de notas já preenchida e atribuída à função. O elemento de parada é a quantidade de alunos digitados.*/
      float media3 = 0.0;/*Criação de uma variavel para armazenar a media dos alunos*/
      float soma = 0;/*Variavel para somar a nota de cada aluno*/
      
      for(int j=0;j<3;j++){/*Laço de repetição for para verificar as colunas da matriz de notas já preenchida e atribuída à função.*/
        soma = soma+mat[i][j]; /*Estrutura criada para realizar o somatório das notas de cada aluno. A variável, inicialmente 0, recebe o valor da matriz[i][0]; depois, recebe o valor de matriz[i][1] e sucessivamente até o número total de colunas.*/
      }
      media3 = (float) soma/3;/*Depois de realizado o somatório das notas presentes na coluna da matriz, é calculado a média desse somatório.*/
      soma2 = soma2 + media3;/*Estrutura criada para somar as notas de todos os alunos junto a media de todos*/
   }
   float mediasgeral = (float)soma2/quantidade;/*Estrutura criada para calcular a media geral dos alunos*/
   return mediasgeral; /* Retornando o valor da media geral dos alunos para a função*/
}

void relatorio(float mat[30][3], float quant, int alunos1[30]){ /*Aqui, foi criada uma função capaz de realizar a condição que irá verificar se o aluno será aprovado ou reprovado de acordo com sua nota*/
  float mediageral2[30];/*Vetor que irá receber a media geral dos alunos*/
   int soma2 = 0;/*Vetor que irá receber a soma das notas dos alunos*/
   for(int i=0;i<quant;i++){/*Estrutura de repetição que irá medir a media geral dos alunos e tambem a soma das notas*/
      float media3 = 0.0;
      int soma = 0;
      
      for(int j=0;j<3;j++){/*Estrutura de repetição que irá medir a media geral dos alunos e tambem a soma das notas*/
        soma = soma+mat[i][j]; 
      }
      media3 = (float) soma/3;/*Estrutura que irá medir a media das notas que saem do vetor*/
      soma2 = soma2 + media3;/*Estrutura que irá medir a soma das notas que saem da variavel que foi enviada pelo vetor*/
   }
   int mediasgeral = (float)soma2/quant;
    
   float media[30]; /*Vetor que irá receber a media de cada aluno*/
   for(int i=0;i<quant;i++){/*Estrutura de repetição que irá armazenar cada nota em suas respectivas variaveis*/
      float media1 = 0.0;
      int soma3 = 0;
      for(int j=0;j<3;j++){/*Estrutura de repetição que irá somar a notado aluno*/
        soma3 = soma3+mat[i][j]; 
      }
      media1 = (float) soma3/3;/*Media do aluno*/
      media[i] = media1;
   }
   for(int i=0;i<quant;i++){/*Estrutura que irá verificar se o aluno será aprovado ou aprovado de acordo com suas notas*/
      if(media[i]>=mediasgeral){/*Condição para verificar a nota do aluno*/
        printf("A media do aluno %d eh %.2f = !!APROVADO!!\n", alunos1[i], media[i]);
      }
      if(media[i]<mediasgeral){/*Condição para verificar a nota do aluno*/
        printf("A media do aluno %d eh %.2f = !!REPROVADO!!\n", alunos1[i], media[i]);
      }
}

}
int main(){
  int alunos[30], quantidade , alunoslidos, soma=0; /*Definição das variáveis utilizadas do tipo inteiro, bem como do vetor que iria armazenar os ID's dos alunos.*/
  float notas[30][3], notaslidas; /*Definição das variáveis utilizadas do tipo float, bem como da matriz que iria armazenar a quantidade de alunos e as notas deles.*/
 
 for(int i=0;i<1;i++){ /*Criação de um laço for para conseguir validar o número de alunos digitados pelo usuário, permitindo que o laço se repita enquanto a estrutura condicional abaixo não for atendida.*/
    printf("Digite a quantidade de alunos que voce deseja cadastrar, o maximo permitido sao 30.\nquantidade: ");
    scanf("%d", &quantidade); /*Variável que irá armazenar o número referente à quantidade de alunos.*/
    if(quantidade>30 || quantidade<=0){ /*Estrutura condicional que verifica se o usuário digitou um número positivo ou que seja menor que a quantidade máxima permitida, ou seja, 30 alunos. */
      printf("VALOR INVALIDO\n");
      i--; /*Caso o valor seja inválido, é realizado um decremento no laço de repetição, que volta ao seu estágio inicial e roda mais uma vez.*/
    }
  }
   
  for(int i = 0; i < quantidade; i++ ){ /*Laço de repetição para realizar o armazenamento do ID no vetor e a definição da posição da linha da matriz que estará sendo lida. O elemento de parada do laço é a quantidade de alunos digitadas pelo usuário, que irá definir o total de linhas da matriz.*/
    printf("Digite o ID do aluno: ");
    scanf("%d", &alunoslidos); 
    alunos[i] = alunoslidos; /*Armazena o conteúdo da variável do ID na posição i do vetor.*/
    for(int j = 0; j < 3; j++ ){ /*Laço de repetição referente à coluna da matriz que estará sendo lida. A parada do laço refere-se à quantidade de notas que o usuário deve colocar para cada aluno. */
        printf("Digite a nota %d do aluno %d: ", (j+1), alunos[i]); /*Exibe para o usuário qual a nota que é para colocar no programa e qual o ID correspondente.*/
        scanf("%f", &notas[i][j]); /*Armazena a nota digitada na posição de linha i e coluna j da matriz.*/
    }
  }
  calcularmedia(notas,quantidade,alunos); /*Utilização de uma função para calcular média individual, atribuindo os parâmetros: a matriz das notas dos alunos, a variável do total de alunos digitados e o vetor dos ID's dos alunos.*/
  int maior = maiornota(notas,quantidade); /*Utilização de uma função para verificar a maior nota, atribuindo os parâmetros: a matriz das notas dos alunos e a variável do total de alunos digitados. Atribuição do resultado da função a uma variável do tipo inteiro, permitindo que ela seja imprimida na linha abaixo.*/
  printf("A maior nota da sala foi: %d\n",maior);
  int menor = menornota(notas,quantidade); /*Utilização de uma função para verificar a menor nota, atribuindo os parâmetros: a matriz das notas dos alunos e a variável do total de alunos digitados. Atribuição do resultado da função a uma variável do tipo inteiro, permitindo que ela seja imprimida na linha abaixo.*/
  printf("A menor nota da sala foi: %d\n",menor);
  printf("\nA media geral da turma eh: %.2f\n", mediageral(notas,quantidade)); /*Utilização de uma função para calcular a média geral da turma, atribuindo os parâmetros: a matriz das notas dos alunos e a variável do total de alunos digitados.*/
  relatorio(notas,quantidade,alunos); /*Utilização de uma função para apresentar o relatório dos alunos ao usuário, atribuindo os parâmetros: a matriz das notas dos alunos, a variável do total de alunos digitados e o vetor dos ID's dos alunos.*/
}