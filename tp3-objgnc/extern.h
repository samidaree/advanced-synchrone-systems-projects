
#ifndef EXTERN_H 
#define EXTERN_H 

#include "extern_types.h"

typedef struct {} Extern__print_gnc_out ;
typedef struct {} Extern__print_fast_out ;
typedef struct {} Extern__print_thermal_out ;
void Extern__print_gnc_step(int cnt, int i,int o,  Extern__print_gnc_out*_out) ;
void Extern__print_fast_step(int cnt, int i,int o, Extern__print_fast_out*_out) ;
void Extern__print_thermal_step(int cnt ,Extern__print_thermal_out*_out) ;
#endif 