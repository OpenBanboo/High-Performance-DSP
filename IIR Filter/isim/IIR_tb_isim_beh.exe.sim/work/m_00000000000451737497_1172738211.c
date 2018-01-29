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
static const char *ng0 = "D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/IIR_tb.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {1, 0, 0, 0};
static const char *ng6 = "fpTestdata_IIR.txt";
static const char *ng7 = "coef_a_s1.txt";
static const char *ng8 = "coef_b_s1.txt";
static const char *ng9 = "coef_a_s2.txt";
static const char *ng10 = "coef_b_s2.txt";
static const char *ng11 = "coef_a_s3.txt";
static const char *ng12 = "coef_b_s3.txt";
static const char *ng13 = "coef_a_s4.txt";
static const char *ng14 = "coef_b_s4.txt";
static const char *ng15 = "scale_fac.txt";
static const char *ng16 = "coefficients of the 1st sos";
static const char *ng17 = "a0: %f";
static int ng18[] = {5, 0};
static int ng19[] = {11, 0};
static const char *ng20 = "a1: %f";
static const char *ng21 = "a2: %f";
static int ng22[] = {2, 0};
static const char *ng23 = "b0: %f";
static const char *ng24 = "b1: %f";
static const char *ng25 = "b2: %f";
static const char *ng26 = "coefficients of the 2nd sos";
static const char *ng27 = "coefficients of the 3rd sos";
static const char *ng28 = "coefficients of the 4th sos";
static const char *ng29 = "scale1: %f";
static const char *ng30 = "scale2: %f";
static const char *ng31 = "scale3: %f";
static const char *ng32 = "scale4: %f";
static int ng33[] = {3, 0};
static int ng34[] = {50, 0};
static int ng35[] = {23, 0};
static int ng36[] = {44, 0};
static int ng37[] = {4, 0};



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
    xsi_set_current_line(85, ng0);

LAB2:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng1)));
    t4 = xsi_vlog_convert_to_real(t3, 32, 1);
    t5 = (t1 + 5536);
    xsi_vlogvar_assign_value_double(t5, t4, 0);
    xsi_set_current_line(87, ng0);
    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t1 + 5376);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 5376);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5056);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 5216);
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

LAB5:    xsi_set_current_line(92, ng0);
    t3 = (t1 + 5536);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t4 = *((double *)t6);
    t7 = (t1 + 4896);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t1 + 4896);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t14 = (t1 + 5056);
    t17 = (t14 + 56U);
    t23 = *((char **)t17);
    t24 = (t1 + 5216);
    t25 = (t24 + 56U);
    t27 = *((char **)t25);
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t23, 32, t27, 32);
    t28 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t13, 32, t28, 32);
    xsi_vlog_generic_get_index_select_value(t65, 64, t9, t12, 2, t15, 32, 1);
    t66 = xsi_vlog_convert_to_real(t65, 1, 2);
    t29 = (t1 + 5056);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng5)));
    xsi_vlog_signed_minus(t70, 64, t31, 32, t32, 32);
    t67 = xsi_vlog_convert_to_real(t70, 32, 1);
    t68 = xsi_vlog_double_power(2.0000000000000000, t67);
    t71 = (t66 * t68);
    t72 = (t4 - t71);
    t33 = (t1 + 4736);
    xsi_vlogvar_assign_value_double(t33, t72, 0);
    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(87, ng0);

LAB6:    xsi_set_current_line(88, ng0);
    t23 = (t1 + 4896);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t27 = (t1 + 4896);
    t28 = (t27 + 72U);
    t29 = *((char **)t28);
    t30 = (t1 + 5376);
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
LAB13:    xsi_set_current_line(87, ng0);
    t3 = (t1 + 5376);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t6, 32, t7, 32);
    t8 = (t1 + 5376);
    xsi_vlogvar_assign_value(t8, t13, 0, 0, 32);
    goto LAB3;

LAB9:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(88, ng0);

