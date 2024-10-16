#include "extern.h"

void Extern__fast_step(int i, Extern__fast_out* _out){
    printf("Fast : cpt = %d ; entree=%d\n",_out->o, i) ;
    _out->o = _out->o + 1;
    i = 2*i + _out->o;
    printf("sortie = %d\n",i) ;
}

void Extern__gnc_step(int i,Extern__gnc_out*_out) {
    printf("GNC : cpt = %d ; entree=%d\n",_out->o, i) ;
        _out->o = _out->o + 1;
    i =   i- _out->o;
    printf("sortie = %d\n",i) ;
}

void Extern__thermal_step(Extern__thermal_out*_out) {
    printf("Thermal : cpt = 0 ; \n") ;
}
