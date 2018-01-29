/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/IIR.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {43, 0};
static int ng3[] = {0, 0};
static int ng4[] = {13, 0};
static int ng5[] = {66, 0};
static int ng6[] = {44, 0};
static int ng7[] = {1, 0};
static int ng8[] = {2, 0};
static int ng9[] = {3, 0};
static int ng10[] = {4, 0};
static int ng11[] = {0, 0, 0, 0, 0, 0};



static void Always_68_0(char *t0)
{
    char t4[16];
    char t6[8];
    char t17[8];
    char t18[8];
    char t19[8];
    char t42[8];
    char t43[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;

LAB0:    t1 = (t0 + 6264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 8072);
    *((int *)t2) = 1;
    t3 = (t0 + 6296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(68, ng0);

LAB5:    xsi_set_current_line(69, ng0);
    t5 = ((char*)((ng1)));
    t7 = (t0 + 3984U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t7) = t13;
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 4194303U);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 4194303U);
    xsi_vlogtype_concat(t4, 44, 44, 2U, t6, 22, t5, 22);
    t16 = (t0 + 5024);
    t20 = (t0 + 5024);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng2)));
    t24 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t17, t18, t19, ((int*)(t22)), 2, t23, 32, 1, t24, 32, 1);
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t18 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3984U);
    t3 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t17 + 4);
    t5 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 22);
    *((unsigned int *)t17) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 22);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t14 & 1023U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 1023U);
    t7 = ((char*)((ng4)));
    t8 = (t0 + 3984U);
    t9 = *((char **)t8);
    memset(t19, 0, 8);
    t8 = (t19 + 4);
    t16 = (t9 + 4);
    t26 = *((unsigned int *)t9);
    t29 = (t26 >> 31);
    t33 = (t29 & 1);
    *((unsigned int *)t19) = t33;
    t36 = *((unsigned int *)t16);
    t38 = (t36 >> 31);
    t39 = (t38 & 1);
    *((unsigned int *)t8) = t39;
    xsi_vlog_mul_concat(t18, 13, 1, t7, 1U, t19, 1);
    xsi_vlogtype_concat(t6, 23, 23, 2U, t18, 13, t17, 10);
    t20 = (t0 + 5024);
    t21 = (t0 + 5024);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng5)));
    t25 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t42, t43, t44, ((int*)(t23)), 2, t24, 32, 1, t25, 32, 1);
    t28 = (t42 + 4);
    t45 = *((unsigned int *)t28);
    t27 = (!(t45));
    t32 = (t43 + 4);
    t46 = *((unsigned int *)t32);
    t30 = (!(t46));
    t31 = (t27 && t30);
    t47 = (t44 + 4);
    t48 = *((unsigned int *)t47);
    t34 = (!(t48));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB8;

LAB9:    goto LAB2;

LAB6:    t36 = *((unsigned int *)t19);
    t37 = (t36 + 0);
    t38 = *((unsigned int *)t17);
    t39 = *((unsigned int *)t18);
    t40 = (t38 - t39);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t16, t4, t37, *((unsigned int *)t18), t41);
    goto LAB7;

LAB8:    t49 = *((unsigned int *)t44);
    t37 = (t49 + 0);
    t50 = *((unsigned int *)t42);
    t51 = *((unsigned int *)t43);
    t40 = (t50 - t51);
    t41 = (t40 + 1);
    xsi_vlogvar_assign_value(t20, t6, t37, *((unsigned int *)t43), t41);
    goto LAB9;

}