LAB14:    xsi_set_current_line(89, ng0);
    t56 = (t1 + 5536);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t4 = *((double *)t58);
    t59 = (t1 + 5376);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t1 + 5216);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    xsi_vlog_signed_minus(t65, 64, t61, 32, t64, 32);
    t66 = xsi_vlog_convert_to_real(t65, 32, 1);
    t67 = xsi_vlog_double_power(2.0000000000000000, t66);
    t68 = (t4 + t67);
    t69 = (t1 + 5536);
    xsi_vlogvar_assign_value_double(t69, t68, 0);
    goto LAB13;

}

static void Initial_99_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(99, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2816);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_100_1(char *t0)
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

LAB0:    t1 = (t0 + 6704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 6512);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 2816);
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
    t24 = (t0 + 2816);
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

static void Initial_107_2(char *t0)
{
    char t6[512];
    char t40[8];
    char t46[8];
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    double t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;

LAB0:    t1 = (t0 + 6952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);

LAB4:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3616);
    xsi_vlogfile_readmemb(ng6, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 11572);
    t3 = *((char **)t2);
    xsi_vlogfile_readmemb(ng7, 0, ((char*)(t3)), 0, 0, 0, 0);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 11620);
    t3 = *((char **)t2);
    xsi_vlogfile_readmemb(ng8, 0, ((char*)(t3)), 0, 0, 0, 0);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 11668);
    t3 = *((char **)t2);
    xsi_vlogfile_readmemb(ng9, 0, ((char*)(t3)), 0, 0, 0, 0);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 11716);
    t3 = *((char **)t2);
    xsi_vlogfile_readmemb(ng10, 0, ((char*)(t3)), 0, 0, 0, 0);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 11764);
    t3 = *((char **)t2);
    xsi_vlogfile_readmemb(ng11, 0, ((char*)(t3)), 0, 0, 0, 0);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 11812);
    t3 = *((char **)t2);
    xsi_vlogfile_readmemb(ng12, 0, ((char*)(t3)), 0, 0, 0, 0);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 11860);
    t3 = *((char **)t2);
    xsi_vlogfile_readmemb(ng13, 0, ((char*)(t3)), 0, 0, 0, 0);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 11908);
    t3 = *((char **)t2);
    xsi_vlogfile_readmemb(ng14, 0, ((char*)(t3)), 0, 0, 0, 0);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 11940);
    t3 = *((char **)t2);
    xsi_vlogfile_readmemb(ng15, 0, ((char*)(t3)), 0, 0, 0, 0);
    xsi_set_current_line(124, ng0);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 11988);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 12036);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 12084);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB5:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB7;

LAB6:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng17, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 12132);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 12180);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 12228);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB8:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB10;

LAB9:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 12276);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 12324);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 12372);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng22)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB11:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB13;

LAB12:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 12420);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 12468);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 12516);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB14:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB16;

LAB15:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 12564);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 12612);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 12660);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB17:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB19;

LAB18:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng24, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 12708);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 12756);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 12804);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng22)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB20:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB22;

LAB21:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng25, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(133, ng0);
    xsi_vlogfile_write(1, 0, 0, ng26, 1, t0);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 12852);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 12900);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 12948);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB23:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB25;

LAB24:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng17, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 12996);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 13044);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 13092);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB26:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB28;

LAB27:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 13140);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 13188);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 13236);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng22)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB29:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB31;

LAB30:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 13284);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 13332);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 13380);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB32:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB34;

LAB33:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 13428);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 13476);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 13524);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB35:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB37;

LAB36:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng24, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 13572);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 13620);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 13668);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng22)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB38:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB40;

LAB39:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng25, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(142, ng0);
    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 13716);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 13764);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 13812);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB41:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB43;

LAB42:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng17, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 13860);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 13908);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 13956);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB44:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB46;

LAB45:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 14004);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 14052);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 14100);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng22)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB47:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB49;

LAB48:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 14148);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 14196);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 14244);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB50:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB52;

LAB51:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 14292);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 14340);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 14388);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB53:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB55;

LAB54:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng24, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 14436);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 14484);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 14532);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng22)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB56:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB58;

LAB57:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng25, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(151, ng0);
    xsi_vlogfile_write(1, 0, 0, ng28, 1, t0);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 14580);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 14628);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 14676);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB59:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB61;

