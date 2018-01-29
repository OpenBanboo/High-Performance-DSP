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
static const char *ng0 = "D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW5/tb_FIR_N_small.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {1, 0, 0, 0};
static const char *ng6 = "fpTestdata_FIR.txt";
static unsigned int ng7[] = {10922U, 0U};
static int ng8[] = {15, 0};



static int sp_fixedToFloat(char *t1, char *t2)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t26[8];
    char t34[8];
    char t65[16];
    char t70[16];
    int t0;
    char *t3;
    double t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    double t66;
    double t67;
    double t68;
    char *t69;
    double t71;
    double t72;

LAB0:    t0 = 1;
    xsi_set_current_line(27, ng0);

LAB2:    xsi_set_current_line(28, ng0);
    t3 = ((char*)((ng1)));
    t4 = xsi_vlog_convert_to_real(t3, 32, 1);
    t5 = (t1 + 5440);
    xsi_vlogvar_assign_value_double(t5, t4, 0);
    xsi_set_current_line(29, ng0);
    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t1 + 5280);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 5280);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 5120);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t9, 32, t12, 32);
    t14 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t14, 32);
    memset(t16, 0, 8);
    xsi_vlog_signed_less(t16, 32, t6, 32, t15, 32);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t16);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(34, ng0);
    t3 = (t1 + 5440);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t4 = *((double *)t6);
    t7 = (t1 + 4800);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 4800);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t14 = (t1 + 4960);
    t17 = (t14 + 56U);
    t23 = *((char **)t17);
    t24 = (t1 + 5120);
    t25 = (t24 + 56U);
    t27 = *((char **)t25);
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t23, 32, t27, 32);
    t28 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t28, 32);
    xsi_vlog_generic_get_index_select_value(t65, 64, t9, t12, 2, t15, 32, 1);
    t66 = xsi_vlog_convert_to_real(t65, 1, 2);
    t29 = (t1 + 4960);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng5)));
    xsi_vlog_signed_minus(t70, 64, t31, 32, t32, 32);
    t67 = xsi_vlog_convert_to_real(t70, 32, 1);
    t68 = xsi_vlog_double_power(2.0000000000000000, t67);
    t71 = (t66 * t68);
    t72 = (t4 - t71);
    t33 = (t1 + 4640);
    xsi_vlogvar_assign_value_double(t33, t72, 0);
    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(29, ng0);

LAB6:    xsi_set_current_line(30, ng0);
    t23 = (t1 + 4800);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t27 = (t1 + 4800);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = (t1 + 5280);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_index_select_value(t26, 1, t25, t29, 2, t32, 32, 1);
    t33 = ((char*)((ng4)));
    memset(t34, 0, 8);
    t35 = (t26 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t26);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB10;

LAB7:    if (t46 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t34) = 1;

LAB10:    t50 = (t34 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (~(t51));
    t53 = *((unsigned int *)t34);
    t54 = (t53 & t52);
    t55 = (t54 != 0);
    if (t55 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(29, ng0);
    t3 = (t1 + 5280);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t6, 32, t7, 32);
    t8 = (t1 + 5280);
    xsi_vlogvar_assign_value(t8, t13, 0, 0, 32);
    goto LAB3;

LAB9:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(30, ng0);

LAB14:    xsi_set_current_line(31, ng0);
    t56 = (t1 + 5440);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t4 = *((double *)t58);
    t59 = (t1 + 5280);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t1 + 5120);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    xsi_vlog_signed_minus(t65, 64, t61, 32, t64, 32);
    t66 = xsi_vlog_convert_to_real(t65, 32, 1);
    t67 = xsi_vlog_double_power(2.0000000000000000, t66);
    t68 = (t4 + t67);
    t69 = (t1 + 5440);
    xsi_vlogvar_assign_value_double(t69, t68, 0);
    goto LAB13;

}

static void Initial_49_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3040);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_50_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 6608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 6416);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 3040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 3040);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_60_2(char *t0)
{
    char t7[8];
    char t16[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 6856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);

LAB4:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4160);
    xsi_vlogfile_readmemb(ng6, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 8664);
    *((int *)t2) = 1;
    t3 = (t0 + 6888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_leq(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB1;

LAB7:    xsi_set_current_line(66, ng0);

LAB9:    xsi_set_current_line(67, ng0);
    t13 = (t0 + 4160);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t0 + 4160);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 4160);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 4320);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_array_select_value(t16, 16, t15, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t0 + 2880);
    xsi_vlogvar_assign_value(t26, t16, 0, 0, 16);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 8680);
    *((int *)t2) = 1;
    t3 = (t0 + 6888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 8696);
    *((int *)t2) = 1;
    t3 = (t0 + 6888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 8712);
    *((int *)t2) = 1;
    t3 = (t0 + 6888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 4320);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

