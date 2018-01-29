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
static const char *ng0 = "D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/fixpoint_adder.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {82, 0};
static int ng5[] = {0, 0, 0, 0, 0, 0};



static void Always_30_0(char *t0)
{
    char t7[8];
    char t16[8];
    char t24[24];
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
    char *t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 4896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 6456);
    *((int *)t2) = 1;
    t3 = (t0 + 4928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 472);
    t5 = *((char **)t4);
    t4 = (t0 + 744);
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

LAB7:    xsi_set_current_line(41, ng0);

LAB15:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 880);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t3, 32, t4, 32);
    t2 = (t7 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(46, ng0);

LAB20:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2616U);
    t3 = *((char **)t2);
    t2 = (t0 + 3976);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 83);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2456U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 2456U);
    t13 = *((char **)t6);
    memset(t7, 0, 8);
    t6 = (t7 + 4);
    t14 = (t13 + 16);
    t15 = (t13 + 20);
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 18);
    t10 = (t9 & 1);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t15);
    t12 = (t11 >> 18);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    xsi_vlog_mul_concat(t3, 0, 1, t5, 1U, t7, 1);
    xsi_vlogtype_concat(t24, 83, 83, 3U, t3, 0, t4, 83, t2, 0);
    t22 = (t0 + 3816);
    xsi_vlogvar_assign_value(t22, t24, 0, 0, 83);

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(31, ng0);

LAB9:    xsi_set_current_line(32, ng0);
    t13 = (t0 + 608);
    t14 = *((char **)t13);
    t13 = (t0 + 880);
    t15 = *((char **)t13);
    memset(t16, 0, 8);
    xsi_vlog_signed_greatereq(t16, 32, t14, 32, t15, 32);
    t13 = (t16 + 4);
    t17 = *((unsigned int *)t13);
    t18 = (~(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(36, ng0);

LAB14:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2456U);
    t4 = *((char **)t3);
    xsi_vlogtype_concat(t24, 83, 83, 2U, t4, 83, t2, 0);
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t24, 0, 0, 83);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2616U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2616U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t13 = (t6 + 16);
    t14 = (t6 + 20);
    t8 = *((unsigned int *)t13);
    t9 = (t8 >> 18);
    t10 = (t9 & 1);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t14);
    t12 = (t11 >> 18);
    t17 = (t12 & 1);
    *((unsigned int *)t5) = t17;
    xsi_vlog_mul_concat(t2, 0, 1, t4, 1U, t7, 1);
    xsi_vlogtype_concat(t24, 83, 83, 2U, t2, 0, t3, 83);
    t15 = (t0 + 3976);
    xsi_vlogvar_assign_value(t15, t24, 0, 0, 83);

LAB12:    goto LAB8;

LAB10:    xsi_set_current_line(32, ng0);

LAB13:    xsi_set_current_line(33, ng0);
    t22 = (t0 + 2456U);
    t23 = *((char **)t22);
    t22 = (t0 + 3816);
    xsi_vlogvar_assign_value(t22, t23, 0, 0, 83);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2616U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 2616U);
    t13 = *((char **)t6);
    memset(t7, 0, 8);
    t6 = (t7 + 4);
    t14 = (t13 + 16);
    t15 = (t13 + 20);
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 18);
    t10 = (t9 & 1);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t15);
    t12 = (t11 >> 18);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    xsi_vlog_mul_concat(t3, 0, 1, t5, 1U, t7, 1);
    xsi_vlogtype_concat(t24, 83, 83, 3U, t3, 0, t4, 83, t2, 0);
    t22 = (t0 + 3976);
    xsi_vlogvar_assign_value(t22, t24, 0, 0, 83);
    goto LAB12;

LAB16:    xsi_set_current_line(42, ng0);

