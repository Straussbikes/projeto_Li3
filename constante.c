#include <stdio.h>                                                                                                 
#include <stdlib.h>                                                                                                
#include <ctype.h>                                                                                                 
#include <string.h>                                                                                                
#include "copia.h" 

#define MAX_SIZE 100
#define MAX_ALPHA 30
#define NUM_ALPHA 26
#define MAX_BUFF 100



char* switchs(char* s){
    char*z=s;
	int i=0;
	for(i=0;s[i]!='\0';i++){
		s[i]=s[i+1];
	}
	s[i-1]='\0';
	return z;
}

void initC(ClientesA *a){
	int i=0;
	a->size=0;
	for(i=0;i<26;i++){
      a[i].arr=calloc(Clientes,MAX_BUFF);
	}
}

ClientesA* copiaS(FILE* f){

ClientesA *ca=malloc(MAX_ALPHA*sizeof(ClientesA));   

int i=0;
char g[6];
char u[6];
int aux=0;
int limitBUFF=0;
initC(ca);
int guard=0;
  		for(i=0; fgets(g,6,f)!=NULL ;i++){
  			 
                     aux=g[0]%NUM_ALPHA;
                   
                     	ca[aux].a=g[0];         
 							printf("%d\n",aux);
 							printf("%c\n",ca[aux].a);
                           
                                    
                                   if(ca[aux].size+1==MAX_BUFF){
                                        ca[aux].arr=realloc(ca[aux].arr,2*(ca[aux].size+1)*sizeof(Clientes));
                                             
                                } 

                          
                                strcpy(u,g);
                                char *aux2=NULL;
                                aux2=switchs(g);
                                printf("%s\n",aux2);
                                guard=(int)strtol(aux2, (char **)NULL, 10);
                                printf("%d\n",guard);
                                ca[aux].size++;
                                ca[aux].arr[guard].key=guard;
                                printf("%d\n",ca[aux].arr[guard].key);
                                ca[aux].arr[guard].value=strdup(strtok(u,"\r\n"));
								printf("%s\n",ca[aux].arr[guard].value);
                                
}

         fclose(f) ;

return ca;

}


                          
