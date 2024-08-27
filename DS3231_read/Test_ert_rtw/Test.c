/*
 * File: Test.c
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
#include "rtwtypes.h"
#include <string.h>
#include "rt_remd.h"
#include <math.h>
#include <stddef.h>
#include "rt_roundd.h"

/* Exported block states */
Time Sig;                              /* Simulink.Signal object 'Sig' */

/* Block signals and states (default storage) */
DW rtDW;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
static uint8_T BitShift(uint8_T rtu_u);
static uint8_T BitShift_c(uint8_T rtu_u);

/* Forward declaration for local functions */
static void arduinoCANTransmit_writeMCPR_m2(codertarget_arduinobase_int_m2g *obj,
  uint8_T b_value);
static void arduinoCANTransmit_writeMCP_m2g(codertarget_arduinobase_int_m2g *obj,
  uint8_T b_value);
static void arduinoCANTransmit_write_m2grvu(codertarget_arduinobase_int_m2g *obj,
  uint8_T b_value);
static void arduinoCANTransmit_writ_m2grvul(codertarget_arduinobase_int_m2g *obj,
  uint8_T b_value);
static void arduinoCANTransmit_writeMC_m2gr(codertarget_arduinobase_int_m2g *obj);
static void arduinoCANTransmit_writeM_m2grv(codertarget_arduinobase_int_m2g *obj);
static void arduinoCANTransmit_wri_m2grvulq(codertarget_arduinobase_int_m2g *obj,
  uint8_T b_value);
static void arduinoCANTransmit_wr_m2grvulqa(codertarget_arduinobase_int_m2g *obj);
static uint8_T arduinoCANTransmit_readMCPReg_m(codertarget_arduinobase_int_m2g
  *obj);
static void arduinoCANTransmit_modifyMCPReg(codertarget_arduinobase_int_m2g *obj);
static void arduinoCANTransmit_modifyMCPR_m(codertarget_arduinobase_int_m2g *obj);
static uint8_T arduinoCANTransmit_readMCPRe_m2(codertarget_arduinobase_int_m2g
  *obj);
static uint8_T arduinoCANTransmit_MCP_SendCANM(codertarget_arduinobase_int_m2g
  *obj, const char_T idType[28], uint32_T txId, uint8_T txLength, const real_T
  txData[64], uint8_T rtr);
static void arduinoCANReceive_writeMCPRegis(codertarget_arduinobase_inte_m2 *obj);
static uint8_T arduinoCANReceive_readMCPRegist(codertarget_arduinobase_inte_m2
  *obj);