LAB60:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng17, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 14724);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 14772);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 14820);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB62:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB64;

LAB63:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 14868);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 14916);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 14964);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng22)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB65:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB67;

LAB66:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 15012);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 15060);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 15108);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB68:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB70;

LAB69:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng23, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 15156);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 15204);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 15252);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB71:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB73;

LAB72:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng24, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 15300);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 15348);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 15396);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng22)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 1, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB74:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB76;

LAB75:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng25, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 15428);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 15460);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 15492);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 2, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB77:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB79;

LAB78:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng29, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 15524);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 15556);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 15588);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 2, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB80:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB82;

LAB81:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng30, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 15620);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 15652);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 15684);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng22)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 2, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB83:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB85;

LAB84:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng31, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 15716);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 15748);
    t8 = *((char **)t7);
    t9 = ((((char*)(t8))) + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 15780);
    t12 = *((char **)t11);
    t13 = ((((char*)(t12))) + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng33)));
    xsi_vlog_generic_get_array_select_value(t6, 2048, t5, t10, t14, 2, 1, t15, 32, 1);
    t16 = ((char*)((ng18)));
    t17 = ((char*)((ng19)));
    t18 = (t0 + 6760);
    t19 = (t0 + 984);
    t20 = xsi_create_subprogram_invocation(t18, 0, t0, t19, 0, 0);
    t21 = (t0 + 4896);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 2048);
    t22 = (t0 + 5056);
    xsi_vlogvar_assign_value(t22, t16, 0, 0, 32);
    t23 = (t0 + 5216);
    xsi_vlogvar_assign_value(t23, t17, 0, 0, 32);

LAB86:    t24 = (t0 + 6856);
    t25 = *((char **)t24);
    t26 = (t25 + 80U);
    t27 = *((char **)t26);
    t28 = (t27 + 272U);
    t29 = *((char **)t28);
    t30 = (t29 + 0U);
    t31 = *((char **)t30);
    t32 = ((int  (*)(char *, char *))t31)(t0, t25);
    if (t32 != 0)
        goto LAB88;

LAB87:    t25 = (t0 + 6856);
    t33 = *((char **)t25);
    t25 = (t0 + 4736);
    t34 = (t25 + 56U);
    t35 = *((char **)t34);
    t36 = *((double *)t35);
    t37 = (t0 + 984);
    t38 = (t0 + 6760);
    t39 = 0;
    xsi_delete_subprogram_invocation(t37, t33, t0, t38, t39);
    *((double *)t40) = t36;
    xsi_vlogfile_write(1, 0, 0, ng32, 2, t0, (char)114, t40, 64);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 9008);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB89;

LAB1:    return;
LAB7:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB5;
    goto LAB1;

LAB10:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB8;
    goto LAB1;

LAB13:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB11;
    goto LAB1;

LAB16:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB14;
    goto LAB1;

LAB19:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB17;
    goto LAB1;

LAB22:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB20;
    goto LAB1;

LAB25:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB23;
    goto LAB1;

LAB28:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB26;
    goto LAB1;

LAB31:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB29;
    goto LAB1;

LAB34:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB32;
    goto LAB1;

LAB37:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB35;
    goto LAB1;

LAB40:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB38;
    goto LAB1;

LAB43:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB41;
    goto LAB1;

LAB46:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB44;
    goto LAB1;

LAB49:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB47;
    goto LAB1;

LAB52:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB50;
    goto LAB1;

LAB55:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB53;
    goto LAB1;

LAB58:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB56;
    goto LAB1;

LAB61:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB59;
    goto LAB1;

LAB64:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB62;
    goto LAB1;

LAB67:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB65;
    goto LAB1;

LAB70:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB68;
    goto LAB1;

LAB73:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB71;
    goto LAB1;

LAB76:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB74;
    goto LAB1;

LAB79:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB77;
    goto LAB1;

LAB82:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB80;
    goto LAB1;

LAB85:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB83;
    goto LAB1;

LAB88:    t24 = (t0 + 6952U);
    *((char **)t24) = &&LAB86;
    goto LAB1;

