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
static const char *ng0 = "D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/multiplier_float.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {23, 0};



static int sp_log2(char *t1, char *t2)
{
    char t7[8];
    char t11[8];
    char t22[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;

LAB0:    t0 = 1;
    xsi_set_current_line(28, ng0);

LAB2:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 5280);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(30, ng0);

LAB3:    t3 = ((char*)((ng2)));
    t4 = (t1 + 5280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_power(t7, 32, t3, 32, t6, 32, 1);
    t8 = (t1 + 5440);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_signed_less(t11, 32, t7, 32, t10, 32);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(30, ng0);

LAB6:    xsi_set_current_line(31, ng0);
    t18 = (t1 + 5280);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t20, 32, t21, 32);
    t23 = (t1 + 5280);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 32);
    goto LAB3;

}

static void Always_44_0(char *t0)
{
    char t4[8];
    char t14[8];
    char t24[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    char *t29;

LAB0:    t1 = (t0 + 6360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 7672);
    *((int *)t2) = 1;
    t3 = (t0 + 6392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t5 = (t0 + 2480U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 23);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 23);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 255U);
    t15 = (t0 + 2640U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 23);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 23);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 255U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 255U);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 9, t4, 9, t14, 9);
    t25 = (t0 + 3680);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_minus(t28, 9, t24, 9, t27, 8);
    t29 = (t0 + 3520);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 9, 0LL);
    goto LAB2;

}

static void Always_64_1(char *t0)
{
    char t4[16];
    char t5[8];
    char t16[16];
    char t17[8];
    char t28[16];
    char t41[8];
    char t54[8];
    char t79[8];
    char t101[8];
    char t114[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t29;
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
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t115;
    int t116;

LAB0:    t1 = (t0 + 6608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 7688);
    *((int *)t2) = 1;
    t3 = (t0 + 6640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t6 = (t0 + 2480U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 8388607U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 8388607U);
    t15 = ((char*)((ng4)));
    xsi_vlogtype_concat(t4, 48, 24, 2U, t15, 1, t5, 23);
    t18 = (t0 + 2640U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 8388607U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 8388607U);
    t27 = ((char*)((ng4)));
    xsi_vlogtype_concat(t16, 48, 24, 2U, t27, 1, t17, 23);
    xsi_vlog_unsigned_multiply(t28, 48, t4, 48, t16, 48);
    t29 = (t0 + 3840);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 48);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3840);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t5, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 8);
    t15 = (t6 + 12);
    t9 = *((unsigned int *)t8);
    t10 = (t9 >> 15);
    t11 = (t10 & 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t15);
    t13 = (t12 >> 15);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t18 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t19 = (t5 + 4);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t18);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t20);
    t26 = (t24 ^ t25);
    t30 = (t23 | t26);
    t31 = *((unsigned int *)t19);
    t32 = *((unsigned int *)t20);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB9;

LAB6:    if (t33 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t17) = 1;

LAB9:    t29 = (t17 + 4);
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = *((unsigned int *)t17);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(77, ng0);

LAB21:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3520);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t5, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 255U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 255U);
    t15 = (t0 + 4160);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 9);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3840);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng3)));
    xsi_vlog_unsigned_lshift(t4, 48, t6, 48, t7, 32);
    t8 = (t0 + 4480);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 48);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t5, 0, 8);
    t8 = (t6 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t15);
    t14 = (t12 ^ t13);
    t21 = (t11 | t14);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t15);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB25;

LAB22:    if (t24 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t5) = 1;

LAB25:    t19 = (t5 + 4);
    t30 = *((unsigned int *)t19);
    t31 = (~(t30));
    t32 = *((unsigned int *)t5);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB2;

LAB8:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(69, ng0);

LAB13:    xsi_set_current_line(70, ng0);
    t42 = (t0 + 3520);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t41, 0, 8);
    t45 = (t41 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 0);
    *((unsigned int *)t41) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 0);
    *((unsigned int *)t45) = t50;
    t51 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t51 & 255U);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 & 255U);
    t53 = ((char*)((ng3)));
    memset(t54, 0, 8);
    xsi_vlog_unsigned_add(t54, 32, t41, 32, t53, 32);
    t55 = (t0 + 4160);
    xsi_vlogvar_assign_value(t55, t54, 0, 0, 9);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3840);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 4480);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 48);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t5, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 8);
    t11 = (t10 & 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 8);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    t15 = ((char*)((ng4)));
    memset(t17, 0, 8);
    t18 = (t5 + 4);
    t19 = (t15 + 4);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t15);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    t26 = (t24 ^ t25);
    t30 = (t23 | t26);
    t31 = *((unsigned int *)t18);
    t32 = *((unsigned int *)t19);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB17;

