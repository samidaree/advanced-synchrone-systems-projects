/* --- Generated the 17/10/2024 at 0:26 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. sep. 30 1:47:55 CET 2024) --- */
/* --- Command line: /Users/sami/.opam/default/bin/heptc -target c gnc.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "gnc.h"

void Gnc__condact_gnc_params_99__reset(Gnc__condact_gnc_params_99__mem* self) {
  self->v_1 = 99;
}

void Gnc__condact_gnc_params_99__step(int c, int y,
                                      Gnc__condact_gnc_params_99__out* _out,
                                      Gnc__condact_gnc_params_99__mem* self) {
  Extern__gnc_out Extern__gnc_out_st;
  
  int v;
  if (c) {
    Extern__gnc_step(y, &Extern__gnc_out_st);
    v = Extern__gnc_out_st.o;
    _out->x = v;
  } else {
    _out->x = self->v_1;
  };
  self->v_1 = _out->x;;
}

void Gnc__condact_f_params_31__reset(Gnc__condact_f_params_31__mem* self) {
  self->v_2 = 31;
}

void Gnc__condact_f_params_31__step(int c, int y,
                                    Gnc__condact_f_params_31__out* _out,
                                    Gnc__condact_f_params_31__mem* self) {
  Extern__fast_out Extern__fast_out_st;
  
  int v;
  if (c) {
    Extern__fast_step(y, &Extern__fast_out_st);
    v = Extern__fast_out_st.o;
    _out->x = v;
  } else {
    _out->x = self->v_2;
  };
  self->v_2 = _out->x;;
}

void Gnc__call_thermal_step(int c, Gnc__call_thermal_out* _out) {
  Extern__thermal_out Extern__thermal_out_st;
  Extern__thermal_step(&Extern__thermal_out_st);
}

void Gnc__condact_thermal_step(int c, Gnc__condact_thermal_out* _out) {
  Gnc__call_thermal_out Gnc__call_thermal_out_st;
  if (c) {
    Gnc__call_thermal_step(true, &Gnc__call_thermal_out_st);
  };
}

void Gnc__main_reset(Gnc__main_mem* self) {
  Gnc__condact_f_params_31__reset(&self->condact_f);
  Gnc__condact_gnc_params_99__reset(&self->condact_gnc);
  self->v_4 = 99;
  self->mif_cnt = 0;
}

void Gnc__main_step(Gnc__main_out* _out, Gnc__main_mem* self) {
  Gnc__condact_f_params_31__out Gnc__condact_f_params_31__out_st;
  Gnc__condact_gnc_params_99__out Gnc__condact_gnc_params_99__out_st;
  Gnc__condact_thermal_out Gnc__condact_thermal_out_st;
  
  int v_3;
  int v;
  int x;
  int y;
  int clk_f;
  int clk_gnc;
  int clk_thermal;
  clk_gnc = (self->mif_cnt==9);
  clk_thermal = (self->mif_cnt==0);
  clk_f = true;
  Gnc__condact_f_params_31__step(clk_f, self->v_4,
                                 &Gnc__condact_f_params_31__out_st,
                                 &self->condact_f);
  y = Gnc__condact_f_params_31__out_st.x;
  Gnc__condact_gnc_params_99__step(clk_gnc, y,
                                   &Gnc__condact_gnc_params_99__out_st,
                                   &self->condact_gnc);
  x = Gnc__condact_gnc_params_99__out_st.x;
  v = (self->mif_cnt+1);
  v_3 = (v%10);
  if (clk_thermal) {
    Gnc__condact_thermal_step(true, &Gnc__condact_thermal_out_st);
  };
  self->v_4 = x;
  self->mif_cnt = v_3;;
}