LAB19:    xsi_set_current_line(43, ng0);
    t5 = (t0 + 2456U);
    t6 = *((char **)t5);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 2456U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t16 + 4);
    t22 = (t15 + 16);
    t23 = (t15 + 20);
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 18);
    t19 = (t18 & 1);
    *((unsigned int *)t16) = t19;
    t20 = *((unsigned int *)t23);
    t21 = (t20 >> 18);
    t25 = (t21 & 1);
    *((unsigned int *)t14) = t25;
    xsi_vlog_mul_concat(t5, 0, 1, t13, 1U, t16, 1);
    xsi_vlogtype_concat(t24, 83, 83, 2U, t5, 0, t6, 83);
    t26 = (t0 + 3816);
    xsi_vlogvar_assign_value(t26, t24, 0, 0, 83);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2616U);
    t4 = *((char **)t3);
    xsi_vlogtype_concat(t24, 83, 83, 2U, t4, 83, t2, 0);
    t3 = (t0 + 3976);
    xsi_vlogvar_assign_value(t3, t24, 0, 0, 83);
    goto LAB18;

}

static void Always_53_1(char *t0)
{
    char t10[24];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;

LAB0:    t1 = (t0 + 5144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 6472);
    *((int *)t2) = 1;
    t3 = (t0 + 5176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 3816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3976);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_signed_add(t10, 83, t6, 83, t9, 83);
    t11 = (t0 + 3336);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 83);
    goto LAB2;

}

static void Always_56_2(char *t0)
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
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 5392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 6488);
    *((int *)t2) = 1;
    t3 = (t0 + 5424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1152);
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

LAB7:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlog_get_part_select_value(t13, 55, t4, 54, 0);
    t5 = (t0 + 3656);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 55);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(58, ng0);
    t14 = ((char*)((ng1)));
    t16 = (t0 + 3336);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_get_part_select_value(t15, 55, t18, 54, 0);
    xsi_vlogtype_concat(t13, 55, 55, 2U, t15, 55, t14, 0);
    t19 = (t0 + 3656);
    xsi_vlogvar_assign_value(t19, t13, 0, 0, 55);
    goto LAB8;

}

static void Always_64_3(char *t0)
{
    char t7[8];
    char t17[8];
    char t39[8];
    char t40[8];
    char t61[8];
    char t66[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;

LAB0:    t1 = (t0 + 5640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 6504);
    *((int *)t2) = 1;
    t3 = (t0 + 5672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1016);
    t5 = *((char **)t4);
    t4 = (t0 + 1288);
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

LAB7:    xsi_set_current_line(70, ng0);

LAB22:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t3, 32, t2, 32);
    t4 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 8);
    t13 = (t4 + 12);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 23);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t13);
    t11 = (t10 >> 23);
    *((unsigned int *)t5) = t11;
    t14 = (t4 + 16);
    t15 = (t4 + 20);
    t12 = *((unsigned int *)t14);
    t20 = (t12 << 9);
    t21 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t21 | t20);
    t22 = *((unsigned int *)t15);
    t23 = (t22 << 9);
    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 | t23);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 268435455U);
    t26 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t26 & 268435455U);
    t16 = (t0 + 3336);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    memset(t39, 0, 8);
    t32 = (t39 + 4);
    t33 = (t19 + 16);
    t41 = (t19 + 20);
    t27 = *((unsigned int *)t33);
    t28 = (t27 >> 18);
    t29 = (t28 & 1);
    *((unsigned int *)t39) = t29;
    t30 = *((unsigned int *)t41);
    t31 = (t30 >> 18);
    t34 = (t31 & 1);
    *((unsigned int *)t32) = t34;
    xsi_vlogtype_concat(t7, 29, 29, 2U, t39, 1, t17, 28);
    t42 = (t0 + 3496);
    xsi_vlogvar_assign_value(t42, t7, 0, 0, 29);