LAB14:    if (t33 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t17) = 1;

LAB17:    t27 = (t17 + 4);
    t36 = *((unsigned int *)t27);
    t37 = (~(t36));
    t38 = *((unsigned int *)t17);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB20:    goto LAB12;

LAB16:    t20 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(73, ng0);
    t29 = ((char*)((ng3)));
    t42 = (t0 + 4320);
    xsi_vlogvar_assign_value(t42, t29, 0, 0, 1);
    goto LAB20;

LAB24:    t18 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(85, ng0);

LAB29:    xsi_set_current_line(87, ng0);
    t20 = (t0 + 4480);
    t27 = (t20 + 56U);
    t29 = *((char **)t27);
    memset(t17, 0, 8);
    t42 = (t17 + 4);
    t43 = (t29 + 4);
    t35 = *((unsigned int *)t29);
    t36 = (t35 >> 23);
    t37 = (t36 & 1);
    *((unsigned int *)t17) = t37;
    t38 = *((unsigned int *)t43);
    t39 = (t38 >> 23);
    t40 = (t39 & 1);
    *((unsigned int *)t42) = t40;
    t44 = ((char*)((ng4)));
    memset(t41, 0, 8);
    t45 = (t17 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t17);
    t48 = *((unsigned int *)t44);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t56 = (t49 | t52);
    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t46);
    t59 = (t57 | t58);
    t60 = (~(t59));
    t61 = (t56 & t60);
    if (t61 != 0)
        goto LAB33;

LAB30:    if (t59 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t41) = 1;

LAB33:    t55 = (t41 + 4);
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = *((unsigned int *)t41);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(110, ng0);

LAB66:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4480);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t5, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 8);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 16777215U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 16777215U);
    t15 = (t0 + 4640);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 24);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t5, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 255U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 255U);
    t15 = (t0 + 4800);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 8);

LAB36:    goto LAB28;

LAB32:    t53 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(87, ng0);

LAB37:    xsi_set_current_line(88, ng0);
    t67 = (t0 + 4480);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    memset(t54, 0, 8);
    t70 = (t54 + 4);
    t71 = (t69 + 4);
    t72 = *((unsigned int *)t69);
    t73 = (t72 >> 0);
    *((unsigned int *)t54) = t73;
    t74 = *((unsigned int *)t71);
    t75 = (t74 >> 0);
    *((unsigned int *)t70) = t75;
    t76 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t76 & 8388607U);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t77 & 8388607U);
    t78 = ((char*)((ng1)));
    memset(t79, 0, 8);
    t80 = (t54 + 4);
    t81 = (t78 + 4);
    t82 = *((unsigned int *)t54);
    t83 = *((unsigned int *)t78);
    t84 = (t82 ^ t83);
    t85 = *((unsigned int *)t80);
    t86 = *((unsigned int *)t81);
    t87 = (t85 ^ t86);
    t88 = (t84 | t87);
    t89 = *((unsigned int *)t80);
    t90 = *((unsigned int *)t81);
    t91 = (t89 | t90);
    t92 = (~(t91));
    t93 = (t88 & t92);
    if (t93 != 0)
        goto LAB39;

LAB38:    if (t91 != 0)
        goto LAB40;

LAB41:    t95 = (t79 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t79);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(105, ng0);

LAB65:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 4480);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t5, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 8);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 16777215U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 16777215U);
    t15 = (t0 + 4640);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 24);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t5, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 255U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 255U);
    t15 = (t0 + 4800);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 8);

LAB44:    goto LAB36;

LAB39:    *((unsigned int *)t79) = 1;
    goto LAB41;

LAB40:    t94 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(88, ng0);

