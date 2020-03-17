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

//	switch((int)strtol(argv[1], (char **)NULL, 10))
//{
  //case 1:
	if(fp==NULL) printf("ficheiro Clientes nao abriu\n");
	if(fc==NULL) printf("ficheiro Clientes nao abriu\n");
	if(fv==NULL) printf("ficheiro Clientes nao abriu\n");
	ClientesA *ca;	
	Vendas *v;
	char **erro;
	erro=malloc(1000000*sizeof(char*));
	v=malloc(MAX_BUFF*sizeof(Vendas));
	v=copiaV(fv,v);
	ca=malloc(100*sizeof(ClientesA));
	ca=copiaS(fp,ca);
	erro=verificaC(v,ca,erro);
	Produtos *p;
	p=malloc(100*sizeof(Produtos));	
        p=copiaP(fc,p);
	char **erro2=malloc(1000000*sizeof(char*));
	erro2=verificaP(v,p,erro2);

//for(int j=0;erro[j];j++) printf("nao existe no ficheiro clientess: %s\n",erro[j]);
//for(int i=0;erro2[i];i++) printf("nao existe no ficheiro Produtos: %s\n",erro2[i]);
//free(erro);
//free(ca);
//free(v);	
//free(p);
//free(erro2);
	printf("Escolha uma opcao:\n");
	printf("2- Determinar nr total de produtos por letra\n");
	int z;
	scanf("%d", &z);
	//getchar();
	switch (z){
    case 2:
    	printf("Introduza a letra\n");
    	char c;
    	scanf(" %c", &c);
    	//getchar();
    	//printf("%c\n", c);
    	consultaProdutos(c,p);
      
      break;

    //case constant2:
      // statements
      //break;
    
    
    
    //default:
      // default statements
}

  //case 2:
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
//default : 
//	printf("selecione uma opcao correta");
//}
 fclose(fp);
  fclose(fc);
   fclose(fv);

return 0;
}




