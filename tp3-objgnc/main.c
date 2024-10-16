#include <stdio.h>
#include "gnc_c/gnc.h"
#include <unistd.h>

int main(){
    Gnc__main_out o ; 

    //Allocation de l'etat
    Gnc__main_mem s; 
    Gnc__main_reset(&s) ; 

    for(;;){
        Gnc__main_step(&o, &s) ; 
        sleep(1) ;
        
    }
}