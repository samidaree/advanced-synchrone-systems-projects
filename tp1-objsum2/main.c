#include "sum2_c/sum2.h"
#include <stdio.h>
#include <stdlib.h>

void main() {
int i ;
/* Allocation des entrées */
Sum2__sum2_out o ; /* Allocation des sorties */
Sum2__sum2_mem s ; /* Allocation d l'état */
Sum2__sum2_reset(&s) ; /* Initialisation de l'état */
for(;;) {
/* Boucle infinie */
printf("Inputs:"); scanf("%d",&i) ; /* Lecture des entrées */
Sum2__sum2_step(i,&o,&s) ;
/* Calculs */
printf("Result: o=%d\n",o.o) ;
/* Ecriture des sorties */
}
}