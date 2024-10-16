/* --- Generated the 17/10/2024 at 0:26 --- */
/* --- heptagon compiler, version 1.05.00 (compiled mon. sep. 30 1:47:55 CET 2024) --- */
/* --- Command line: /Users/sami/.opam/default/bin/heptc -target c gnc.ept --- */

#ifndef GNC_H
#define GNC_H

#include "gnc_types.h"
#include "extern.h"
typedef struct Gnc__condact_gnc_params_99__mem {
  int v_1;
} Gnc__condact_gnc_params_99__mem;

typedef struct Gnc__condact_gnc_params_99__out {
  int x;
} Gnc__condact_gnc_params_99__out;

void Gnc__condact_gnc_params_99__reset(Gnc__condact_gnc_params_99__mem* self);

void Gnc__condact_gnc_params_99__step(int c, int y,
                                      Gnc__condact_gnc_params_99__out* _out,
                                      Gnc__condact_gnc_params_99__mem* self);

typedef struct Gnc__condact_f_params_31__mem {
  int v_2;
} Gnc__condact_f_params_31__mem;

typedef struct Gnc__condact_f_params_31__out {
  int x;
} Gnc__condact_f_params_31__out;

void Gnc__condact_f_params_31__reset(Gnc__condact_f_params_31__mem* self);

void Gnc__condact_f_params_31__step(int c, int y,
                                    Gnc__condact_f_params_31__out* _out,
                                    Gnc__condact_f_params_31__mem* self);

typedef struct Gnc__call_thermal_out {
} Gnc__call_thermal_out;

void Gnc__call_thermal_step(int c, Gnc__call_thermal_out* _out);

typedef struct Gnc__condact_thermal_out {
} Gnc__condact_thermal_out;

void Gnc__condact_thermal_step(int c, Gnc__condact_thermal_out* _out);

typedef struct Gnc__main_mem {
  int v_4;
  int mif_cnt;
  Gnc__condact_gnc_params_99__mem condact_gnc;
  Gnc__condact_f_params_31__mem condact_f;
} Gnc__main_mem;

typedef struct Gnc__main_out {
} Gnc__main_out;

void Gnc__main_reset(Gnc__main_mem* self);

void Gnc__main_step(Gnc__main_out* _out, Gnc__main_mem* self);

#endif // GNC_H
