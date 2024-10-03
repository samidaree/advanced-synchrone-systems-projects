#include "counter_c/counter.h"
#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

void main() {
Counter__counter_out o ; /* Allocation des sorties */
Counter__counter_mem s ; /* Allocation d l'état */
Counter__counter_reset(&s) ; /* Initialisation de l'état */
for(;;) {
/* Boucle infinie */
sleep(1); 
Counter__counter_step(&o,&s) ;
printf(" Result: cnt=%d\n",o.cnt) ;
}
}