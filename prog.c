#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "copia.h"
#define MAX_BUFF 1000000

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

v=malloc(MAX_BUFF*sizeof(Vendas));
v=copiaV(fv,v);




ca=malloc(100*sizeof(ClientesA));
ca=copiaS(fp,ca);



erro=verificaC(v,ca,erro);	

for(int j=0;erro[j];j++) printf("nao existe no ficheiro clientess: %s\n",erro[j]);
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
free(erro);
free(ca);
free(v);
 fclose(fp);
  fclose(fc);
   fclose(fv);

return 0;
}