LAB13:    xsi_set_current_line(70, ng0);

LAB16:    xsi_set_current_line(71, ng0);
    t13 = (t0 + 8728);
    *((int *)t13) = 1;
    t14 = (t0 + 6888);
    *((char **)t14) = t13;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 8744);
    *((int *)t2) = 1;
    t3 = (t0 + 6888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 8760);
    *((int *)t2) = 1;
    t3 = (t0 + 6888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(72, ng0);
    xsi_vlog_finish(1);
    goto LAB15;

}

static void Initial_80_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(80, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 4480);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Always_81_4(char *t0)
{
    char t7[16];
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
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    char *t28;
    double t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 7352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 8776);
    *((int *)t2) = 1;
    t3 = (t0 + 7384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 4480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t7, t6, 8);
    t8 = (t7 + 8);
    memset(t8, 0, 8);
    t9 = ((char*)((ng3)));
    t10 = ((char*)((ng8)));
    t11 = (t0 + 7160);
    t12 = (t0 + 1528);
    t13 = xsi_create_subprogram_invocation(t11, 0, t0, t12, 0, 0);
    t14 = (t0 + 4800);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 64);
    t15 = (t0 + 4960);
    xsi_vlogvar_assign_value(t15, t9, 0, 0, 32);
    t16 = (t0 + 5120);
    xsi_vlogvar_assign_value(t16, t10, 0, 0, 32);

LAB5:    t17 = (t0 + 7256);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);
    if (t25 != 0)
        goto LAB7;

LAB6:    t18 = (t0 + 7256);
    t26 = *((char **)t18);
    t18 = (t0 + 4640);
    t27 = (t18 + 56U);
    t28 = *((char **)t27);
    t29 = *((double *)t28);
    t30 = (t0 + 1528);
    t31 = (t0 + 7160);
    t32 = 0;
    xsi_delete_subprogram_invocation(t30, t26, t0, t31, t32);
    t33 = (t0 + 4000);
    xsi_vlogvar_assign_value_double(t33, t29, 0);
    goto LAB2;

LAB7:    t17 = (t0 + 7352U);
    *((char **)t17) = &&LAB5;
    goto LAB1;

}

static void Always_82_5(char *t0)
{
    char t7[16];
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
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    char *t28;
    double t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 7600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 8792);
    *((int *)t2) = 1;
    t3 = (t0 + 7632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 2880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t7, t6, 8);
    t8 = (t7 + 8);
    memset(t8, 0, 8);
    t9 = ((char*)((ng3)));
    t10 = ((char*)((ng8)));
    t11 = (t0 + 7408);
    t12 = (t0 + 1528);
    t13 = xsi_create_subprogram_invocation(t11, 0, t0, t12, 0, 0);
    t14 = (t0 + 4800);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 64);
    t15 = (t0 + 4960);
    xsi_vlogvar_assign_value(t15, t9, 0, 0, 32);
    t16 = (t0 + 5120);
    xsi_vlogvar_assign_value(t16, t10, 0, 0, 32);

LAB5:    t17 = (t0 + 7504);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t25 = ((int  (*)(char *, char *))t24)(t0, t18);
    if (t25 != 0)
        goto LAB7;

LAB6:    t18 = (t0 + 7504);
    t26 = *((char **)t18);
    t18 = (t0 + 4640);
    t27 = (t18 + 56U);
    t28 = *((char **)t27);
    t29 = *((double *)t28);
    t30 = (t0 + 1528);
    t31 = (t0 + 7408);
    t32 = 0;
    xsi_delete_subprogram_invocation(t30, t26, t0, t31, t32);
    t33 = (t0 + 3360);
    xsi_vlogvar_assign_value_double(t33, t29, 0);
    goto LAB2;

LAB7:    t17 = (t0 + 7600U);
    *((char **)t17) = &&LAB5;
    goto LAB1;

}

