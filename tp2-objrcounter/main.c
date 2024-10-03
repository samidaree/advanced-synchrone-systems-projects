#include "rcounter_c/rcounter.h"
#include <unistd.h>
#include <stdio.h> 
#include <stdlib.h> 

int main(){
    // Allocation Entree 
int rst =0; 

// Allocation des sorties 
Rcounter__rcounter_out o ; 

//Allocation de l'etat
Rcounter__rcounter_mem s; 

// Initialisation de l'etat
Rcounter__rcounter_reset(&s) ; 
// Boucle infinie 
for (;;){
     printf("Reset le compteur ? (1/0)"); 
    scanf("%d", &rst); 
   //sleep(1); 
    Rcounter__rcounter_step(rst, &o, &s); 

printf(" Result: cnt=%d\n",o.cnt) ;

}

}