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
static const char *ng0 = "D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW5/FIR_N_small.v";
static const char *ng1 = "Coef.txt";
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};



static void Initial_29_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 5056);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_37_1(char *t0)
{
    char t4[8];
    char t31[8];
    char t32[8];
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
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;
    char *t41;
    int t42;
    int t43;
    int t44;
    int t45;

LAB0:    t1 = (t0 + 7984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 10040);
    *((int *)t2) = 1;
    t3 = (t0 + 8016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t5 = (t0 + 1776U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(38, ng0);

LAB15:    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 5376);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 32);

LAB16:    t2 = (t0 + 5376);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 472);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t12, 32);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB14;

LAB17:    xsi_set_current_line(39, ng0);

LAB19:    xsi_set_current_line(40, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 5216);
    t23 = (t0 + 5216);
    t29 = (t23 + 72U);
    t30 = *((char **)t29);
    t33 = (t0 + 5216);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 5376);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_convert_array_indices(t31, t32, t30, t35, 2, 1, t38, 32, 1);
    t39 = (t31 + 4);
    t15 = *((unsigned int *)t39);
    t40 = (!(t15));
    t41 = (t32 + 4);
    t16 = *((unsigned int *)t41);
    t42 = (!(t16));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 5376);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 5376);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB16;

LAB20:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t32);
    t44 = (t17 - t18);
    t45 = (t44 + 1);
    xsi_vlogvar_assign_value(t14, t13, 0, *((unsigned int *)t32), t45);
    goto LAB21;

}

static void Always_51_2(char *t0)
{
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 8232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 10056);
    *((int *)t2) = 1;
    t3 = (t0 + 8264);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 6016);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_minus(t9, 32, t8, 32, t7, 32);
    memset(t10, 0, 8);
    xsi_vlog_signed_equal(t10, 32, t6, 32, t9, 32);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(55, ng0);

LAB10:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 6016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t4, 32, t5, 32);
    t6 = (t0 + 6016);
    xsi_vlogvar_wait_assign_value(t6, t9, 0, 0, 32, 0LL);

LAB8:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5856);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_minus(t9, 32, t6, 32, t5, 32);
    memset(t10, 0, 8);
    xsi_vlog_signed_equal(t10, 32, t4, 32, t9, 32);
    t7 = (t10 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(61, ng0);

LAB15:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB13:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 6016);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5856);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB2;

LAB6:    xsi_set_current_line(53, ng0);

LAB9:    xsi_set_current_line(54, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 6016);
    xsi_vlogvar_wait_assign_value(t18, t17, 0, 0, 32, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(59, ng0);

LAB14:    xsi_set_current_line(60, ng0);
    t8 = ((char*)((ng3)));
    t11 = (t0 + 5696);
    xsi_vlogvar_wait_assign_value(t11, t8, 0, 0, 1, 0LL);
    goto LAB13;

}

static void Always_70_3(char *t0)
{
    char t8[8];
    char t17[8];
    char t18[8];
    char t38[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    char *t37;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    t1 = (t0 + 8480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 10072);
    *((int *)t2) = 1;
    t3 = (t0 + 8512);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 6176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 5696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB12;

LAB13:
LAB14:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(72, ng0);

LAB9:    xsi_set_current_line(73, ng0);
    t15 = (t0 + 1456U);
    t16 = *((char **)t15);
    t15 = (t0 + 5216);
    t19 = (t0 + 5216);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 5216);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 2, 1, t25, 32, 1);
    t26 = (t17 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 6176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 6176);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB8;

LAB10:    t33 = *((unsigned int *)t17);
    t34 = *((unsigned int *)t18);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t15, t16, 0, *((unsigned int *)t18), t36);
    goto LAB11;

LAB12:    xsi_set_current_line(75, ng0);

LAB15:    xsi_set_current_line(76, ng0);
    xsi_set_current_line(76, ng0);
    t6 = (t0 + 472);
    t7 = *((char **)t6);
    t6 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t7, 32, t6, 32);
    t9 = (t0 + 6336);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);

