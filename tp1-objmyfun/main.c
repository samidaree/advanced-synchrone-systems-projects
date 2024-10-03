#include "myfun_c/myfun.h"
#include <stdio.h>
#include <stdlib.h>

void main() {
int x,y ;
/* Allocation des entrées */
Myfun__myfun_out f; 
Myfun__myfun_out o ; /* Allocation des sorties */
for(;;) {
/* Boucle infinie */
printf("Inputs:"); scanf("%d%d",&x,&y) ; /* Lecture des entrées */
Myfun__myfun_step(x,y,&o); 
//Myfun__myfun_step(x,y,&o) ;
/* Calculs */
printf("Result: z=%d t=%d\n",o.z,o.t) ; /* Ecriture des sorties */
}
}