static void Cont_75_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 67);
    xsi_driver_vfirst_trans(t5, 0, 66);
    t10 = (t0 + 8088);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_76_2(char *t0)
{
    char t3[24];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 6760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4144U);
    t4 = *((char **)t2);
    xsi_vlog_get_part_select_value(t3, 67, t4, 334, 268);
    t2 = (t0 + 8312);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_bit_copy(t8, 0, t3, 0, 67);
    xsi_driver_vfirst_trans(t2, 0, 66);
    t9 = (t0 + 8104);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Always_112_3(char *t0)
{
    char t4[24];
    char t7[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    int t26;

LAB0:    t1 = (t0 + 7008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 8120);
    *((int *)t2) = 1;
    t3 = (t0 + 7040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(112, ng0);

LAB5:    xsi_set_current_line(113, ng0);
    t5 = (t0 + 4144U);
    t6 = *((char **)t5);
    xsi_vlog_get_part_select_value(t4, 67, t6, 66, 0);
    t5 = (t0 + 5344);
    t9 = (t0 + 5344);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 5344);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t11, t14, 2, 1, t15, 32, 1);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t8 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4144U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t4, 67, t3, 133, 67);
    t2 = (t0 + 5344);
    t5 = (t0 + 5344);
    t6 = (t5 + 72U);
    t9 = *((char **)t6);
    t10 = (t0 + 5344);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t7 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (!(t17));
    t15 = (t8 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4144U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t4, 67, t3, 200, 134);
    t2 = (t0 + 5344);
    t5 = (t0 + 5344);
    t6 = (t5 + 72U);
    t9 = *((char **)t6);
    t10 = (t0 + 5344);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t7 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (!(t17));
    t15 = (t8 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4144U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t4, 67, t3, 267, 201);
    t2 = (t0 + 5344);
    t5 = (t0 + 5344);
    t6 = (t5 + 72U);
    t9 = *((char **)t6);
    t10 = (t0 + 5344);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t7 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (!(t17));
    t15 = (t8 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4144U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t4, 67, t3, 334, 268);
    t2 = (t0 + 5344);
    t5 = (t0 + 5344);
    t6 = (t5 + 72U);
    t9 = *((char **)t6);
    t10 = (t0 + 5344);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t7 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (!(t17));
    t15 = (t8 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB14;

LAB15:    goto LAB2;

LAB6:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t8), t26);
    goto LAB7;

LAB8:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t2, t4, 0, *((unsigned int *)t8), t26);
    goto LAB9;

LAB10:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t2, t4, 0, *((unsigned int *)t8), t26);
    goto LAB11;

LAB12:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t2, t4, 0, *((unsigned int *)t8), t26);
    goto LAB13;

LAB14:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_assign_value(t2, t4, 0, *((unsigned int *)t8), t26);
    goto LAB15;

}

static void Always_121_4(char *t0)
{
    char t7[8];
    char t13[16];
    char t15[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 7256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 8136);
    *((int *)t2) = 1;
    t3 = (t0 + 7288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(121, ng0);

LAB5:    xsi_set_current_line(123, ng0);
    t4 = (t0 + 880);
    t5 = *((char **)t4);
    t4 = (t0 + 1560);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t5, 32, t6, 32);
    t4 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3824U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t13, 44, t3, 43, 0);
    t2 = (t0 + 4864);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 44);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(124, ng0);
    t14 = ((char*)((ng1)));
    t16 = (t0 + 3824U);
    t17 = *((char **)t16);
    xsi_vlog_get_part_select_value(t15, 44, t17, 43, 0);
    xsi_vlogtype_concat(t13, 44, 44, 2U, t15, 44, t14, 0);
    t16 = (t0 + 4864);
    xsi_vlogvar_assign_value(t16, t13, 0, 0, 44);
    goto LAB8;

}

static void Always_131_5(char *t0)
{
    char t7[8];
    char t13[8];
    char t14[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 7504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 8152);
    *((int *)t2) = 1;
    t3 = (t0 + 7536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(131, ng0);

LAB5:    xsi_set_current_line(132, ng0);
    t4 = (t0 + 744);
    t5 = *((char **)t4);
    t4 = (t0 + 1424);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t5, 32, t6, 32);
    t4 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(134, ng0);

LAB9:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t3, 32, t2, 32);
    t4 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3824U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 8);
    t5 = (t3 + 12);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 12);
    *((unsigned int *)t13) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 12);
    *((unsigned int *)t2) = t11;
    t6 = (t3 + 16);
    t15 = (t3 + 20);
    t12 = *((unsigned int *)t6);
    t19 = (t12 << 20);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t19);
    t21 = *((unsigned int *)t15);
    t22 = (t21 << 20);
    t25 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t25 | t22);
    t26 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t26 & 4194303U);
    t27 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t27 & 4194303U);
    t16 = (t0 + 3824U);
    t17 = *((char **)t16);
    memset(t14, 0, 8);
    t16 = (t14 + 4);
    t18 = (t17 + 16);
    t23 = (t17 + 20);
    t28 = *((unsigned int *)t18);
    t29 = (t28 >> 2);
    t30 = (t29 & 1);
    *((unsigned int *)t14) = t30;
    t31 = *((unsigned int *)t23);
    t32 = (t31 >> 2);
    t40 = (t32 & 1);
    *((unsigned int *)t16) = t40;
    xsi_vlogtype_concat(t7, 23, 23, 2U, t14, 1, t13, 22);
    t24 = (t0 + 4704);
    xsi_vlogvar_assign_value(t24, t7, 0, 0, 23);

LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(133, ng0);
    t15 = (t0 + 3824U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 8);
    t18 = (t16 + 12);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 12);
    *((unsigned int *)t14) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 12);
    *((unsigned int *)t15) = t22;
    t23 = (t16 + 16);
    t24 = (t16 + 20);
    t25 = *((unsigned int *)t23);
    t26 = (t25 << 20);
    t27 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t27 | t26);
    t28 = *((unsigned int *)t24);
    t29 = (t28 << 20);
    t30 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t30 | t29);
    t31 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t31 & 8388607U);
    t32 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t32 & 8388607U);
    t34 = ((char*)((ng3)));
    t35 = (t0 + 3824U);
    t36 = *((char **)t35);
    memset(t37, 0, 8);
    t35 = (t37 + 4);
    t38 = (t36 + 16);
    t39 = (t36 + 20);
    t40 = *((unsigned int *)t38);
    t41 = (t40 >> 2);
    t42 = (t41 & 1);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 >> 2);
    t45 = (t44 & 1);
    *((unsigned int *)t35) = t45;
    xsi_vlog_mul_concat(t33, 0, 1, t34, 1U, t37, 1);
    xsi_vlogtype_concat(t13, 23, 23, 2U, t33, 0, t14, 23);
    t46 = (t0 + 4704);
    xsi_vlogvar_assign_value(t46, t13, 0, 0, 23);
    goto LAB8;

LAB10:    xsi_set_current_line(136, ng0);
    t5 = (t0 + 3824U);
    t6 = *((char **)t5);
    t5 = (t0 + 3784U);
    t15 = (t5 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t13, 23, t6, t16, 2, t17, 32, 1);
    t18 = (t0 + 4704);
    xsi_vlogvar_assign_value(t18, t13, 0, 0, 23);
    goto LAB12;

}

static void Always_144_6(char *t0)
{
    char t4[8];
    char t21[24];
    char t22[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t23;

LAB0:    t1 = (t0 + 7752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 8168);
    *((int *)t2) = 1;
    t3 = (t0 + 7784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(145, ng0);
    t5 = (t0 + 2864U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 4864);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlog_get_part_select_value(t22, 44, t5, 43, 0);
    t6 = (t0 + 4704);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t19 = (t4 + 4);
    t20 = (t13 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t20);
    t10 = (t9 >> 0);
    *((unsigned int *)t19) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 8388607U);
    t14 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t14 & 8388607U);
    xsi_vlogtype_concat(t21, 67, 67, 2U, t4, 23, t22, 44);
    t23 = (t0 + 4544);
    xsi_vlogvar_wait_assign_value(t23, t21, 0, 0, 67, 0LL);

LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(145, ng0);
    t19 = ((char*)((ng11)));
    t20 = (t0 + 4544);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 67, 0LL);
    goto LAB11;

}


extern void work_m_00000000000806833633_1109121919_init()
{
	static char *pe[] = {(void *)Always_68_0,(void *)Cont_75_1,(void *)Cont_76_2,(void *)Always_112_3,(void *)Always_121_4,(void *)Always_131_5,(void *)Always_144_6};
	xsi_register_didat("work_m_00000000000806833633_1109121919", "isim/IIR_tb_isim_beh.exe.sim/work/m_00000000000806833633_1109121919.didat");
	xsi_register_executes(pe);
}