LAB25:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(66, ng0);
    t13 = (t0 + 3176);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t18 = (t15 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB12;

LAB9:    if (t29 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t17) = 1;

LAB12:    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 8);
    t13 = (t4 + 12);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 23);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t13);
    t11 = (t10 >> 23);
    *((unsigned int *)t5) = t11;
    t14 = (t4 + 16);
    t15 = (t4 + 20);
    t12 = *((unsigned int *)t14);
    t20 = (t12 << 9);
    t21 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t21 | t20);
    t22 = *((unsigned int *)t15);
    t23 = (t22 << 9);
    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 | t23);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 268435455U);
    t26 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t26 & 268435455U);
    t16 = ((char*)((ng3)));
    t18 = (t0 + 3336);
    t19 = (t18 + 56U);
    t32 = *((char **)t19);
    memset(t61, 0, 8);
    t33 = (t61 + 4);
    t41 = (t32 + 16);
    t42 = (t32 + 20);
    t27 = *((unsigned int *)t41);
    t28 = (t27 >> 18);
    t29 = (t28 & 1);
    *((unsigned int *)t61) = t29;
    t30 = *((unsigned int *)t42);
    t31 = (t30 >> 18);
    t34 = (t31 & 1);
    *((unsigned int *)t33) = t34;
    memset(t40, 0, 8);
    t43 = (t61 + 4);
    t35 = *((unsigned int *)t43);
    t36 = (~(t35));
    t37 = *((unsigned int *)t61);
    t38 = (t37 & t36);
    t47 = (t38 & 1U);
    if (t47 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t43) == 0)
        goto LAB16;

LAB18:    t44 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t44) = 1;

LAB19:    t45 = (t40 + 4);
    t46 = (t61 + 4);
    t48 = *((unsigned int *)t61);
    t49 = (~(t48));
    *((unsigned int *)t40) = t49;
    *((unsigned int *)t45) = 0;
    if (*((unsigned int *)t46) != 0)
        goto LAB21;

LAB20:    t56 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t56 & 1U);
    t57 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t57 & 1U);
    xsi_vlog_mul_concat(t39, 1, 1, t16, 1U, t40, 1);
    xsi_vlogtype_concat(t7, 29, 29, 2U, t39, 1, t17, 28);
    t51 = (t0 + 3496);
    xsi_vlogvar_assign_value(t51, t7, 0, 0, 29);

LAB15:    goto LAB8;

LAB11:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(67, ng0);
    t41 = (t0 + 3336);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t40, 0, 8);
    t44 = (t40 + 4);
    t45 = (t43 + 8);
    t46 = (t43 + 12);
    t47 = *((unsigned int *)t45);
    t48 = (t47 >> 23);
    *((unsigned int *)t40) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 23);
    *((unsigned int *)t44) = t50;
    t51 = (t43 + 16);
    t52 = (t43 + 20);
    t53 = *((unsigned int *)t51);
    t54 = (t53 << 9);
    t55 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t55 | t54);
    t56 = *((unsigned int *)t52);
    t57 = (t56 << 9);
    t58 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t58 | t57);
    t59 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t59 & 268435455U);
    t60 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t60 & 268435455U);
    t62 = ((char*)((ng3)));
    t63 = (t0 + 3336);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    memset(t66, 0, 8);
    t67 = (t66 + 4);
    t68 = (t65 + 16);
    t69 = (t65 + 20);
    t70 = *((unsigned int *)t68);
    t71 = (t70 >> 18);
    t72 = (t71 & 1);
    *((unsigned int *)t66) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 >> 18);
    t75 = (t74 & 1);
    *((unsigned int *)t67) = t75;
    xsi_vlog_mul_concat(t61, 1, 1, t62, 1U, t66, 1);
    xsi_vlogtype_concat(t39, 29, 29, 2U, t61, 1, t40, 28);
    t76 = (t0 + 3496);
    xsi_vlogvar_assign_value(t76, t39, 0, 0, 29);
    goto LAB15;

LAB16:    *((unsigned int *)t40) = 1;
    goto LAB19;

LAB21:    t50 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t50 | t53);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    *((unsigned int *)t45) = (t54 | t55);
    goto LAB20;