LAB89:    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(170, ng0);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3776);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB90:    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng34)));
    memset(t40, 0, 8);
    xsi_vlog_signed_leq(t40, 32, t4, 32, t5, 32);
    t7 = (t40 + 4);
    t41 = *((unsigned int *)t7);
    t42 = (~(t41));
    t43 = *((unsigned int *)t40);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB91;

LAB92:    goto LAB1;

LAB91:    xsi_set_current_line(170, ng0);

LAB93:    xsi_set_current_line(171, ng0);
    t8 = (t0 + 3616);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 3616);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 3616);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = (t0 + 3776);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t46, 16, t10, t13, t16, 2, 1, t19, 32, 1);
    t20 = (t0 + 2656);
    xsi_vlogvar_assign_value(t20, t46, 0, 0, 16);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 9024);
    *((int *)t2) = 1;
    t3 = (t0 + 6984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB94;
    goto LAB1;

LAB94:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng34)));
    memset(t40, 0, 8);
    xsi_vlog_signed_equal(t40, 32, t4, 32, t5, 32);
    t7 = (t40 + 4);
    t41 = *((unsigned int *)t7);
    t42 = (~(t41));
    t43 = *((unsigned int *)t40);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB95;

LAB96:
LAB97:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t40, 0, 8);
    xsi_vlog_signed_add(t40, 32, t4, 32, t5, 32);
    t7 = (t0 + 3776);
    xsi_vlogvar_assign_value(t7, t40, 0, 0, 32);
    goto LAB90;

LAB95:    xsi_set_current_line(173, ng0);
    xsi_vlog_finish(1);
    goto LAB97;

}

static void Always_182_3(char *t0)
{
    char t7[512];
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

LAB0:    t1 = (t0 + 7200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 9040);
    *((int *)t2) = 1;
    t3 = (t0 + 7232);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(182, ng0);
    t4 = (t0 + 2656);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t7, t6, 8);
    t8 = (t7 + 8);
    memset(t8, 0, 504);
    t9 = ((char*)((ng18)));
    t10 = ((char*)((ng19)));
    t11 = (t0 + 7008);
    t12 = (t0 + 984);
    t13 = xsi_create_subprogram_invocation(t11, 0, t0, t12, 0, 0);
    t14 = (t0 + 4896);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 2048);
    t15 = (t0 + 5056);
    xsi_vlogvar_assign_value(t15, t9, 0, 0, 32);
    t16 = (t0 + 5216);
    xsi_vlogvar_assign_value(t16, t10, 0, 0, 32);

LAB5:    t17 = (t0 + 7104);
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

LAB6:    t18 = (t0 + 7104);
    t26 = *((char **)t18);
    t18 = (t0 + 4736);
    t27 = (t18 + 56U);
    t28 = *((char **)t27);
    t29 = *((double *)t28);
    t30 = (t0 + 984);
    t31 = (t0 + 7008);
    t32 = 0;
    xsi_delete_subprogram_invocation(t30, t26, t0, t31, t32);
    t33 = (t0 + 3296);
    xsi_vlogvar_assign_value_double(t33, t29, 0);
    goto LAB2;

LAB7:    t17 = (t0 + 7200U);
    *((char **)t17) = &&LAB5;
    goto LAB1;

}

static void Always_185_4(char *t0)
{
    char t6[512];
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

LAB0:    t1 = (t0 + 7448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(185, ng0);
    t2 = (t0 + 9056);
    *((int *)t2) = 1;
    t3 = (t0 + 7480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(185, ng0);
    t4 = (t0 + 1616U);
    t5 = *((char **)t4);
    memcpy(t6, t5, 24);
    t4 = (t6 + 24);
    memset(t4, 0, 488);
    t7 = ((char*)((ng35)));
    t8 = ((char*)((ng36)));
    t9 = (t0 + 7256);
    t10 = (t0 + 984);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    t12 = (t0 + 4896);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 2048);
    t13 = (t0 + 5056);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 32);
    t14 = (t0 + 5216);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 32);

LAB5:    t15 = (t0 + 7352);
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

