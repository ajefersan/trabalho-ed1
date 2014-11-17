#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void buscar_ocorrencias(char palavra[][20],char string[],int cont)
{

    int i,contador =0;

    for(i=0;i<cont;i++)
      if(strcmp(palavra[i],string) == 0){
        contador++;

      }

    if(contador == 0)
        printf("Palavra nao encontrada");
    else
        printf("Foram encontrado %d ocorrencias",contador);

}


int quebrar_frase(char frase[],char palavra[][20]){

    char *parte;
    parte = (char*)strtok(frase, " ");
    int i = 0;

    while(parte != NULL)
    {
        strcpy(palavra[i],parte);
        parte = (char*)strtok(NULL, " ");
        i++;

    }

return i ;

}







