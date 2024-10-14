/* --- Generated the 14/10/2024 at 13:33 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. sep. 27 23:48:47 CET 2024) --- */
/* --- Command line: /home/sami/.opam/default/bin/heptc -target c moteur.ept --- */

#ifndef MOTEUR_H
#define MOTEUR_H

#include "moteur_types.h"
#include "extern.h"
typedef struct Moteur__hs_handler_mem {
  int y;
} Moteur__hs_handler_mem;

typedef struct Moteur__hs_handler_out {
  int id;
} Moteur__hs_handler_out;

void Moteur__hs_handler_reset(Moteur__hs_handler_mem* self);

void Moteur__hs_handler_step(int hs, Moteur__hs_handler_out* _out,
                             Moteur__hs_handler_mem* self);

typedef struct Moteur__main_mem {
  Moteur__hs_handler_mem hs_handler;
} Moteur__main_mem;

typedef struct Moteur__main_out {
} Moteur__main_out;

void Moteur__main_reset(Moteur__main_mem* self);

void Moteur__main_step(Moteur__main_out* _out, Moteur__main_mem* self);

#endif // MOTEUR_H