LAB6:    t16 = (t0 + 7352);
    t24 = *((char **)t16);
    t16 = (t0 + 4736);
    t25 = (t16 + 56U);
    t26 = *((char **)t25);
    t27 = *((double *)t26);
    t28 = (t0 + 984);
    t29 = (t0 + 7256);
    t30 = 0;
    xsi_delete_subprogram_invocation(t28, t24, t0, t29, t30);
    t31 = (t0 + 3456);
    xsi_vlogvar_assign_value_double(t31, t27, 0);
    goto LAB2;

LAB7:    t15 = (t0 + 7448U);
    *((char **)t15) = &&LAB5;
    goto LAB1;

}

static void Always_186_5(char *t0)
{
    char t8[512];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    char *t35;
    char *t36;
    char *t37;
    double t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    t1 = (t0 + 7696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 9072);
    *((int *)t2) = 1;
    t3 = (t0 + 7728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(186, ng0);
    t4 = (t0 + 15812);
    t5 = *((char **)t4);
    t6 = ((((char*)(t5))) + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 15844);
    t10 = *((char **)t9);
    t11 = ((((char*)(t10))) + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 15876);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t8, 2048, t7, t12, t16, 2, 1, t17, 32, 1);
    t18 = ((char*)((ng35)));
    t19 = ((char*)((ng36)));
    t20 = (t0 + 7504);
    t21 = (t0 + 984);
    t22 = xsi_create_subprogram_invocation(t20, 0, t0, t21, 0, 0);
    t23 = (t0 + 4896);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 2048);
    t24 = (t0 + 5056);
    xsi_vlogvar_assign_value(t24, t18, 0, 0, 32);
    t25 = (t0 + 5216);
    xsi_vlogvar_assign_value(t25, t19, 0, 0, 32);

LAB5:    t26 = (t0 + 7600);
    t27 = *((char **)t26);
    t28 = (t27 + 80U);
    t29 = *((char **)t28);
    t30 = (t29 + 272U);
    t31 = *((char **)t30);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t34 = ((int  (*)(char *, char *))t33)(t0, t27);
    if (t34 != 0)
        goto LAB7;

LAB6:    t27 = (t0 + 7600);
    t35 = *((char **)t27);
    t27 = (t0 + 4736);
    t36 = (t27 + 56U);
    t37 = *((char **)t36);
    t38 = *((double *)t37);
    t39 = (t0 + 984);
    t40 = (t0 + 7504);
    t41 = 0;
    xsi_delete_subprogram_invocation(t39, t35, t0, t40, t41);
    t42 = (t0 + 3936);
    xsi_vlogvar_assign_value_double(t42, t38, 0);
    goto LAB2;

LAB7:    t26 = (t0 + 7696U);
    *((char **)t26) = &&LAB5;
    goto LAB1;

}

static void Always_187_6(char *t0)
{
    char t8[512];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    char *t35;
    char *t36;
    char *t37;
    double t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    t1 = (t0 + 7944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 9088);
    *((int *)t2) = 1;
    t3 = (t0 + 7976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(187, ng0);
    t4 = (t0 + 15908);
    t5 = *((char **)t4);
    t6 = ((((char*)(t5))) + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 15940);
    t10 = *((char **)t9);
    t11 = ((((char*)(t10))) + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 15972);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t8, 2048, t7, t12, t16, 2, 1, t17, 32, 1);
    t18 = ((char*)((ng35)));
    t19 = ((char*)((ng36)));
    t20 = (t0 + 7752);
    t21 = (t0 + 984);
    t22 = xsi_create_subprogram_invocation(t20, 0, t0, t21, 0, 0);
    t23 = (t0 + 4896);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 2048);
    t24 = (t0 + 5056);
    xsi_vlogvar_assign_value(t24, t18, 0, 0, 32);
    t25 = (t0 + 5216);
    xsi_vlogvar_assign_value(t25, t19, 0, 0, 32);

LAB5:    t26 = (t0 + 7848);
    t27 = *((char **)t26);
    t28 = (t27 + 80U);
    t29 = *((char **)t28);
    t30 = (t29 + 272U);
    t31 = *((char **)t30);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t34 = ((int  (*)(char *, char *))t33)(t0, t27);
    if (t34 != 0)
        goto LAB7;

