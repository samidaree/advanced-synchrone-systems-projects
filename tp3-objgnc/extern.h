
#ifndef EXTERN_H 
#define EXTERN_H 

#include "extern_types.h"

typedef struct { int o ; } Extern__gnc_out ;
typedef struct { int o ; } Extern__fast_out ;
typedef struct {} Extern__thermal_out ;
void Extern__gnc_step(int i, Extern__gnc_out*_out) ;
void Extern__fast_step(int i, Extern__fast_out*_out) ;
void Extern__thermal_step(Extern__thermal_out*_out) ;
#endif 