#include <stdio.h>                                                                                                 
#include <stdlib.h>                                                                                                
#include <ctype.h>                                                                                                 
#include <string.h>                                                                                                
#include "copia.h" 

#define MAX_SIZE 100
#define MAX_ALPHA 30
#define NUM_ALPHA 26
#define MAX_BUFF 1000000

void initP(Produtos *p){
int i=0;
	for(int j=0;j<26;j++){
	p->a=' ';
        p[j].ca=malloc(100*sizeof(ClientesA));
	for(i=0;i<26;i++){
	p[j].ca->size=0;
	p[j].ca->a=' ';
        p[j].ca[i].arr=malloc(MAX_BUFF*sizeof(Clientes));
	
	}
}


}
char** split(char *p){
char **ret=malloc(64*sizeof(char*));
char** aux=ret;
int i=0;
int init_size = strlen(p);
	char str[init_size];
strcpy(str,p);
	char *ptr = strtok(str," ");

	while (ptr != NULL)
	{      
		
ret[i]=strdup(ptr);
		ptr = strtok(NULL, " ");
i++;
	}
return aux-1;
}

void switchs(char s[],char h[]){
 char *ss=NULL;
ss=s;
int i; 

for(i=0;s[i];i++){
h[i]=s[i+1];
}
h[i]='\0';

s=ss;

}


void initC(ClientesA *ca){
	int i=0;
	
	
	for(i=0;i<26;i++){
	ca->size=0;
	ca->a=' ';
        ca[i].arr=malloc(MAX_BUFF*sizeof(Clientes));
	
	}
}




ClientesA* copiaS(FILE* f,ClientesA *ca){
int i=0;
int count=0;
char g[64];
int aux=0;
char aux2[64];
initC(ca);
int guard=0;
  		for(i=0; fgets(g,64,f)!=NULL ;i++){
  		     count++;
                     aux=g[0]%NUM_ALPHA;
                     ca[aux].a=g[0];         
                     strncpy(aux2, g, 5);
                     switchs(g,aux2);   	
                     guard=(int)strtol(aux2, (char **)NULL, 10);
                     ca[aux].size++;
	             ca[aux].arr[guard].key=guard;
                     ca[aux].arr[guard].value=strdup(strtok(g,"\r\n"));                                     
                }
return ca;
}

Vendas* copiaV(FILE* f,Vendas *v){
char g[64];
int count=0;
char **aux;
int limit_buff=0;

int i;


		for(i=0; fgets(g,64,f)!=NULL ;i++){
                                  if(limit_buff+1==MAX_BUFF){
                                        v=realloc(v,2*(MAX_BUFF)*sizeof(Vendas));
					limit_buff=0;
}
 limit_buff++; 
//printf("%s\n",g);
aux=split(g);
//printf("%s\n",aux[1]);

     v[i].codP=strdup(aux[1]);
     v[i].preco= (float)strtol((aux[2]), (char **)NULL, 10);
     v[i].unidades= (int)strtol((aux[3]), (char **)NULL, 10);
     v[i].tc= *aux[4];
     v[i].codC= strdup(aux[5]);
     v[i].mes= (int)strtol((aux[6]), (char **)NULL, 10);
     v[i].filial= (int)strtol((aux[7]), (char **)NULL, 10);

//printf("%s\n",v[i].codC);






count ++;

}


return v;


}



char** verificaC(Vendas *v,ClientesA *c,char **e){
char toint[64];
int ind=0;
char **ret=e;
int i;
int guard=0;
int j=0;
	for(i=0;i<1000000;i++){
		ind=v[i].codC[0]%NUM_ALPHA;
 		switchs(v[i].codC,toint);
	        guard=(int)strtol(toint, (char **)NULL, 10);
		if(c[ind].arr[guard].value==NULL) e[j++]=strdup(v[i].codC);
	   
        }
return ret;
}

Produtos* copiaP(FILE* f,Produtos *p){
int i=0;
int count=0;
char g[64];
int aux=0;
int l=0;
char aux2[64];
char aux3[64];
initP(p);
int guard=0;
  		for(i=0; fgets(g,64,f)!=NULL ;i++){
  			 count++;
		 l=g[0]%NUM_ALPHA;
                 aux=g[1]%NUM_ALPHA;
		p[l].a=g[0];
          	 p[l].ca[aux].a=g[1];         
                 strncpy(aux2, g, 6);
                 switchs(g,aux2);
		 switchs(aux2,aux3);
		guard=(int)strtol(aux3, (char **)NULL, 10);
                p[l].ca[aux].size++;
		p[l].ca[aux].arr[guard].key=guard;
                p[l].ca[aux].arr[guard].value=strdup(strtok(g,"\r\n"));  
         

                                                           
}
return p;

}

char** verificaP(Vendas *v,Produtos *p,char **e){
char toint[64];
char aux3[64];
int ind=0;
int ind2=0;
char **ret=e;
int i;
int guard=0;
int j=0;
	for(i=0;i<1000000;i++){
		ind=v[i].codP[0]%NUM_ALPHA;		
		ind2=v[i].codP[1]%NUM_ALPHA;
 		switchs(v[i].codP,toint);
		switchs(toint,aux3);
	        guard=(int)strtol(aux3, (char **)NULL, 10);
		if(p[ind].ca[ind2].arr[guard].value==NULL) e[j++]=strdup(v[i].codP);
	   
        }
return ret;
}






























                          