LAB23:    xsi_set_current_line(72, ng0);
    t5 = (t0 + 3336);
    t6 = (t5 + 56U);
    t13 = *((char **)t6);
    t14 = (t0 + 3336);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t18 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t17, 29, t13, t16, 2, t18, 32, 1);
    t19 = (t0 + 3496);
    xsi_vlogvar_assign_value(t19, t17, 0, 0, 29);
    goto LAB25;

}

static void Always_81_4(char *t0)
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

LAB0:    t1 = (t0 + 5888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 6520);
    *((int *)t2) = 1;
    t3 = (t0 + 5920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(82, ng0);
    t5 = (t0 + 2296U);
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

LAB11:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3656);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlog_get_part_select_value(t22, 55, t5, 54, 0);
    t6 = (t0 + 3496);
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
    *((unsigned int *)t4) = (t11 & 536870911U);
    t14 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t14 & 536870911U);
    xsi_vlogtype_concat(t21, 84, 84, 2U, t4, 29, t22, 55);
    t23 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t23, t21, 0, 0, 84, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(83, ng0);
    t19 = ((char*)((ng5)));
    t20 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 84, 0LL);
    goto LAB12;

}

static void Always_88_5(char *t0)
{
    char t6[8];
    char t17[8];
    char t26[8];
    char t50[8];
    char t62[8];
    char t72[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;

LAB0:    t1 = (t0 + 6136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 6536);
    *((int *)t2) = 1;
    t3 = (t0 + 6168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(88, ng0);

LAB5:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 2456U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 16);
    t8 = (t5 + 20);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 18);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 18);
    t14 = (t13 & 1);
    *((unsigned int *)t4) = t14;
    t15 = (t0 + 2616U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t15 = (t17 + 4);
    t18 = (t16 + 16);
    t19 = (t16 + 20);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 18);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 18);
    t25 = (t24 & 1);
    *((unsigned int *)t15) = t25;
    memset(t26, 0, 8);
    t27 = (t6 + 4);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t17);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t27);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t28);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB9;

LAB6:    if (t38 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t26) = 1;

LAB9:    t42 = (t26 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (~(t43));
    t45 = *((unsigned int *)t26);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB8:    t41 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(90, ng0);
    t48 = (t0 + 2456U);
    t49 = *((char **)t48);
    memset(t50, 0, 8);
    t48 = (t50 + 4);
    t51 = (t49 + 16);
    t52 = (t49 + 20);
    t53 = *((unsigned int *)t51);
    t54 = (t53 >> 18);
    t55 = (t54 & 1);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 >> 18);
    t58 = (t57 & 1);
    *((unsigned int *)t48) = t58;
    t59 = (t0 + 3336);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t62, 0, 8);
    t63 = (t62 + 4);
    t64 = (t61 + 16);
    t65 = (t61 + 20);
    t66 = *((unsigned int *)t64);
    t67 = (t66 >> 18);
    t68 = (t67 & 1);
    *((unsigned int *)t62) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 >> 18);
    t71 = (t70 & 1);
    *((unsigned int *)t63) = t71;
    t73 = *((unsigned int *)t50);
    t74 = *((unsigned int *)t62);
    t75 = (t73 ^ t74);
    *((unsigned int *)t72) = t75;
    t76 = (t50 + 4);
    t77 = (t62 + 4);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t76);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB13;

LAB14:
LAB15:    t86 = (t0 + 3176);
    xsi_vlogvar_assign_value(t86, t72, 0, 0, 1);
    goto LAB12;

LAB13:    t84 = *((unsigned int *)t72);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t72) = (t84 | t85);
    goto LAB15;

}


extern void work_m_00000000003403372808_0461302705_init()
{
	static char *pe[] = {(void *)Always_30_0,(void *)Always_53_1,(void *)Always_56_2,(void *)Always_64_3,(void *)Always_81_4,(void *)Always_88_5};
	xsi_register_didat("work_m_00000000003403372808_0461302705", "isim/IIR_tb_isim_beh.exe.sim/work/m_00000000003403372808_0461302705.didat");
	xsi_register_executes(pe);
}
