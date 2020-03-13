#include <stdio.h>                                                                                                 
#include <stdlib.h>                                                                                                
#include <ctype.h>                                                                                                 
#include <string.h>                                                                                                
#include "copia.h" 

#define MAX_SIZE 100
#define MAX_ALPHA 30
#define NUM_ALPHA 26
#define MAX_BUFF 1000000

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
int i, j; 

for(i=0;s[i];i++){
h[i]=s[i+1];
//printf("%c\n",h[j]);
}
h[i]='\0';
//printf("S = %s\n",s );
//printf("H = %s\n",h);
//h[i+1]='\0';
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




ClientesA* copiaS(FILE* f){

 

int i=0;
int count=0;
char *g;

int aux=0;
char aux2[64];
ClientesA *ca;
ca=malloc(100*sizeof(ClientesA));
initC(ca);
int guard=0;
  		for(i=0; fgets(g,64,f)!=NULL ;i++){
  			 count++;
                     aux=g[0]%NUM_ALPHA;
                     //printf("%d\n",aux );
                          
                     	ca[aux].a=g[0];         
 							//printf("indice :%d\n",aux);
 							//printf("char :%c\n",ca[aux].a);
                           /*
                                   if(ca[aux].size+1==MAX_BUFF){
                                        ca[aux].arr=realloc(ca[aux].arr,2*(ca[aux].size+1)*sizeof(Clientes));
					ca[aux].size=0;
                                             
                                } 

                          	*/
                     			
                     			//printf("AUX2 = %s\n", aux2);
                               strncpy(aux2, g, 5);
                               switchs(g,aux2);
                              	//printf("G = %s\n",g);
                              	
                              	guard=(int)strtol(aux2, (char **)NULL, 10);
                              
                                ca[aux].size++;
				
                                ca[aux].arr[guard].key=guard;
                               
                                ca[aux].arr[guard].value=strdup(strtok(g,"\r\n"));  

                                //memset(aux2, '\0', sizeof aux2);        
				//printf("%s\n", ca[aux].arr[guard].value);                      
}
free(ca);
return ca;

}

Vendas* copiaV(FILE* f){
char g[64];
int count=0;
char **aux;
int limit_buff=0;
Vendas *v;
int i;
v=malloc(MAX_BUFF*sizeof(Vendas));

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

//printf("\n%d\n",count);
return v;


}



char** verificaC(Vendas *v,ClientesA *c){
char **ret;
char **aux=NULL;
ret=aux;
char toint[64];
int ind=0;
int i;

int guard=0;
int flag=0;
int count=0;
//printf("%s",v[0].codC);

	for(i=0;i<1000000;i++){
//printf("zat:%d\n",count);
//printf("%s",v[i].codC);
		ind=v[i].codC[0]%NUM_ALPHA;
//printf("%d\n",ind);
//printf("%c\n",c[i].a);
 		switchs(v[i].codC,toint);
//printf("%s",toint);
	        guard=(int)strtol(toint, (char **)NULL, 10);

        		printf("numero:%s\n",toint);
		if(!(c[ind].arr[guard].value==NULL)){
			printf("o zat?\n");
		//printf("numero:%s    %s\n",v[i].codC,c[ind].arr[guard].value);
           //  flag=strcmp(v[i].codC,c[ind].arr[guard].value);
//printf("%d",flag);
	   //if(flag!=0) aux[j++]=strdup(v[i].codC);
                   
             }else //printf("numero:%s    \n",v[i].codC);
count++;

}

return ret;
}


                          
