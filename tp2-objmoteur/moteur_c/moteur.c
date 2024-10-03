/* --- Generated the 3/10/2024 at 11:30 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. sep. 27 23:48:47 CET 2024) --- */
/* --- Command line: /home/sami/.opam/default/bin/heptc -target c moteur.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "moteur.h"

void Moteur__hs_handler_reset(Moteur__hs_handler_mem* self) {
  self->y = 15;
}

void Moteur__hs_handler_step(int hs, Moteur__hs_handler_out* _out,
                             Moteur__hs_handler_mem* self) {
  Extern__g_out Extern__g_out_st;
  Extern__f2_out Extern__f2_out_st;
  Extern__f1_out Extern__f1_out_st;
  
  int x;
  int id_false;
  int id_true;
  int ck;
  ck = hs;
  if (ck) {
    Extern__g_step(&Extern__g_out_st);
    id_true = Extern__g_out_st.o;
    _out->id = id_true;
  } else {
    Extern__f1_step(self->y, &Extern__f1_out_st);
    id_false = Extern__f1_out_st.o;
    _out->id = id_false;
    Extern__f2_step(_out->id, &Extern__f2_out_st);
    x = Extern__f2_out_st.o;
    self->y = x;
  };;
}

void Moteur__main_reset(Moteur__main_mem* self) {
  Moteur__hs_handler_reset(&self->hs_handler);
}

void Moteur__main_step(Moteur__main_out* _out, Moteur__main_mem* self) {
  Moteur__hs_handler_out Moteur__hs_handler_out_st;
  Extern__act_out Extern__act_out_st;
  Extern__read_bool_out Extern__read_bool_out_st;
  
  int hs;
  int id;
  Extern__read_bool_step(Moteur__addr_hs, &Extern__read_bool_out_st);
  hs = Extern__read_bool_out_st.value;
  Moteur__hs_handler_step(hs, &Moteur__hs_handler_out_st, &self->hs_handler);
  id = Moteur__hs_handler_out_st.id;
  Extern__act_step(id, &Extern__act_out_st);;
}

