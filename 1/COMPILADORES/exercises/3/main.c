#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000000

/*
 *   Maquina de Curry (KSIBC)
 */

// String que deve ser usada:
static char entrada[N] = "S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))((S(C(BBI)(SII))(C(BBI)(SII))(KK))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K))K)\0";

// String de teste:
// static char entrada[N] = "IK\0";
static char saida[N];

// Procedimento que recebe duas variáveis, uma que aponta para
// um array e outra que aponta para um inteiro com a posição do
// array a ser usada. O procedimento termina quando atinge a
// primeira posição depois dos parentêses.
void casa_parenteses(char *array1, int *p) {
  int paren = 1;
  int c = *p;
  while (paren != 0) {
    switch (array1[c]) {
    case '(':
      paren++;
      c++;
      break;
    case ')':
      paren--;
      c++;
      break;
    default:
      c++;
    }
  }
  *p = c;
}

// Procedimento que recebe duas variáveis, uma que aponta para
// um array e outra que aponta para um inteiro com a posição do
// array a ser usada. O procedimento termina quando atinge a
// primeira posição depois do argumento.
void acha_argumento(char *array1, int *p) {
  int c = *p;
  if (array1[c] == '(') {
    c++;
    casa_parenteses(array1, &c);
  } else {
    c++;
  }
  *p = c;
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a regra do combinador K: K a b => a,
// copiando os argumentos do array1 para o array2.
void reduzK(char *array1, char *array2) {
  int A, nA;
  int n = 1;

  A = n;
  acha_argumento(array1, &n);
  nA = n - 1;
  acha_argumento(array1, &n);

  // K a b => a
  int k = 0;
  int i;

  for (i = A; i <= nA; i++) {
    array2[k] = array1[i];
    k++;
  }

  for (n = n; array1[n] != '\0'; n++) {
    array2[k] = array1[n];
    k++;
  }

  array2[k] = '\0';
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a regra do combinador S: S a b c => a c ( b c ),
// copiando os argumentos do array1 para o array2.
void reduzS(char *array1, char *array2) {
  int A, nA;
  int B, nB;
  int C, nC;
  int n = 1;

  A = n;
  acha_argumento(array1, &n);
  nA = n - 1;
  B = n;
  acha_argumento(array1, &n);
  nB = n - 1;
  C = n;
  acha_argumento(array1, &n);
  nC = n - 1;

  // S a b c => a c ( b c )
  int k = 0;
  int i;

  for (i = A; i <= nA; i++) {
    array2[k] = array1[i];
    k++;
  }
  for (i = C; i <= nC; i++) {
    array2[k] = array1[i];
    k++;
  }

  array2[k] = '(';
  k++;

  for (i = B; i <= nB; i++) {
    array2[k] = array1[i];
    k++;
  }
  for (i = C; i <= nC; i++) {
    array2[k] = array1[i];
    k++;
  }

  array2[k] = ')';
  k++;

  for (n = n; array1[n] != '\0'; n++) {
    array2[k] = array1[n];
    k++;
  }

  array2[k] = '\0';
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a regra do combinador I: I a => a,
// copiando os argumentos do array1 para o array2.
void reduzI(char *array1, char *array2) {
  // I a => a
  int k = 0;

  for (int n = 1; array1[n] != '\0'; n++) {
    array2[k] = array1[n];
    k++;
  }

  array2[k] = '\0';
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a regra do combinador B: B a b c => a (b c),
// copiando os argumentos do array1 para o array2.
void reduzB(char *array1, char *array2) {
  int A, nA;
  int B, nB;
  int C, nC;
  int n = 1;

  A = n;
  acha_argumento(array1, &n);
  nA = n - 1;
  B = n;
  acha_argumento(array1, &n);
  nB = n - 1;
  C = n;
  acha_argumento(array1, &n);
  nC = n - 1;

  // B a b c => a (b c)
  int k = 0;
  int i;

  // Copiar o "a" para a array2
  for (i = A; i <= nA; i++) {
    array2[k] = array1[i];
    k++;
  }

  // Adicionar um "(" na array2
  array2[k] = '(';
  k++;

  // Copiar o "b" para a array2
  for (i = B; i <= nB; i++) {
    array2[k] = array1[i];
    k++;
  }

  // Copiar o "c" para a array2
  for (i = C; i <= nC; i++) {
    array2[k] = array1[i];
    k++;
  }

  // Adicionar um ")" na array2
  array2[k] = ')';
  k++;

  // Copiar o restante da array1 pra array2
  for (n = n; array1[n] != '\0'; n++) {
    array2[k] = array1[n];
    k++;
  }

  // Adicionar o null-termination na array2
  array2[k] = '\0';
}

// Procedimento que recebe duas variáveis que apontam para
// dois arrays e executa a regra do combinador C: C a b c => a c b,
// copiando os argumentos do array1 para o array2.
void reduzC(char *array1, char *array2) {
  int A, nA;
  int B, nB;
  int C, nC;
  int n = 1;

  A = n;
  acha_argumento(array1, &n);
  nA = n - 1;
  B = n;
  acha_argumento(array1, &n);
  nB = n - 1;
  C = n;
  acha_argumento(array1, &n);
  nC = n - 1;

  // C a b c => a c b
  int k = 0;
  int i;

  // Copiar o "a" para a array2
  for (i = A; i <= nA; i++) {
    array2[k] = array1[i];
    k++;
  }

  // Copiar o "c" para a array2
  for (i = C; i <= nC; i++) {
    array2[k] = array1[i];
    k++;
  }

  // Copiar o "b" para a array2
  for (i = B; i <= nB; i++) {
    array2[k] = array1[i];
    k++;
  }

  // Copiar o restante da array1 pra array2
  for (n = n; array1[n] != '\0'; n++) {
    array2[k] = array1[n];
    k++;
  }

  // Adicionar o null-termination na array2
  array2[k] = '\0';
}

// Procedimento que recebe uma variável que aponta para
// um array e remove os parentêses da primeira posição
// do array.
void recebeParenteses(char *array1) {
  int c = 1;
  casa_parenteses(array1, &c);

  int i;
  for (i = 0; i < c - 2; i++) {
    array1[i] = array1[i + 1];
  }

  array1[i] = array1[i + 2];
  i++;
  while (array1[i + 2] != '\0') {
    array1[i] = array1[i + 2];
    i++;
  }
  array1[i] = '\0';
}

int main() {

  char *array1 = entrada;
  char *array2 = saida;
  char *array3;
  while (array1[1] != '\0') {
    switch (array1[0]) {
    case 'B':
      reduzB(array1, array2);
      break;
    case 'C':
      reduzC(array1, array2);
      break;
    case 'I':
      reduzI(array1, array2);
      break;
    case 'K':
      reduzK(array1, array2);
      break;
    case 'S':
      reduzS(array1, array2);
      break;
    case '(':
      recebeParenteses(array1);
      array2[0] = 'X';
      break;
    default:
      break;
    }
    array3 = array1;
    array1 = array2;
    array2 = array3;
  }

  int i;
  for (i = 0; array1[i] != '\0'; i++) {
    printf("%c", array1[i]);
  }
  printf("\n");

  printf("Tempo = %lf\n", (double)(clock() / CLOCKS_PER_SEC));

  return 0;
}
