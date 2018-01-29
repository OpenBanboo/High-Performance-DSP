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
static const char *ng0 = "D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/swap.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_42_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t24[8];
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
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
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
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t5 = (t0 + 1616U);
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

LAB11:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 23);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 23);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t6 = (t0 + 1936U);
    t12 = *((char **)t6);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t13 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 23);
    *((unsigned int *)t21) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 23);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t22 & 255U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 255U);
    memset(t24, 0, 8);
    t19 = (t4 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB15;

LAB14:    t20 = (t21 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t4) > *((unsigned int *)t21))
        goto LAB16;

LAB17:    t26 = (t24 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t24);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 23);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 23);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t6 = (t0 + 1936U);
    t12 = *((char **)t6);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t13 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 23);
    *((unsigned int *)t21) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 23);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t22 & 255U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 255U);
    memset(t24, 0, 8);
    t19 = (t4 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB24;

LAB23:    t20 = (t21 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB24;

LAB27:    if (*((unsigned int *)t4) < *((unsigned int *)t21))
        goto LAB25;

LAB26:    t26 = (t24 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t24);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 8388607U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 8388607U);
    t6 = (t0 + 1936U);
    t12 = *((char **)t6);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t13 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t21) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 0);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t22 & 8388607U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 8388607U);
    memset(t24, 0, 8);
    t19 = (t4 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB33;

LAB32:    t20 = (t21 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t4) > *((unsigned int *)t21))
        goto LAB34;

LAB35:    t26 = (t24 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t24);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 8388607U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 8388607U);
    t6 = (t0 + 1936U);
    t12 = *((char **)t6);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t13 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t21) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 >> 0);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t22 & 8388607U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 8388607U);
    memset(t24, 0, 8);
    t19 = (t4 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB42;

LAB41:    t20 = (t21 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB42;

LAB45:    if (*((unsigned int *)t4) < *((unsigned int *)t21))
        goto LAB43;

LAB44:    t26 = (t24 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t24);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 31);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 31);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 1936U);
    t12 = *((char **)t6);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t13 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t13);
    t22 = (t18 >> 31);
    t23 = (t22 & 1);
    *((unsigned int *)t6) = t23;
    memset(t24, 0, 8);
    t19 = (t4 + 4);
    t20 = (t21 + 4);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t21);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t19);
    t31 = *((unsigned int *)t20);
    t34 = (t30 ^ t31);
    t35 = (t29 | t34);
    t36 = *((unsigned int *)t19);
    t37 = *((unsigned int *)t20);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB53;

LAB50:    if (t38 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t24) = 1;

LAB53:    t26 = (t24 + 4);
    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(75, ng0);

LAB58:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB56:
LAB48:
LAB39:
LAB30:
LAB21:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB12;

LAB15:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB17;

LAB16:    *((unsigned int *)t24) = 1;
    goto LAB17;

LAB19:    xsi_set_current_line(48, ng0);

LAB22:    xsi_set_current_line(49, ng0);
    t32 = ((char*)((ng1)));
    t33 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB21;

LAB24:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB26;

LAB25:    *((unsigned int *)t24) = 1;
    goto LAB26;

LAB28:    xsi_set_current_line(53, ng0);

LAB31:    xsi_set_current_line(54, ng0);
    t32 = ((char*)((ng1)));
    t33 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB30;

LAB33:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB35;

LAB34:    *((unsigned int *)t24) = 1;
    goto LAB35;

LAB37:    xsi_set_current_line(59, ng0);

LAB40:    xsi_set_current_line(60, ng0);
    t32 = ((char*)((ng1)));
    t33 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB39;

LAB42:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB44;

LAB43:    *((unsigned int *)t24) = 1;
    goto LAB44;

LAB46:    xsi_set_current_line(64, ng0);

LAB49:    xsi_set_current_line(65, ng0);
    t32 = ((char*)((ng1)));
    t33 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB48;

LAB52:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(70, ng0);

LAB57:    xsi_set_current_line(71, ng0);
    t32 = ((char*)((ng2)));
    t33 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB56;

}


extern void work_m_00000000000280289211_2543652621_init()
{
	static char *pe[] = {(void *)Always_42_0};
	xsi_register_didat("work_m_00000000000280289211_2543652621", "isim/adder_float_tb_isim_beh.exe.sim/work/m_00000000000280289211_2543652621.didat");
	xsi_register_executes(pe);
}