static void Always_83_6(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
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
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    double t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 7848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 8808);
    *((int *)t2) = 1;
    t3 = (t0 + 7880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 2160U);
    t5 = *((char **)t4);
    memcpy(t6, t5, 8);
    t4 = (t6 + 8);
    memset(t4, 0, 8);
    t7 = ((char*)((ng3)));
    t8 = ((char*)((ng8)));
    t9 = (t0 + 7656);
    t10 = (t0 + 1528);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    t12 = (t0 + 4800);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 64);
    t13 = (t0 + 4960);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 32);
    t14 = (t0 + 5120);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 32);

LAB5:    t15 = (t0 + 7752);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);
    if (t23 != 0)
        goto LAB7;

LAB6:    t16 = (t0 + 7752);
    t24 = *((char **)t16);
    t16 = (t0 + 4640);
    t25 = (t16 + 56U);
    t26 = *((char **)t25);
    t27 = *((double *)t26);
    t28 = (t0 + 1528);
    t29 = (t0 + 7656);
    t30 = 0;
    xsi_delete_subprogram_invocation(t28, t24, t0, t29, t30);
    t31 = (t0 + 3840);
    xsi_vlogvar_assign_value_double(t31, t27, 0);
    goto LAB2;

LAB7:    t15 = (t0 + 7848U);
    *((char **)t15) = &&LAB5;
    goto LAB1;

}

static void Always_84_7(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
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
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    double t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 8096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 8824);
    *((int *)t2) = 1;
    t3 = (t0 + 8128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 2320U);
    t5 = *((char **)t4);
    memcpy(t6, t5, 8);
    t4 = (t6 + 8);
    memset(t4, 0, 8);
    t7 = ((char*)((ng3)));
    t8 = ((char*)((ng8)));
    t9 = (t0 + 7904);
    t10 = (t0 + 1528);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    t12 = (t0 + 4800);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 64);
    t13 = (t0 + 4960);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 32);
    t14 = (t0 + 5120);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 32);

LAB5:    t15 = (t0 + 8000);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);
    if (t23 != 0)
        goto LAB7;

LAB6:    t16 = (t0 + 8000);
    t24 = *((char **)t16);
    t16 = (t0 + 4640);
    t25 = (t16 + 56U);
    t26 = *((char **)t25);
    t27 = *((double *)t26);
    t28 = (t0 + 1528);
    t29 = (t0 + 7904);
    t30 = 0;
    xsi_delete_subprogram_invocation(t28, t24, t0, t29, t30);
    t31 = (t0 + 3520);
    xsi_vlogvar_assign_value_double(t31, t27, 0);
    goto LAB2;

LAB7:    t15 = (t0 + 8096U);
    *((char **)t15) = &&LAB5;
    goto LAB1;

}

static void Always_85_8(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
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
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    double t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 8344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 8840);
    *((int *)t2) = 1;
    t3 = (t0 + 8376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 2480U);
    t5 = *((char **)t4);
    memcpy(t6, t5, 8);
    t4 = (t6 + 8);
    memset(t4, 0, 8);
    t7 = ((char*)((ng3)));
    t8 = ((char*)((ng8)));
    t9 = (t0 + 8152);
    t10 = (t0 + 1528);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    t12 = (t0 + 4800);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 64);
    t13 = (t0 + 4960);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 32);
    t14 = (t0 + 5120);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 32);

LAB5:    t15 = (t0 + 8248);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);
    if (t23 != 0)
        goto LAB7;

LAB6:    t16 = (t0 + 8248);
    t24 = *((char **)t16);
    t16 = (t0 + 4640);
    t25 = (t16 + 56U);
    t26 = *((char **)t25);
    t27 = *((double *)t26);
    t28 = (t0 + 1528);
    t29 = (t0 + 8152);
    t30 = 0;
    xsi_delete_subprogram_invocation(t28, t24, t0, t29, t30);
    t31 = (t0 + 3680);
    xsi_vlogvar_assign_value_double(t31, t27, 0);
    goto LAB2;

LAB7:    t15 = (t0 + 8344U);
    *((char **)t15) = &&LAB5;
    goto LAB1;

}


extern void work_m_00000000001975258301_3462602210_init()
{
	static char *pe[] = {(void *)Initial_49_0,(void *)Always_50_1,(void *)Initial_60_2,(void *)Initial_80_3,(void *)Always_81_4,(void *)Always_82_5,(void *)Always_83_6,(void *)Always_84_7,(void *)Always_85_8};
	static char *se[] = {(void *)sp_fixedToFloat};
	xsi_register_didat("work_m_00000000001975258301_3462602210", "isim/tb_FIR_N_small_isim_beh.exe.sim/work/m_00000000001975258301_3462602210.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
