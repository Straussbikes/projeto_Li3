#include <stdio.h>                                                                                                 
#include <stdlib.h>                                                                                                
#include <ctype.h>                                                                                                 
#include <string.h>                                                                                                
#include "copia.h" 

#define MAX_SIZE 100



ClientesA* copiaS(FILE* f){

ClientesA *bruh=malloc(30*sizeof(ClientesA));   

int i=0;
char g[64];
  		for( i=0; fgets(g,64,fp)!=NULL ;i++){
                                
                               if(i+1==tam){
                                        c=realloc(c,2*(i+1)*sizeof(char*));     
                                }
                                //c[i]=malloc(6*sizeof(char));

                                c[i]=strdup(strtok(g,"\r\n"));
}

         fclose(fp) ;

return bruh;

}


                          
