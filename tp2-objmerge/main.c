#include "moteur_c/moteur.h"
#include<stdio.h> 
#include <stdlib.h> 

int main(){
    int  hs ; 
    Moteur__hs_handler_out o ; 

    Moteur__hs_handler_mem s ; 

    Moteur__hs_handler_reset(&s) ; 

    for (;;){
        printf("High speed ?\n"); 
        scanf("%d", &hs); 

Moteur__hs_handler_step(hs, &o, &s); 
printf("Result : actuator id = %d\n" ,o.id); 

    }
}