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
	v=cop(fv);				
	c=cop(fc);
	

printf("%s\n",v[0]); 
char **codp=retCP(v);

int i;
int flag=0;
for(i=0;codp[i];i++){
	if((flag=verificaCP(codp[i],c))){
		printf("%d,%s\n",flag,codp[i]);

	}
	printf("%d,%s\n",flag,codp[i]);

}
printf("%d\n",i );



//free(c);
//free(p);
//free(v);
return 0;
}




