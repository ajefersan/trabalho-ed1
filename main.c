#include "teste.h"
int main(){

    char frase[] = "casa carro carro carro computador carro casa casa asdasd carro caxasd carr asdasd carro asdqewr asdasd qweq  carro carro";
    char palavra[20][20];
    char string[] = "carro";
    int i ;
    int contador=0;
    contador = quebrar_frase(frase,palavra);
    for(i=0;i<20;i++)
        printf("%s \n",palavra[i]);
   buscar_ocorrencias(palavra,string,contador);

    return 0;
}