LAB45:    xsi_set_current_line(89, ng0);
    t102 = (t0 + 4480);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    memset(t101, 0, 8);
    t105 = (t101 + 4);
    t106 = (t104 + 4);
    t107 = *((unsigned int *)t104);
    t108 = (t107 >> 8);
    *((unsigned int *)t101) = t108;
    t109 = *((unsigned int *)t106);
    t110 = (t109 >> 8);
    *((unsigned int *)t105) = t110;
    t111 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t111 & 16777215U);
    t112 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t112 & 16777215U);
    t113 = ((char*)((ng3)));
    memset(t114, 0, 8);
    xsi_vlog_unsigned_add(t114, 32, t101, 32, t113, 32);
    t115 = (t0 + 4640);
    xsi_vlogvar_assign_value(t115, t114, 0, 0, 24);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4640);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 4480);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    memset(t5, 0, 8);
    t18 = (t5 + 4);
    t19 = (t15 + 4);
    t9 = *((unsigned int *)t15);
    t10 = (t9 >> 8);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t19);
    t12 = (t11 >> 8);
    *((unsigned int *)t18) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 16777215U);
    t14 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t14 & 16777215U);
    memset(t17, 0, 8);
    t20 = (t6 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB47;

LAB46:    t27 = (t5 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t6) < *((unsigned int *)t5))
        goto LAB48;

LAB49:    t42 = (t17 + 4);
    t21 = *((unsigned int *)t42);
    t22 = (~(t21));
    t23 = *((unsigned int *)t17);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(101, ng0);

LAB64:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    memset(t5, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 255U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 255U);
    t15 = (t0 + 4800);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 8);

LAB53:    goto LAB44;

LAB47:    t29 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB49;

LAB48:    *((unsigned int *)t17) = 1;
    goto LAB49;

LAB51:    xsi_set_current_line(91, ng0);

LAB54:    xsi_set_current_line(92, ng0);
    t43 = (t0 + 4160);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t41, 0, 8);
    t46 = (t41 + 4);
    t53 = (t45 + 4);
    t26 = *((unsigned int *)t45);
    t30 = (t26 >> 0);
    *((unsigned int *)t41) = t30;
    t31 = *((unsigned int *)t53);
    t32 = (t31 >> 0);
    *((unsigned int *)t46) = t32;
    t33 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t33 & 255U);
    t34 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t34 & 255U);
    t55 = ((char*)((ng3)));
    memset(t54, 0, 8);
    xsi_vlog_unsigned_add(t54, 32, t41, 32, t55, 32);
    t67 = (t0 + 4800);
    xsi_vlogvar_assign_value(t67, t54, 0, 0, 8);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 24);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4640);
    t6 = (t0 + 4640);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t15 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t15, 32, 1);
    t18 = (t5 + 4);
    t9 = *((unsigned int *)t18);
    t116 = (!(t9));
    if (t116 == 1)
        goto LAB55;

LAB56:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4800);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t5, 0, 8);
    t8 = (t6 + 4);
    t15 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t15);
    t14 = (t12 ^ t13);
    t21 = (t11 | t14);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t15);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB60;

LAB57:    if (t24 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t5) = 1;

LAB60:    t19 = (t5 + 4);
    t30 = *((unsigned int *)t19);
    t31 = (~(t30));
    t32 = *((unsigned int *)t5);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB63:    goto LAB53;

LAB55:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), 1);
    goto LAB56;

LAB59:    t18 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(97, ng0);
    t20 = ((char*)((ng3)));
    t27 = (t0 + 4320);
    xsi_vlogvar_assign_value(t27, t20, 0, 0, 1);
    goto LAB63;

}

static void Always_121_2(char *t0)
{
    char t6[8];
    char t21[8];
    char t30[8];
    char t38[8];
    char t66[8];
    char t82[8];
    char t90[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;

LAB0:    t1 = (t0 + 6856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 7704);
    *((int *)t2) = 1;
    t3 = (t0 + 6888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(121, ng0);

LAB5:    xsi_set_current_line(122, ng0);
    t4 = (t0 + 2800U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t38, t6, 8);

LAB12:    memset(t66, 0, 8);
    t67 = (t38 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t38);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t67) != 0)
        goto LAB22;

LAB23:    t74 = (t66 + 4);
    t75 = *((unsigned int *)t66);
    t76 = (!(t75));
    t77 = *((unsigned int *)t74);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB24;

LAB25:    memcpy(t90, t66, 8);

LAB26:    t118 = (t90 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t90);
    t122 = (t121 & t120);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB36:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 3520);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t22 = (t21 + 4);
    t23 = (t20 + 4);
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 8);
    t26 = (t25 & 1);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 >> 8);
    t29 = (t28 & 1);
    *((unsigned int *)t22) = t29;
    memset(t30, 0, 8);
    t31 = (t21 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t21);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t31) != 0)
        goto LAB15;

