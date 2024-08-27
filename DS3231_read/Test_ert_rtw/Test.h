/*
 * File: Test.h
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

#ifndef RTW_HEADER_Test_h_
#define RTW_HEADER_Test_h_
#ifndef Test_COMMON_INCLUDES_
#define Test_COMMON_INCLUDES_
#include <math.h>
#include <string.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_ArduinoCAN.h"
#include "MW_SPIwriteRead.h"
#include "MW_I2C.h"
#include "MW_arduino_digitalio.h"
#endif                                 /* Test_COMMON_INCLUDES_ */

#include "MW_SVD.h"
#include "can_message.h"
#include "MW_target_hardware_resources.h"
#define Test_M                         (rtM)

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

#ifndef DEFINED_TYPEDEF_FOR_CAN_MESSAGE_BUS_
#define DEFINED_TYPEDEF_FOR_CAN_MESSAGE_BUS_

typedef struct {
  uint8_T Extended;
  uint8_T Length;
  uint8_T Remote;
  uint8_T Error;
  uint32_T ID;
  real_T Timestamp;
  uint8_T Data[8];
} CAN_MESSAGE_BUS;

#endif

#ifndef DEFINED_TYPEDEF_FOR_arduinoCANMsg_
#define DEFINED_TYPEDEF_FOR_arduinoCANMsg_

typedef struct {
  uint8_T Extended;
  uint8_T Length;
  uint8_T Remote;
  uint8_T Error;
  uint32_T ID;
  real_T Timestamp;
  uint8_T Data[8];
} arduinoCANMsg;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Time_
#define DEFINED_TYPEDEF_FOR_Time_

typedef struct {
  uint8_T minute;
  uint8_T second;
  uint8_T hour;
  uint8_T DOW;
  uint8_T Date;
  uint8_T Month;
  uint8_T Year;
} Time;

#endif

#ifndef struct_tag_HKgB5DiOrWaNRtJ1KSLpNC
#define struct_tag_HKgB5DiOrWaNRtJ1KSLpNC

struct tag_HKgB5DiOrWaNRtJ1KSLpNC
{
  int16_T __dummy;
};

#endif                                 /* struct_tag_HKgB5DiOrWaNRtJ1KSLpNC */

#ifndef typedef_c_arduinodriver_ArduinoSPI
#define typedef_c_arduinodriver_ArduinoSPI

typedef struct tag_HKgB5DiOrWaNRtJ1KSLpNC c_arduinodriver_ArduinoSPI;

#endif                                 /* typedef_c_arduinodriver_ArduinoSPI */

/* Custom Type definition for MATLABSystem: '<S8>/I2C Write' */
#include "MW_SVD.h"
#ifndef struct_tag_jbIFaTBEZATkkvPSmnoPa
#define struct_tag_jbIFaTBEZATkkvPSmnoPa

struct tag_jbIFaTBEZATkkvPSmnoPa
{
  MW_Handle_Type MW_I2C_HANDLE;
};

#endif                                 /* struct_tag_jbIFaTBEZATkkvPSmnoPa */

#ifndef typedef_c_arduinodriver_ArduinoI2C
#define typedef_c_arduinodriver_ArduinoI2C

typedef struct tag_jbIFaTBEZATkkvPSmnoPa c_arduinodriver_ArduinoI2C;

#endif                                 /* typedef_c_arduinodriver_ArduinoI2C */

#ifndef struct_tag_3coDYKg8JwMUxQ16KBcXBE
#define struct_tag_3coDYKg8JwMUxQ16KBcXBE

struct tag_3coDYKg8JwMUxQ16KBcXBE
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  c_arduinodriver_ArduinoI2C I2CDriverObj;
  uint32_T BusSpeed;
  real_T DefaultMaximumBusSpeedInHz;
};

#endif                                 /* struct_tag_3coDYKg8JwMUxQ16KBcXBE */

#ifndef typedef_codertarget_arduinobase_interna
#define typedef_codertarget_arduinobase_interna

typedef struct tag_3coDYKg8JwMUxQ16KBcXBE codertarget_arduinobase_interna;

#endif                             /* typedef_codertarget_arduinobase_interna */

#ifndef struct_tag_chY474Xs2EmAHQmJ9UhmtD
#define struct_tag_chY474Xs2EmAHQmJ9UhmtD