LAB16:    t2 = (t0 + 6336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greatereq(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    t2 = (t0 + 5216);
    t4 = (t0 + 5216);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 5216);
    t9 = (t7 + 64U);
    t15 = *((char **)t9);
    t16 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t8, t17, t6, t15, 2, 1, t16, 32, 1);
    t19 = (t8 + 4);
    t10 = *((unsigned int *)t19);
    t28 = (!(t10));
    t20 = (t17 + 4);
    t11 = *((unsigned int *)t20);
    t31 = (!(t11));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 6176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 6176);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3696U);
    t3 = *((char **)t2);
    t2 = (t0 + 4256);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);
    goto LAB14;

LAB17:    xsi_set_current_line(76, ng0);

LAB19:    xsi_set_current_line(77, ng0);
    t7 = (t0 + 5216);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    t16 = (t0 + 5216);
    t19 = (t16 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 5216);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 6336);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t29 = ((char*)((ng3)));
    memset(t18, 0, 8);
    xsi_vlog_signed_minus(t18, 32, t26, 32, t29, 32);
    xsi_vlog_generic_get_array_select_value(t17, 16, t15, t20, t23, 2, 1, t18, 32, 1);
    t37 = (t0 + 5216);
    t40 = (t0 + 5216);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 5216);
    t44 = (t43 + 64U);
    t45 = *((char **)t44);
    t46 = (t0 + 6336);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    xsi_vlog_generic_convert_array_indices(t38, t39, t42, t45, 2, 1, t48, 32, 1);
    t49 = (t38 + 4);
    t27 = *((unsigned int *)t49);
    t28 = (!(t27));
    t50 = (t39 + 4);
    t30 = *((unsigned int *)t50);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 6336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 6336);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB16;

LAB20:    t33 = *((unsigned int *)t38);
    t34 = *((unsigned int *)t39);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t37, t17, 0, *((unsigned int *)t39), t36);
    goto LAB21;

LAB22:    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t17);
    t35 = (t12 - t13);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t17), t36);
    goto LAB23;

}

static void Always_89_4(char *t0)
{
    char t8[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
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
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 8728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 10088);
    *((int *)t2) = 1;
    t3 = (t0 + 8760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 6496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t6, 32, t5, 32);
    memset(t32, 0, 8);
    t7 = (t4 + 4);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t8);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t9);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB17;

LAB14:    if (t20 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t32) = 1;

LAB17:    t23 = (t32 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t32);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 3, t5, 32);
    t6 = (t0 + 4736);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 3, 0LL);

LAB20:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(90, ng0);

LAB13:    xsi_set_current_line(91, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 4736);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 3, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    t10 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(94, ng0);
    t24 = ((char*)((ng2)));
    t30 = (t0 + 4736);
    xsi_vlogvar_wait_assign_value(t30, t24, 0, 0, 3, 0LL);
    goto LAB20;

}

static void Always_102_5(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 8976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 10104);
    *((int *)t2) = 1;
    t3 = (t0 + 9008);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(102, ng0);

LAB5:    xsi_set_current_line(103, ng0);
    t4 = (t0 + 5056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 5056);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 5056);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 4736);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_generic_get_array_select_value(t7, 16, t6, t10, t13, 2, 1, t16, 3, 2);
    t17 = (t0 + 6656);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 16);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5216);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 5216);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 4736);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t7, 16, t4, t8, t11, 2, 1, t14, 3, 2);
    t15 = (t0 + 6816);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 16);
    goto LAB2;

}

static void Always_110_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 9224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 10120);
    *((int *)t2) = 1;
    t3 = (t0 + 9256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(110, ng0);
    t4 = (t0 + 3856U);
    t5 = *((char **)t4);
    t4 = (t0 + 4416);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 16);
    goto LAB2;

}