static void arduinoCANReceive_writeMCPReg_m(codertarget_arduinobase_inte_m2 *obj);
static void arduinoCANReceive_MCP_CANInit(codertarget_arduinobase_inte_m2 *obj);
static void arduinoCANReceive_writeMCPRe_m2(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPR_m2g(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeM_m2grvu(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_write_m2grvul(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_wr_m2grvulqa0(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_w_m2grvulqa0y(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceiv_m2grvulqa0ynj0(codertarget_arduinobase_inte_m2 *obj);
static void arduinoCANReceive_setNormalFilt(codertarget_arduinobase_inte_m2 *obj,
  uint32_T mask0, uint32_T filter0, uint32_T filter1);
static void arduinoCANReceive_writeMCP_m2gr(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMC_m2grv(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writ_m2grvulq(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_wri_m2grvulqa(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive__m2grvulqa0yn(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_m2grvulqa0ynj(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_setExtendedFi(codertarget_arduinobase_inte_m2 *obj,
  uint32_T mask0, uint32_T filter0, uint32_T filter1);
static void arduinoCANReceive_writeMCPReg_b(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPReg_e(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPReg_i(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPRe_bx(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPRe_k2(codertarget_arduinobase_inte_m2 *obj);
static void arduinoCANReceive_writeMCPRe_gm(codertarget_arduinobase_inte_m2 *obj);
static void arduinoCANReceive_writeMCPReg_f(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPReg_g(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPRe_ek(codertarget_arduinobase_inte_m2 *obj);
static void arduinoCANReceive_writeMCPRe_k5(codertarget_arduinobase_inte_m2 *obj);
static void arduinoCANReceive_writeMCPReg_h(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPRe_ij(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPR_m2s(codertarget_arduinobase_inte_m2 *obj);
static void arduinoCANReceive_writeMCPRe_mx(codertarget_arduinobase_inte_m2 *obj);
static void arduinoCANReceive_writeMCPRe_fx(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPRe_mp(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPRe_et(codertarget_arduinobase_inte_m2 *obj);
static void arduinoCANReceive_writeMCPReg_o(codertarget_arduinobase_inte_m2 *obj);
static void arduinoCANReceive_setNormalFi_m(codertarget_arduinobase_inte_m2 *obj,
  uint32_T mask1, uint32_T filter2, uint32_T filter3, uint32_T filter4, uint32_T
  filter5);
static void arduinoCANRecei_m2grvulqa0ynj0b(codertarget_arduinobase_inte_m2 *obj);
static void arduinoCANReceive_writeMCPReg_d(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPRe_bv(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPRe_by(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPReg_j(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPReg_c(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPRe_eb(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPReg_k(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPRe_m4(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPReg_n(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_writeMCPRe_me(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value);
static void arduinoCANReceive_setExtended_m(codertarget_arduinobase_inte_m2 *obj,
  uint32_T mask1, uint32_T filter2, uint32_T filter3, uint32_T filter4, uint32_T
  filter5);
static void SystemCore_setup(codertarget_arduinobase_inte_m2 *obj);
static uint8_T arduinoCANTransmit_readMCPRegis(codertarget_arduinobase_int_m2g
  *obj);
static void arduinoCANTransmit_writeMCPRegi(codertarget_arduinobase_int_m2g *obj);
static void arduinoCANTransmit_writeMCPRe_m(codertarget_arduinobase_int_m2g *obj);
static void SystemCore_setup_m(codertarget_arduinobase_int_m2g *obj);
static void rate_scheduler(void);

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (rtM->Timing.TaskCounters.TID[1])++;
  if ((rtM->Timing.TaskCounters.TID[1]) > 4) {/* Sample time: [0.5s, 0.0s] */
    rtM->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S9>/Bit Shift'
 *    '<S10>/Bit Shift'
 *    '<S12>/Bit Shift'
 *    '<S13>/Bit Shift'
 *    '<S14>/Bit Shift'
 *    '<S16>/Bit Shift'
 */
static uint8_T BitShift(uint8_T rtu_u)
{
  /* MATLAB Function: '<S17>/bit_shift' */
  return (uint8_T)((uint16_T)rtu_u >> 4);
}

/*
 * Output and update for atomic system:
 *    '<S3>/Bit Shift'
 *    '<S4>/Bit Shift'
 *    '<S5>/Bit Shift'
 *    '<S6>/Bit Shift'
 *    '<S7>/Bit Shift'
 *    '<S8>/Bit Shift'
 */
static uint8_T BitShift_c(uint8_T rtu_u)
{
  /* MATLAB Function: '<S31>/bit_shift' */
  return (uint8_T)(rtu_u << 4);
}

static void arduinoCANTransmit_writeMCPR_m2(codertarget_arduinobase_int_m2g *obj,
  uint8_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1_0;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;
  varargin_1[0] = 2U;
  varargin_1[1] = 49U;
  varargin_1[2] = b_value;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_ju.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_ju;
    varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        tmp = (uint8_T)varargin_1_0;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  varargin_1_0 = obj->spiObj.slaveSelectPin_;
  varargin_1_0 = rt_roundd(varargin_1_0);
  if (varargin_1_0 < 256.0) {
    if (varargin_1_0 >= 0.0) {
      tmp = (uint8_T)varargin_1_0;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  MW_SPIwriteReadLoop(tmp, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANTransmit_writeMCP_m2g(codertarget_arduinobase_int_m2g *obj,
  uint8_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1_0;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;
  varargin_1[0] = 2U;
  varargin_1[1] = 50U;
  varargin_1[2] = b_value;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_a.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_a;
    varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        tmp = (uint8_T)varargin_1_0;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  varargin_1_0 = obj->spiObj.slaveSelectPin_;
  varargin_1_0 = rt_roundd(varargin_1_0);
  if (varargin_1_0 < 256.0) {
    if (varargin_1_0 >= 0.0) {
      tmp = (uint8_T)varargin_1_0;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  MW_SPIwriteReadLoop(tmp, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANTransmit_write_m2grvu(codertarget_arduinobase_int_m2g *obj,
  uint8_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1_0;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;
  varargin_1[0] = 2U;
  varargin_1[1] = 51U;
  varargin_1[2] = b_value;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_o4.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_o4;
    varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        tmp = (uint8_T)varargin_1_0;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  varargin_1_0 = obj->spiObj.slaveSelectPin_;
  varargin_1_0 = rt_roundd(varargin_1_0);
  if (varargin_1_0 < 256.0) {
    if (varargin_1_0 >= 0.0) {
      tmp = (uint8_T)varargin_1_0;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  MW_SPIwriteReadLoop(tmp, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANTransmit_writ_m2grvul(codertarget_arduinobase_int_m2g *obj,
  uint8_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1_0;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;
  varargin_1[0] = 2U;
  varargin_1[1] = 52U;
  varargin_1[2] = b_value;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_jz5.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_jz5;
    varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        tmp = (uint8_T)varargin_1_0;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  varargin_1_0 = obj->spiObj.slaveSelectPin_;
  varargin_1_0 = rt_roundd(varargin_1_0);
  if (varargin_1_0 < 256.0) {
    if (varargin_1_0 >= 0.0) {
      tmp = (uint8_T)varargin_1_0;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  MW_SPIwriteReadLoop(tmp, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANTransmit_writeMC_m2gr(codertarget_arduinobase_int_m2g *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 51U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_ev.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_ev;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANTransmit_writeM_m2grv(codertarget_arduinobase_int_m2g *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 52U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_af.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_af;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANTransmit_wri_m2grvulq(codertarget_arduinobase_int_m2g *obj,
  uint8_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1_0;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;
  varargin_1[0] = 2U;
  varargin_1[1] = 53U;
  varargin_1[2] = b_value;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_m.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_m;
    varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        tmp = (uint8_T)varargin_1_0;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  varargin_1_0 = obj->spiObj.slaveSelectPin_;
  varargin_1_0 = rt_roundd(varargin_1_0);
  if (varargin_1_0 < 256.0) {
    if (varargin_1_0 >= 0.0) {
      tmp = (uint8_T)varargin_1_0;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  MW_SPIwriteReadLoop(tmp, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANTransmit_wr_m2grvulqa(codertarget_arduinobase_int_m2g *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 48U, 8U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_p5.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_p5;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static uint8_T arduinoCANTransmit_readMCPReg_m(codertarget_arduinobase_int_m2g
  *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T arr[3];
  uint8_T y;
  static const uint8_T In[3] = { 3U, 48U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_ct.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_ct;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &arr[0]);
  y = arr[2];
  return y;
}

static void arduinoCANTransmit_modifyMCPReg(codertarget_arduinobase_int_m2g *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[4];
  static const uint8_T In[4] = { 5U, 15U, 16U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 4, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_i.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_i;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  MW_SPIwriteReadLoop(tmp, &In[0], 4.0, 1.0, &outputData[0]);
}

static void arduinoCANTransmit_modifyMCPR_m(codertarget_arduinobase_int_m2g *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[4];
  static const uint8_T In[4] = { 5U, 44U, 4U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 4, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_ny.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_ny;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  MW_SPIwriteReadLoop(tmp, &In[0], 4.0, 1.0, &outputData[0]);
}

static uint8_T arduinoCANTransmit_readMCPRe_m2(codertarget_arduinobase_int_m2g
  *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T arr[3];
  uint8_T y;
  static const uint8_T In[3] = { 3U, 45U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_px.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_px;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &arr[0]);
  y = arr[2];
  return y;
}

static uint8_T arduinoCANTransmit_MCP_SendCANM(codertarget_arduinobase_int_m2g
  *obj, const char_T idType[28], uint32_T txId, uint8_T txLength, const real_T
  txData[64], uint8_T rtr)
{
  n_codertarget_arduinobase_inter *obj_0;
  int16_T ret;
  uint8_T outputData_0[4];
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T Status;
  uint8_T r;
  static const uint8_T In[4] = { 5U, 15U, 16U, 16U };

  static const char_T b[28] = { 'S', 't', 'a', 'n', 'd', 'a', 'r', 'd', ' ', '(',
    '1', '1', '-', 'b', 'i', 't', ' ', 'i', 'd', 'e', 'n', 't', 'i', 'f', 'i',
    'e', 'r', ')' };

  static const char_T b_0[28] = { 'E', 'x', 't', 'e', 'n', 'd', 'e', 'd', ' ',
    '(', '2', '9', '-', 'b', 'i', 't', ' ', 'i', 'd', 'e', 'n', 't', 'i', 'f',
    'i', 'e', 'r', ')' };

  int16_T qY;
  uint16_T tmp;
  static const int8_T inSize[8] = { 1, 4, 1, 1, 1, 1, 1, 1 };

  static const int8_T inSize_0[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  int16_T b_tmp;
  boolean_T exitg1;
  boolean_T guard1;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  Status = 0U;
  ret = memcmp(&idType[0], &b[0], 28);
  guard1 = false;
  if (ret == 0) {
    if (txId > 2047UL) {
    } else {
      arduinoCANTransmit_writeMCPR_m2(obj, (uint8_T)((uint16_T)txId >> 3));
      arduinoCANTransmit_writeMCP_m2g(obj, (uint8_T)((int16_T)((uint16_T)txId <<
        5) & 255));
      arduinoCANTransmit_writeMC_m2gr(obj);
      arduinoCANTransmit_writeM_m2grv(obj);
      guard1 = true;
    }
  } else {
    ret = memcmp(&idType[0], &b_0[0], 28);
    if (ret == 0) {
      if (txId > 536870911UL) {
      } else {
        arduinoCANTransmit_writeMCPR_m2(obj, (uint8_T)(txId >> 21));
        arduinoCANTransmit_writeMCP_m2g(obj, (uint8_T)(((int16_T)(txId >> 18) &
          7) << 5 | 8 | ((int16_T)(txId >> 16) & 3)));
        arduinoCANTransmit_write_m2grvu(obj, (uint8_T)((int16_T)(txId >> 8) &
          255));
        arduinoCANTransmit_writ_m2grvul(obj, (uint8_T)((int16_T)txId & 255));
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    if (rtr == 1) {
      arduinoCANTransmit_wri_m2grvulq(obj, (uint8_T)(txLength | 64));
    } else {
      arduinoCANTransmit_wri_m2grvulq(obj, txLength);
      b_tmp = txLength - 1;
      if (txLength - 1 >= 0) {
        varargin_1[0] = 2U;
      }

      for (ret = 0; ret <= b_tmp; ret++) {
        obj_0 = &obj->spiObj;
        tmp = (uint16_T)ret + 55U;
        if ((uint16_T)ret + 55U > 255U) {
          tmp = 255U;
        }

        qY = (int16_T)(tmp - /*MW:OvSatOk*/ 1U);
        if (tmp - 1U > tmp) {
          qY = 0;
        }

        varargin_1[1] = (uint8_T)qY;
        rtDW.varargin_1 = rt_roundd(txData[ret]);
        if (rtDW.varargin_1 < 256.0) {
          if (rtDW.varargin_1 >= 0.0) {
            varargin_1[2] = (uint8_T)rtDW.varargin_1;
          } else {
            varargin_1[2] = 0U;
          }
        } else {
          varargin_1[2] = MAX_uint8_T;
        }

        if (obj->spiObj.isInitialized != 1L) {
          obj->spiObj.isSetupComplete = false;
          obj->spiObj.isInitialized = 1L;
          for (qY = 0; qY < 8; qY++) {
            rtDW.varSizes.f1[qY] = (uint32_T)inSize_0[qY];
          }

          obj->spiObj.inputVarSize = rtDW.varSizes;
          rtDW.varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
          if (rtDW.varargin_1 < 256.0) {
            if (rtDW.varargin_1 >= 0.0) {
              r = (uint8_T)rtDW.varargin_1;
            } else {
              r = 0U;
            }
          } else {
            r = MAX_uint8_T;
          }

          MW_SSpinSetup(r);
          obj->spiObj.isSetupComplete = true;
        }

        qY = 0;
        exitg1 = false;
        while ((!exitg1) && (qY < 8)) {
          if (obj_0->inputVarSize.f1[qY] != (uint32_T)inSize_0[qY]) {
            for (qY = 0; qY < 8; qY++) {
              obj_0->inputVarSize.f1[qY] = (uint32_T)inSize_0[qY];
            }

            exitg1 = true;
          } else {
            qY++;
          }
        }

        rtDW.varargin_1 = obj->spiObj.slaveSelectPin_;
        rtDW.varargin_1 = rt_roundd(rtDW.varargin_1);
        if (rtDW.varargin_1 < 256.0) {
          if (rtDW.varargin_1 >= 0.0) {
            r = (uint8_T)rtDW.varargin_1;
          } else {
            r = 0U;
          }
        } else {
          r = MAX_uint8_T;
        }

        MW_SPIwriteReadLoop(r, &varargin_1[0], 3.0, 1.0, &outputData[0]);
      }
    }

    arduinoCANTransmit_wr_m2grvulqa(obj);
    arduinoCANTransmit_readMCPReg_m(obj);
    r = arduinoCANTransmit_readMCPReg_m(obj);
    if ((r & 16) > 0) {
      obj_0 = &obj->spiObj;
      if (obj->spiObj.isInitialized != 1L) {
        obj->spiObj.isSetupComplete = false;
        obj->spiObj.isInitialized = 1L;
        for (qY = 0; qY < 8; qY++) {
          rtDW.varSizes.f1[qY] = (uint32_T)inSize[qY];
        }

        obj->spiObj.inputVarSize = rtDW.varSizes;
        rtDW.varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
        if (rtDW.varargin_1 < 256.0) {
          if (rtDW.varargin_1 >= 0.0) {
            r = (uint8_T)rtDW.varargin_1;
          } else {
            r = 0U;
          }
        } else {
          r = MAX_uint8_T;
        }

        MW_SSpinSetup(r);
        obj->spiObj.isSetupComplete = true;
      }

      qY = 0;
      exitg1 = false;
      while ((!exitg1) && (qY < 8)) {
        if (obj_0->inputVarSize.f1[qY] != (uint32_T)inSize[qY]) {
          for (qY = 0; qY < 8; qY++) {
            obj_0->inputVarSize.f1[qY] = (uint32_T)inSize[qY];
          }

          exitg1 = true;
        } else {
          qY++;
        }
      }

      rtDW.varargin_1 = obj->spiObj.slaveSelectPin_;
      rtDW.varargin_1 = rt_roundd(rtDW.varargin_1);
      if (rtDW.varargin_1 < 256.0) {
        if (rtDW.varargin_1 >= 0.0) {
          r = (uint8_T)rtDW.varargin_1;
        } else {
          r = 0U;
        }
      } else {
        r = MAX_uint8_T;
      }

      MW_SPIwriteReadLoop(r, &In[0], 4.0, 1.0, &outputData_0[0]);
      arduinoCANTransmit_modifyMCPReg(obj);
    }

    arduinoCANTransmit_modifyMCPR_m(obj);
    r = arduinoCANTransmit_readMCPRe_m2(obj);
    Status = arduinoCANTransmit_readMCPReg_m(obj);
    Status = (uint8_T)((int16_T)((uint16_T)(r & 4) >> 2) | (int16_T)((uint16_T)
      (r & 48) >> 3) | ((int16_T)((uint16_T)Status >> 1) & 56));
  }

  /* End of Start for MATLABSystem: '<Root>/CAN Transmit' */
  return Status;
}

static void arduinoCANReceive_writeMCPRegis(codertarget_arduinobase_inte_m2 *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 15U, 128U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_l.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_l;
    rtDW.varargin_1_h2 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_h2 < 256.0) {
      if (rtDW.varargin_1_h2 >= 0.0) {
        tmp = (uint8_T)rtDW.varargin_1_h2;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_h2 = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_h2 = rt_roundd(rtDW.varargin_1_h2);
  if (rtDW.varargin_1_h2 < 256.0) {
    if (rtDW.varargin_1_h2 >= 0.0) {
      tmp = (uint8_T)rtDW.varargin_1_h2;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static uint8_T arduinoCANReceive_readMCPRegist(codertarget_arduinobase_inte_m2
  *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  int16_T b_k;
  uint8_T arr[3];
  uint8_T y;
  static const uint8_T In[3] = { 3U, 15U, 128U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_pp.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_pp;
    rtDW.varargin_1_l5 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_l5 < 256.0) {
      if (rtDW.varargin_1_l5 >= 0.0) {
        tmp = (uint8_T)rtDW.varargin_1_l5;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_l5 = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_l5 = rt_roundd(rtDW.varargin_1_l5);
  if (rtDW.varargin_1_l5 < 256.0) {
    if (rtDW.varargin_1_l5 >= 0.0) {
      tmp = (uint8_T)rtDW.varargin_1_l5;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &arr[0]);
  y = arr[2];
  return y;
}

static void arduinoCANReceive_writeMCPReg_m(codertarget_arduinobase_inte_m2 *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 15U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_cx.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_cx;
    rtDW.varargin_1_mj = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_mj < 256.0) {
      if (rtDW.varargin_1_mj >= 0.0) {
        tmp = (uint8_T)rtDW.varargin_1_mj;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_mj = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_mj = rt_roundd(rtDW.varargin_1_mj);
  if (rtDW.varargin_1_mj < 256.0) {
    if (rtDW.varargin_1_mj >= 0.0) {
      tmp = (uint8_T)rtDW.varargin_1_mj;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_MCP_CANInit(codertarget_arduinobase_inte_m2 *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  int16_T b_k;
  uint8_T cnfValues[3];
  uint8_T outputData_0[3];
  uint8_T varargin_1[3];
  uint8_T In;
  uint8_T outputData;
  uint8_T status;
  static const uint8_T In_0[3] = { 2U, 43U, 35U };

  static const uint8_T In_1[3] = { 2U, 12U, 0U };

  static const uint8_T In_2[3] = { 2U, 13U, 0U };

  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  obj_0 = &obj->spiObj;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_k.f1[b_k] = 1UL;
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_k;
    rtDW.varargin_1_m = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_m < 256.0) {
      if (rtDW.varargin_1_m >= 0.0) {
        status = (uint8_T)rtDW.varargin_1_m;
      } else {
        status = 0U;
      }
    } else {
      status = MAX_uint8_T;
    }

    MW_SSpinSetup(status);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != 1UL) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = 1UL;
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  In = 192U;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_m = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_m = rt_roundd(rtDW.varargin_1_m);
  if (rtDW.varargin_1_m < 256.0) {
    if (rtDW.varargin_1_m >= 0.0) {
      status = (uint8_T)rtDW.varargin_1_m;
    } else {
      status = 0U;
    }
  } else {
    status = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(status, &In, 1.0, 1.0, &outputData);
  arduinoCANReceive_writeMCPRegis(obj);
  status = arduinoCANReceive_readMCPRegist(obj);
  if (status == 128) {
    /* Start for MATLABSystem: '<Root>/CAN Receive' */
    cnfValues[0] = 0U;
    cnfValues[1] = 0U;
    cnfValues[2] = 0U;
    MW_GetCANBaud(&cnfValues[0], &cnfValues[1], &cnfValues[2]);
    if ((cnfValues[0] == 0) && (cnfValues[1] == 0) && (cnfValues[2] == 0)) {
    } else {
      /* Start for MATLABSystem: '<Root>/CAN Receive' */
      obj_0 = &obj->spiObj;
      varargin_1[0] = 2U;
      varargin_1[1] = 42U;

      /* Start for MATLABSystem: '<Root>/CAN Receive' */
      varargin_1[2] = cnfValues[0];
      if (obj->spiObj.isInitialized != 1L) {
        obj->spiObj.isSetupComplete = false;
        obj->spiObj.isInitialized = 1L;
        for (b_k = 0; b_k < 8; b_k++) {
          rtDW.varSizes_k.f1[b_k] = (uint32_T)inSize[b_k];
        }

        obj->spiObj.inputVarSize = rtDW.varSizes_k;
        rtDW.varargin_1_m = rt_roundd(obj->spiObj.slaveSelectPin_);
        if (rtDW.varargin_1_m < 256.0) {
          if (rtDW.varargin_1_m >= 0.0) {
            status = (uint8_T)rtDW.varargin_1_m;
          } else {
            status = 0U;
          }
        } else {
          status = MAX_uint8_T;
        }

        MW_SSpinSetup(status);
        obj->spiObj.isSetupComplete = true;
      }

      b_k = 0;
      exitg1 = false;
      while ((!exitg1) && (b_k < 8)) {
        if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
          for (b_k = 0; b_k < 8; b_k++) {
            obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
          }

          exitg1 = true;
        } else {
          b_k++;
        }
      }

      /* Start for MATLABSystem: '<Root>/CAN Receive' */
      rtDW.varargin_1_m = obj->spiObj.slaveSelectPin_;
      rtDW.varargin_1_m = rt_roundd(rtDW.varargin_1_m);
      if (rtDW.varargin_1_m < 256.0) {
        if (rtDW.varargin_1_m >= 0.0) {
          status = (uint8_T)rtDW.varargin_1_m;
        } else {
          status = 0U;
        }
      } else {
        status = MAX_uint8_T;
      }

      /* Start for MATLABSystem: '<Root>/CAN Receive' */
      MW_SPIwriteReadLoop(status, &varargin_1[0], 3.0, 1.0, &outputData_0[0]);
      obj_0 = &obj->spiObj;
      varargin_1[0] = 2U;
      varargin_1[1] = 41U;

      /* Start for MATLABSystem: '<Root>/CAN Receive' */
      varargin_1[2] = cnfValues[1];
      if (obj->spiObj.isInitialized != 1L) {
        obj->spiObj.isSetupComplete = false;
        obj->spiObj.isInitialized = 1L;
        for (b_k = 0; b_k < 8; b_k++) {
          rtDW.varSizes_k.f1[b_k] = (uint32_T)inSize[b_k];
        }

        obj->spiObj.inputVarSize = rtDW.varSizes_k;
        rtDW.varargin_1_m = rt_roundd(obj->spiObj.slaveSelectPin_);
        if (rtDW.varargin_1_m < 256.0) {
          if (rtDW.varargin_1_m >= 0.0) {
            status = (uint8_T)rtDW.varargin_1_m;
          } else {
            status = 0U;
          }
        } else {
          status = MAX_uint8_T;
        }

        MW_SSpinSetup(status);
        obj->spiObj.isSetupComplete = true;
      }

      b_k = 0;
      exitg1 = false;
      while ((!exitg1) && (b_k < 8)) {
        if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
          for (b_k = 0; b_k < 8; b_k++) {
            obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
          }

          exitg1 = true;
        } else {
          b_k++;
        }
      }

      /* Start for MATLABSystem: '<Root>/CAN Receive' */
      rtDW.varargin_1_m = obj->spiObj.slaveSelectPin_;
      rtDW.varargin_1_m = rt_roundd(rtDW.varargin_1_m);
      if (rtDW.varargin_1_m < 256.0) {
        if (rtDW.varargin_1_m >= 0.0) {
          status = (uint8_T)rtDW.varargin_1_m;
        } else {
          status = 0U;
        }
      } else {
        status = MAX_uint8_T;
      }

      /* Start for MATLABSystem: '<Root>/CAN Receive' */
      MW_SPIwriteReadLoop(status, &varargin_1[0], 3.0, 1.0, &outputData_0[0]);
      obj_0 = &obj->spiObj;
      varargin_1[0] = 2U;
      varargin_1[1] = 40U;

      /* Start for MATLABSystem: '<Root>/CAN Receive' */
      varargin_1[2] = cnfValues[2];
      if (obj->spiObj.isInitialized != 1L) {
        obj->spiObj.isSetupComplete = false;
        obj->spiObj.isInitialized = 1L;
        for (b_k = 0; b_k < 8; b_k++) {
          rtDW.varSizes_k.f1[b_k] = (uint32_T)inSize[b_k];
        }

        obj->spiObj.inputVarSize = rtDW.varSizes_k;
        rtDW.varargin_1_m = rt_roundd(obj->spiObj.slaveSelectPin_);
        if (rtDW.varargin_1_m < 256.0) {
          if (rtDW.varargin_1_m >= 0.0) {
            status = (uint8_T)rtDW.varargin_1_m;
          } else {
            status = 0U;
          }
        } else {
          status = MAX_uint8_T;
        }

        MW_SSpinSetup(status);
        obj->spiObj.isSetupComplete = true;
      }

      b_k = 0;
      exitg1 = false;
      while ((!exitg1) && (b_k < 8)) {
        if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
          for (b_k = 0; b_k < 8; b_k++) {
            obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
          }

          exitg1 = true;
        } else {
          b_k++;
        }
      }

      /* Start for MATLABSystem: '<Root>/CAN Receive' */
      rtDW.varargin_1_m = obj->spiObj.slaveSelectPin_;
      rtDW.varargin_1_m = rt_roundd(rtDW.varargin_1_m);
      if (rtDW.varargin_1_m < 256.0) {
        if (rtDW.varargin_1_m >= 0.0) {
          status = (uint8_T)rtDW.varargin_1_m;
        } else {
          status = 0U;
        }
      } else {
        status = MAX_uint8_T;
      }

      /* Start for MATLABSystem: '<Root>/CAN Receive' */
      MW_SPIwriteReadLoop(status, &varargin_1[0], 3.0, 1.0, &outputData_0[0]);
    }

    /* Start for MATLABSystem: '<Root>/CAN Receive' */
    obj_0 = &obj->spiObj;
    if (obj->spiObj.isInitialized != 1L) {
      obj->spiObj.isSetupComplete = false;
      obj->spiObj.isInitialized = 1L;
      for (b_k = 0; b_k < 8; b_k++) {
        rtDW.varSizes_k.f1[b_k] = (uint32_T)inSize[b_k];
      }

      obj->spiObj.inputVarSize = rtDW.varSizes_k;
      rtDW.varargin_1_m = rt_roundd(obj->spiObj.slaveSelectPin_);
      if (rtDW.varargin_1_m < 256.0) {
        if (rtDW.varargin_1_m >= 0.0) {
          status = (uint8_T)rtDW.varargin_1_m;
        } else {
          status = 0U;
        }
      } else {
        status = MAX_uint8_T;
      }

      MW_SSpinSetup(status);
      obj->spiObj.isSetupComplete = true;
    }

    b_k = 0;
    exitg1 = false;
    while ((!exitg1) && (b_k < 8)) {
      if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
        for (b_k = 0; b_k < 8; b_k++) {
          obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
        }

        exitg1 = true;
      } else {
        b_k++;
      }
    }

    /* Start for MATLABSystem: '<Root>/CAN Receive' */
    rtDW.varargin_1_m = obj->spiObj.slaveSelectPin_;
    rtDW.varargin_1_m = rt_roundd(rtDW.varargin_1_m);
    if (rtDW.varargin_1_m < 256.0) {
      if (rtDW.varargin_1_m >= 0.0) {
        status = (uint8_T)rtDW.varargin_1_m;
      } else {
        status = 0U;
      }
    } else {
      status = MAX_uint8_T;
    }

    /* Start for MATLABSystem: '<Root>/CAN Receive' */
    MW_SPIwriteReadLoop(status, &In_0[0], 3.0, 1.0, &outputData_0[0]);
    obj_0 = &obj->spiObj;
    if (obj->spiObj.isInitialized != 1L) {
      obj->spiObj.isSetupComplete = false;
      obj->spiObj.isInitialized = 1L;
      for (b_k = 0; b_k < 8; b_k++) {
        rtDW.varSizes_k.f1[b_k] = (uint32_T)inSize[b_k];
      }

      obj->spiObj.inputVarSize = rtDW.varSizes_k;
      rtDW.varargin_1_m = rt_roundd(obj->spiObj.slaveSelectPin_);
      if (rtDW.varargin_1_m < 256.0) {
        if (rtDW.varargin_1_m >= 0.0) {
          status = (uint8_T)rtDW.varargin_1_m;
        } else {
          status = 0U;
        }
      } else {
        status = MAX_uint8_T;
      }

      MW_SSpinSetup(status);
      obj->spiObj.isSetupComplete = true;
    }

    b_k = 0;
    exitg1 = false;
    while ((!exitg1) && (b_k < 8)) {
      if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
        for (b_k = 0; b_k < 8; b_k++) {
          obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
        }

        exitg1 = true;
      } else {
        b_k++;
      }
    }

    /* Start for MATLABSystem: '<Root>/CAN Receive' */
    rtDW.varargin_1_m = obj->spiObj.slaveSelectPin_;
    rtDW.varargin_1_m = rt_roundd(rtDW.varargin_1_m);
    if (rtDW.varargin_1_m < 256.0) {
      if (rtDW.varargin_1_m >= 0.0) {
        status = (uint8_T)rtDW.varargin_1_m;
      } else {
        status = 0U;
      }
    } else {
      status = MAX_uint8_T;
    }

    /* Start for MATLABSystem: '<Root>/CAN Receive' */
    MW_SPIwriteReadLoop(status, &In_1[0], 3.0, 1.0, &outputData_0[0]);
    obj_0 = &obj->spiObj;
    if (obj->spiObj.isInitialized != 1L) {
      obj->spiObj.isSetupComplete = false;
      obj->spiObj.isInitialized = 1L;
      for (b_k = 0; b_k < 8; b_k++) {
        rtDW.varSizes_k.f1[b_k] = (uint32_T)inSize[b_k];
      }

      obj->spiObj.inputVarSize = rtDW.varSizes_k;
      rtDW.varargin_1_m = rt_roundd(obj->spiObj.slaveSelectPin_);
      if (rtDW.varargin_1_m < 256.0) {
        if (rtDW.varargin_1_m >= 0.0) {
          status = (uint8_T)rtDW.varargin_1_m;
        } else {
          status = 0U;
        }
      } else {
        status = MAX_uint8_T;
      }

      MW_SSpinSetup(status);
      obj->spiObj.isSetupComplete = true;
    }

    b_k = 0;
    exitg1 = false;
    while ((!exitg1) && (b_k < 8)) {
      if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
        for (b_k = 0; b_k < 8; b_k++) {
          obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
        }

        exitg1 = true;
      } else {
        b_k++;
      }
    }

    /* Start for MATLABSystem: '<Root>/CAN Receive' */
    rtDW.varargin_1_m = obj->spiObj.slaveSelectPin_;
    rtDW.varargin_1_m = rt_roundd(rtDW.varargin_1_m);
    if (rtDW.varargin_1_m < 256.0) {
      if (rtDW.varargin_1_m >= 0.0) {
        status = (uint8_T)rtDW.varargin_1_m;
      } else {
        status = 0U;
      }
    } else {
      status = MAX_uint8_T;
    }

    /* Start for MATLABSystem: '<Root>/CAN Receive' */
    MW_SPIwriteReadLoop(status, &In_2[0], 3.0, 1.0, &outputData_0[0]);
    arduinoCANReceive_writeMCPReg_m(obj);
  }
}

static void arduinoCANReceive_writeMCPRe_m2(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 32U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_fd.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_fd;
    rtDW.varargin_1_ei = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_ei < 256.0) {
      if (rtDW.varargin_1_ei >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_ei;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_ei = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_ei = rt_roundd(rtDW.varargin_1_ei);
  if (rtDW.varargin_1_ei < 256.0) {
    if (rtDW.varargin_1_ei >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_ei;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPR_m2g(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 33U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_jz.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_jz;
    rtDW.varargin_1_h22 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_h22 < 256.0) {
      if (rtDW.varargin_1_h22 >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_h22;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_h22 = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_h22 = rt_roundd(rtDW.varargin_1_h22);
  if (rtDW.varargin_1_h22 < 256.0) {
    if (rtDW.varargin_1_h22 >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_h22;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeM_m2grvu(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 0U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_da.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_da;
    rtDW.varargin_1_g = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_g < 256.0) {
      if (rtDW.varargin_1_g >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_g;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_g = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_g = rt_roundd(rtDW.varargin_1_g);
  if (rtDW.varargin_1_g < 256.0) {
    if (rtDW.varargin_1_g >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_g;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_write_m2grvul(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 1U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_bn.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_bn;
    rtDW.varargin_1_ao = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_ao < 256.0) {
      if (rtDW.varargin_1_ao >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_ao;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_ao = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_ao = rt_roundd(rtDW.varargin_1_ao);
  if (rtDW.varargin_1_ao < 256.0) {
    if (rtDW.varargin_1_ao >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_ao;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_wr_m2grvulqa0(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 4U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_bs.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_bs;
    rtDW.varargin_1_ek = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_ek < 256.0) {
      if (rtDW.varargin_1_ek >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_ek;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_ek = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_ek = rt_roundd(rtDW.varargin_1_ek);
  if (rtDW.varargin_1_ek < 256.0) {
    if (rtDW.varargin_1_ek >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_ek;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_w_m2grvulqa0y(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 5U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_g1.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_g1;
    rtDW.varargin_1_h = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_h < 256.0) {
      if (rtDW.varargin_1_h >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_h;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_h = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_h = rt_roundd(rtDW.varargin_1_h);
  if (rtDW.varargin_1_h < 256.0) {
    if (rtDW.varargin_1_h >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_h;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceiv_m2grvulqa0ynj0(codertarget_arduinobase_inte_m2 *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 7U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_c0.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_c0;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_setNormalFilt(codertarget_arduinobase_inte_m2 *obj,
  uint32_T mask0, uint32_T filter0, uint32_T filter1)
{
  n_codertarget_arduinobase_inter *obj_0;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 6U, 0U };

  static const uint8_T In_0[3] = { 2U, 3U, 0U };

  static const uint8_T In_1[3] = { 2U, 2U, 0U };

  static const uint8_T In_2[3] = { 2U, 35U, 0U };

  static const uint8_T In_3[3] = { 2U, 34U, 0U };

  static const uint8_T In_4[3] = { 2U, 96U, 32U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  mask0 = (uint32_T)((int16_T)mask0 & 2047);
  filter0 = (uint32_T)((int16_T)filter0 & 2047);
  filter1 = (uint32_T)((int16_T)filter1 & 2047);
  obj_0 = &obj->spiObj;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_g.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_g;
    rtDW.varargin_1_o = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_o < 256.0) {
      if (rtDW.varargin_1_o >= 0.0) {
        tmp = (uint8_T)rtDW.varargin_1_o;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_o = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_o = rt_roundd(rtDW.varargin_1_o);
  if (rtDW.varargin_1_o < 256.0) {
    if (rtDW.varargin_1_o >= 0.0) {
      tmp = (uint8_T)rtDW.varargin_1_o;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In_4[0], 3.0, 1.0, &outputData[0]);
  arduinoCANReceive_writeMCPRe_m2(obj, (uint32_T)(int16_T)((uint16_T)mask0 >> 3));
  arduinoCANReceive_writeMCPR_m2g(obj, (uint32_T)((int16_T)((uint16_T)mask0 << 5)
    & 255));
  obj_0 = &obj->spiObj;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_g.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_g;
    rtDW.varargin_1_o = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_o < 256.0) {
      if (rtDW.varargin_1_o >= 0.0) {
        tmp = (uint8_T)rtDW.varargin_1_o;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_o = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_o = rt_roundd(rtDW.varargin_1_o);
  if (rtDW.varargin_1_o < 256.0) {
    if (rtDW.varargin_1_o >= 0.0) {
      tmp = (uint8_T)rtDW.varargin_1_o;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In_3[0], 3.0, 1.0, &outputData[0]);
  obj_0 = &obj->spiObj;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_g.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_g;
    rtDW.varargin_1_o = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_o < 256.0) {
      if (rtDW.varargin_1_o >= 0.0) {
        tmp = (uint8_T)rtDW.varargin_1_o;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_o = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_o = rt_roundd(rtDW.varargin_1_o);
  if (rtDW.varargin_1_o < 256.0) {
    if (rtDW.varargin_1_o >= 0.0) {
      tmp = (uint8_T)rtDW.varargin_1_o;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In_2[0], 3.0, 1.0, &outputData[0]);
  arduinoCANReceive_writeM_m2grvu(obj, (uint32_T)(int16_T)((uint16_T)filter0 >>
    3));
  arduinoCANReceive_write_m2grvul(obj, (uint32_T)((int16_T)((uint16_T)filter0 <<
    5) & 255));
  obj_0 = &obj->spiObj;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_g.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_g;
    rtDW.varargin_1_o = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_o < 256.0) {
      if (rtDW.varargin_1_o >= 0.0) {
        tmp = (uint8_T)rtDW.varargin_1_o;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_o = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_o = rt_roundd(rtDW.varargin_1_o);
  if (rtDW.varargin_1_o < 256.0) {
    if (rtDW.varargin_1_o >= 0.0) {
      tmp = (uint8_T)rtDW.varargin_1_o;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In_1[0], 3.0, 1.0, &outputData[0]);
  obj_0 = &obj->spiObj;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_g.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_g;
    rtDW.varargin_1_o = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_o < 256.0) {
      if (rtDW.varargin_1_o >= 0.0) {
        tmp = (uint8_T)rtDW.varargin_1_o;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_o = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_o = rt_roundd(rtDW.varargin_1_o);
  if (rtDW.varargin_1_o < 256.0) {
    if (rtDW.varargin_1_o >= 0.0) {
      tmp = (uint8_T)rtDW.varargin_1_o;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In_0[0], 3.0, 1.0, &outputData[0]);
  arduinoCANReceive_wr_m2grvulqa0(obj, (uint32_T)(int16_T)((uint16_T)filter1 >>
    3));
  arduinoCANReceive_w_m2grvulqa0y(obj, (uint32_T)((int16_T)((uint16_T)filter1 <<
    5) & 255));
  obj_0 = &obj->spiObj;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_g.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_g;
    rtDW.varargin_1_o = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_o < 256.0) {
      if (rtDW.varargin_1_o >= 0.0) {
        tmp = (uint8_T)rtDW.varargin_1_o;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_o = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_o = rt_roundd(rtDW.varargin_1_o);
  if (rtDW.varargin_1_o < 256.0) {
    if (rtDW.varargin_1_o >= 0.0) {
      tmp = (uint8_T)rtDW.varargin_1_o;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
  arduinoCANReceiv_m2grvulqa0ynj0(obj);
}

static void arduinoCANReceive_writeMCP_m2gr(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 34U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_bjv.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_bjv;
    rtDW.varargin_1_fi = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_fi < 256.0) {
      if (rtDW.varargin_1_fi >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_fi;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_fi = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_fi = rt_roundd(rtDW.varargin_1_fi);
  if (rtDW.varargin_1_fi < 256.0) {
    if (rtDW.varargin_1_fi >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_fi;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMC_m2grv(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 35U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_e.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_e;
    rtDW.varargin_1_ex = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_ex < 256.0) {
      if (rtDW.varargin_1_ex >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_ex;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_ex = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_ex = rt_roundd(rtDW.varargin_1_ex);
  if (rtDW.varargin_1_ex < 256.0) {
    if (rtDW.varargin_1_ex >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_ex;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writ_m2grvulq(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 2U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_h.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_h;
    rtDW.varargin_1_b = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_b < 256.0) {
      if (rtDW.varargin_1_b >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_b;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_b = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_b = rt_roundd(rtDW.varargin_1_b);
  if (rtDW.varargin_1_b < 256.0) {
    if (rtDW.varargin_1_b >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_b;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_wri_m2grvulqa(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 3U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_ln.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_ln;
    rtDW.varargin_1_ol = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_ol < 256.0) {
      if (rtDW.varargin_1_ol >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_ol;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_ol = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_ol = rt_roundd(rtDW.varargin_1_ol);
  if (rtDW.varargin_1_ol < 256.0) {
    if (rtDW.varargin_1_ol >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_ol;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive__m2grvulqa0yn(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 6U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_nu.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_nu;
    rtDW.varargin_1_j = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_j < 256.0) {
      if (rtDW.varargin_1_j >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_j;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_j = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_j = rt_roundd(rtDW.varargin_1_j);
  if (rtDW.varargin_1_j < 256.0) {
    if (rtDW.varargin_1_j >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_j;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_m2grvulqa0ynj(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 7U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_f.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_f;
    rtDW.varargin_1_e = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_e < 256.0) {
      if (rtDW.varargin_1_e >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_e;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_e = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_e = rt_roundd(rtDW.varargin_1_e);
  if (rtDW.varargin_1_e < 256.0) {
    if (rtDW.varargin_1_e >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_e;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_setExtendedFi(codertarget_arduinobase_inte_m2 *obj,
  uint32_T mask0, uint32_T filter0, uint32_T filter1)
{
  n_codertarget_arduinobase_inter *obj_0;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 96U, 64U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  mask0 &= 536870911UL;
  filter0 &= 536870911UL;
  filter1 &= 536870911UL;
  obj_0 = &obj->spiObj;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_cv.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_cv;
    rtDW.varargin_1_p = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_p < 256.0) {
      if (rtDW.varargin_1_p >= 0.0) {
        tmp = (uint8_T)rtDW.varargin_1_p;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_p = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_p = rt_roundd(rtDW.varargin_1_p);
  if (rtDW.varargin_1_p < 256.0) {
    if (rtDW.varargin_1_p >= 0.0) {
      tmp = (uint8_T)rtDW.varargin_1_p;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
  arduinoCANReceive_writeMCPRe_m2(obj, mask0 >> 21);
  arduinoCANReceive_writeMCPR_m2g(obj, (uint32_T)(((int16_T)(mask0 >> 18) & 3) <<
    5 | 8 | ((int16_T)(mask0 >> 16) & 3)));
  arduinoCANReceive_writeMCP_m2gr(obj, (uint32_T)((int16_T)(mask0 >> 8) & 255));
  arduinoCANReceive_writeMC_m2grv(obj, (uint32_T)((int16_T)mask0 & 255));
  arduinoCANReceive_writeM_m2grvu(obj, filter0 >> 21);
  arduinoCANReceive_write_m2grvul(obj, (uint32_T)(((int16_T)(filter0 >> 18) & 3)
    << 5 | 8 | ((int16_T)(filter0 >> 16) & 3)));
  arduinoCANReceive_writ_m2grvulq(obj, (uint32_T)((int16_T)(filter0 >> 8) & 255));
  arduinoCANReceive_wri_m2grvulqa(obj, (uint32_T)((int16_T)filter0 & 255));
  arduinoCANReceive_wr_m2grvulqa0(obj, filter1 >> 21);
  arduinoCANReceive_w_m2grvulqa0y(obj, (uint32_T)(((int16_T)(filter1 >> 18) & 3)
    << 5 | 8 | ((int16_T)(filter1 >> 16) & 3)));
  arduinoCANReceive__m2grvulqa0yn(obj, (uint32_T)((int16_T)(filter1 >> 8) & 255));
  arduinoCANReceive_m2grvulqa0ynj(obj, (uint32_T)((int16_T)filter1 & 255));
}

static void arduinoCANReceive_writeMCPReg_b(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 36U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_bj.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_bj;
    rtDW.varargin_1_a = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_a < 256.0) {
      if (rtDW.varargin_1_a >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_a;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_a = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_a = rt_roundd(rtDW.varargin_1_a);
  if (rtDW.varargin_1_a < 256.0) {
    if (rtDW.varargin_1_a >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_a;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPReg_e(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 37U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_o.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_o;
    rtDW.varargin_1_p4 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_p4 < 256.0) {
      if (rtDW.varargin_1_p4 >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_p4;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_p4 = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_p4 = rt_roundd(rtDW.varargin_1_p4);
  if (rtDW.varargin_1_p4 < 256.0) {
    if (rtDW.varargin_1_p4 >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_p4;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPReg_i(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 8U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_lx.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_lx;
    rtDW.varargin_1_px = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_px < 256.0) {
      if (rtDW.varargin_1_px >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_px;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_px = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_px = rt_roundd(rtDW.varargin_1_px);
  if (rtDW.varargin_1_px < 256.0) {
    if (rtDW.varargin_1_px >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_px;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPRe_bx(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 9U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_dy.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_dy;
    rtDW.varargin_1_pc = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_pc < 256.0) {
      if (rtDW.varargin_1_pc >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_pc;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_pc = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_pc = rt_roundd(rtDW.varargin_1_pc);
  if (rtDW.varargin_1_pc < 256.0) {
    if (rtDW.varargin_1_pc >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_pc;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPRe_k2(codertarget_arduinobase_inte_m2 *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 10U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_h5.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_h5;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPRe_gm(codertarget_arduinobase_inte_m2 *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 11U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_ja.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_ja;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPReg_f(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 16U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_dh.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_dh;
    rtDW.varargin_1_k = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_k < 256.0) {
      if (rtDW.varargin_1_k >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_k;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_k = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_k = rt_roundd(rtDW.varargin_1_k);
  if (rtDW.varargin_1_k < 256.0) {
    if (rtDW.varargin_1_k >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_k;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPReg_g(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 17U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_ld.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_ld;
    rtDW.varargin_1_cs = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_cs < 256.0) {
      if (rtDW.varargin_1_cs >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_cs;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_cs = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_cs = rt_roundd(rtDW.varargin_1_cs);
  if (rtDW.varargin_1_cs < 256.0) {
    if (rtDW.varargin_1_cs >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_cs;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPRe_ek(codertarget_arduinobase_inte_m2 *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 18U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_m3y.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_m3y;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPRe_k5(codertarget_arduinobase_inte_m2 *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 19U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_md.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_md;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPReg_h(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 20U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_gu.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_gu;
    rtDW.varargin_1_h3 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_h3 < 256.0) {
      if (rtDW.varargin_1_h3 >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_h3;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_h3 = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_h3 = rt_roundd(rtDW.varargin_1_h3);
  if (rtDW.varargin_1_h3 < 256.0) {
    if (rtDW.varargin_1_h3 >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_h3;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPRe_ij(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 21U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_d.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_d;
    rtDW.varargin_1_mc = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_mc < 256.0) {
      if (rtDW.varargin_1_mc >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_mc;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_mc = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_mc = rt_roundd(rtDW.varargin_1_mc);
  if (rtDW.varargin_1_mc < 256.0) {
    if (rtDW.varargin_1_mc >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_mc;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPR_m2s(codertarget_arduinobase_inte_m2 *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 22U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_cz.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_cz;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPRe_mx(codertarget_arduinobase_inte_m2 *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 23U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_m3.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_m3;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPRe_fx(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 24U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_j.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_j;
    rtDW.varargin_1_me = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_me < 256.0) {
      if (rtDW.varargin_1_me >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_me;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_me = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_me = rt_roundd(rtDW.varargin_1_me);
  if (rtDW.varargin_1_me < 256.0) {
    if (rtDW.varargin_1_me >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_me;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPRe_mp(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 25U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_p.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_p;
    rtDW.varargin_1_f = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_f < 256.0) {
      if (rtDW.varargin_1_f >= 0.0) {
        tmp_0 = (uint8_T)rtDW.varargin_1_f;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_f = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_f = rt_roundd(rtDW.varargin_1_f);
  if (rtDW.varargin_1_f < 256.0) {
    if (rtDW.varargin_1_f >= 0.0) {
      tmp_0 = (uint8_T)rtDW.varargin_1_f;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPRe_et(codertarget_arduinobase_inte_m2 *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 26U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_nv.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_nv;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPReg_o(codertarget_arduinobase_inte_m2 *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 27U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_oy.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_oy;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_setNormalFi_m(codertarget_arduinobase_inte_m2 *obj,
  uint32_T mask1, uint32_T filter2, uint32_T filter3, uint32_T filter4, uint32_T
  filter5)
{
  n_codertarget_arduinobase_inter *obj_0;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 39U, 0U };

  static const uint8_T In_0[3] = { 2U, 38U, 0U };

  static const uint8_T In_1[3] = { 2U, 112U, 32U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  mask1 = (uint32_T)((int16_T)mask1 & 2047);
  filter2 = (uint32_T)((int16_T)filter2 & 2047);
  filter3 = (uint32_T)((int16_T)filter3 & 2047);
  filter4 = (uint32_T)((int16_T)filter4 & 2047);
  filter5 = (uint32_T)((int16_T)filter5 & 2047);
  obj_0 = &obj->spiObj;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_b.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_b;
    rtDW.varargin_1_c = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_c < 256.0) {
      if (rtDW.varargin_1_c >= 0.0) {
        tmp = (uint8_T)rtDW.varargin_1_c;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_c = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_c = rt_roundd(rtDW.varargin_1_c);
  if (rtDW.varargin_1_c < 256.0) {
    if (rtDW.varargin_1_c >= 0.0) {
      tmp = (uint8_T)rtDW.varargin_1_c;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In_1[0], 3.0, 1.0, &outputData[0]);
  arduinoCANReceive_writeMCPReg_b(obj, (uint32_T)(int16_T)((uint16_T)mask1 >> 3));
  arduinoCANReceive_writeMCPReg_e(obj, (uint32_T)((int16_T)((uint16_T)mask1 << 5)
    & 255));
  obj_0 = &obj->spiObj;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_b.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_b;
    rtDW.varargin_1_c = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_c < 256.0) {
      if (rtDW.varargin_1_c >= 0.0) {
        tmp = (uint8_T)rtDW.varargin_1_c;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_c = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_c = rt_roundd(rtDW.varargin_1_c);
  if (rtDW.varargin_1_c < 256.0) {
    if (rtDW.varargin_1_c >= 0.0) {
      tmp = (uint8_T)rtDW.varargin_1_c;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In_0[0], 3.0, 1.0, &outputData[0]);
  obj_0 = &obj->spiObj;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_b.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_b;
    rtDW.varargin_1_c = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (rtDW.varargin_1_c < 256.0) {
      if (rtDW.varargin_1_c >= 0.0) {
        tmp = (uint8_T)rtDW.varargin_1_c;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.varargin_1_c = obj->spiObj.slaveSelectPin_;
  rtDW.varargin_1_c = rt_roundd(rtDW.varargin_1_c);
  if (rtDW.varargin_1_c < 256.0) {
    if (rtDW.varargin_1_c >= 0.0) {
      tmp = (uint8_T)rtDW.varargin_1_c;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
  arduinoCANReceive_writeMCPReg_i(obj, (uint32_T)(int16_T)((uint16_T)filter2 >>
    3));
  arduinoCANReceive_writeMCPRe_bx(obj, (uint32_T)((int16_T)((uint16_T)filter2 <<
    5) & 255));
  arduinoCANReceive_writeMCPRe_k2(obj);
  arduinoCANReceive_writeMCPRe_gm(obj);

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  arduinoCANReceive_writeMCPReg_f(obj, (uint32_T)(int16_T)((uint16_T)filter3 >>
    3));
  arduinoCANReceive_writeMCPReg_g(obj, (uint32_T)((int16_T)((uint16_T)filter3 <<
    5) & 255));
  arduinoCANReceive_writeMCPRe_ek(obj);
  arduinoCANReceive_writeMCPRe_k5(obj);

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  arduinoCANReceive_writeMCPReg_h(obj, (uint32_T)(int16_T)((uint16_T)filter4 >>
    3));
  arduinoCANReceive_writeMCPRe_ij(obj, (uint32_T)((int16_T)((uint16_T)filter4 <<
    5) & 255));
  arduinoCANReceive_writeMCPR_m2s(obj);
  arduinoCANReceive_writeMCPRe_mx(obj);

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  arduinoCANReceive_writeMCPRe_fx(obj, (uint32_T)(int16_T)((uint16_T)filter5 >>
    3));
  arduinoCANReceive_writeMCPRe_mp(obj, (uint32_T)((int16_T)((uint16_T)filter5 <<
    5) & 255));
  arduinoCANReceive_writeMCPRe_et(obj);
  arduinoCANReceive_writeMCPReg_o(obj);
}

static void arduinoCANRecei_m2grvulqa0ynj0b(codertarget_arduinobase_inte_m2 *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 112U, 64U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_o3.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_o3;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPReg_d(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 38U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_ff.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_ff;
    varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        tmp_0 = (uint8_T)varargin_1_0;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1_0 = obj->spiObj.slaveSelectPin_;
  varargin_1_0 = rt_roundd(varargin_1_0);
  if (varargin_1_0 < 256.0) {
    if (varargin_1_0 >= 0.0) {
      tmp_0 = (uint8_T)varargin_1_0;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPRe_bv(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 39U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_iz.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_iz;
    varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        tmp_0 = (uint8_T)varargin_1_0;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1_0 = obj->spiObj.slaveSelectPin_;
  varargin_1_0 = rt_roundd(varargin_1_0);
  if (varargin_1_0 < 256.0) {
    if (varargin_1_0 >= 0.0) {
      tmp_0 = (uint8_T)varargin_1_0;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPRe_by(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 10U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_fk.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_fk;
    varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        tmp_0 = (uint8_T)varargin_1_0;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1_0 = obj->spiObj.slaveSelectPin_;
  varargin_1_0 = rt_roundd(varargin_1_0);
  if (varargin_1_0 < 256.0) {
    if (varargin_1_0 >= 0.0) {
      tmp_0 = (uint8_T)varargin_1_0;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPReg_j(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 11U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_ip.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_ip;
    varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        tmp_0 = (uint8_T)varargin_1_0;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1_0 = obj->spiObj.slaveSelectPin_;
  varargin_1_0 = rt_roundd(varargin_1_0);
  if (varargin_1_0 < 256.0) {
    if (varargin_1_0 >= 0.0) {
      tmp_0 = (uint8_T)varargin_1_0;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPReg_c(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 18U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_o2.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_o2;
    varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        tmp_0 = (uint8_T)varargin_1_0;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1_0 = obj->spiObj.slaveSelectPin_;
  varargin_1_0 = rt_roundd(varargin_1_0);
  if (varargin_1_0 < 256.0) {
    if (varargin_1_0 >= 0.0) {
      tmp_0 = (uint8_T)varargin_1_0;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPRe_eb(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 19U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_oj.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_oj;
    varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        tmp_0 = (uint8_T)varargin_1_0;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1_0 = obj->spiObj.slaveSelectPin_;
  varargin_1_0 = rt_roundd(varargin_1_0);
  if (varargin_1_0 < 256.0) {
    if (varargin_1_0 >= 0.0) {
      tmp_0 = (uint8_T)varargin_1_0;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPReg_k(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 22U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_lt.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_lt;
    varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        tmp_0 = (uint8_T)varargin_1_0;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1_0 = obj->spiObj.slaveSelectPin_;
  varargin_1_0 = rt_roundd(varargin_1_0);
  if (varargin_1_0 < 256.0) {
    if (varargin_1_0 >= 0.0) {
      tmp_0 = (uint8_T)varargin_1_0;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPRe_m4(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 23U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_if.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_if;
    varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        tmp_0 = (uint8_T)varargin_1_0;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1_0 = obj->spiObj.slaveSelectPin_;
  varargin_1_0 = rt_roundd(varargin_1_0);
  if (varargin_1_0 < 256.0) {
    if (varargin_1_0 >= 0.0) {
      tmp_0 = (uint8_T)varargin_1_0;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPReg_n(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 26U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_as.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_as;
    varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        tmp_0 = (uint8_T)varargin_1_0;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1_0 = obj->spiObj.slaveSelectPin_;
  varargin_1_0 = rt_roundd(varargin_1_0);
  if (varargin_1_0 < 256.0) {
    if (varargin_1_0 >= 0.0) {
      tmp_0 = (uint8_T)varargin_1_0;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_writeMCPRe_me(codertarget_arduinobase_inte_m2 *obj,
  uint32_T b_value)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1_0;
  uint32_T tmp;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T varargin_1[3];
  uint8_T tmp_0;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1[0] = 2U;
  varargin_1[1] = 27U;
  tmp = b_value;
  if (b_value > 255UL) {
    tmp = 255UL;
  }

  varargin_1[2] = (uint8_T)tmp;
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_ax.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_ax;
    varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        tmp_0 = (uint8_T)varargin_1_0;
      } else {
        tmp_0 = 0U;
      }
    } else {
      tmp_0 = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp_0);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  varargin_1_0 = obj->spiObj.slaveSelectPin_;
  varargin_1_0 = rt_roundd(varargin_1_0);
  if (varargin_1_0 < 256.0) {
    if (varargin_1_0 >= 0.0) {
      tmp_0 = (uint8_T)varargin_1_0;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  MW_SPIwriteReadLoop(tmp_0, &varargin_1[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANReceive_setExtended_m(codertarget_arduinobase_inte_m2 *obj,
  uint32_T mask1, uint32_T filter2, uint32_T filter3, uint32_T filter4, uint32_T
  filter5)
{
  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  mask1 &= 536870911UL;
  filter2 &= 536870911UL;
  filter3 &= 536870911UL;
  filter4 &= 536870911UL;
  filter5 &= 536870911UL;
  arduinoCANRecei_m2grvulqa0ynj0b(obj);

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  arduinoCANReceive_writeMCPReg_b(obj, mask1 >> 21);
  arduinoCANReceive_writeMCPReg_e(obj, (uint32_T)(((int16_T)(mask1 >> 18) & 3) <<
    5 | 8 | ((int16_T)(mask1 >> 16) & 3)));
  arduinoCANReceive_writeMCPReg_d(obj, (uint32_T)((int16_T)(mask1 >> 8) & 255));
  arduinoCANReceive_writeMCPRe_bv(obj, (uint32_T)((int16_T)mask1 & 255));
  arduinoCANReceive_writeMCPReg_i(obj, filter2 >> 21);
  arduinoCANReceive_writeMCPRe_bx(obj, (uint32_T)(((int16_T)(filter2 >> 18) & 3)
    << 5 | 8 | ((int16_T)(filter2 >> 16) & 3)));
  arduinoCANReceive_writeMCPRe_by(obj, (uint32_T)((int16_T)(filter2 >> 8) & 255));
  arduinoCANReceive_writeMCPReg_j(obj, (uint32_T)((int16_T)filter2 & 255));
  arduinoCANReceive_writeMCPReg_f(obj, filter3 >> 21);
  arduinoCANReceive_writeMCPReg_g(obj, (uint32_T)(((int16_T)(filter3 >> 18) & 3)
    << 5 | 8 | ((int16_T)(filter3 >> 16) & 3)));
  arduinoCANReceive_writeMCPReg_c(obj, (uint32_T)((int16_T)(filter3 >> 8) & 255));
  arduinoCANReceive_writeMCPRe_eb(obj, (uint32_T)((int16_T)filter3 & 255));
  arduinoCANReceive_writeMCPReg_h(obj, filter4 >> 21);
  arduinoCANReceive_writeMCPRe_ij(obj, (uint32_T)(((int16_T)(filter4 >> 18) & 3)
    << 5 | 8 | ((int16_T)(filter4 >> 16) & 3)));
  arduinoCANReceive_writeMCPReg_k(obj, (uint32_T)((int16_T)(filter4 >> 8) & 255));
  arduinoCANReceive_writeMCPRe_m4(obj, (uint32_T)((int16_T)filter4 & 255));
  arduinoCANReceive_writeMCPRe_fx(obj, filter5 >> 21);
  arduinoCANReceive_writeMCPRe_mp(obj, (uint32_T)(((int16_T)(filter5 >> 18) & 3)
    << 5 | 8 | ((int16_T)(filter5 >> 16) & 3)));
  arduinoCANReceive_writeMCPReg_n(obj, (uint32_T)((int16_T)(filter5 >> 8) & 255));
  arduinoCANReceive_writeMCPRe_me(obj, (uint32_T)((int16_T)filter5 & 255));
}

static void SystemCore_setup(codertarget_arduinobase_inte_m2 *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  uint32_T filter4;
  uint32_T filter5;
  int16_T b_k;
  uint8_T outputData[3];
  uint8_T buffer1Extended;
  uint8_T isMCPInitialized;
  uint8_T ssPin;
  uint8_T status;
  static const uint8_T In[3] = { 2U, 96U, 96U };

  static const uint8_T In_0[3] = { 2U, 112U, 96U };

  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  obj->isInitialized = 1L;
  isMCPInitialized = MW_GetMCPInitStatus();
  ssPin = MW_CANGetChipSelect();

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  obj->spiObj.slaveSelectPin_ = ssPin;
  if (isMCPInitialized == 0) {
    /* Start for MATLABSystem: '<Root>/CAN Receive' */
    arduinoCANReceive_MCP_CANInit(obj);
    MW_SetMCPInitStatus();
  }

  MW_GetCANFilters(&isMCPInitialized, &ssPin, &rtDW.mask0, &rtDW.filter0,
                   &rtDW.filter1, &buffer1Extended, &rtDW.mask1, &rtDW.filter2,
                   &rtDW.filter3, &filter4, &filter5);

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  arduinoCANReceive_writeMCPRegis(obj);
  status = arduinoCANReceive_readMCPRegist(obj);
  if (status == 128) {
    if (isMCPInitialized == 1) {
      /* Start for MATLABSystem: '<Root>/CAN Receive' */
      obj_0 = &obj->spiObj;
      if (obj->spiObj.isInitialized != 1L) {
        obj->spiObj.isSetupComplete = false;
        obj->spiObj.isInitialized = 1L;
        for (b_k = 0; b_k < 8; b_k++) {
          rtDW.varSizes_c.f1[b_k] = (uint32_T)inSize[b_k];
        }

        obj->spiObj.inputVarSize = rtDW.varSizes_c;
        rtDW.varargin_1_l = rt_roundd(obj->spiObj.slaveSelectPin_);
        if (rtDW.varargin_1_l < 256.0) {
          if (rtDW.varargin_1_l >= 0.0) {
            isMCPInitialized = (uint8_T)rtDW.varargin_1_l;
          } else {
            isMCPInitialized = 0U;
          }
        } else {
          isMCPInitialized = MAX_uint8_T;
        }

        MW_SSpinSetup(isMCPInitialized);
        obj->spiObj.isSetupComplete = true;
      }

      b_k = 0;
      exitg1 = false;
      while ((!exitg1) && (b_k < 8)) {
        if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
          for (b_k = 0; b_k < 8; b_k++) {
            obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
          }

          exitg1 = true;
        } else {
          b_k++;
        }
      }

      /* Start for MATLABSystem: '<Root>/CAN Receive' */
      rtDW.varargin_1_l = obj->spiObj.slaveSelectPin_;
      rtDW.varargin_1_l = rt_roundd(rtDW.varargin_1_l);
      if (rtDW.varargin_1_l < 256.0) {
        if (rtDW.varargin_1_l >= 0.0) {
          isMCPInitialized = (uint8_T)rtDW.varargin_1_l;
        } else {
          isMCPInitialized = 0U;
        }
      } else {
        isMCPInitialized = MAX_uint8_T;
      }

      /* Start for MATLABSystem: '<Root>/CAN Receive' */
      MW_SPIwriteReadLoop(isMCPInitialized, &In[0], 3.0, 1.0, &outputData[0]);
      obj_0 = &obj->spiObj;
      if (obj->spiObj.isInitialized != 1L) {
        obj->spiObj.isSetupComplete = false;
        obj->spiObj.isInitialized = 1L;
        for (b_k = 0; b_k < 8; b_k++) {
          rtDW.varSizes_c.f1[b_k] = (uint32_T)inSize[b_k];
        }

        obj->spiObj.inputVarSize = rtDW.varSizes_c;
        rtDW.varargin_1_l = rt_roundd(obj->spiObj.slaveSelectPin_);
        if (rtDW.varargin_1_l < 256.0) {
          if (rtDW.varargin_1_l >= 0.0) {
            isMCPInitialized = (uint8_T)rtDW.varargin_1_l;
          } else {
            isMCPInitialized = 0U;
          }
        } else {
          isMCPInitialized = MAX_uint8_T;
        }

        MW_SSpinSetup(isMCPInitialized);
        obj->spiObj.isSetupComplete = true;
      }

      b_k = 0;
      exitg1 = false;
      while ((!exitg1) && (b_k < 8)) {
        if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
          for (b_k = 0; b_k < 8; b_k++) {
            obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
          }

          exitg1 = true;
        } else {
          b_k++;
        }
      }

      /* Start for MATLABSystem: '<Root>/CAN Receive' */
      rtDW.varargin_1_l = obj->spiObj.slaveSelectPin_;
      rtDW.varargin_1_l = rt_roundd(rtDW.varargin_1_l);
      if (rtDW.varargin_1_l < 256.0) {
        if (rtDW.varargin_1_l >= 0.0) {
          isMCPInitialized = (uint8_T)rtDW.varargin_1_l;
        } else {
          isMCPInitialized = 0U;
        }
      } else {
        isMCPInitialized = MAX_uint8_T;
      }

      /* Start for MATLABSystem: '<Root>/CAN Receive' */
      MW_SPIwriteReadLoop(isMCPInitialized, &In_0[0], 3.0, 1.0, &outputData[0]);
    } else {
      if (ssPin != 0) {
        /* Start for MATLABSystem: '<Root>/CAN Receive' */
        arduinoCANReceive_setExtendedFi(obj, rtDW.mask0, rtDW.filter0,
          rtDW.filter1);
      } else {
        /* Start for MATLABSystem: '<Root>/CAN Receive' */
        arduinoCANReceive_setNormalFilt(obj, rtDW.mask0, rtDW.filter0,
          rtDW.filter1);
      }

      if (buffer1Extended != 0) {
        /* Start for MATLABSystem: '<Root>/CAN Receive' */
        arduinoCANReceive_setExtended_m(obj, rtDW.mask1, rtDW.filter2,
          rtDW.filter3, filter4, filter5);
      } else {
        /* Start for MATLABSystem: '<Root>/CAN Receive' */
        arduinoCANReceive_setNormalFi_m(obj, rtDW.mask1, rtDW.filter2,
          rtDW.filter3, filter4, filter5);
      }
    }

    /* Start for MATLABSystem: '<Root>/CAN Receive' */
    arduinoCANReceive_writeMCPReg_m(obj);
  }

  MW_CANInitializeInterrupt();
  obj->isSetupComplete = true;
}

static uint8_T arduinoCANTransmit_readMCPRegis(codertarget_arduinobase_int_m2g
  *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T arr[3];
  uint8_T y;
  static const uint8_T In[3] = { 3U, 15U, 128U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_co.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_co;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &arr[0]);
  y = arr[2];
  return y;
}

static void arduinoCANTransmit_writeMCPRegi(codertarget_arduinobase_int_m2g *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 112U, 96U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_gx.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_gx;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static void arduinoCANTransmit_writeMCPRe_m(codertarget_arduinobase_int_m2g *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1;
  int16_T b_k;
  uint8_T outputData[3];
  static const uint8_T In[3] = { 2U, 15U, 0U };

  uint8_T tmp;
  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj_0 = &obj->spiObj;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  if (obj->spiObj.isInitialized != 1L) {
    obj->spiObj.isSetupComplete = false;
    obj->spiObj.isInitialized = 1L;
    for (b_k = 0; b_k < 8; b_k++) {
      rtDW.varSizes_n.f1[b_k] = (uint32_T)inSize[b_k];
    }

    obj->spiObj.inputVarSize = rtDW.varSizes_n;
    varargin_1 = rt_roundd(obj->spiObj.slaveSelectPin_);
    if (varargin_1 < 256.0) {
      if (varargin_1 >= 0.0) {
        tmp = (uint8_T)varargin_1;
      } else {
        tmp = 0U;
      }
    } else {
      tmp = MAX_uint8_T;
    }

    MW_SSpinSetup(tmp);
    obj->spiObj.isSetupComplete = true;
  }

  b_k = 0;
  exitg1 = false;
  while ((!exitg1) && (b_k < 8)) {
    if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
      for (b_k = 0; b_k < 8; b_k++) {
        obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
      }

      exitg1 = true;
    } else {
      b_k++;
    }
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  varargin_1 = obj->spiObj.slaveSelectPin_;
  varargin_1 = rt_roundd(varargin_1);
  if (varargin_1 < 256.0) {
    if (varargin_1 >= 0.0) {
      tmp = (uint8_T)varargin_1;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  MW_SPIwriteReadLoop(tmp, &In[0], 3.0, 1.0, &outputData[0]);
}

static void SystemCore_setup_m(codertarget_arduinobase_int_m2g *obj)
{
  n_codertarget_arduinobase_inter *obj_0;
  real_T varargin_1_0;
  int16_T b_k;
  uint8_T cnfValues[3];
  uint8_T outputData_0[3];
  uint8_T varargin_1[3];
  uint8_T In;
  uint8_T outputData;
  uint8_T ssPin;
  static const uint8_T In_0[3] = { 2U, 15U, 128U };

  static const uint8_T In_1[3] = { 2U, 43U, 35U };

  static const uint8_T In_2[3] = { 2U, 12U, 0U };

  static const uint8_T In_3[3] = { 2U, 13U, 0U };

  static const uint8_T In_4[3] = { 2U, 96U, 96U };

  static const int8_T inSize[8] = { 1, 3, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  obj->isSetupComplete = false;

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  obj->isInitialized = 1L;
  ssPin = MW_CANGetChipSelect();

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  obj->spiObj.slaveSelectPin_ = ssPin;
  ssPin = MW_GetMCPInitStatus();
  if (ssPin == 0) {
    /* Start for MATLABSystem: '<Root>/CAN Transmit' */
    obj_0 = &obj->spiObj;
    if (obj->spiObj.isInitialized != 1L) {
      obj->spiObj.isSetupComplete = false;
      obj->spiObj.isInitialized = 1L;
      for (b_k = 0; b_k < 8; b_k++) {
        rtDW.varSizes_me.f1[b_k] = 1UL;
      }

      obj->spiObj.inputVarSize = rtDW.varSizes_me;
      varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
      if (varargin_1_0 < 256.0) {
        if (varargin_1_0 >= 0.0) {
          ssPin = (uint8_T)varargin_1_0;
        } else {
          ssPin = 0U;
        }
      } else {
        ssPin = MAX_uint8_T;
      }

      MW_SSpinSetup(ssPin);
      obj->spiObj.isSetupComplete = true;
    }

    b_k = 0;
    exitg1 = false;
    while ((!exitg1) && (b_k < 8)) {
      if (obj_0->inputVarSize.f1[b_k] != 1UL) {
        for (b_k = 0; b_k < 8; b_k++) {
          obj_0->inputVarSize.f1[b_k] = 1UL;
        }

        exitg1 = true;
      } else {
        b_k++;
      }
    }

    In = 192U;

    /* Start for MATLABSystem: '<Root>/CAN Transmit' */
    varargin_1_0 = obj->spiObj.slaveSelectPin_;
    varargin_1_0 = rt_roundd(varargin_1_0);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        ssPin = (uint8_T)varargin_1_0;
      } else {
        ssPin = 0U;
      }
    } else {
      ssPin = MAX_uint8_T;
    }

    /* Start for MATLABSystem: '<Root>/CAN Transmit' */
    MW_SPIwriteReadLoop(ssPin, &In, 1.0, 1.0, &outputData);
    obj_0 = &obj->spiObj;
    if (obj->spiObj.isInitialized != 1L) {
      obj->spiObj.isSetupComplete = false;
      obj->spiObj.isInitialized = 1L;
      for (b_k = 0; b_k < 8; b_k++) {
        rtDW.varSizes_me.f1[b_k] = (uint32_T)inSize[b_k];
      }

      obj->spiObj.inputVarSize = rtDW.varSizes_me;
      varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
      if (varargin_1_0 < 256.0) {
        if (varargin_1_0 >= 0.0) {
          ssPin = (uint8_T)varargin_1_0;
        } else {
          ssPin = 0U;
        }
      } else {
        ssPin = MAX_uint8_T;
      }

      MW_SSpinSetup(ssPin);
      obj->spiObj.isSetupComplete = true;
    }

    b_k = 0;
    exitg1 = false;
    while ((!exitg1) && (b_k < 8)) {
      if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
        for (b_k = 0; b_k < 8; b_k++) {
          obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
        }

        exitg1 = true;
      } else {
        b_k++;
      }
    }

    /* Start for MATLABSystem: '<Root>/CAN Transmit' */
    varargin_1_0 = obj->spiObj.slaveSelectPin_;
    varargin_1_0 = rt_roundd(varargin_1_0);
    if (varargin_1_0 < 256.0) {
      if (varargin_1_0 >= 0.0) {
        ssPin = (uint8_T)varargin_1_0;
      } else {
        ssPin = 0U;
      }
    } else {
      ssPin = MAX_uint8_T;
    }

    /* Start for MATLABSystem: '<Root>/CAN Transmit' */
    MW_SPIwriteReadLoop(ssPin, &In_0[0], 3.0, 1.0, &outputData_0[0]);
    ssPin = arduinoCANTransmit_readMCPRegis(obj);
    if (ssPin == 128) {
      /* Start for MATLABSystem: '<Root>/CAN Transmit' */
      cnfValues[0] = 0U;
      cnfValues[1] = 0U;
      cnfValues[2] = 0U;
      MW_GetCANBaud(&cnfValues[0], &cnfValues[1], &cnfValues[2]);
      if ((cnfValues[0] == 0) && (cnfValues[1] == 0) && (cnfValues[2] == 0)) {
      } else {
        /* Start for MATLABSystem: '<Root>/CAN Transmit' */
        obj_0 = &obj->spiObj;
        varargin_1[0] = 2U;
        varargin_1[1] = 42U;

        /* Start for MATLABSystem: '<Root>/CAN Transmit' */
        varargin_1[2] = cnfValues[0];
        if (obj->spiObj.isInitialized != 1L) {
          obj->spiObj.isSetupComplete = false;
          obj->spiObj.isInitialized = 1L;
          for (b_k = 0; b_k < 8; b_k++) {
            rtDW.varSizes_me.f1[b_k] = (uint32_T)inSize[b_k];
          }

          obj->spiObj.inputVarSize = rtDW.varSizes_me;
          varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
          if (varargin_1_0 < 256.0) {
            if (varargin_1_0 >= 0.0) {
              ssPin = (uint8_T)varargin_1_0;
            } else {
              ssPin = 0U;
            }
          } else {
            ssPin = MAX_uint8_T;
          }

          MW_SSpinSetup(ssPin);
          obj->spiObj.isSetupComplete = true;
        }

        b_k = 0;
        exitg1 = false;
        while ((!exitg1) && (b_k < 8)) {
          if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
            for (b_k = 0; b_k < 8; b_k++) {
              obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
            }

            exitg1 = true;
          } else {
            b_k++;
          }
        }

        /* Start for MATLABSystem: '<Root>/CAN Transmit' */
        varargin_1_0 = obj->spiObj.slaveSelectPin_;
        varargin_1_0 = rt_roundd(varargin_1_0);
        if (varargin_1_0 < 256.0) {
          if (varargin_1_0 >= 0.0) {
            ssPin = (uint8_T)varargin_1_0;
          } else {
            ssPin = 0U;
          }
        } else {
          ssPin = MAX_uint8_T;
        }

        /* Start for MATLABSystem: '<Root>/CAN Transmit' */
        MW_SPIwriteReadLoop(ssPin, &varargin_1[0], 3.0, 1.0, &outputData_0[0]);
        obj_0 = &obj->spiObj;
        varargin_1[0] = 2U;
        varargin_1[1] = 41U;

        /* Start for MATLABSystem: '<Root>/CAN Transmit' */
        varargin_1[2] = cnfValues[1];
        if (obj->spiObj.isInitialized != 1L) {
          obj->spiObj.isSetupComplete = false;
          obj->spiObj.isInitialized = 1L;
          for (b_k = 0; b_k < 8; b_k++) {
            rtDW.varSizes_me.f1[b_k] = (uint32_T)inSize[b_k];
          }

          obj->spiObj.inputVarSize = rtDW.varSizes_me;
          varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
          if (varargin_1_0 < 256.0) {
            if (varargin_1_0 >= 0.0) {
              ssPin = (uint8_T)varargin_1_0;
            } else {
              ssPin = 0U;
            }
          } else {
            ssPin = MAX_uint8_T;
          }

          MW_SSpinSetup(ssPin);
          obj->spiObj.isSetupComplete = true;
        }

        b_k = 0;
        exitg1 = false;
        while ((!exitg1) && (b_k < 8)) {
          if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
            for (b_k = 0; b_k < 8; b_k++) {
              obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
            }

            exitg1 = true;
          } else {
            b_k++;
          }
        }

        /* Start for MATLABSystem: '<Root>/CAN Transmit' */
        varargin_1_0 = obj->spiObj.slaveSelectPin_;
        varargin_1_0 = rt_roundd(varargin_1_0);
        if (varargin_1_0 < 256.0) {
          if (varargin_1_0 >= 0.0) {
            ssPin = (uint8_T)varargin_1_0;
          } else {
            ssPin = 0U;
          }
        } else {
          ssPin = MAX_uint8_T;
        }

        /* Start for MATLABSystem: '<Root>/CAN Transmit' */
        MW_SPIwriteReadLoop(ssPin, &varargin_1[0], 3.0, 1.0, &outputData_0[0]);
        obj_0 = &obj->spiObj;
        varargin_1[0] = 2U;
        varargin_1[1] = 40U;

        /* Start for MATLABSystem: '<Root>/CAN Transmit' */
        varargin_1[2] = cnfValues[2];
        if (obj->spiObj.isInitialized != 1L) {
          obj->spiObj.isSetupComplete = false;
          obj->spiObj.isInitialized = 1L;
          for (b_k = 0; b_k < 8; b_k++) {
            rtDW.varSizes_me.f1[b_k] = (uint32_T)inSize[b_k];
          }

          obj->spiObj.inputVarSize = rtDW.varSizes_me;
          varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
          if (varargin_1_0 < 256.0) {
            if (varargin_1_0 >= 0.0) {
              ssPin = (uint8_T)varargin_1_0;
            } else {
              ssPin = 0U;
            }
          } else {
            ssPin = MAX_uint8_T;
          }

          MW_SSpinSetup(ssPin);
          obj->spiObj.isSetupComplete = true;
        }

        b_k = 0;
        exitg1 = false;
        while ((!exitg1) && (b_k < 8)) {
          if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
            for (b_k = 0; b_k < 8; b_k++) {
              obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
            }

            exitg1 = true;
          } else {
            b_k++;
          }
        }

        /* Start for MATLABSystem: '<Root>/CAN Transmit' */
        varargin_1_0 = obj->spiObj.slaveSelectPin_;
        varargin_1_0 = rt_roundd(varargin_1_0);
        if (varargin_1_0 < 256.0) {
          if (varargin_1_0 >= 0.0) {
            ssPin = (uint8_T)varargin_1_0;
          } else {
            ssPin = 0U;
          }
        } else {
          ssPin = MAX_uint8_T;
        }

        /* Start for MATLABSystem: '<Root>/CAN Transmit' */
        MW_SPIwriteReadLoop(ssPin, &varargin_1[0], 3.0, 1.0, &outputData_0[0]);
      }

      /* Start for MATLABSystem: '<Root>/CAN Transmit' */
      obj_0 = &obj->spiObj;
      if (obj->spiObj.isInitialized != 1L) {
        obj->spiObj.isSetupComplete = false;
        obj->spiObj.isInitialized = 1L;
        for (b_k = 0; b_k < 8; b_k++) {
          rtDW.varSizes_me.f1[b_k] = (uint32_T)inSize[b_k];
        }

        obj->spiObj.inputVarSize = rtDW.varSizes_me;
        varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
        if (varargin_1_0 < 256.0) {
          if (varargin_1_0 >= 0.0) {
            ssPin = (uint8_T)varargin_1_0;
          } else {
            ssPin = 0U;
          }
        } else {
          ssPin = MAX_uint8_T;
        }

        MW_SSpinSetup(ssPin);
        obj->spiObj.isSetupComplete = true;
      }

      b_k = 0;
      exitg1 = false;
      while ((!exitg1) && (b_k < 8)) {
        if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
          for (b_k = 0; b_k < 8; b_k++) {
            obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
          }

          exitg1 = true;
        } else {
          b_k++;
        }
      }

      /* Start for MATLABSystem: '<Root>/CAN Transmit' */
      varargin_1_0 = obj->spiObj.slaveSelectPin_;
      varargin_1_0 = rt_roundd(varargin_1_0);
      if (varargin_1_0 < 256.0) {
        if (varargin_1_0 >= 0.0) {
          ssPin = (uint8_T)varargin_1_0;
        } else {
          ssPin = 0U;
        }
      } else {
        ssPin = MAX_uint8_T;
      }

      /* Start for MATLABSystem: '<Root>/CAN Transmit' */
      MW_SPIwriteReadLoop(ssPin, &In_1[0], 3.0, 1.0, &outputData_0[0]);
      obj_0 = &obj->spiObj;
      if (obj->spiObj.isInitialized != 1L) {
        obj->spiObj.isSetupComplete = false;
        obj->spiObj.isInitialized = 1L;
        for (b_k = 0; b_k < 8; b_k++) {
          rtDW.varSizes_me.f1[b_k] = (uint32_T)inSize[b_k];
        }

        obj->spiObj.inputVarSize = rtDW.varSizes_me;
        varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
        if (varargin_1_0 < 256.0) {
          if (varargin_1_0 >= 0.0) {
            ssPin = (uint8_T)varargin_1_0;
          } else {
            ssPin = 0U;
          }
        } else {
          ssPin = MAX_uint8_T;
        }

        MW_SSpinSetup(ssPin);
        obj->spiObj.isSetupComplete = true;
      }

      b_k = 0;
      exitg1 = false;
      while ((!exitg1) && (b_k < 8)) {
        if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
          for (b_k = 0; b_k < 8; b_k++) {
            obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
          }

          exitg1 = true;
        } else {
          b_k++;
        }
      }

      /* Start for MATLABSystem: '<Root>/CAN Transmit' */
      varargin_1_0 = obj->spiObj.slaveSelectPin_;
      varargin_1_0 = rt_roundd(varargin_1_0);
      if (varargin_1_0 < 256.0) {
        if (varargin_1_0 >= 0.0) {
          ssPin = (uint8_T)varargin_1_0;
        } else {
          ssPin = 0U;
        }
      } else {
        ssPin = MAX_uint8_T;
      }

      /* Start for MATLABSystem: '<Root>/CAN Transmit' */
      MW_SPIwriteReadLoop(ssPin, &In_2[0], 3.0, 1.0, &outputData_0[0]);
      obj_0 = &obj->spiObj;
      if (obj->spiObj.isInitialized != 1L) {
        obj->spiObj.isSetupComplete = false;
        obj->spiObj.isInitialized = 1L;
        for (b_k = 0; b_k < 8; b_k++) {
          rtDW.varSizes_me.f1[b_k] = (uint32_T)inSize[b_k];
        }

        obj->spiObj.inputVarSize = rtDW.varSizes_me;
        varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
        if (varargin_1_0 < 256.0) {
          if (varargin_1_0 >= 0.0) {
            ssPin = (uint8_T)varargin_1_0;
          } else {
            ssPin = 0U;
          }
        } else {
          ssPin = MAX_uint8_T;
        }

        MW_SSpinSetup(ssPin);
        obj->spiObj.isSetupComplete = true;
      }

      b_k = 0;
      exitg1 = false;
      while ((!exitg1) && (b_k < 8)) {
        if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
          for (b_k = 0; b_k < 8; b_k++) {
            obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
          }

          exitg1 = true;
        } else {
          b_k++;
        }
      }

      /* Start for MATLABSystem: '<Root>/CAN Transmit' */
      varargin_1_0 = obj->spiObj.slaveSelectPin_;
      varargin_1_0 = rt_roundd(varargin_1_0);
      if (varargin_1_0 < 256.0) {
        if (varargin_1_0 >= 0.0) {
          ssPin = (uint8_T)varargin_1_0;
        } else {
          ssPin = 0U;
        }
      } else {
        ssPin = MAX_uint8_T;
      }

      /* Start for MATLABSystem: '<Root>/CAN Transmit' */
      MW_SPIwriteReadLoop(ssPin, &In_3[0], 3.0, 1.0, &outputData_0[0]);
      obj_0 = &obj->spiObj;
      if (obj->spiObj.isInitialized != 1L) {
        obj->spiObj.isSetupComplete = false;
        obj->spiObj.isInitialized = 1L;
        for (b_k = 0; b_k < 8; b_k++) {
          rtDW.varSizes_me.f1[b_k] = (uint32_T)inSize[b_k];
        }

        obj->spiObj.inputVarSize = rtDW.varSizes_me;
        varargin_1_0 = rt_roundd(obj->spiObj.slaveSelectPin_);
        if (varargin_1_0 < 256.0) {
          if (varargin_1_0 >= 0.0) {
            ssPin = (uint8_T)varargin_1_0;
          } else {
            ssPin = 0U;
          }
        } else {
          ssPin = MAX_uint8_T;
        }

        MW_SSpinSetup(ssPin);
        obj->spiObj.isSetupComplete = true;
      }

      b_k = 0;
      exitg1 = false;
      while ((!exitg1) && (b_k < 8)) {
        if (obj_0->inputVarSize.f1[b_k] != (uint32_T)inSize[b_k]) {
          for (b_k = 0; b_k < 8; b_k++) {
            obj_0->inputVarSize.f1[b_k] = (uint32_T)inSize[b_k];
          }

          exitg1 = true;
        } else {
          b_k++;
        }
      }

      /* Start for MATLABSystem: '<Root>/CAN Transmit' */
      varargin_1_0 = obj->spiObj.slaveSelectPin_;
      varargin_1_0 = rt_roundd(varargin_1_0);
      if (varargin_1_0 < 256.0) {
        if (varargin_1_0 >= 0.0) {
          ssPin = (uint8_T)varargin_1_0;
        } else {
          ssPin = 0U;
        }
      } else {
        ssPin = MAX_uint8_T;
      }

      /* Start for MATLABSystem: '<Root>/CAN Transmit' */
      MW_SPIwriteReadLoop(ssPin, &In_4[0], 3.0, 1.0, &outputData_0[0]);
      arduinoCANTransmit_writeMCPRegi(obj);
      arduinoCANTransmit_writeMCPRe_m(obj);
    }

    MW_SetMCPInitStatus();
  }

  obj->isSetupComplete = true;
}

/* Model step function */
void Test_step(void)
{
  int16_T b_i;
  int16_T c;
  uint8_T b_SwappedDataBytes[2];
  uint8_T rtb_BitwiseAND_c;
  uint8_T rtb_DataTypeConversion;
  uint8_T rtb_DataTypeConversion_b;
  uint8_T rtb_y_m;
  uint8_T status;
  uint8_T status_0;
  static const char_T tmp[28] = { 'S', 't', 'a', 'n', 'd', 'a', 'r', 'd', ' ',
    '(', '1', '1', '-', 'b', 'i', 't', ' ', 'i', 'd', 'e', 'n', 't', 'i', 'f',
    'i', 'e', 'r', ')' };

  static const char_T tmp_0[28] = { 'E', 'x', 't', 'e', 'n', 'd', 'e', 'd', ' ',
    '(', '2', '9', '-', 'b', 'i', 't', ' ', 'i', 'd', 'e', 'n', 't', 'i', 'f',
    'i', 'e', 'r', ')' };

  /* MATLABSystem: '<Root>/CAN Receive' */
  if (rtDW.obj.SampleTime != rtP.CANReceive_SampleTime) {
    rtDW.obj.SampleTime = rtP.CANReceive_SampleTime;
  }

  for (b_i = 0; b_i < 8; b_i++) {
    rtDW.CANReceive_o1.Data[b_i] = 0U;
  }

  MW_GetCANMessageNew(&rtDW.CANReceive_o1.ID, &rtDW.CANReceive_o1.Data[0],
                      &rtDW.CANReceive_o1.Length, &status,
                      &rtDW.CANReceive_o1.Extended, &rtDW.CANReceive_o1.Remote,
                      &rtDW.CANReceive_o1.Error);
  rtDW.CANReceive_o1.Timestamp = 0.0;

  /* Outputs for Enabled SubSystem: '<S2>/Subsystem' incorporates:
   *  EnablePort: '<S15>/Enable'
   */
  /* Logic: '<Root>/NOT' incorporates:
   *  MATLABSystem: '<Root>/CAN Receive'
   * */
  if ((status == 0) && (rtM->Timing.TaskCounters.TID[1] == 0)) {
    /* MATLABSystem: '<S15>/I2C Read' */
    if (rtDW.obj_m.SampleTime != rtP.I2CRead_SampleTime) {
      rtDW.obj_m.SampleTime = rtP.I2CRead_SampleTime;
    }

    status_0 = 0U;
    status_0 = MW_I2C_MasterWrite(rtDW.obj_m.I2CDriverObj.MW_I2C_HANDLE, 104UL,
      &status_0, 1UL, true, false);
    if (status_0 == 0) {
      MW_I2C_MasterRead(rtDW.obj_m.I2CDriverObj.MW_I2C_HANDLE, 104UL, &status_0,
                        1UL, false, true);
      memcpy((void *)&rtDW.I2CRead, (void *)&status_0, (size_t)1 * sizeof
             (uint8_T));
    } else {
      /* MATLABSystem: '<S15>/I2C Read' */
      rtDW.I2CRead = 0U;
    }

    /* End of MATLABSystem: '<S15>/I2C Read' */

    /* MATLABSystem: '<S15>/I2C Read1' */
    if (rtDW.obj_e.SampleTime != rtP.I2CRead1_SampleTime) {
      rtDW.obj_e.SampleTime = rtP.I2CRead1_SampleTime;
    }

    status_0 = 1U;
    status_0 = MW_I2C_MasterWrite(rtDW.obj_e.I2CDriverObj.MW_I2C_HANDLE, 104UL,
      &status_0, 1UL, true, false);
    if (status_0 == 0) {
      MW_I2C_MasterRead(rtDW.obj_e.I2CDriverObj.MW_I2C_HANDLE, 104UL, &status_0,
                        1UL, false, true);
      memcpy((void *)&rtDW.I2CRead1, (void *)&status_0, (size_t)1 * sizeof
             (uint8_T));
    } else {
      /* MATLABSystem: '<S15>/I2C Read1' */
      rtDW.I2CRead1 = 0U;
    }

    /* End of MATLABSystem: '<S15>/I2C Read1' */

    /* MATLABSystem: '<S15>/I2C Read2' */
    if (rtDW.obj_h.SampleTime != rtP.I2CRead2_SampleTime) {
      rtDW.obj_h.SampleTime = rtP.I2CRead2_SampleTime;
    }

    status_0 = 2U;
    status_0 = MW_I2C_MasterWrite(rtDW.obj_h.I2CDriverObj.MW_I2C_HANDLE, 104UL,
      &status_0, 1UL, true, false);
    if (status_0 == 0) {
      MW_I2C_MasterRead(rtDW.obj_h.I2CDriverObj.MW_I2C_HANDLE, 104UL, &status_0,
                        1UL, false, true);
      memcpy((void *)&rtDW.I2CRead2, (void *)&status_0, (size_t)1 * sizeof
             (uint8_T));
    } else {
      /* MATLABSystem: '<S15>/I2C Read2' */
      rtDW.I2CRead2 = 0U;
    }

    /* End of MATLABSystem: '<S15>/I2C Read2' */

    /* MATLABSystem: '<S15>/I2C Read4' */
    if (rtDW.obj_kp.SampleTime != rtP.I2CRead4_SampleTime) {
      rtDW.obj_kp.SampleTime = rtP.I2CRead4_SampleTime;
    }

    status_0 = 3U;
    status_0 = MW_I2C_MasterWrite(rtDW.obj_kp.I2CDriverObj.MW_I2C_HANDLE, 104UL,
      &status_0, 1UL, true, false);
    if (status_0 == 0) {
      MW_I2C_MasterRead(rtDW.obj_kp.I2CDriverObj.MW_I2C_HANDLE, 104UL, &status_0,
                        1UL, false, true);
      memcpy((void *)&rtDW.I2CRead4, (void *)&status_0, (size_t)1 * sizeof
             (uint8_T));
    } else {
      /* MATLABSystem: '<S15>/I2C Read4' */
      rtDW.I2CRead4 = 0U;
    }

    /* End of MATLABSystem: '<S15>/I2C Read4' */

    /* MATLABSystem: '<S15>/I2C Read3' */
    if (rtDW.obj_c.SampleTime != rtP.I2CRead3_SampleTime) {
      rtDW.obj_c.SampleTime = rtP.I2CRead3_SampleTime;
    }

    status_0 = 4U;
    status_0 = MW_I2C_MasterWrite(rtDW.obj_c.I2CDriverObj.MW_I2C_HANDLE, 104UL,
      &status_0, 1UL, true, false);
    if (status_0 == 0) {
      MW_I2C_MasterRead(rtDW.obj_c.I2CDriverObj.MW_I2C_HANDLE, 104UL, &status_0,
                        1UL, false, true);
      memcpy((void *)&rtDW.I2CRead3, (void *)&status_0, (size_t)1 * sizeof
             (uint8_T));
    } else {
      /* MATLABSystem: '<S15>/I2C Read3' */
      rtDW.I2CRead3 = 0U;
    }

    /* End of MATLABSystem: '<S15>/I2C Read3' */

    /* MATLABSystem: '<S15>/I2C Read5' */
    if (rtDW.obj_i.SampleTime != rtP.I2CRead5_SampleTime) {
      rtDW.obj_i.SampleTime = rtP.I2CRead5_SampleTime;
    }

    status_0 = 5U;
    status_0 = MW_I2C_MasterWrite(rtDW.obj_i.I2CDriverObj.MW_I2C_HANDLE, 104UL,
      &status_0, 1UL, true, false);
    if (status_0 == 0) {
      MW_I2C_MasterRead(rtDW.obj_i.I2CDriverObj.MW_I2C_HANDLE, 104UL, &status_0,
                        1UL, false, true);
      memcpy((void *)&rtDW.I2CRead5, (void *)&status_0, (size_t)1 * sizeof
             (uint8_T));
    } else {
      /* MATLABSystem: '<S15>/I2C Read5' */
      rtDW.I2CRead5 = 0U;
    }

    /* End of MATLABSystem: '<S15>/I2C Read5' */

    /* MATLABSystem: '<S15>/I2C Read6' */
    if (rtDW.obj_k.SampleTime != rtP.I2CRead6_SampleTime) {
      rtDW.obj_k.SampleTime = rtP.I2CRead6_SampleTime;
    }

    status_0 = 6U;
    status_0 = MW_I2C_MasterWrite(rtDW.obj_k.I2CDriverObj.MW_I2C_HANDLE, 104UL,
      &status_0, 1UL, true, false);
    if (status_0 == 0) {
      MW_I2C_MasterRead(rtDW.obj_k.I2CDriverObj.MW_I2C_HANDLE, 104UL, &status_0,
                        1UL, false, true);
      memcpy((void *)&rtDW.I2CRead6, (void *)&status_0, (size_t)1 * sizeof
             (uint8_T));
    } else {
      /* MATLABSystem: '<S15>/I2C Read6' */
      rtDW.I2CRead6 = 0U;
    }

    /* End of MATLABSystem: '<S15>/I2C Read6' */
  }

  /* End of Logic: '<Root>/NOT' */
  /* End of Outputs for SubSystem: '<S2>/Subsystem' */
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    /* DataStoreWrite: '<S2>/Data Store Write' */
    Sig.second = rtDW.I2CRead;
    Sig.minute = rtDW.I2CRead1;
    Sig.hour = rtDW.I2CRead2;
    Sig.DOW = rtDW.I2CRead4;
    Sig.Date = rtDW.I2CRead3;
    Sig.Month = rtDW.I2CRead5;
    Sig.Year = rtDW.I2CRead6;
  }

  /* DataStoreRead: '<S2>/Data Store Read' */
  rtb_y_m = Sig.Date;

  /* Outputs for Atomic SubSystem: '<S9>/Bit Shift' */
  /* S-Function (sfix_bitop): '<S9>/Bitwise OR' incorporates:
   *  Constant: '<S9>/Constant1'
   *  DataStoreRead: '<S2>/Data Store Read'
   */
  rtb_DataTypeConversion = BitShift((uint8_T)(Sig.Year & rtP.Constant1_Value_hz));

  /* End of Outputs for SubSystem: '<S9>/Bit Shift' */

  /* DataTypeConversion: '<S9>/Data Type Conversion' incorporates:
   *  Gain: '<S9>/Multiply'
   */
  rtb_DataTypeConversion_b = (uint8_T)((uint16_T)rtP.Multiply_Gain *
    rtb_DataTypeConversion);

  /* Sum: '<S9>/Sum' incorporates:
   *  Constant: '<S9>/Constant'
   *  Constant: '<S9>/Constant2'
   *  DataStoreRead: '<S2>/Data Store Read'
   *  S-Function (sfix_bitop): '<S9>/Bitwise OR1'
   */
  rtDW.Sum = (rtP.Constant_Value + (real_T)rtb_DataTypeConversion_b) + (real_T)
    (Sig.Year & rtP.Constant2_Value_e);

  /* Outputs for Atomic SubSystem: '<S10>/Bit Shift' */
  /* S-Function (sfix_bitop): '<S10>/Bitwise OR' incorporates:
   *  Constant: '<S10>/Constant1'
   *  DataStoreRead: '<S2>/Data Store Read'
   */
  rtb_DataTypeConversion_b = BitShift((uint8_T)(Sig.Month &
    rtP.Constant1_Value_c));

  /* End of Outputs for SubSystem: '<S10>/Bit Shift' */

  /* DataTypeConversion: '<S10>/Data Type Conversion' incorporates:
   *  Gain: '<S10>/Multiply'
   */
  rtb_DataTypeConversion_b = (uint8_T)((uint16_T)rtP.Multiply_Gain_l *
    rtb_DataTypeConversion_b);

  /* Sum: '<S10>/Sum' incorporates:
   *  Constant: '<S10>/Constant2'
   *  DataStoreRead: '<S2>/Data Store Read'
   *  S-Function (sfix_bitop): '<S10>/Bitwise OR1'
   */
  rtDW.Sum_m = (uint8_T)((uint16_T)(Sig.Month & rtP.Constant2_Value_a) +
    rtb_DataTypeConversion_b);

  /* S-Function (sfix_bitop): '<S11>/Bitwise OR1' incorporates:
   *  Constant: '<S11>/Constant2'
   *  DataStoreRead: '<S2>/Data Store Read'
   */
  rtDW.BitwiseOR1 = (uint8_T)(Sig.DOW & rtP.Constant2_Value_mx);

  /* Outputs for Atomic SubSystem: '<S12>/Bit Shift' */
  /* S-Function (sfix_bitop): '<S12>/Bitwise OR' incorporates:
   *  Constant: '<S12>/Constant1'
   *  DataStoreRead: '<S2>/Data Store Read'
   */
  rtb_DataTypeConversion_b = BitShift((uint8_T)(Sig.Date & rtP.Constant1_Value_j));

  /* End of Outputs for SubSystem: '<S12>/Bit Shift' */

  /* DataTypeConversion: '<S12>/Data Type Conversion' incorporates:
   *  Gain: '<S12>/Multiply'
   */
  rtb_DataTypeConversion_b = (uint8_T)((uint16_T)rtP.Multiply_Gain_lk *
    rtb_DataTypeConversion_b);

  /* Sum: '<S12>/Sum' incorporates:
   *  Constant: '<S12>/Constant2'
   *  DataStoreRead: '<S2>/Data Store Read'
   *  S-Function (sfix_bitop): '<S12>/Bitwise OR1'
   */
  rtDW.Sum_g = (uint8_T)((uint16_T)(Sig.Date & rtP.Constant2_Value_f) +
    rtb_DataTypeConversion_b);

  /* Outputs for Atomic SubSystem: '<S13>/Bit Shift' */
  /* S-Function (sfix_bitop): '<S13>/Bitwise OR' incorporates:
   *  Constant: '<S13>/Constant1'
   *  DataStoreRead: '<S2>/Data Store Read'
   */
  rtb_DataTypeConversion_b = BitShift((uint8_T)(Sig.hour &
    rtP.Constant1_Value_ja));

  /* End of Outputs for SubSystem: '<S13>/Bit Shift' */

  /* DataTypeConversion: '<S13>/Data Type Conversion' incorporates:
   *  Gain: '<S13>/Multiply'
   */
  rtb_DataTypeConversion_b = (uint8_T)((uint16_T)rtP.Multiply_Gain_f *
    rtb_DataTypeConversion_b);

  /* Outputs for Atomic SubSystem: '<S13>/Bit Shift1' */
  /* DataTypeConversion: '<S13>/Data Type Conversion1' incorporates:
   *  Constant: '<S13>/Constant3'
   *  DataStoreRead: '<S2>/Data Store Read'
   *  Gain: '<S13>/Multiply1'
   *  MATLAB Function: '<S24>/bit_shift'
   *  S-Function (sfix_bitop): '<S13>/Bitwise OR2'
   */
  rtb_BitwiseAND_c = (uint8_T)(((uint16_T)(Sig.hour & rtP.Constant3_Value_ei) >>
    5) * rtP.Multiply1_Gain);

  /* End of Outputs for SubSystem: '<S13>/Bit Shift1' */

  /* Sum: '<S13>/Sum' incorporates:
   *  Constant: '<S13>/Constant2'
   *  DataStoreRead: '<S2>/Data Store Read'
   *  S-Function (sfix_bitop): '<S13>/Bitwise OR1'
   */
  rtDW.Sum_o = (uint8_T)((uint8_T)((uint16_T)rtb_BitwiseAND_c +
    rtb_DataTypeConversion_b) + (uint16_T)(Sig.hour & rtP.Constant2_Value_ag));

  /* Outputs for Atomic SubSystem: '<S14>/Bit Shift' */
  /* S-Function (sfix_bitop): '<S14>/Bitwise OR' incorporates:
   *  Constant: '<S14>/Constant1'
   *  DataStoreRead: '<S2>/Data Store Read'
   */
  rtb_DataTypeConversion_b = BitShift((uint8_T)(Sig.second &
    rtP.Constant1_Value_a));

  /* End of Outputs for SubSystem: '<S14>/Bit Shift' */

  /* DataTypeConversion: '<S14>/Data Type Conversion' incorporates:
   *  Gain: '<S14>/Multiply'
   */
  rtb_DataTypeConversion_b = (uint8_T)((uint16_T)rtP.Multiply_Gain_j *
    rtb_DataTypeConversion_b);

  /* Sum: '<S14>/Sum' incorporates:
   *  Constant: '<S14>/Constant2'
   *  DataStoreRead: '<S2>/Data Store Read'
   *  S-Function (sfix_bitop): '<S14>/Bitwise OR1'
   */
  rtDW.Sum_k = (uint8_T)((uint16_T)(Sig.second & rtP.Constant2_Value_m1) +
    rtb_DataTypeConversion_b);

  /* Outputs for Atomic SubSystem: '<S16>/Bit Shift' */
  /* S-Function (sfix_bitop): '<S16>/Bitwise OR' incorporates:
   *  Constant: '<S16>/Constant1'
   *  DataStoreRead: '<S2>/Data Store Read'
   */
  rtb_DataTypeConversion_b = BitShift((uint8_T)(Sig.minute &
    rtP.Constant1_Value_as));

  /* End of Outputs for SubSystem: '<S16>/Bit Shift' */

  /* Sum: '<S16>/Sum' incorporates:
   *  Constant: '<S16>/Constant2'
   *  DataStoreRead: '<S2>/Data Store Read'
   *  DataTypeConversion: '<S16>/Data Type Conversion'
   *  Gain: '<S16>/Multiply'
   *  S-Function (sfix_bitop): '<S16>/Bitwise OR1'
   */
  rtDW.Sum_d = (uint8_T)((uint8_T)((uint16_T)rtP.Multiply_Gain_n *
    rtb_DataTypeConversion_b) + (uint16_T)(Sig.minute & rtP.Constant2_Value_o));

  /* S-Function (scanpack): '<Root>/CAN Pack' */
  /* S-Function (scanpack): '<Root>/CAN Pack' */
  rtDW.CANPack.ID = 257U;
  rtDW.CANPack.Length = 7U;
  rtDW.CANPack.Extended = 0U;
  rtDW.CANPack.Remote = 0;
  rtDW.CANPack.Data[0] = 0;
  rtDW.CANPack.Data[1] = 0;
  rtDW.CANPack.Data[2] = 0;
  rtDW.CANPack.Data[3] = 0;
  rtDW.CANPack.Data[4] = 0;
  rtDW.CANPack.Data[5] = 0;
  rtDW.CANPack.Data[6] = 0;
  rtDW.CANPack.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 37
     *  length                  = 3
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (rtDW.BitwiseOR1);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(7)) {
          packedValue = (uint8_T) 7;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            rtDW.CANPack.Data[4] = rtDW.CANPack.Data[4] | (uint8_T)((uint8_T)
              ((uint8_T)(packedValue & (uint8_T)0x7U) << 5));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 24
     *  length                  = 5
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (rtDW.Sum_g);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(31)) {
          packedValue = (uint8_T) 31;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            rtDW.CANPack.Data[3] = rtDW.CANPack.Data[3] | (uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1FU));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 16
     *  length                  = 5
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (rtDW.Sum_o);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(31)) {
          packedValue = (uint8_T) 31;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            rtDW.CANPack.Data[2] = rtDW.CANPack.Data[2] | (uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x1FU));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 8
     *  length                  = 6
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (rtDW.Sum_d);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(63)) {
          packedValue = (uint8_T) 63;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            rtDW.CANPack.Data[1] = rtDW.CANPack.Data[1] | (uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x3FU));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 32
     *  length                  = 4
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (rtDW.Sum_m);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(15)) {
          packedValue = (uint8_T) 15;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            rtDW.CANPack.Data[4] = rtDW.CANPack.Data[4] | (uint8_T)((uint8_T)
              (packedValue & (uint8_T)0xFU));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
     *  startBit                = 0
     *  length                  = 6
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      uint32_T packingValue = 0;

      {
        uint32_T result = (uint32_T) (rtDW.Sum_k);

        /* no scaling required */
        packingValue = result;
      }

      {
        uint8_T packedValue;
        if (packingValue > (uint8_T)(63)) {
          packedValue = (uint8_T) 63;
        } else {
          packedValue = (uint8_T) (packingValue);
        }

        {
          {
            rtDW.CANPack.Data[0] = rtDW.CANPack.Data[0] | (uint8_T)((uint8_T)
              (packedValue & (uint8_T)0x3FU));
          }
        }
      }
    }

    /* --------------- START Packing signal 6 ------------------
     *  startBit                = 40
     *  length                  = 12
     *  desiredSignalByteLayout = LITTLEENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real_T outValue = 0;

      {
        real_T result = rtDW.Sum;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real_T)(4095)) {
          packedValue = (uint16_T) 4095;
        } else if (outValue < (real_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            rtDW.CANPack.Data[5] = rtDW.CANPack.Data[5] | (uint8_T)((uint16_T)
              (packedValue & (uint16_T)0xFFU));
            rtDW.CANPack.Data[6] = rtDW.CANPack.Data[6] | (uint8_T)((uint16_T)
              ((uint16_T)(packedValue & (uint16_T)0xF00U) >> 8));
          }
        }
      }
    }
  }

  /* MATLABSystem: '<Root>/CAN Transmit' */
  memset(&rtDW.txData[0], 0, sizeof(real_T) << 6U);
  if (rtDW.CANPack.Remote == 0) {
    c = rtDW.CANPack.Length - 1;
    for (b_i = 0; b_i <= c; b_i++) {
      rtDW.txData[b_i] = rtDW.CANPack.Data[b_i];
    }
  }

  for (b_i = 0; b_i < 28; b_i++) {
    rtDW.idType[b_i] = tmp[b_i];
  }

  if (rtDW.CANPack.Extended == 1) {
    for (b_i = 0; b_i < 28; b_i++) {
      rtDW.idType[b_i] = tmp_0[b_i];
    }
  }

  arduinoCANTransmit_MCP_SendCANM(&rtDW.obj_a, rtDW.idType, rtDW.CANPack.ID,
    rtDW.CANPack.Length, rtDW.txData, rtDW.CANPack.Remote);

  /* End of MATLABSystem: '<Root>/CAN Transmit' */

  /* S-Function (scanunpack): '<Root>/CAN Unpack' */
  {
    /* S-Function (scanunpack): '<Root>/CAN Unpack' */
    uint8_T msgReceived = 0;
    if ((7 == rtDW.CANReceive_o1.Length) && (rtDW.CANReceive_o1.ID !=
         INVALID_CAN_ID) ) {
      if ((258 == rtDW.CANReceive_o1.ID) && (0U == rtDW.CANReceive_o1.Extended) )
      {
        msgReceived = 1;

        {
          /* --------------- START Unpacking signal 0 ------------------
           *  startBit                = 37
           *  length                  = 3
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                    (rtDW.CANReceive_o1.Data[4]) & (uint8_T)(0xE0U)) >> 5);
                }

                unpackedValue = tempValue;
              }

              outValue = (real_T) (unpackedValue);
            }

            {
              real_T result = (real_T) outValue;
              rtDW.CANUnpack_o1 = result;
            }
          }

          /* --------------- START Unpacking signal 1 ------------------
           *  startBit                = 24
           *  length                  = 5
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (rtDW.CANReceive_o1.Data[3]) & (uint8_T)(0x1FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (real_T) (unpackedValue);
            }

            {
              real_T result = (real_T) outValue;
              rtDW.CANUnpack_o2 = result;
            }
          }

          /* --------------- START Unpacking signal 2 ------------------
           *  startBit                = 16
           *  length                  = 5
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (rtDW.CANReceive_o1.Data[2]) & (uint8_T)(0x1FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (real_T) (unpackedValue);
            }

            {
              real_T result = (real_T) outValue;
              rtDW.CANUnpack_o3 = result;
            }
          }

          /* --------------- START Unpacking signal 3 ------------------
           *  startBit                = 8
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (rtDW.CANReceive_o1.Data[1]) & (uint8_T)(0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (real_T) (unpackedValue);
            }

            {
              real_T result = (real_T) outValue;
              rtDW.CANUnpack_o4 = result;
            }
          }

          /* --------------- START Unpacking signal 4 ------------------
           *  startBit                = 32
           *  length                  = 4
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (rtDW.CANReceive_o1.Data[4]) & (uint8_T)(0xFU));
                }

                unpackedValue = tempValue;
              }

              outValue = (real_T) (unpackedValue);
            }

            {
              real_T result = (real_T) outValue;
              rtDW.CANUnpack_o5 = result;
            }
          }

          /* --------------- START Unpacking signal 5 ------------------
           *  startBit                = 0
           *  length                  = 6
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real_T outValue = 0;

            {
              uint8_T unpackedValue = 0;

              {
                uint8_T tempValue = (uint8_T) (0);

                {
                  tempValue = tempValue | (uint8_T)((uint8_T)
                    (rtDW.CANReceive_o1.Data[0]) & (uint8_T)(0x3FU));
                }

                unpackedValue = tempValue;
              }

              outValue = (real_T) (unpackedValue);
            }

            {
              real_T result = (real_T) outValue;
              rtDW.CANUnpack_o6 = result;
            }
          }

          /* --------------- START Unpacking signal 6 ------------------
           *  startBit                = 40
           *  length                  = 12
           *  desiredSignalByteLayout = LITTLEENDIAN
           *  dataType                = UNSIGNED
           *  factor                  = 1.0
           *  offset                  = 0.0
           * -----------------------------------------------------------------------*/
          {
            real_T outValue = 0;

            {
              uint16_T unpackedValue = 0;

              {
                uint16_T tempValue = (uint16_T) (0);

                {
                  tempValue = tempValue | (uint16_T)(rtDW.CANReceive_o1.Data[5]);
                  tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                    (rtDW.CANReceive_o1.Data[6]) & (uint16_T)(0xFU)) << 8);
                }

                unpackedValue = tempValue;
              }

              outValue = (real_T) (unpackedValue);
            }

            {
              real_T result = (real_T) outValue;
              rtDW.CANUnpack_o7 = result;
            }
          }
        }
      }
    }

    /* Status port */
    rtDW.CANUnpack_o8 = msgReceived;
  }

  /* Outputs for Enabled SubSystem: '<Root>/Day' incorporates:
   *  EnablePort: '<S3>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<Root>/DOW' incorporates:
   *  EnablePort: '<S1>/Enable'
   */
  /* Start for MATLABSystem: '<Root>/CAN Receive' incorporates:
   *  Constant: '<S3>/Constant2'
   *  DataTypeConversion: '<S3>/Data Type Conversion1'
   *  Product: '<S3>/Divide'
   */
  if (status > 0) {
    /* MATLABSystem: '<S1>/I2C Write' incorporates:
     *  Constant: '<S1>/Constant'
     *  DataTypeConversion: '<S1>/Data Type Conversion'
     *  S-Function (sfix_bitop): '<S1>/Bitwise AND'
     */
    b_SwappedDataBytes[0] = 3U;
    b_SwappedDataBytes[1] = (uint8_T)((uint8_T)rtDW.CANUnpack_o1 &
      rtP.Constant_Value_i);
    MW_I2C_MasterWrite(rtDW.obj_f.I2CDriverObj.MW_I2C_HANDLE, 104UL,
                       &b_SwappedDataBytes[0], 2UL, false, false);

    /* Outputs for Atomic SubSystem: '<S3>/Bit Shift' */
    rtb_y_m = BitShift_c((uint8_T)(rtDW.CANUnpack_o2 / rtP.Constant2_Value));

    /* End of Outputs for SubSystem: '<S3>/Bit Shift' */

    /* S-Function (sfix_bitop): '<S3>/Bitwise AND' incorporates:
     *  Constant: '<S3>/Constant'
     *  Constant: '<S3>/Constant1'
     *  Constant: '<S3>/Constant2'
     *  DataTypeConversion: '<S3>/Data Type Conversion'
     *  DataTypeConversion: '<S3>/Data Type Conversion1'
     *  Math: '<S3>/Math Function'
     *  Product: '<S3>/Divide'
     */
    rtb_BitwiseAND_c = (uint8_T)((uint8_T)rt_remd(rtDW.CANUnpack_o2,
      rtP.Constant1_Value) & rtP.Constant_Value_k);

    /* MATLABSystem: '<S3>/I2C Write' incorporates:
     *  S-Function (sfix_bitop): '<S3>/Bitwise OR'
     */
    b_SwappedDataBytes[0] = 4U;
    b_SwappedDataBytes[1] = (uint8_T)(rtb_y_m | rtb_BitwiseAND_c);
    MW_I2C_MasterWrite(rtDW.obj_n.I2CDriverObj.MW_I2C_HANDLE, 104UL,
                       &b_SwappedDataBytes[0], 2UL, false, false);
  }

  /* End of Outputs for SubSystem: '<Root>/DOW' */
  /* End of Outputs for SubSystem: '<Root>/Day' */

  /* MATLABSystem: '<Root>/Digital Output' incorporates:
   *  MATLABSystem: '<Root>/CAN Receive'
   * */
  writeDigitalPin(13, status);

  /* Outputs for Enabled SubSystem: '<Root>/minute' incorporates:
   *  EnablePort: '<S8>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<Root>/Year' incorporates:
   *  EnablePort: '<S7>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<Root>/Second' incorporates:
   *  EnablePort: '<S6>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<Root>/Month' incorporates:
   *  EnablePort: '<S5>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<Root>/Hour' incorporates:
   *  EnablePort: '<S4>/Enable'
   */
  /* Start for MATLABSystem: '<Root>/CAN Receive' incorporates:
   *  Constant: '<S4>/Constant2'
   *  Constant: '<S5>/Constant2'
   *  Constant: '<S6>/Constant2'
   *  Constant: '<S7>/Constant2'
   *  Constant: '<S8>/Constant2'
   *  DataTypeConversion: '<S4>/Data Type Conversion1'
   *  DataTypeConversion: '<S5>/Data Type Conversion1'
   *  DataTypeConversion: '<S6>/Data Type Conversion1'
   *  DataTypeConversion: '<S7>/Data Type Conversion1'
   *  DataTypeConversion: '<S8>/Data Type Conversion1'
   *  Product: '<S4>/Divide'
   *  Product: '<S5>/Divide'
   *  Product: '<S6>/Divide'
   *  Product: '<S7>/Divide'
   *  Product: '<S8>/Divide'
   */
  if (status > 0) {
    /* Outputs for Atomic SubSystem: '<S4>/Bit Shift' */
    rtb_BitwiseAND_c = BitShift_c((uint8_T)(rtDW.CANUnpack_o3 /
      rtP.Constant2_Value_b));

    /* End of Outputs for SubSystem: '<S4>/Bit Shift' */

    /* S-Function (sfix_bitop): '<S4>/Bitwise AND' incorporates:
     *  Constant: '<S4>/Constant'
     *  Constant: '<S4>/Constant1'
     *  Constant: '<S4>/Constant2'
     *  DataTypeConversion: '<S4>/Data Type Conversion'
     *  DataTypeConversion: '<S4>/Data Type Conversion1'
     *  Math: '<S4>/Math Function'
     *  Product: '<S4>/Divide'
     */
    rtb_y_m = (uint8_T)((uint8_T)rt_remd(rtDW.CANUnpack_o3,
      rtP.Constant1_Value_d) & rtP.Constant_Value_e);

    /* MATLABSystem: '<S4>/I2C Write' incorporates:
     *  Constant: '<S4>/Constant3'
     *  Constant: '<S4>/Constant4'
     *  Constant: '<S4>/Constant5'
     *  DataTypeConversion: '<S4>/Data Type Conversion2'
     *  MATLAB Function: '<S34>/bit_shift'
     *  Product: '<S4>/Divide1'
     *  S-Function (sfix_bitop): '<S4>/Bitwise AND1'
     *  S-Function (sfix_bitop): '<S4>/Bitwise AND2'
     *  S-Function (sfix_bitop): '<S4>/Bitwise OR'
     */
    b_SwappedDataBytes[0] = 2U;

    /* Outputs for Atomic SubSystem: '<S4>/Bit Shift1' */
    b_SwappedDataBytes[1] = (uint8_T)(((uint8_T)((uint8_T)(rtDW.CANUnpack_o3 /
      rtP.Constant4_Value) << 5) & rtP.Constant5_Value) | (rtb_BitwiseAND_c &
      rtP.Constant3_Value) | rtb_y_m);

    /* End of Outputs for SubSystem: '<S4>/Bit Shift1' */
    MW_I2C_MasterWrite(rtDW.obj_j4.I2CDriverObj.MW_I2C_HANDLE, 104UL,
                       &b_SwappedDataBytes[0], 2UL, false, false);

    /* Outputs for Atomic SubSystem: '<S5>/Bit Shift' */
    rtb_y_m = BitShift_c((uint8_T)(rtDW.CANUnpack_o5 / rtP.Constant2_Value_c));

    /* End of Outputs for SubSystem: '<S5>/Bit Shift' */

    /* MATLABSystem: '<S5>/I2C Write' incorporates:
     *  Constant: '<S5>/Constant'
     *  Constant: '<S5>/Constant1'
     *  Constant: '<S5>/Constant2'
     *  Constant: '<S5>/Constant3'
     *  DataTypeConversion: '<S5>/Data Type Conversion'
     *  DataTypeConversion: '<S5>/Data Type Conversion1'
     *  Math: '<S5>/Math Function'
     *  Product: '<S5>/Divide'
     *  S-Function (sfix_bitop): '<S5>/Bitwise AND'
     *  S-Function (sfix_bitop): '<S5>/Bitwise AND1'
     *  S-Function (sfix_bitop): '<S5>/Bitwise OR'
     */
    b_SwappedDataBytes[0] = 5U;
    b_SwappedDataBytes[1] = (uint8_T)((rtb_y_m & rtP.Constant3_Value_b) |
      ((uint8_T)rt_remd(rtDW.CANUnpack_o5, rtP.Constant1_Value_k) &
       rtP.Constant_Value_o));
    MW_I2C_MasterWrite(rtDW.obj_ic.I2CDriverObj.MW_I2C_HANDLE, 104UL,
                       &b_SwappedDataBytes[0], 2UL, false, false);

    /* Outputs for Atomic SubSystem: '<S6>/Bit Shift' */
    rtb_y_m = BitShift_c((uint8_T)(rtDW.CANUnpack_o6 / rtP.Constant2_Value_n));

    /* End of Outputs for SubSystem: '<S6>/Bit Shift' */

    /* MATLABSystem: '<S6>/I2C Write' incorporates:
     *  Constant: '<S6>/Constant'
     *  Constant: '<S6>/Constant1'
     *  Constant: '<S6>/Constant2'
     *  Constant: '<S6>/Constant3'
     *  DataTypeConversion: '<S6>/Data Type Conversion'
     *  DataTypeConversion: '<S6>/Data Type Conversion1'
     *  Math: '<S6>/Math Function'
     *  Product: '<S6>/Divide'
     *  S-Function (sfix_bitop): '<S6>/Bitwise AND'
     *  S-Function (sfix_bitop): '<S6>/Bitwise AND1'
     *  S-Function (sfix_bitop): '<S6>/Bitwise OR'
     */
    b_SwappedDataBytes[0] = 0U;
    b_SwappedDataBytes[1] = (uint8_T)((rtb_y_m & rtP.Constant3_Value_a) |
      ((uint8_T)rt_remd(rtDW.CANUnpack_o6, rtP.Constant1_Value_f) &
       rtP.Constant_Value_ol));
    MW_I2C_MasterWrite(rtDW.obj_p.I2CDriverObj.MW_I2C_HANDLE, 104UL,
                       &b_SwappedDataBytes[0], 2UL, false, false);

    /* Abs: '<S7>/Abs' incorporates:
     *  Constant: '<S7>/Constant4'
     *  Sum: '<S7>/Subtract'
     */
    rtDW.MathFunction = fabs(rtDW.CANUnpack_o7 - rtP.Constant4_Value_g);

    /* Outputs for Atomic SubSystem: '<S7>/Bit Shift' */
    rtb_y_m = BitShift_c((uint8_T)(rtDW.MathFunction / rtP.Constant2_Value_m));

    /* End of Outputs for SubSystem: '<S7>/Bit Shift' */

    /* MATLABSystem: '<S7>/I2C Write' incorporates:
     *  Constant: '<S7>/Constant'
     *  Constant: '<S7>/Constant1'
     *  Constant: '<S7>/Constant2'
     *  Constant: '<S7>/Constant3'
     *  DataTypeConversion: '<S7>/Data Type Conversion'
     *  DataTypeConversion: '<S7>/Data Type Conversion1'
     *  Math: '<S7>/Math Function'
     *  Product: '<S7>/Divide'
     *  S-Function (sfix_bitop): '<S7>/Bitwise AND'
     *  S-Function (sfix_bitop): '<S7>/Bitwise AND1'
     *  S-Function (sfix_bitop): '<S7>/Bitwise OR'
     */
    b_SwappedDataBytes[0] = 6U;
    b_SwappedDataBytes[1] = (uint8_T)((rtb_y_m & rtP.Constant3_Value_e) |
      ((uint8_T)rt_remd(rtDW.MathFunction, rtP.Constant1_Value_l) &
       rtP.Constant_Value_c));
    MW_I2C_MasterWrite(rtDW.obj_jx.I2CDriverObj.MW_I2C_HANDLE, 104UL,
                       &b_SwappedDataBytes[0], 2UL, false, false);

    /* Outputs for Atomic SubSystem: '<S8>/Bit Shift' */
    rtb_y_m = BitShift_c((uint8_T)(rtDW.CANUnpack_o4 / rtP.Constant2_Value_i));

    /* End of Outputs for SubSystem: '<S8>/Bit Shift' */

    /* MATLABSystem: '<S8>/I2C Write' incorporates:
     *  Constant: '<S8>/Constant'
     *  Constant: '<S8>/Constant1'
     *  Constant: '<S8>/Constant2'
     *  Constant: '<S8>/Constant3'
     *  DataTypeConversion: '<S8>/Data Type Conversion'
     *  DataTypeConversion: '<S8>/Data Type Conversion1'
     *  Math: '<S8>/Math Function'
     *  Product: '<S8>/Divide'
     *  S-Function (sfix_bitop): '<S8>/Bitwise AND'
     *  S-Function (sfix_bitop): '<S8>/Bitwise AND1'
     *  S-Function (sfix_bitop): '<S8>/Bitwise OR'
     */
    b_SwappedDataBytes[0] = 1U;
    b_SwappedDataBytes[1] = (uint8_T)((rtb_y_m & rtP.Constant3_Value_i) |
      ((uint8_T)rt_remd(rtDW.CANUnpack_o4, rtP.Constant1_Value_h) &
       rtP.Constant_Value_j));
    MW_I2C_MasterWrite(rtDW.obj_j.I2CDriverObj.MW_I2C_HANDLE, 104UL,
                       &b_SwappedDataBytes[0], 2UL, false, false);
  }

  /* End of Outputs for SubSystem: '<Root>/Hour' */
  /* End of Outputs for SubSystem: '<Root>/Month' */
  /* End of Outputs for SubSystem: '<Root>/Second' */
  /* End of Outputs for SubSystem: '<Root>/Year' */
  /* End of Outputs for SubSystem: '<Root>/minute' */
  rate_scheduler();
}

/* Model initialize function */
void Test_initialize(void)
{
  /* Start for S-Function (scanunpack): '<Root>/CAN Unpack' */

  /*-----------S-Function Block: <Root>/CAN Unpack -----------------*/

  /* Start for DataStoreMemory generated from: '<S2>/Data Store Read' */
  Sig = rtP.Sig_InitialValue;

  /* SystemInitialize for Enabled SubSystem: '<S2>/Subsystem' */
  /* Start for MATLABSystem: '<S15>/I2C Read' */
  rtDW.obj_m.DefaultMaximumBusSpeedInHz = 400000.0;
  rtDW.obj_m.matlabCodegenIsDeleted = false;
  rtDW.obj_m.SampleTime = rtP.I2CRead_SampleTime;
  rtDW.obj_m.isInitialized = 1L;
  rtDW.obj_m.I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(0, MW_I2C_MASTER);
  rtDW.obj_m.BusSpeed = 100000UL;
  MW_I2C_SetBusSpeed(rtDW.obj_m.I2CDriverObj.MW_I2C_HANDLE, 100000UL);
  rtDW.obj_m.isSetupComplete = true;

  /* Start for MATLABSystem: '<S15>/I2C Read1' */
  rtDW.obj_e.DefaultMaximumBusSpeedInHz = 400000.0;
  rtDW.obj_e.matlabCodegenIsDeleted = false;
  rtDW.obj_e.SampleTime = rtP.I2CRead1_SampleTime;
  rtDW.obj_e.isInitialized = 1L;
  rtDW.obj_e.I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(0, MW_I2C_MASTER);
  rtDW.obj_e.BusSpeed = 100000UL;
  MW_I2C_SetBusSpeed(rtDW.obj_e.I2CDriverObj.MW_I2C_HANDLE, 100000UL);
  rtDW.obj_e.isSetupComplete = true;

  /* Start for MATLABSystem: '<S15>/I2C Read2' */
  rtDW.obj_h.DefaultMaximumBusSpeedInHz = 400000.0;
  rtDW.obj_h.matlabCodegenIsDeleted = false;
  rtDW.obj_h.SampleTime = rtP.I2CRead2_SampleTime;
  rtDW.obj_h.isInitialized = 1L;
  rtDW.obj_h.I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(0, MW_I2C_MASTER);
  rtDW.obj_h.BusSpeed = 100000UL;
  MW_I2C_SetBusSpeed(rtDW.obj_h.I2CDriverObj.MW_I2C_HANDLE, 100000UL);
  rtDW.obj_h.isSetupComplete = true;

  /* Start for MATLABSystem: '<S15>/I2C Read4' */
  rtDW.obj_kp.DefaultMaximumBusSpeedInHz = 400000.0;
  rtDW.obj_kp.matlabCodegenIsDeleted = false;
  rtDW.obj_kp.SampleTime = rtP.I2CRead4_SampleTime;
  rtDW.obj_kp.isInitialized = 1L;
  rtDW.obj_kp.I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(0, MW_I2C_MASTER);
  rtDW.obj_kp.BusSpeed = 100000UL;
  MW_I2C_SetBusSpeed(rtDW.obj_kp.I2CDriverObj.MW_I2C_HANDLE, 100000UL);
  rtDW.obj_kp.isSetupComplete = true;

  /* Start for MATLABSystem: '<S15>/I2C Read3' */
  rtDW.obj_c.DefaultMaximumBusSpeedInHz = 400000.0;
  rtDW.obj_c.matlabCodegenIsDeleted = false;
  rtDW.obj_c.SampleTime = rtP.I2CRead3_SampleTime;
  rtDW.obj_c.isInitialized = 1L;
  rtDW.obj_c.I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(0, MW_I2C_MASTER);
  rtDW.obj_c.BusSpeed = 100000UL;
  MW_I2C_SetBusSpeed(rtDW.obj_c.I2CDriverObj.MW_I2C_HANDLE, 100000UL);
  rtDW.obj_c.isSetupComplete = true;

  /* Start for MATLABSystem: '<S15>/I2C Read5' */
  rtDW.obj_i.DefaultMaximumBusSpeedInHz = 400000.0;
  rtDW.obj_i.matlabCodegenIsDeleted = false;
  rtDW.obj_i.SampleTime = rtP.I2CRead5_SampleTime;
  rtDW.obj_i.isInitialized = 1L;
  rtDW.obj_i.I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(0, MW_I2C_MASTER);
  rtDW.obj_i.BusSpeed = 100000UL;
  MW_I2C_SetBusSpeed(rtDW.obj_i.I2CDriverObj.MW_I2C_HANDLE, 100000UL);
  rtDW.obj_i.isSetupComplete = true;

  /* Start for MATLABSystem: '<S15>/I2C Read6' */
  rtDW.obj_k.DefaultMaximumBusSpeedInHz = 400000.0;
  rtDW.obj_k.matlabCodegenIsDeleted = false;
  rtDW.obj_k.SampleTime = rtP.I2CRead6_SampleTime;
  rtDW.obj_k.isInitialized = 1L;
  rtDW.obj_k.I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(0, MW_I2C_MASTER);
  rtDW.obj_k.BusSpeed = 100000UL;
  MW_I2C_SetBusSpeed(rtDW.obj_k.I2CDriverObj.MW_I2C_HANDLE, 100000UL);
  rtDW.obj_k.isSetupComplete = true;

  /* SystemInitialize for MATLABSystem: '<S15>/I2C Read' incorporates:
   *  Outport: '<S15>/Out1'
   */
  rtDW.I2CRead = rtP.Out1_Y0;

  /* SystemInitialize for MATLABSystem: '<S15>/I2C Read1' incorporates:
   *  Outport: '<S15>/Out2'
   */
  rtDW.I2CRead1 = rtP.Out2_Y0;

  /* SystemInitialize for MATLABSystem: '<S15>/I2C Read2' incorporates:
   *  Outport: '<S15>/Out3'
   */
  rtDW.I2CRead2 = rtP.Out3_Y0;

  /* SystemInitialize for MATLABSystem: '<S15>/I2C Read4' incorporates:
   *  Outport: '<S15>/Out4'
   */
  rtDW.I2CRead4 = rtP.Out4_Y0;

  /* SystemInitialize for MATLABSystem: '<S15>/I2C Read3' incorporates:
   *  Outport: '<S15>/Out5'
   */
  rtDW.I2CRead3 = rtP.Out5_Y0;

  /* SystemInitialize for MATLABSystem: '<S15>/I2C Read5' incorporates:
   *  Outport: '<S15>/Out6'
   */
  rtDW.I2CRead5 = rtP.Out6_Y0;

  /* SystemInitialize for MATLABSystem: '<S15>/I2C Read6' incorporates:
   *  Outport: '<S15>/Out7'
   */
  rtDW.I2CRead6 = rtP.Out7_Y0;

  /* End of SystemInitialize for SubSystem: '<S2>/Subsystem' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/DOW' */
  /* Start for MATLABSystem: '<S1>/I2C Write' */
  rtDW.obj_f.DefaultMaximumBusSpeedInHz = 400000.0;
  rtDW.obj_f.matlabCodegenIsDeleted = false;
  rtDW.obj_f.isInitialized = 1L;
  rtDW.obj_f.I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(0, MW_I2C_MASTER);
  rtDW.obj_f.BusSpeed = 100000UL;
  MW_I2C_SetBusSpeed(rtDW.obj_f.I2CDriverObj.MW_I2C_HANDLE, 100000UL);
  rtDW.obj_f.isSetupComplete = true;

  /* End of SystemInitialize for SubSystem: '<Root>/DOW' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/Day' */
  /* Start for MATLABSystem: '<S3>/I2C Write' */
  rtDW.obj_n.DefaultMaximumBusSpeedInHz = 400000.0;
  rtDW.obj_n.matlabCodegenIsDeleted = false;
  rtDW.obj_n.isInitialized = 1L;
  rtDW.obj_n.I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(0, MW_I2C_MASTER);
  rtDW.obj_n.BusSpeed = 100000UL;
  MW_I2C_SetBusSpeed(rtDW.obj_n.I2CDriverObj.MW_I2C_HANDLE, 100000UL);
  rtDW.obj_n.isSetupComplete = true;

  /* End of SystemInitialize for SubSystem: '<Root>/Day' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/Hour' */
  /* Start for MATLABSystem: '<S4>/I2C Write' */
  rtDW.obj_j4.DefaultMaximumBusSpeedInHz = 400000.0;
  rtDW.obj_j4.matlabCodegenIsDeleted = false;
  rtDW.obj_j4.isInitialized = 1L;
  rtDW.obj_j4.I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(0, MW_I2C_MASTER);
  rtDW.obj_j4.BusSpeed = 100000UL;
  MW_I2C_SetBusSpeed(rtDW.obj_j4.I2CDriverObj.MW_I2C_HANDLE, 100000UL);
  rtDW.obj_j4.isSetupComplete = true;

  /* End of SystemInitialize for SubSystem: '<Root>/Hour' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/Month' */
  /* Start for MATLABSystem: '<S5>/I2C Write' */
  rtDW.obj_ic.DefaultMaximumBusSpeedInHz = 400000.0;
  rtDW.obj_ic.matlabCodegenIsDeleted = false;
  rtDW.obj_ic.isInitialized = 1L;
  rtDW.obj_ic.I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(0, MW_I2C_MASTER);
  rtDW.obj_ic.BusSpeed = 100000UL;
  MW_I2C_SetBusSpeed(rtDW.obj_ic.I2CDriverObj.MW_I2C_HANDLE, 100000UL);
  rtDW.obj_ic.isSetupComplete = true;

  /* End of SystemInitialize for SubSystem: '<Root>/Month' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/Second' */
  /* Start for MATLABSystem: '<S6>/I2C Write' */
  rtDW.obj_p.DefaultMaximumBusSpeedInHz = 400000.0;
  rtDW.obj_p.matlabCodegenIsDeleted = false;
  rtDW.obj_p.isInitialized = 1L;
  rtDW.obj_p.I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(0, MW_I2C_MASTER);
  rtDW.obj_p.BusSpeed = 100000UL;
  MW_I2C_SetBusSpeed(rtDW.obj_p.I2CDriverObj.MW_I2C_HANDLE, 100000UL);
  rtDW.obj_p.isSetupComplete = true;

  /* End of SystemInitialize for SubSystem: '<Root>/Second' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/Year' */
  /* Start for MATLABSystem: '<S7>/I2C Write' */
  rtDW.obj_jx.DefaultMaximumBusSpeedInHz = 400000.0;
  rtDW.obj_jx.matlabCodegenIsDeleted = false;
  rtDW.obj_jx.isInitialized = 1L;
  rtDW.obj_jx.I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(0, MW_I2C_MASTER);
  rtDW.obj_jx.BusSpeed = 100000UL;
  MW_I2C_SetBusSpeed(rtDW.obj_jx.I2CDriverObj.MW_I2C_HANDLE, 100000UL);
  rtDW.obj_jx.isSetupComplete = true;

  /* End of SystemInitialize for SubSystem: '<Root>/Year' */

  /* SystemInitialize for Enabled SubSystem: '<Root>/minute' */
  /* Start for MATLABSystem: '<S8>/I2C Write' */
  rtDW.obj_j.DefaultMaximumBusSpeedInHz = 400000.0;
  rtDW.obj_j.matlabCodegenIsDeleted = false;
  rtDW.obj_j.isInitialized = 1L;
  rtDW.obj_j.I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(0, MW_I2C_MASTER);
  rtDW.obj_j.BusSpeed = 100000UL;
  MW_I2C_SetBusSpeed(rtDW.obj_j.I2CDriverObj.MW_I2C_HANDLE, 100000UL);
  rtDW.obj_j.isSetupComplete = true;

  /* End of SystemInitialize for SubSystem: '<Root>/minute' */

  /* Start for MATLABSystem: '<Root>/CAN Receive' */
  rtDW.obj.isInitialized = 0L;
  rtDW.obj.spiObj.isInitialized = 0L;
  rtDW.obj.spiObj.matlabCodegenIsDeleted = false;
  rtDW.obj.matlabCodegenIsDeleted = false;
  rtDW.obj.SampleTime = rtP.CANReceive_SampleTime;
  SystemCore_setup(&rtDW.obj);

  /* Start for MATLABSystem: '<Root>/CAN Transmit' */
  SystemCore_setup_m(&rtDW.obj_a);

  /* Start for MATLABSystem: '<Root>/Digital Output' */
  rtDW.obj_pt.matlabCodegenIsDeleted = false;
  rtDW.obj_pt.isInitialized = 1L;
  digitalIOSetup(13, 1);
  rtDW.obj_pt.isSetupComplete = true;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