struct tag_chY474Xs2EmAHQmJ9UhmtD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  c_arduinodriver_ArduinoI2C I2CDriverObj;
  uint32_T BusSpeed;
  real_T DefaultMaximumBusSpeedInHz;
  real_T SampleTime;
};

#endif                                 /* struct_tag_chY474Xs2EmAHQmJ9UhmtD */

#ifndef typedef_codertarget_arduinobase_inter_m
#define typedef_codertarget_arduinobase_inter_m

typedef struct tag_chY474Xs2EmAHQmJ9UhmtD codertarget_arduinobase_inter_m;

#endif                             /* typedef_codertarget_arduinobase_inter_m */

#ifndef struct_tag_04b6x6tDldj9IrIH2gmbjG
#define struct_tag_04b6x6tDldj9IrIH2gmbjG

struct tag_04b6x6tDldj9IrIH2gmbjG
{
  int16_T __dummy;
};

#endif                                 /* struct_tag_04b6x6tDldj9IrIH2gmbjG */

#ifndef typedef_b_arduinodriver_ArduinoDigitalI
#define typedef_b_arduinodriver_ArduinoDigitalI

typedef struct tag_04b6x6tDldj9IrIH2gmbjG b_arduinodriver_ArduinoDigitalI;

#endif                             /* typedef_b_arduinodriver_ArduinoDigitalI */

#ifndef struct_tag_AYWgtFscQm3mLUJYb3A20C
#define struct_tag_AYWgtFscQm3mLUJYb3A20C

struct tag_AYWgtFscQm3mLUJYb3A20C
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_arduinodriver_ArduinoDigitalI DigitalIODriverObj;
};

#endif                                 /* struct_tag_AYWgtFscQm3mLUJYb3A20C */

#ifndef typedef_codertarget_arduinobase_blocks_
#define typedef_codertarget_arduinobase_blocks_

typedef struct tag_AYWgtFscQm3mLUJYb3A20C codertarget_arduinobase_blocks_;

#endif                             /* typedef_codertarget_arduinobase_blocks_ */

#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE

struct tag_BlgwLpgj2bjudmbmVKWwDE
{
  uint32_T f1[8];
};

#endif                                 /* struct_tag_BlgwLpgj2bjudmbmVKWwDE */

#ifndef typedef_cell_wrap
#define typedef_cell_wrap

typedef struct tag_BlgwLpgj2bjudmbmVKWwDE cell_wrap;

#endif                                 /* typedef_cell_wrap */

#ifndef struct_tag_Kzypklp1PhBMu0uAeV3ARG
#define struct_tag_Kzypklp1PhBMu0uAeV3ARG

struct tag_Kzypklp1PhBMu0uAeV3ARG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap inputVarSize;
  real_T slaveSelectPin_;
  c_arduinodriver_ArduinoSPI SPIDriverObj;
};

#endif                                 /* struct_tag_Kzypklp1PhBMu0uAeV3ARG */

#ifndef typedef_n_codertarget_arduinobase_inter
#define typedef_n_codertarget_arduinobase_inter

typedef struct tag_Kzypklp1PhBMu0uAeV3ARG n_codertarget_arduinobase_inter;

#endif                             /* typedef_n_codertarget_arduinobase_inter */

#ifndef struct_tag_rwhHF4v9EP1RS9msostRxB
#define struct_tag_rwhHF4v9EP1RS9msostRxB

struct tag_rwhHF4v9EP1RS9msostRxB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T SampleTime;
  n_codertarget_arduinobase_inter spiObj;
};

#endif                                 /* struct_tag_rwhHF4v9EP1RS9msostRxB */

#ifndef typedef_codertarget_arduinobase_inte_m2
#define typedef_codertarget_arduinobase_inte_m2

typedef struct tag_rwhHF4v9EP1RS9msostRxB codertarget_arduinobase_inte_m2;

#endif                             /* typedef_codertarget_arduinobase_inte_m2 */

#ifndef struct_tag_culdkfWvBiLVMAgNKbt2cB
#define struct_tag_culdkfWvBiLVMAgNKbt2cB

struct tag_culdkfWvBiLVMAgNKbt2cB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  n_codertarget_arduinobase_inter spiObj;
};

#endif                                 /* struct_tag_culdkfWvBiLVMAgNKbt2cB */

