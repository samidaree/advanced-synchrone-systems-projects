/* --- Generated the 3/10/2024 at 11:14 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. sep. 27 23:48:47 CET 2024) --- */
/* --- Command line: /home/sami/.opam/default/bin/heptc -target c rcounter.ept --- */

#ifndef RCOUNTER_H
#define RCOUNTER_H

#include "rcounter_types.h"
typedef struct Rcounter__rcounter_mem {
  int v_1;
} Rcounter__rcounter_mem;

typedef struct Rcounter__rcounter_out {
  int cnt;
} Rcounter__rcounter_out;

void Rcounter__rcounter_reset(Rcounter__rcounter_mem* self);

void Rcounter__rcounter_step(int rst, Rcounter__rcounter_out* _out,
                             Rcounter__rcounter_mem* self);

#endif // RCOUNTER_H