LAB16:    t39 = *((unsigned int *)t6);
    t40 = *((unsigned int *)t30);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = (t6 + 4);
    t43 = (t30 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t30) = 1;
    goto LAB16;

LAB15:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB16;

LAB17:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t6 + 4);
    t53 = (t30 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (~(t54));
    t56 = *((unsigned int *)t6);
    t57 = (t56 & t55);
    t58 = *((unsigned int *)t53);
    t59 = (~(t58));
    t60 = *((unsigned int *)t30);
    t61 = (t60 & t59);
    t62 = (~(t57));
    t63 = (~(t61));
    t64 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t64 & t62);
    t65 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t65 & t63);
    goto LAB19;

LAB20:    *((unsigned int *)t66) = 1;
    goto LAB23;

LAB22:    t73 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB23;

LAB24:    t79 = (t0 + 4320);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memset(t82, 0, 8);
    t83 = (t81 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t81);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t83) != 0)
        goto LAB29;

LAB30:    t91 = *((unsigned int *)t66);
    t92 = *((unsigned int *)t82);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = (t66 + 4);
    t95 = (t82 + 4);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t94);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB26;

LAB27:    *((unsigned int *)t82) = 1;
    goto LAB30;

LAB29:    t89 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB30;

LAB31:    t102 = *((unsigned int *)t90);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t90) = (t102 | t103);
    t104 = (t66 + 4);
    t105 = (t82 + 4);
    t106 = *((unsigned int *)t104);
    t107 = (~(t106));
    t108 = *((unsigned int *)t66);
    t109 = (t108 & t107);
    t110 = *((unsigned int *)t105);
    t111 = (~(t110));
    t112 = *((unsigned int *)t82);
    t113 = (t112 & t111);
    t114 = (~(t109));
    t115 = (~(t113));
    t116 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t116 & t114);
    t117 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t117 & t115);
    goto LAB33;

LAB34:    xsi_set_current_line(123, ng0);
    t124 = ((char*)((ng4)));
    t125 = (t0 + 3200);
    xsi_vlogvar_wait_assign_value(t125, t124, 0, 0, 1, 0LL);
    goto LAB36;

}

static void Always_133_3(char *t0)
{
    char t6[8];
    char t16[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;

LAB0:    t1 = (t0 + 7104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 7720);
    *((int *)t2) = 1;
    t3 = (t0 + 7136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(133, ng0);

LAB5:    xsi_set_current_line(134, ng0);
    t4 = (t0 + 2480U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 2640U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t16 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 31);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 31);
    t23 = (t22 & 1);
    *((unsigned int *)t14) = t23;
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t16);
    t27 = (t25 ^ t26);
    *((unsigned int *)t24) = t27;
    t28 = (t6 + 4);
    t29 = (t16 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB6;

LAB7:
LAB8:    t38 = (t24 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t24);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB11:    goto LAB2;

LAB6:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    goto LAB8;

LAB9:    xsi_set_current_line(135, ng0);
    t44 = ((char*)((ng4)));
    t45 = (t0 + 5120);
    xsi_vlogvar_assign_value(t45, t44, 0, 0, 1);
    goto LAB11;

}

static void Always_143_4(char *t0)
{
    char t4[8];
    char t21[8];
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
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 7352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 7736);
    *((int *)t2) = 1;
    t3 = (t0 + 7384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(143, ng0);

LAB5:    xsi_set_current_line(144, ng0);
    t5 = (t0 + 2320U);
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

LAB11:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4640);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t11 & 8388607U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 8388607U);
    t13 = (t0 + 4800);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t22 = (t0 + 5120);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlogtype_concat(t4, 32, 32, 3U, t24, 1, t20, 8, t21, 23);
    t25 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t25, t4, 0, 0, 32, 0LL);

LAB15:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(145, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    goto LAB12;

LAB13:    xsi_set_current_line(146, ng0);

LAB16:    xsi_set_current_line(147, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 3360);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 32, 0LL);
    goto LAB15;

}


extern void work_m_00000000002923713138_2466250864_init()
{
	static char *pe[] = {(void *)Always_44_0,(void *)Always_64_1,(void *)Always_121_2,(void *)Always_133_3,(void *)Always_143_4};
	static char *se[] = {(void *)sp_log2};
	xsi_register_didat("work_m_00000000002923713138_2466250864", "isim/multiplier_float_tb_isim_beh.exe.sim/work/m_00000000002923713138_2466250864.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
