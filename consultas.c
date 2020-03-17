#include <stdio.h>                                                                                                 
#include <stdlib.h>                                                                                                
#include <ctype.h>                                                                                                 
#include <string.h>                                                                                                
#include "copia.h" 

#define NUM_ALPHA 26

int consultaProdutos(char c, Produtos *p){
	int aux=c%NUM_ALPHA;
	printf(" o numero e %d\n", aux);
	//int overall=0;
	int i;
	int j;
	//struct CLientesA z;
	//struct Clientes ptr;
	for(i=0;p[aux].ca[i].a;i++){
		
		for(j=0;j<p[aux].ca[i].size;j++){
		
		if(p[aux].ca[i].arr[j].key!=NULL)
			printf("%s\n", p[aux].ca[i].arr[j].value);
		
			
		

			

		//printf("o zat?\n");
		
			
		
		
		
	}

}
//printf("ora fodasse\n");
//j++;

//	printf("o i e %d\n",i );
	return 0;

}
