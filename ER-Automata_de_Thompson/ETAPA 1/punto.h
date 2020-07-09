struct lista 
{
	char letra;
  struct lista *ant;
	struct lista *sig;
}; 

struct lista *inicial=NULL;

struct lista *creanodo(void) {
  return (struct lista *) malloc(sizeof(struct lista));
}

/* Inserta dato al comienzo de la lista (para pilas) */
struct lista *insertacomienzo(struct lista *l, char x) {
  struct lista *q;
  if(inicial==NULL){
    q = creanodo(); /* crea un nuevo nodo */
    q->letra = x; /* copiar los datos */
    q->ant = NULL;
    q->sig = l;
    l = q;
  }else{
    q = creanodo(); /* crea un nuevo nodo */
    q->letra = x; /* copiar los datos */
    q->ant = NULL;
    q->sig = l;
    l = q;
  }
  
  return l;
}

/* Inserta dato al final de la lista (para colas) */
struct lista *insertafinal(struct lista *l, char x) {
  struct lista *p,*q;
  q = creanodo(); /* crea un nuevo nodo */
  q->letra = x; /* copiar los datos */
  q->sig = NULL;
  if (l == NULL)
    return q;
  /* la lista argumento no es vacía. Situarse en el último */
  p = l;
  while (p->sig != NULL)
    p = p->sig;
  p->sig = q;
  return l;
}


void imprimelista(struct lista *l) {
  struct lista *p;
  p = l;
  
  if(p==NULL){
  	printf("Lista vacia\n");
  }
  while (p != NULL) {
    printf("%c\n",p->letra);
    p = p->sig;
  }
}

char tope_lista(struct lista *l){
  struct lista *p;
  p=l;
  return p->letra;
}



/*
char letras[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};






char* punto(char entrada[30]);

char* punto(char entrada[30]){
	char* cadena = malloc(30);
	char *ptr;
	ptr = strtok(entrada,"\n");
	//strcpy(cadena,entrada);
	
	strcat(cadena,ptr);
	/*int x=0,i=0,flag=0;
	while(x<(strlen(entrada))){
		//printf("%d\n", x);
		if(entrada[i]==letras[x]){
			if(flag==0){
				strcat(cadena,entrada[i]);
				flag=flag+1;
				i=i+1;
			}
			else{
				if(flag==1){
					strcat(cadena,".");
					strcat(cadena,entrada[i]);
					flag=0;
					i=i+1;
				}
			}
		}
		x=x+1;
	}
	return cadena;
}


int suma (int a, int b);

int suma (int a, int b){
    return (a + b);
}
*/


