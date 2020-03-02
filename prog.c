#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "copia.h"


int main(int argc,char *argv[]){
FILE * fp;
FILE * fv;
FILE * fc;
fp = fopen( "Clientes.txt", "r" );
fc = fopen("Produtos.txt","r");
fv = fopen("Vendas_1M.txt","r");
char **c;
char **p;
char **v;
	
	p=cop(fp);
	if(p==NULL) printf("ficheiro Clientes nao abriu\n");
	v=cop(fv);
	if(v==NULL) printf("ficheiro Vendas_1M nao abriu\n");				
	c=cop(fc);
	if(c==NULL) printf("ficheiro Produtos nao abriu\n");
	printf("%s\n",v[0] );

char **codp=retCP(v);

char **codc=retCC(v);
int bruh=0;

bruh=strcmp(codc[0],c[0]);


char  **erroC;
char **erroP;
erroC = guardaE(codc,p);
erroP=guardaE(codp,c);


if(erroP==NULL) printf("nenhum codigo de produto errado\n");
   else free(erroP);

if(erroC==NULL) printf("nenhum codigo de Clientes errado\n");
   else free(erroC);
printf("%s\n",erroC[0]);
  
free(codc);
free(codp);
free(c);
free(p);
free(v);
return 0;
}




