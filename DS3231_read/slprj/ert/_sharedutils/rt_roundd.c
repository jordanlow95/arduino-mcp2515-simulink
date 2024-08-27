/*
 * File: rt_roundd.c
 *
 * Code generated for Simulink model 'Test'.
 *
 * Model version                  : 6.10
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sun Aug 25 18:27:23 2024
 */

#include "rtwtypes.h"
#include "rt_roundd.h"
#include <math.h>

real_T rt_roundd(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
