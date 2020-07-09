#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "punto.h"
char letras[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};

int main(){
	char cadena[3]={'a','c','a'};
	char salida[100];
	char letra;	
	//printf("Nombre del prog: %s\n",cadena);

	int x;
	int pos=0;
	for(x=0;x<(strlen(cadena));x++){
		int y;
		for(y=0;y<(strlen(letras));y++){
			if(cadena[x]==letras[y]){
				if(salida[pos]!=letras[y]){
					salida[pos]=cadena[x];
					pos++;
				}
				else{
					if(salida[pos-1]==letras[y])
						salida[pos]='.';
						pos++;
				}
			}
		}
	}

	printf("%s\n", salida);

	
	return 0;
}
