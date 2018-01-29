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
static const char *ng0 = "D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/nor_cor_tb.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {1, 0, 0, 0};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {2752U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {6896U, 0U};
static unsigned int ng10[] = {992U, 0U};
static unsigned int ng11[] = {1001U, 0U};
static unsigned int ng12[] = {1016U, 0U};
static unsigned int ng13[] = {3024U, 0U};
static unsigned int ng14[] = {3025U, 0U};
static unsigned int ng15[] = {216U, 0U};
static unsigned int ng16[] = {5056U, 0U};
static unsigned int ng17[] = {15U, 0U};



static int sp_floatToReal(char *t1, char *t2)
{
    char t10[8];
    char t20[8];
    char t28[8];
    char t59[16];
    char t64[8];
    int t0;
    char *t3;
    double t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
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
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    double t60;
    double t61;
    double t62;
    char *t63;
    double t65;

LAB0:    t0 = 1;
    xsi_set_current_line(47, ng0);

LAB2:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng1)));
    t4 = xsi_vlog_convert_to_real(t3, 32, 1);
    t5 = (t1 + 4688);
    xsi_vlogvar_assign_value_double(t5, t4, 0);
    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng1)));
    t4 = xsi_vlog_convert_to_real(t3, 32, 1);
    t5 = (t1 + 4848);
    xsi_vlogvar_assign_value_double(t5, t4, 0);
    xsi_set_current_line(51, ng0);
    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t1 + 4368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);

LAB3:    t3 = (t1 + 4368);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4208);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t9, 32);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(56, ng0);
    t3 = (t1 + 4688);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t4 = *((double *)t6);
    t7 = ((char*)((ng5)));
    t60 = xsi_vlog_convert_to_real(t7, 32, 1);
    t61 = (t4 + t60);
    t8 = (t1 + 4688);
    xsi_vlogvar_assign_value_double(t8, t61, 0);
    xsi_set_current_line(58, ng0);
    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t1 + 4528);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 32);

LAB15:    t3 = (t1 + 4528);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4048);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t6, 32, t9, 32);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(65, ng0);
    t3 = (t1 + 3888);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3888);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t1 + 4048);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    t19 = (t1 + 4208);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    memset(t20, 0, 8);
    xsi_vlog_signed_add(t20, 32, t18, 32, t22, 32);
    xsi_vlog_generic_get_index_select_value(t10, 1, t6, t9, 2, t20, 32, 1);
    t23 = ((char*)((ng3)));
    memset(t28, 0, 8);
    t24 = (t10 + 4);
    t25 = (t23 + 4);
    t12 = *((unsigned int *)t10);
    t13 = *((unsigned int *)t23);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t24);
    t16 = *((unsigned int *)t25);
    t31 = (t15 ^ t16);
    t32 = (t14 | t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB30;

LAB27:    if (t35 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t28) = 1;

LAB30:    t27 = (t28 + 4);
    t38 = *((unsigned int *)t27);
    t39 = (~(t38));
    t40 = *((unsigned int *)t28);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(66, ng0);
    t3 = (t1 + 4688);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t4 = *((double *)t6);
    t7 = (t1 + 4848);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t60 = *((double *)t9);
    t61 = xsi_vlog_double_power(2.0000000000000000, t60);
    t62 = (t4 * t61);
    t11 = (t1 + 3728);
    xsi_vlogvar_assign_value_double(t11, t62, 0);

LAB33:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(51, ng0);

LAB6:    xsi_set_current_line(52, ng0);
    t17 = (t1 + 3888);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = (t1 + 3888);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t1 + 4368);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_get_index_select_value(t20, 1, t19, t23, 2, t26, 32, 1);
    t27 = ((char*)((ng3)));
    memset(t28, 0, 8);
    t29 = (t20 + 4);
    t30 = (t27 + 4);
    t31 = *((unsigned int *)t20);
    t32 = *((unsigned int *)t27);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB10;

LAB7:    if (t40 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t28) = 1;

LAB10:    t44 = (t28 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t28);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(51, ng0);
    t3 = (t1 + 4368);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 4368);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB3;

LAB9:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(52, ng0);

LAB14:    xsi_set_current_line(53, ng0);
    t50 = (t1 + 4688);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t4 = *((double *)t52);
    t53 = (t1 + 4368);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = (t1 + 4208);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    xsi_vlog_signed_minus(t59, 64, t55, 32, t58, 32);
    t60 = xsi_vlog_convert_to_real(t59, 32, 1);
    t61 = xsi_vlog_double_power(2.0000000000000000, t60);
    t62 = (t4 + t61);
    t63 = (t1 + 4688);
    xsi_vlogvar_assign_value_double(t63, t62, 0);
    goto LAB13;

