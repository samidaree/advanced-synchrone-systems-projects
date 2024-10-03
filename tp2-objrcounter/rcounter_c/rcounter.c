/* --- Generated the 3/10/2024 at 11:14 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. sep. 27 23:48:47 CET 2024) --- */
/* --- Command line: /home/sami/.opam/default/bin/heptc -target c rcounter.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "rcounter.h"

void Rcounter__rcounter_reset(Rcounter__rcounter_mem* self) {
  self->v_1 = 0;
}

void Rcounter__rcounter_step(int rst, Rcounter__rcounter_out* _out,
                             Rcounter__rcounter_mem* self) {
  
  int v;
  if (rst) {
    _out->cnt = 0;
  } else {
    _out->cnt = self->v_1;
  };
  v = (_out->cnt+1);
  self->v_1 = v;;
}

