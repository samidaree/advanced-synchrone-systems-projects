#include "extern.h"

void Extern__print_fast_step(int cnt, int i, int o, Extern__print_fast_out* _out){
    printf("Fast : cpt = %d ; entree=%d\n",cnt, i) ;
    printf("sortie = %d\n",o) ;
}

void Extern__print_gnc_step(int cnt, int i, int o, Extern__print_gnc_out*_out) {
    printf("GNC : cpt = %d ; entree=%d\n",cnt, i) ;
    printf("sortie = %d\n",o) ;
}

void Extern__print_thermal_step(int cnt , Extern__print_thermal_out*_out) {
    printf("Thermal : cpt = %d ; \n", cnt) ;
}
