#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "copia.h"

#define MAX_SIZE 1024
int verificaCod(char **c,char *v){
 int i=0;

   for (i=0;c[i]!=0;i++){
    
        if (strcmp(c[i],v)) return 1;


	}

	return 0;
}



char**  cop(FILE* fp){

         if ( fp == NULL )
         {
                 printf( "ficheiro nao abriu" ) ;
                 return 0;
         }
char g[64];
int tam=100;
char **c;
	c=malloc(tam*sizeof(char*));
int i=0;
 			 for( i=0; fgets(g,64,fp)!=NULL ;i++){
                                
                                if(i+1==tam){
                                        c=realloc(c,2*(i+1)*sizeof(char*));     
                                }
                                c[i]=malloc(6*sizeof(char));

                                c[i]=strdup(strtok(g,"\r\n"));
}

         fclose(fp) ;
         return c;
	  


}

char ** retCP(char **v ){

char **aux=malloc(MAX_SIZE*sizeof(char*));
int i=0;
for(i=0;v[i];i++){
  
    if(i+1==MAX_SIZE){
        aux=realloc(aux,2*(i+1)*sizeof(char*));
    }

    char *aux2=malloc(64*sizeof(char));
   strcpy(aux2,v[i]);
   strtok(aux2," ");
   aux[i]=aux2;

}

return aux;

}


int verificaCP(char *cv,char **cp){
    int i;
    int ret=0;

    for(i=0;cp[i];i++){
            if(strcmp(cp[i],cv)) return ret=1;

    }
    return ret;
}



















