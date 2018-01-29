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
static const char *ng0 = "D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/add_sub.v";
static int ng1[] = {0, 0};



static void Always_36_0(char *t0)
{
    char t4[8];
    char t27[8];
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;

LAB0:    t1 = (t0 + 3440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3760);
    *((int *)t2) = 1;
    t3 = (t0 + 3472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t5 = (t0 + 1800U);
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

LAB11:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    t2 = (t0 + 1480U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    *((unsigned int *)t4) = t9;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t12 = (t4 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t14 = (t10 | t11);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB13;

LAB14:
LAB15:    t13 = (t4 + 4);
    t21 = *((unsigned int *)t13);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(40, ng0);

LAB20:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t0 + 2120U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 5, t3, 4, t5, 4);
    t2 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 5, 0LL);

LAB18:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 5, 0LL);
    goto LAB12;

LAB13:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    goto LAB15;

LAB16:    xsi_set_current_line(38, ng0);

LAB19:    xsi_set_current_line(39, ng0);
    t19 = (t0 + 1960U);
    t20 = *((char **)t19);
    t19 = (t0 + 2120U);
    t26 = *((char **)t19);
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 5, t20, 4, t26, 4);
    t19 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t19, t27, 0, 0, 5, 0LL);
    goto LAB18;

}


extern void work_m_00000000001339882554_1862025139_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000001339882554_1862025139", "isim/add_sub_tb_isim_beh.exe.sim/work/m_00000000001339882554_1862025139.didat");
	xsi_register_executes(pe);
}
