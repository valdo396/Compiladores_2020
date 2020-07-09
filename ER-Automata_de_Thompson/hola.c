#include<stdio.h>
#include<string.h>
#include<stdlib.h> 

int main(int argc, char* argv[]){
	char *arr; //copiar el argv en un array
	if ( argc > 1 )
	{
	    arr = (char*) malloc(strlen(argv[1])+1);
	    strcpy(arr,argv[1]);
	}
	else
	{
	    printf("No se pudo cpiar la entrada");
	}
	int largo;
	largo=strlen(arr);//hacer una funcion que solo cuente las letras de la expresion
	printf("Largo:%d\n", largo);
	printf("Nueva cadena:%c\n ",arr[1]);

	FILE* fichero;
    fichero = fopen("plantilla_2.gv", "wt");
    
    fputs("digraph automata{\n", fichero);
    fputs("\trankdir=\"LR\";\n", fichero);

    fputs("\tnode[shape=\"point\"]; inicial;\n", fichero);
    int x=0;
    /*while(x<largo){
    	fprintf(x, "%c\n",fichero );
    	fputs("\tnode[shape=\"circle\"]; 1;\n", fichero);
    	//printf("Holi:%d\n",x);
    	x=x+1;
    }*/
    //fputs("\tnode[shape=\"circle\"]; 1,2,3,4,5;\n", fichero);

    fputs("\tnode[shape=\"doublecircle\"]; 6;\n", fichero);

    fputs("\tinicial-> 1   [label=\"Inicio\"] ;\n", fichero);
    //fputs("\t1-> 2   [label=\"&epsilon;\"] ;\n", fichero);
    //fputs("\t2->3  [label=\"a\"];\n", fichero);
    //fputs("\t3->6 [label=\"&epsilon;\"] ;\n", fichero);

    //fputs("\t1->4[label=\"&epsilon;\"];\n", fichero);
    //fputs("\t4->5  [label=\"b\"];\n", fichero);
    //fputs("\t5->6  [label=\"&epsilon;\"];\n", fichero);
    //fputs("\t\n", fichero);
    

    fputs("}", fichero);
    fclose(fichero);
    printf("Nombre del programa: %s\n",argv[0]);
	printf("Contenido recibido:: %s\n",argv[1]);
    printf("Proceso completado\n");

    system("dot -Tjpg plantilla_2.gv -o archivo_2");
    system("eog archivo_2");
   

	
	return 0;
}
