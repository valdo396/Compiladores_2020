#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE* fichero;
    fichero = fopen("plantilla_1.gv", "wt");
    fputs("digraph automata{\n", fichero);
    fputs("\trankdir=\"LR\";\n", fichero);

    fputs("\tnode[shape=\"point\"]; inicial;\n", fichero);
    fputs("\tnode[shape=\"circle\"]; 1,2,3,4,5;\n", fichero);
    fputs("\tnode[shape=\"doublecircle\"]; 6;\n", fichero);

    fputs("\tinicial-> 1   [label=\"Inicio\"] ;\n", fichero);
    fputs("\t1-> 2   [label=\"&epsilon;\"] ;\n", fichero);
    fputs("\t2->3  [label=\"a\"];\n", fichero);
    fputs("\t3->6 [label=\"&epsilon;\"] ;\n", fichero);

    fputs("\t1->4[label=\"&epsilon;\"];\n", fichero);
    fputs("\t4->5  [label=\"b\"];\n", fichero);
    fputs("\t5->6  [label=\"&epsilon;\"];\n", fichero);
    //fputs("\t\n", fichero);
    

    fputs("}", fichero);
    fclose(fichero);
    printf("Proceso completado\n");

    system("dot -Tjpg plantilla_1.gv -o archivo");
    system("eog archivo");
    return 0;
}