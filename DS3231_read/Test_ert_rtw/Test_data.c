/*
 * File: Test_data.c
 *
 * Code generated for Simulink model 'Test'.
 *
 * Model version                  : 6.12
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Tue Aug 27 23:14:51 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. Traceability
 * Validation result: Not run
 */

#include "Test.h"

/* Block parameters (default storage) */
P rtP = {
  /* Computed Parameter: Sig_InitialValue
   * Referenced by:
   */
  {
    0U,                                /* minute */
    0U,                                /* second */
    0U,                                /* hour */
    0U,                                /* DOW */
    0U,                                /* Date */
    0U,                                /* Month */
    0U                                 /* Year */
  },

  /* Expression: 0.1
   * Referenced by: '<Root>/CAN Receive'
   */
  0.1,

  /* Expression: 0.5
   * Referenced by: '<S15>/I2C Read'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S15>/I2C Read1'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S15>/I2C Read2'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S15>/I2C Read3'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S15>/I2C Read4'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S15>/I2C Read5'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S15>/I2C Read6'
   */
  0.5,

  /* Expression: 10
   * Referenced by: '<S3>/Constant2'
   */
  10.0,

  /* Expression: 10
   * Referenced by: '<S3>/Constant1'
   */
  10.0,

  /* Expression: 20
   * Referenced by: '<S4>/Constant4'
   */
  20.0,

  /* Expression: 10
   * Referenced by: '<S4>/Constant2'
   */
  10.0,

  /* Expression: 10
   * Referenced by: '<S4>/Constant1'
   */
  10.0,

  /* Expression: 10
   * Referenced by: '<S5>/Constant2'
   */
  10.0,

  /* Expression: 10
   * Referenced by: '<S5>/Constant1'
   */
  10.0,

  /* Expression: 10
   * Referenced by: '<S6>/Constant2'
   */
  10.0,

  /* Expression: 10
   * Referenced by: '<S6>/Constant1'
   */
  10.0,

  /* Expression: 2000
   * Referenced by: '<S7>/Constant4'
   */
  2000.0,

  /* Expression: 10
   * Referenced by: '<S7>/Constant2'
   */
  10.0,

  /* Expression: 10
   * Referenced by: '<S7>/Constant1'
   */
  10.0,

  /* Expression: 10
   * Referenced by: '<S8>/Constant2'
   */
  10.0,

  /* Expression: 10
   * Referenced by: '<S8>/Constant1'
   */
  10.0,

  /* Expression: 2000
   * Referenced by: '<S9>/Constant'
   */
  2000.0,

  /* Expression: 0x07
   * Referenced by: '<S1>/Constant'
   */
  7U,

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S15>/Out1'
   */
  0U,

  /* Computed Parameter: Out2_Y0
   * Referenced by: '<S15>/Out2'
   */
  0U,

  /* Computed Parameter: Out3_Y0
   * Referenced by: '<S15>/Out3'
   */
  0U,

  /* Computed Parameter: Out4_Y0
   * Referenced by: '<S15>/Out4'
   */
  0U,

  /* Computed Parameter: Out5_Y0
   * Referenced by: '<S15>/Out5'
   */
  0U,

  /* Computed Parameter: Out6_Y0
   * Referenced by: '<S15>/Out6'
   */
  0U,

  /* Computed Parameter: Out7_Y0
   * Referenced by: '<S15>/Out7'
   */
  0U,

  /* Expression: 0x0F
   * Referenced by: '<S3>/Constant'
   */
  15U,

  /* Expression: 0x20
   * Referenced by: '<S4>/Constant5'
   */
  32U,

  /* Expression: 0x10
   * Referenced by: '<S4>/Constant3'
   */
  16U,

  /* Expression: 0x0F
   * Referenced by: '<S4>/Constant'
   */
  15U,

  /* Expression: 0x10
   * Referenced by: '<S5>/Constant3'
   */
  16U,

  /* Expression: 0x0F
   * Referenced by: '<S5>/Constant'
   */
  15U,

  /* Expression: 0x70
   * Referenced by: '<S6>/Constant3'
   */
  112U,

  /* Expression: 0x0F
   * Referenced by: '<S6>/Constant'
   */
  15U,

  /* Expression: 0xF0
   * Referenced by: '<S7>/Constant3'
   */
  240U,

  /* Expression: 0x0F
   * Referenced by: '<S7>/Constant'
   */
  15U,

  /* Expression: 0x70
   * Referenced by: '<S8>/Constant3'
   */
  112U,

  /* Expression: 0x0F
   * Referenced by: '<S8>/Constant'
   */
  15U,

  /* Expression: 0xF0
   * Referenced by: '<S9>/Constant1'
   */
  240U,

  /* Expression: 0x0F
   * Referenced by: '<S9>/Constant2'
   */
  15U,

  /* Computed Parameter: Multiply_Gain
   * Referenced by: '<S9>/Multiply'
   */
  10U,

  /* Expression: 0x10
   * Referenced by: '<S10>/Constant1'
   */
  16U,

  /* Expression: 0x0F
   * Referenced by: '<S10>/Constant2'
   */
  15U,

  /* Computed Parameter: Multiply_Gain_l
   * Referenced by: '<S10>/Multiply'
   */
  10U,

  /* Expression: 0x0F
   * Referenced by: '<S11>/Constant2'
   */
  15U,

  /* Expression: 0x30
   * Referenced by: '<S12>/Constant1'
   */
  48U,

  /* Expression: 0x0F
   * Referenced by: '<S12>/Constant2'
   */
  15U,

  /* Computed Parameter: Multiply_Gain_lk
   * Referenced by: '<S12>/Multiply'
   */
  10U,

  /* Expression: 0x10
   * Referenced by: '<S13>/Constant1'
   */
  16U,

  /* Expression: 0x20
   * Referenced by: '<S13>/Constant3'
   */
  32U,

  /* Expression: 0x0F
   * Referenced by: '<S13>/Constant2'
   */
  15U,

  /* Computed Parameter: Multiply_Gain_f
   * Referenced by: '<S13>/Multiply'
   */
  10U,

  /* Computed Parameter: Multiply1_Gain
   * Referenced by: '<S13>/Multiply1'
   */
  20U,

  /* Expression: 0xF0
   * Referenced by: '<S14>/Constant1'
   */
  240U,

  /* Expression: 0x0F
   * Referenced by: '<S14>/Constant2'
   */
  15U,

  /* Computed Parameter: Multiply_Gain_j
   * Referenced by: '<S14>/Multiply'
   */
  10U,

  /* Expression: 0xF0
   * Referenced by: '<S16>/Constant1'
   */
  240U,

  /* Expression: 0x0F
   * Referenced by: '<S16>/Constant2'
   */
  15U,

  /* Computed Parameter: Multiply_Gain_n
   * Referenced by: '<S16>/Multiply'
   */
  10U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