static void Always_115_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 9472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 10136);
    *((int *)t2) = 1;
    t3 = (t0 + 9504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 3376U);
    t5 = *((char **)t4);
    t4 = (t0 + 4576);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 16);
    goto LAB2;

}

static void Always_119_8(char *t0)
{
    char t4[8];
    char t22[8];
    char t35[8];
    char t43[8];
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
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;

LAB0:    t1 = (t0 + 9720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 10152);
    *((int *)t2) = 1;
    t3 = (t0 + 9752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(119, ng0);

LAB5:    xsi_set_current_line(120, ng0);
    t5 = (t0 + 1776U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t2) != 0)
        goto LAB15;

LAB16:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t6);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB17;

LAB18:    memcpy(t43, t4, 8);

LAB19:    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t2) != 0)
        goto LAB36;

LAB37:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t6);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB38;

LAB39:    memcpy(t43, t4, 8);

LAB40:    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB52;

LAB53:
LAB54:
LAB33:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(121, ng0);
    t19 = (t0 + 1776U);
    t20 = *((char **)t19);
    t19 = (t0 + 4896);
    xsi_vlogvar_assign_value(t19, t20, 0, 0, 1);
    goto LAB12;

LAB13:    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB15:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB16;

LAB17:    t12 = (t0 + 4736);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = (t0 + 472);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t20 = (t19 + 4);
    t23 = (t21 + 4);
    t17 = *((unsigned int *)t19);
    t18 = *((unsigned int *)t21);
    t24 = (t17 ^ t18);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t23);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t23);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB23;

LAB20:    if (t31 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t22) = 1;

LAB23:    memset(t35, 0, 8);
    t36 = (t22 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t22);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t36) != 0)
        goto LAB26;

LAB27:    t44 = *((unsigned int *)t4);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t4 + 4);
    t48 = (t35 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB19;

LAB22:    t34 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t35) = 1;
    goto LAB27;

LAB26:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB27;

LAB28:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t4 + 4);
    t58 = (t35 + 4);
    t59 = *((unsigned int *)t4);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB30;

LAB31:    xsi_set_current_line(123, ng0);
    t81 = ((char*)((ng4)));
    t82 = (t0 + 4896);
    xsi_vlogvar_assign_value(t82, t81, 0, 0, 1);
    goto LAB33;

LAB34:    *((unsigned int *)t4) = 1;
    goto LAB37;

LAB36:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB37;

LAB38:    t12 = (t0 + 4736);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng2)));
    memset(t22, 0, 8);
    t21 = (t19 + 4);
    t23 = (t20 + 4);
    t17 = *((unsigned int *)t19);
    t18 = *((unsigned int *)t20);
    t24 = (t17 ^ t18);
    t25 = *((unsigned int *)t21);
    t26 = *((unsigned int *)t23);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t23);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB44;

LAB41:    if (t31 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t22) = 1;

LAB44:    memset(t35, 0, 8);
    t36 = (t22 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t22);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t36) != 0)
        goto LAB47;

LAB48:    t44 = *((unsigned int *)t4);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t4 + 4);
    t48 = (t35 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB40;

LAB43:    t34 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t35) = 1;
    goto LAB48;

LAB47:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB48;

LAB49:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t4 + 4);
    t58 = (t35 + 4);
    t59 = *((unsigned int *)t4);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB51;

LAB52:    xsi_set_current_line(125, ng0);
    t81 = ((char*)((ng5)));
    t82 = (t0 + 4896);
    xsi_vlogvar_assign_value(t82, t81, 0, 0, 1);
    goto LAB54;

}


extern void work_m_00000000002053178963_4116338960_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_37_1,(void *)Always_51_2,(void *)Always_70_3,(void *)Always_89_4,(void *)Always_102_5,(void *)Always_110_6,(void *)Always_115_7,(void *)Always_119_8};
	xsi_register_didat("work_m_00000000002053178963_4116338960", "isim/tb_FIR_N_small_isim_beh.exe.sim/work/m_00000000002053178963_4116338960.didat");
	xsi_register_executes(pe);
}
