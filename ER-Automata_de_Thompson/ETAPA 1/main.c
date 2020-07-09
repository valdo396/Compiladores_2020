#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "punto.h"


int main(int argc, char* argv[]){
	struct lista *l; /* declaración */
	l = NULL; /* inicialización */
    char le='b';
    //imprimelista(l);
    l=insertafinal(l,'a');
    l=insertafinal(l,le);
    //insertafinal(l,le);
    imprimelista(l);


	//char cadena[30];
	//char recibe[30];	
	//printf("Nombre del prog: %s\n",argv[0]);
	//printf("Conten del prog: %s\n",argv[1]);
	
	
	//strcpy( cadena, argv[1] );
	//printf( "F.Contenido=%s\n", punto(cadena) );




	//int x = 4, y = 5;
    //printf ("La suma es: %d\n", suma (4, 5));
	return 0;
}