#ifndef typedef_codertarget_arduinobase_int_m2g
#define typedef_codertarget_arduinobase_int_m2g

typedef struct tag_culdkfWvBiLVMAgNKbt2cB codertarget_arduinobase_int_m2g;

#endif                             /* typedef_codertarget_arduinobase_int_m2g */

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inte_m2 obj; /* '<Root>/CAN Receive' */
  codertarget_arduinobase_int_m2g obj_a;/* '<Root>/CAN Transmit' */
  codertarget_arduinobase_inter_m obj_k;/* '<S15>/I2C Read6' */
  codertarget_arduinobase_inter_m obj_i;/* '<S15>/I2C Read5' */
  codertarget_arduinobase_inter_m obj_kp;/* '<S15>/I2C Read4' */
  codertarget_arduinobase_inter_m obj_c;/* '<S15>/I2C Read3' */
  codertarget_arduinobase_inter_m obj_h;/* '<S15>/I2C Read2' */
  codertarget_arduinobase_inter_m obj_e;/* '<S15>/I2C Read1' */
  codertarget_arduinobase_inter_m obj_m;/* '<S15>/I2C Read' */
  cell_wrap varSizes;
  cell_wrap varSizes_m;
  cell_wrap varSizes_c;
  cell_wrap varSizes_k;
  cell_wrap varSizes_cx;
  cell_wrap varSizes_b;
  cell_wrap varSizes_p;
  cell_wrap varSizes_cv;
  cell_wrap varSizes_f;
  cell_wrap varSizes_g;
  cell_wrap varSizes_g1;
  cell_wrap varSizes_me;
  cell_wrap varSizes_n;
  cell_wrap varSizes_pp;
  cell_wrap varSizes_l;
  cell_wrap varSizes_j;
  cell_wrap varSizes_d;
  cell_wrap varSizes_gu;
  cell_wrap varSizes_ld;
  cell_wrap varSizes_dh;
  cell_wrap varSizes_dy;
  cell_wrap varSizes_lx;
  cell_wrap varSizes_o;
  cell_wrap varSizes_bj;
  cell_wrap varSizes_nu;
  cell_wrap varSizes_bs;
  cell_wrap varSizes_ln;
  cell_wrap varSizes_h;
  cell_wrap varSizes_bn;
  cell_wrap varSizes_da;
  cell_wrap varSizes_e;
  cell_wrap varSizes_bjv;
  cell_wrap varSizes_jz;
  cell_wrap varSizes_fd;
  cell_wrap varSizes_a;
  cell_wrap varSizes_ju;
  cell_wrap varSizes_jz5;
  cell_wrap varSizes_o4;
  cell_wrap varSizes_ny;
  cell_wrap varSizes_i;
  cell_wrap varSizes_oy;
  cell_wrap varSizes_nv;
  cell_wrap varSizes_m3;
  cell_wrap varSizes_cz;
  cell_wrap varSizes_md;
  cell_wrap varSizes_m3y;
  cell_wrap varSizes_ja;
  cell_wrap varSizes_h5;
  cell_wrap varSizes_c0;
  cell_wrap varSizes_ct;
  cell_wrap varSizes_px;
  cell_wrap varSizes_p5;
  cell_wrap varSizes_af;
  cell_wrap varSizes_ev;
  cell_wrap varSizes_ax;
  cell_wrap varSizes_as;
  cell_wrap varSizes_if;
  cell_wrap varSizes_lt;
  cell_wrap varSizes_oj;
  cell_wrap varSizes_o2;
  cell_wrap varSizes_ip;
  cell_wrap varSizes_fk;
  cell_wrap varSizes_iz;
  cell_wrap varSizes_ff;
  cell_wrap varSizes_gx;
  cell_wrap varSizes_co;
  cell_wrap varSizes_o3;
  codertarget_arduinobase_interna obj_j;/* '<S8>/I2C Write' */
  codertarget_arduinobase_interna obj_jx;/* '<S7>/I2C Write' */
  codertarget_arduinobase_interna obj_p;/* '<S6>/I2C Write' */
  codertarget_arduinobase_interna obj_ic;/* '<S5>/I2C Write' */
  codertarget_arduinobase_interna obj_j4;/* '<S4>/I2C Write' */
  codertarget_arduinobase_interna obj_n;/* '<S3>/I2C Write' */
  codertarget_arduinobase_interna obj_f;/* '<S1>/I2C Write' */
  CAN_MESSAGE_BUS CANPack;             /* '<Root>/CAN Pack' */
  arduinoCANMsg CANReceive_o1;         /* '<Root>/CAN Receive' */
  codertarget_arduinobase_blocks_ obj_pt;/* '<Root>/Digital Output' */
  real_T txData[64];
  real_T Sum;                          /* '<S9>/Sum' */
  real_T CANUnpack_o1;                 /* '<Root>/CAN Unpack' */
  real_T CANUnpack_o2;                 /* '<Root>/CAN Unpack' */
  real_T CANUnpack_o3;                 /* '<Root>/CAN Unpack' */
  real_T CANUnpack_o4;                 /* '<Root>/CAN Unpack' */
  real_T CANUnpack_o5;                 /* '<Root>/CAN Unpack' */
  real_T CANUnpack_o6;                 /* '<Root>/CAN Unpack' */
  real_T CANUnpack_o7;                 /* '<Root>/CAN Unpack' */
  real_T MathFunction;                 /* '<S8>/Math Function' */
  real_T varargin_1;
  real_T varargin_1_l;
  real_T varargin_1_m;
  real_T varargin_1_mj;
  real_T varargin_1_c;
  real_T varargin_1_f;
  real_T varargin_1_p;
  real_T varargin_1_e;
  real_T varargin_1_o;
  real_T varargin_1_h;
  real_T varargin_1_l5;
  real_T varargin_1_h2;
  real_T varargin_1_me;
  real_T varargin_1_mc;
  real_T varargin_1_h3;
  real_T varargin_1_cs;
  real_T varargin_1_k;
  real_T varargin_1_pc;
  real_T varargin_1_px;
  real_T varargin_1_p4;
  real_T varargin_1_a;
  real_T varargin_1_j;
  real_T varargin_1_ek;
  real_T varargin_1_ol;
  real_T varargin_1_b;
  real_T varargin_1_ao;
  real_T varargin_1_g;
  real_T varargin_1_ex;
  real_T varargin_1_fi;
  real_T varargin_1_h22;
  real_T varargin_1_ei;
  uint32_T mask0;
  uint32_T filter0;
  uint32_T filter1;
  uint32_T mask1;
  uint32_T filter2;
  uint32_T filter3;
  int_T CANPack_ModeSignalID;          /* '<Root>/CAN Pack' */
  int_T CANUnpack_ModeSignalID;        /* '<Root>/CAN Unpack' */
  int_T CANUnpack_StatusPortID;        /* '<Root>/CAN Unpack' */
  uint8_T Sum_m;                       /* '<S10>/Sum' */
  uint8_T BitwiseOR1;                  /* '<S11>/Bitwise OR1' */
  uint8_T Sum_g;                       /* '<S12>/Sum' */
  uint8_T Sum_o;                       /* '<S13>/Sum' */
  uint8_T Sum_k;                       /* '<S14>/Sum' */
  uint8_T Sum_d;                       /* '<S16>/Sum' */
  uint8_T CANUnpack_o8;                /* '<Root>/CAN Unpack' */
  uint8_T I2CRead6;                    /* '<S15>/I2C Read6' */
  uint8_T I2CRead5;                    /* '<S15>/I2C Read5' */
  uint8_T I2CRead4;                    /* '<S15>/I2C Read4' */
  uint8_T I2CRead3;                    /* '<S15>/I2C Read3' */
  uint8_T I2CRead2;                    /* '<S15>/I2C Read2' */
  uint8_T I2CRead1;                    /* '<S15>/I2C Read1' */
  uint8_T I2CRead;                     /* '<S15>/I2C Read' */
  char_T idType[28];
} DW;