LAB6:    t27 = (t0 + 7848);
    t35 = *((char **)t27);
    t27 = (t0 + 4736);
    t36 = (t27 + 56U);
    t37 = *((char **)t36);
    t38 = *((double *)t37);
    t39 = (t0 + 984);
    t40 = (t0 + 7752);
    t41 = 0;
    xsi_delete_subprogram_invocation(t39, t35, t0, t40, t41);
    t42 = (t0 + 4096);
    xsi_vlogvar_assign_value_double(t42, t38, 0);
    goto LAB2;

LAB7:    t26 = (t0 + 7944U);
    *((char **)t26) = &&LAB5;
    goto LAB1;

}

static void Always_188_7(char *t0)
{
    char t8[512];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    char *t35;
    char *t36;
    char *t37;
    double t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    t1 = (t0 + 8192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 9104);
    *((int *)t2) = 1;
    t3 = (t0 + 8224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(188, ng0);
    t4 = (t0 + 16004);
    t5 = *((char **)t4);
    t6 = ((((char*)(t5))) + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 16036);
    t10 = *((char **)t9);
    t11 = ((((char*)(t10))) + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 16068);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng22)));
    xsi_vlog_generic_get_array_select_value(t8, 2048, t7, t12, t16, 2, 1, t17, 32, 1);
    t18 = ((char*)((ng35)));
    t19 = ((char*)((ng36)));
    t20 = (t0 + 8000);
    t21 = (t0 + 984);
    t22 = xsi_create_subprogram_invocation(t20, 0, t0, t21, 0, 0);
    t23 = (t0 + 4896);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 2048);
    t24 = (t0 + 5056);
    xsi_vlogvar_assign_value(t24, t18, 0, 0, 32);
    t25 = (t0 + 5216);
    xsi_vlogvar_assign_value(t25, t19, 0, 0, 32);

LAB5:    t26 = (t0 + 8096);
    t27 = *((char **)t26);
    t28 = (t27 + 80U);
    t29 = *((char **)t28);
    t30 = (t29 + 272U);
    t31 = *((char **)t30);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t34 = ((int  (*)(char *, char *))t33)(t0, t27);
    if (t34 != 0)
        goto LAB7;

LAB6:    t27 = (t0 + 8096);
    t35 = *((char **)t27);
    t27 = (t0 + 4736);
    t36 = (t27 + 56U);
    t37 = *((char **)t36);
    t38 = *((double *)t37);
    t39 = (t0 + 984);
    t40 = (t0 + 8000);
    t41 = 0;
    xsi_delete_subprogram_invocation(t39, t35, t0, t40, t41);
    t42 = (t0 + 4256);
    xsi_vlogvar_assign_value_double(t42, t38, 0);
    goto LAB2;

LAB7:    t26 = (t0 + 8192U);
    *((char **)t26) = &&LAB5;
    goto LAB1;

}

static void Always_189_8(char *t0)
{
    char t8[512];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    char *t35;
    char *t36;
    char *t37;
    double t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    t1 = (t0 + 8440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 9120);
    *((int *)t2) = 1;
    t3 = (t0 + 8472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(189, ng0);
    t4 = (t0 + 16100);
    t5 = *((char **)t4);
    t6 = ((((char*)(t5))) + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 16132);
    t10 = *((char **)t9);
    t11 = ((((char*)(t10))) + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 16164);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng33)));
    xsi_vlog_generic_get_array_select_value(t8, 2048, t7, t12, t16, 2, 1, t17, 32, 1);
    t18 = ((char*)((ng35)));
    t19 = ((char*)((ng36)));
    t20 = (t0 + 8248);
    t21 = (t0 + 984);
    t22 = xsi_create_subprogram_invocation(t20, 0, t0, t21, 0, 0);
    t23 = (t0 + 4896);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 2048);
    t24 = (t0 + 5056);
    xsi_vlogvar_assign_value(t24, t18, 0, 0, 32);
    t25 = (t0 + 5216);
    xsi_vlogvar_assign_value(t25, t19, 0, 0, 32);