LAB16:    xsi_set_current_line(58, ng0);

LAB18:    xsi_set_current_line(59, ng0);
    t17 = (t1 + 3888);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = (t1 + 3888);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t1 + 4528);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t1 + 4208);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    memset(t28, 0, 8);
    xsi_vlog_signed_add(t28, 32, t26, 32, t30, 32);
    xsi_vlog_generic_get_index_select_value(t20, 1, t19, t23, 2, t28, 32, 1);
    t43 = ((char*)((ng3)));
    memset(t64, 0, 8);
    t44 = (t20 + 4);
    t50 = (t43 + 4);
    t31 = *((unsigned int *)t20);
    t32 = *((unsigned int *)t43);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t44);
    t35 = *((unsigned int *)t50);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t44);
    t39 = *((unsigned int *)t50);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB22;

LAB19:    if (t40 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t64) = 1;

LAB22:    t52 = (t64 + 4);
    t45 = *((unsigned int *)t52);
    t46 = (~(t45));
    t47 = *((unsigned int *)t64);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(58, ng0);
    t3 = (t1 + 4528);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 4528);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB15;

LAB21:    t51 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(59, ng0);

LAB26:    xsi_set_current_line(60, ng0);
    t53 = (t1 + 4848);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t4 = *((double *)t55);
    t56 = (t1 + 4528);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t60 = xsi_vlog_convert_to_real(t58, 32, 1);
    t61 = xsi_vlog_double_power(2.0000000000000000, t60);
    t62 = (t4 + t61);
    t63 = (t1 + 4848);
    xsi_vlogvar_assign_value_double(t63, t62, 0);
    goto LAB25;

LAB29:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(65, ng0);
    t29 = (t1 + 4688);
    t30 = (t29 + 56U);
    t43 = *((char **)t30);
    t4 = *((double *)t43);
    t60 = (-(t4));
    t44 = (t1 + 4848);
    t50 = (t44 + 56U);
    t51 = *((char **)t50);
    t61 = *((double *)t51);
    t62 = xsi_vlog_double_power(2.0000000000000000, t61);
    t65 = (t60 * t62);
    t52 = (t1 + 3728);
    xsi_vlogvar_assign_value_double(t52, t65, 0);
    goto LAB33;

}

static void Initial_95_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 5768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);

LAB4:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 5576);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5576);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5576);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 5576);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5576);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5576);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 5576);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5576);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 5576);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 5576);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(115, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_119_1(char *t0)
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

LAB0:    t1 = (t0 + 6016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 6336);
    *((int *)t2) = 1;
    t3 = (t0 + 6048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 2048U);
    t5 = *((char **)t4);
    memcpy(t6, t5, 8);
    t4 = (t6 + 8);
    memset(t4, 0, 504);
    t7 = (t0 + 744);
    t8 = *((char **)t7);
    t7 = (t0 + 608);
    t9 = *((char **)t7);
    t7 = (t0 + 5824);
    t10 = (t0 + 1256);
    t11 = xsi_create_subprogram_invocation(t7, 0, t0, t10, 0, 0);
    t12 = (t0 + 3888);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 2048);
    t13 = (t0 + 4048);
    xsi_vlogvar_assign_value(t13, t8, 0, 0, 32);
    t14 = (t0 + 4208);
    xsi_vlogvar_assign_value(t14, t9, 0, 0, 32);

LAB5:    t15 = (t0 + 5920);
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

LAB6:    t16 = (t0 + 5920);
    t24 = *((char **)t16);
    t16 = (t0 + 3728);
    t25 = (t16 + 56U);
    t26 = *((char **)t25);
    t27 = *((double *)t26);
    t28 = (t0 + 1256);
    t29 = (t0 + 5824);
    t30 = 0;
    xsi_delete_subprogram_invocation(t28, t24, t0, t29, t30);
    t31 = (t0 + 3568);
    xsi_vlogvar_assign_value_double(t31, t27, 0);
    goto LAB2;

LAB7:    t15 = (t0 + 6016U);
    *((char **)t15) = &&LAB5;
    goto LAB1;

}


extern void work_m_00000000001356516179_3137717688_init()
{
	static char *pe[] = {(void *)Initial_95_0,(void *)Always_119_1};
	static char *se[] = {(void *)sp_floatToReal};
	xsi_register_didat("work_m_00000000001356516179_3137717688", "isim/nor_cor_tb_isim_beh.exe.sim/work/m_00000000001356516179_3137717688.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
