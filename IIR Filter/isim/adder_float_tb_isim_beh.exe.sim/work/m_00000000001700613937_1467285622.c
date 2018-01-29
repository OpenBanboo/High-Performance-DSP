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
static const char *ng0 = "D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/align.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};



static void Always_44_0(char *t0)
{
    char t4[8];
    char t14[8];
    char t24[8];
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

LAB0:    t1 = (t0 + 3872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4440);
    *((int *)t2) = 1;
    t3 = (t0 + 3904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);
    t5 = (t0 + 1912U);
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
    t15 = (t0 + 2072U);
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
    xsi_vlog_unsigned_minus(t24, 8, t4, 8, t14, 8);
    t25 = (t0 + 2952);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 8);
    goto LAB2;

}

static void Always_52_1(char *t0)
{
    char t4[8];
    char t21[16];
    char t22[8];
    char t23[16];
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
    char *t24;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4456);
    *((int *)t2) = 1;
    t3 = (t0 + 4152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t5 = (t0 + 1752U);
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

LAB11:    xsi_set_current_line(57, ng0);

LAB14:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1912U);
    t5 = *((char **)t3);
    memset(t22, 0, 8);
    t3 = (t22 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t22) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t11 & 8388607U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 8388607U);
    xsi_vlogtype_concat(t4, 23, 23, 1U, t22, 23);
    t12 = ((char*)((ng4)));
    xsi_vlogtype_concat(t21, 54, 54, 3U, t12, 1, t4, 23, t2, 30);
    t13 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t13, t21, 0, 0, 54, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2072U);
    t5 = *((char **)t3);
    memset(t22, 0, 8);
    t3 = (t22 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t22) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t11 & 8388607U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 8388607U);
    xsi_vlogtype_concat(t4, 23, 23, 1U, t22, 23);
    t12 = ((char*)((ng4)));
    xsi_vlogtype_concat(t21, 54, 54, 3U, t12, 1, t4, 23, t2, 30);
    t13 = (t0 + 2952);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_unsigned_rshift(t23, 54, t21, 54, t20, 8);
    t24 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 54, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1912U);
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
    t6 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 8, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(53, ng0);

LAB13:    xsi_set_current_line(54, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 54, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 54, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB12;

}


extern void work_m_00000000001700613937_1467285622_init()
{
	static char *pe[] = {(void *)Always_44_0,(void *)Always_52_1};
	xsi_register_didat("work_m_00000000001700613937_1467285622", "isim/adder_float_tb_isim_beh.exe.sim/work/m_00000000001700613937_1467285622.didat");
	xsi_register_executes(pe);
}
