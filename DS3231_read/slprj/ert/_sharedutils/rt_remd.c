/*
 * File: rt_remd.c
 *
 * Code generated for Simulink model 'Test'.
 *
 * Model version                  : 6.12
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Aug 27 22:50:58 2024
 */

#include "rtwtypes.h"
#include "rt_remd.h"
#include <math.h>
#include <float.h>

real_T rt_remd(real_T u0, real_T u1)
{
  real_T q;
  real_T y;
  if (u1 < 0.0) {
    q = ceil(u1);
  } else {
    q = floor(u1);
  }

  if ((u1 != 0.0) && (u1 != q)) {
    q = fabs(u0 / u1);
    if (fabs(q - floor(q + 0.5)) <= DBL_EPSILON * q) {
      y = 0.0;
    } else {
      y = fmod(u0, u1);
    }
  } else {
    y = fmod(u0, u1);
  }

  return y;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