/* Parameters (default storage) */
struct P_ {
  Time Sig_InitialValue;               /* Computed Parameter: Sig_InitialValue
                                        * Referenced by:
                                        */
  real_T CANReceive_SampleTime;        /* Expression: 0.1
                                        * Referenced by: '<Root>/CAN Receive'
                                        */
  real_T I2CRead_SampleTime;           /* Expression: 0.5
                                        * Referenced by: '<S15>/I2C Read'
                                        */
  real_T I2CRead1_SampleTime;          /* Expression: 0.5
                                        * Referenced by: '<S15>/I2C Read1'
                                        */
  real_T I2CRead2_SampleTime;          /* Expression: 0.5
                                        * Referenced by: '<S15>/I2C Read2'
                                        */
  real_T I2CRead3_SampleTime;          /* Expression: 0.5
                                        * Referenced by: '<S15>/I2C Read3'
                                        */
  real_T I2CRead4_SampleTime;          /* Expression: 0.5
                                        * Referenced by: '<S15>/I2C Read4'
                                        */
  real_T I2CRead5_SampleTime;          /* Expression: 0.5
                                        * Referenced by: '<S15>/I2C Read5'
                                        */
  real_T I2CRead6_SampleTime;          /* Expression: 0.5
                                        * Referenced by: '<S15>/I2C Read6'
                                        */
  real_T Constant2_Value;              /* Expression: 10
                                        * Referenced by: '<S3>/Constant2'
                                        */
  real_T Constant1_Value;              /* Expression: 10
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T Constant4_Value;              /* Expression: 20
                                        * Referenced by: '<S4>/Constant4'
                                        */
  real_T Constant2_Value_b;            /* Expression: 10
                                        * Referenced by: '<S4>/Constant2'
                                        */
  real_T Constant1_Value_d;            /* Expression: 10
                                        * Referenced by: '<S4>/Constant1'
                                        */
  real_T Constant2_Value_c;            /* Expression: 10
                                        * Referenced by: '<S5>/Constant2'
                                        */
  real_T Constant1_Value_k;            /* Expression: 10
                                        * Referenced by: '<S5>/Constant1'
                                        */
  real_T Constant2_Value_n;            /* Expression: 10
                                        * Referenced by: '<S6>/Constant2'
                                        */
  real_T Constant1_Value_f;            /* Expression: 10
                                        * Referenced by: '<S6>/Constant1'
                                        */
  real_T Constant4_Value_g;            /* Expression: 2000
                                        * Referenced by: '<S7>/Constant4'
                                        */
  real_T Constant2_Value_m;            /* Expression: 10
                                        * Referenced by: '<S7>/Constant2'
                                        */
  real_T Constant1_Value_l;            /* Expression: 10
                                        * Referenced by: '<S7>/Constant1'
                                        */
  real_T Constant2_Value_i;            /* Expression: 10
                                        * Referenced by: '<S8>/Constant2'
                                        */
  real_T Constant1_Value_h;            /* Expression: 10
                                        * Referenced by: '<S8>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 2000
                                        * Referenced by: '<S9>/Constant'
                                        */
  uint8_T Constant_Value_i;            /* Expression: 0x07
                                        * Referenced by: '<S1>/Constant'
                                        */
  uint8_T Out1_Y0;                     /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S15>/Out1'
                                        */
  uint8_T Out2_Y0;                     /* Computed Parameter: Out2_Y0
                                        * Referenced by: '<S15>/Out2'
                                        */
  uint8_T Out3_Y0;                     /* Computed Parameter: Out3_Y0
                                        * Referenced by: '<S15>/Out3'
                                        */
  uint8_T Out4_Y0;                     /* Computed Parameter: Out4_Y0
                                        * Referenced by: '<S15>/Out4'
                                        */
  uint8_T Out5_Y0;                     /* Computed Parameter: Out5_Y0
                                        * Referenced by: '<S15>/Out5'
                                        */
  uint8_T Out6_Y0;                     /* Computed Parameter: Out6_Y0
                                        * Referenced by: '<S15>/Out6'
                                        */
  uint8_T Out7_Y0;                     /* Computed Parameter: Out7_Y0
                                        * Referenced by: '<S15>/Out7'
                                        */
  uint8_T Constant_Value_k;            /* Expression: 0x0F
                                        * Referenced by: '<S3>/Constant'
                                        */
  uint8_T Constant5_Value;             /* Expression: 0x20
                                        * Referenced by: '<S4>/Constant5'
                                        */
  uint8_T Constant3_Value;             /* Expression: 0x10
                                        * Referenced by: '<S4>/Constant3'
                                        */
  uint8_T Constant_Value_e;            /* Expression: 0x0F
                                        * Referenced by: '<S4>/Constant'
                                        */
  uint8_T Constant3_Value_b;           /* Expression: 0x10
                                        * Referenced by: '<S5>/Constant3'
                                        */
  uint8_T Constant_Value_o;            /* Expression: 0x0F
                                        * Referenced by: '<S5>/Constant'
                                        */
  uint8_T Constant3_Value_a;           /* Expression: 0x70
                                        * Referenced by: '<S6>/Constant3'
                                        */
  uint8_T Constant_Value_ol;           /* Expression: 0x0F
                                        * Referenced by: '<S6>/Constant'
                                        */
  uint8_T Constant3_Value_e;           /* Expression: 0xF0
                                        * Referenced by: '<S7>/Constant3'
                                        */
  uint8_T Constant_Value_c;            /* Expression: 0x0F
                                        * Referenced by: '<S7>/Constant'
                                        */
  uint8_T Constant3_Value_i;           /* Expression: 0x70
                                        * Referenced by: '<S8>/Constant3'
                                        */
  uint8_T Constant_Value_j;            /* Expression: 0x0F
                                        * Referenced by: '<S8>/Constant'
                                        */
  uint8_T Constant1_Value_hz;          /* Expression: 0xF0
                                        * Referenced by: '<S9>/Constant1'
                                        */
  uint8_T Constant2_Value_e;           /* Expression: 0x0F
                                        * Referenced by: '<S9>/Constant2'
                                        */
  uint8_T Multiply_Gain;               /* Computed Parameter: Multiply_Gain
                                        * Referenced by: '<S9>/Multiply'
                                        */
  uint8_T Constant1_Value_c;           /* Expression: 0x10
                                        * Referenced by: '<S10>/Constant1'
                                        */
  uint8_T Constant2_Value_a;           /* Expression: 0x0F
                                        * Referenced by: '<S10>/Constant2'
                                        */
  uint8_T Multiply_Gain_l;             /* Computed Parameter: Multiply_Gain_l
                                        * Referenced by: '<S10>/Multiply'
                                        */
  uint8_T Constant2_Value_mx;          /* Expression: 0x0F
                                        * Referenced by: '<S11>/Constant2'
                                        */
  uint8_T Constant1_Value_j;           /* Expression: 0x30
                                        * Referenced by: '<S12>/Constant1'
                                        */
  uint8_T Constant2_Value_f;           /* Expression: 0x0F
                                        * Referenced by: '<S12>/Constant2'
                                        */
  uint8_T Multiply_Gain_lk;            /* Computed Parameter: Multiply_Gain_lk
                                        * Referenced by: '<S12>/Multiply'
                                        */
  uint8_T Constant1_Value_ja;          /* Expression: 0x10
                                        * Referenced by: '<S13>/Constant1'
                                        */
  uint8_T Constant3_Value_ei;          /* Expression: 0x20
                                        * Referenced by: '<S13>/Constant3'
                                        */
  uint8_T Constant2_Value_ag;          /* Expression: 0x0F
                                        * Referenced by: '<S13>/Constant2'
                                        */
  uint8_T Multiply_Gain_f;             /* Computed Parameter: Multiply_Gain_f
                                        * Referenced by: '<S13>/Multiply'
                                        */
  uint8_T Multiply1_Gain;              /* Computed Parameter: Multiply1_Gain
                                        * Referenced by: '<S13>/Multiply1'
                                        */
  uint8_T Constant1_Value_a;           /* Expression: 0xF0
                                        * Referenced by: '<S14>/Constant1'
                                        */
  uint8_T Constant2_Value_m1;          /* Expression: 0x0F
                                        * Referenced by: '<S14>/Constant2'
                                        */
  uint8_T Multiply_Gain_j;             /* Computed Parameter: Multiply_Gain_j
                                        * Referenced by: '<S14>/Multiply'
                                        */
  uint8_T Constant1_Value_as;          /* Expression: 0xF0
                                        * Referenced by: '<S16>/Constant1'
                                        */
  uint8_T Constant2_Value_o;           /* Expression: 0x0F
                                        * Referenced by: '<S16>/Constant2'
                                        */
  uint8_T Multiply_Gain_n;             /* Computed Parameter: Multiply_Gain_n
                                        * Referenced by: '<S16>/Multiply'
                                        */
};

