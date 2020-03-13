#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "copia.h"


int main(int argc,char *argv[]){
FILE * fp;
FILE * fv;
FILE * fc;
fp = fopen("Clientes.txt", "r");
fc = fopen("Produtos.txt","r");
fv = fopen("Vendas_1M.txt","r");
ClientesA *ca;	
Vendas *v;
char **erro;
erro=malloc(1000000*sizeof(char*));

v=malloc(1000000*sizeof(Vendas));
v=copiaV(fv);
//for(int j;v[j].codC!=NULL;j++) printf("%s\n",v[j].codC);


//free(v);

//printf("%s",v[0].codC);
//printf("%s",v[1].codC);
//printf("merda\n");
//printf("O ZAT");

ca=copiaS(fp);

//printf("O ZAT");

erro=verificaC(v,ca);	
//free(erro);
	//if(ca==NULL) printf("ficheiro Clientes nao abriu\n");
/*

char **c;
char **p;
char **v;
	
	//p=cop(fp);
	//if(p==NULL) printf("ficheiro Clientes nao abriu\n");
	v=cop(fv);
	if(v==NULL) printf("ficheiro Vendas_1M nao abriu\n");				
	//c=cop(fc);
	//if(c==NULL) printf("ficheiro Produtos nao abriu\n");
	

//char **codp=retCP(v);

//char **codc=retCC(v);


int bruh=0;

//bruh=strcmp(codc[0],c[0]);


char  **erroC;
char **erroP;
erroC = guardaE(codc,p);
erroP=guardaE(codp,c);


if(erroP==NULL) printf("nenhum codigo de produto errado\n");
   else free(erroP);

if(erroC==NULL) printf("nenhum codigo de Clientes errado\n");
   else free(erroC);
printf("%s\n",erroC[0]);
  
//free(codc);
//free(codp);

//free(c);
//free(p);
*/


 fclose(fp);
  fclose(fc);
   fclose(fv);

return 0;
}