LAB5:    t26 = (t0 + 8344);
    t27 = *((char **)t26);
    t28 = (t27 + 80U);
    t29 = *((char **)t28);
    t30 = (t29 + 272U);
    t31 = *((char **)t30);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t34 = ((int  (*)(char *, char *))t33)(t0, t27);
    if (t34 != 0)
        goto LAB7;

LAB6:    t27 = (t0 + 8344);
    t35 = *((char **)t27);
    t27 = (t0 + 4736);
    t36 = (t27 + 56U);
    t37 = *((char **)t36);
    t38 = *((double *)t37);
    t39 = (t0 + 984);
    t40 = (t0 + 8248);
    t41 = 0;
    xsi_delete_subprogram_invocation(t39, t35, t0, t40, t41);
    t42 = (t0 + 4416);
    xsi_vlogvar_assign_value_double(t42, t38, 0);
    goto LAB2;

LAB7:    t26 = (t0 + 8440U);
    *((char **)t26) = &&LAB5;
    goto LAB1;

}

static void Always_190_9(char *t0)
{
    char t8[512];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    char *t35;
    char *t36;
    char *t37;
    double t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    t1 = (t0 + 8688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 9136);
    *((int *)t2) = 1;
    t3 = (t0 + 8720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(190, ng0);
    t4 = (t0 + 16196);
    t5 = *((char **)t4);
    t6 = ((((char*)(t5))) + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 16228);
    t10 = *((char **)t9);
    t11 = ((((char*)(t10))) + 72U);
    t12 = *((char **)t11);
    t13 = (t0 + 16260);
    t14 = *((char **)t13);
    t15 = ((((char*)(t14))) + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng37)));
    xsi_vlog_generic_get_array_select_value(t8, 2048, t7, t12, t16, 2, 1, t17, 32, 1);
    t18 = ((char*)((ng35)));
    t19 = ((char*)((ng36)));
    t20 = (t0 + 8496);
    t21 = (t0 + 984);
    t22 = xsi_create_subprogram_invocation(t20, 0, t0, t21, 0, 0);
    t23 = (t0 + 4896);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 2048);
    t24 = (t0 + 5056);
    xsi_vlogvar_assign_value(t24, t18, 0, 0, 32);
    t25 = (t0 + 5216);
    xsi_vlogvar_assign_value(t25, t19, 0, 0, 32);

LAB5:    t26 = (t0 + 8592);
    t27 = *((char **)t26);
    t28 = (t27 + 80U);
    t29 = *((char **)t28);
    t30 = (t29 + 272U);
    t31 = *((char **)t30);
    t32 = (t31 + 0U);
    t33 = *((char **)t32);
    t34 = ((int  (*)(char *, char *))t33)(t0, t27);
    if (t34 != 0)
        goto LAB7;

LAB6:    t27 = (t0 + 8592);
    t35 = *((char **)t27);
    t27 = (t0 + 4736);
    t36 = (t27 + 56U);
    t37 = *((char **)t36);
    t38 = *((double *)t37);
    t39 = (t0 + 984);
    t40 = (t0 + 8496);
    t41 = 0;
    xsi_delete_subprogram_invocation(t39, t35, t0, t40, t41);
    t42 = (t0 + 4576);
    xsi_vlogvar_assign_value_double(t42, t38, 0);
    goto LAB2;

LAB7:    t26 = (t0 + 8688U);
    *((char **)t26) = &&LAB5;
    goto LAB1;

}


extern void work_m_00000000000451737497_1172738211_init()
{
	static char *pe[] = {(void *)Initial_99_0,(void *)Always_100_1,(void *)Initial_107_2,(void *)Always_182_3,(void *)Always_185_4,(void *)Always_186_5,(void *)Always_187_6,(void *)Always_188_7,(void *)Always_189_8,(void *)Always_190_9};
	static char *se[] = {(void *)sp_fixedToFloat};
	xsi_register_didat("work_m_00000000000451737497_1172738211", "isim/IIR_tb_isim_beh.exe.sim/work/m_00000000000451737497_1172738211.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