/* Parameters (default storage) */
typedef struct P_ P;

/* Real-time Model Data Structure */
struct tag_RTM {
  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[2];
    } TaskCounters;
  } Timing;
};

extern CAN_DATATYPE CAN_DATATYPE_GROUND;

/* Block parameters (default storage) */
extern P rtP;

/* Block signals and states (default storage) */
extern DW rtDW;

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern Time Sig;                       /* Simulink.Signal object 'Sig' */

/* Model entry point functions */
extern void Test_initialize(void);
extern void Test_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/Display' : Unused code path elimination
 * Block '<S4>/Display' : Unused code path elimination
 * Block '<S5>/Display' : Unused code path elimination
 * Block '<S6>/Display' : Unused code path elimination
 * Block '<S7>/Display' : Unused code path elimination
 * Block '<S8>/Display' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Test'
 * '<S1>'   : 'Test/DOW'
 * '<S2>'   : 'Test/DS3231 transmit'
 * '<S3>'   : 'Test/Day'
 * '<S4>'   : 'Test/Hour'
 * '<S5>'   : 'Test/Month'
 * '<S6>'   : 'Test/Second'
 * '<S7>'   : 'Test/Year'
 * '<S8>'   : 'Test/minute'
 * '<S9>'   : 'Test/DS3231 transmit/BCD2int1'
 * '<S10>'  : 'Test/DS3231 transmit/BCD2int5'
 * '<S11>'  : 'Test/DS3231 transmit/DOWConvert'
 * '<S12>'  : 'Test/DS3231 transmit/DateConvert'
 * '<S13>'  : 'Test/DS3231 transmit/HourConvert'
 * '<S14>'  : 'Test/DS3231 transmit/SecondConvert'
 * '<S15>'  : 'Test/DS3231 transmit/Subsystem'
 * '<S16>'  : 'Test/DS3231 transmit/minuteConvert'
 * '<S17>'  : 'Test/DS3231 transmit/BCD2int1/Bit Shift'
 * '<S18>'  : 'Test/DS3231 transmit/BCD2int1/Bit Shift/bit_shift'
 * '<S19>'  : 'Test/DS3231 transmit/BCD2int5/Bit Shift'
 * '<S20>'  : 'Test/DS3231 transmit/BCD2int5/Bit Shift/bit_shift'
 * '<S21>'  : 'Test/DS3231 transmit/DateConvert/Bit Shift'
 * '<S22>'  : 'Test/DS3231 transmit/DateConvert/Bit Shift/bit_shift'
 * '<S23>'  : 'Test/DS3231 transmit/HourConvert/Bit Shift'
 * '<S24>'  : 'Test/DS3231 transmit/HourConvert/Bit Shift1'
 * '<S25>'  : 'Test/DS3231 transmit/HourConvert/Bit Shift/bit_shift'
 * '<S26>'  : 'Test/DS3231 transmit/HourConvert/Bit Shift1/bit_shift'
 * '<S27>'  : 'Test/DS3231 transmit/SecondConvert/Bit Shift'
 * '<S28>'  : 'Test/DS3231 transmit/SecondConvert/Bit Shift/bit_shift'
 * '<S29>'  : 'Test/DS3231 transmit/minuteConvert/Bit Shift'
 * '<S30>'  : 'Test/DS3231 transmit/minuteConvert/Bit Shift/bit_shift'
 * '<S31>'  : 'Test/Day/Bit Shift'
 * '<S32>'  : 'Test/Day/Bit Shift/bit_shift'
 * '<S33>'  : 'Test/Hour/Bit Shift'
 * '<S34>'  : 'Test/Hour/Bit Shift1'
 * '<S35>'  : 'Test/Hour/Bit Shift/bit_shift'
 * '<S36>'  : 'Test/Hour/Bit Shift1/bit_shift'
 * '<S37>'  : 'Test/Month/Bit Shift'
 * '<S38>'  : 'Test/Month/Bit Shift/bit_shift'
 * '<S39>'  : 'Test/Second/Bit Shift'
 * '<S40>'  : 'Test/Second/Bit Shift/bit_shift'
 * '<S41>'  : 'Test/Year/Bit Shift'
 * '<S42>'  : 'Test/Year/Bit Shift/bit_shift'
 * '<S43>'  : 'Test/minute/Bit Shift'
 * '<S44>'  : 'Test/minute/Bit Shift/bit_shift'
 */

/*-
 * Requirements for '<Root>': Test

 */
#endif                                 /* RTW_HEADER_Test_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
