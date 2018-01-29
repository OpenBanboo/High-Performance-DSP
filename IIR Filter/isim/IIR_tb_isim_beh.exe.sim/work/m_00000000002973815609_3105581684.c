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
static const char *ng0 = "D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/sMult.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {117, 0};
static int ng5[] = {0, 0, 0, 0, 0, 0, 0, 0};



static void Cont_29_0(char *t0)
{
    char t5[32];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    t2 = (t0 + 2616U);
    t4 = *((char **)t2);
    xsi_vlog_signed_multiply(t5, 118, t3, 102, t4, 16);
    t2 = (t0 + 5608);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t5, 0, 118);
    xsi_driver_vfirst_trans(t2, 0, 117);
    t10 = (t0 + 5480);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_32_1(char *t0)
{
    char t7[8];
    char t13[24];
    char t15[24];
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

LAB0:    t1 = (t0 + 4664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 5496);
    *((int *)t2) = 1;
    t3 = (t0 + 4696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(34, ng0);
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

LAB7:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t13, 77, t3, 76, 0);
    t2 = (t0 + 3496);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 77);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);
    t14 = ((char*)((ng1)));
    t16 = (t0 + 2776U);
    t17 = *((char **)t16);
    xsi_vlog_get_part_select_value(t15, 77, t17, 76, 0);
    xsi_vlogtype_concat(t13, 77, 77, 2U, t15, 77, t14, 0);
    t16 = (t0 + 3496);
    xsi_vlogvar_assign_value(t16, t13, 0, 0, 77);
    goto LAB8;

}

static void Always_42_2(char *t0)
{
    char t7[8];
    char t13[16];
    char t14[16];
    char t20[8];
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
    char *t19;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 4912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5512);
    *((int *)t2) = 1;
    t3 = (t0 + 4944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
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

LAB7:    xsi_set_current_line(45, ng0);

LAB9:    xsi_set_current_line(46, ng0);
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
        goto LAB10;

LAB11:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t14, 40, t3, 116, 77);
    t2 = (t0 + 2776U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t4 + 24);
    t6 = (t4 + 28);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 21);
    t10 = (t9 & 1);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 21);
    t23 = (t12 & 1);
    *((unsigned int *)t2) = t23;
    xsi_vlogtype_concat(t13, 41, 41, 2U, t7, 1, t14, 40);
    t15 = (t0 + 3336);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 41);

LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);
    t15 = (t0 + 2776U);
    t16 = *((char **)t15);
    xsi_vlog_get_part_select_value(t14, 41, t16, 117, 77);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 2776U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t20 + 4);
    t21 = (t19 + 24);
    t22 = (t19 + 28);
    t23 = *((unsigned int *)t21);
    t24 = (t23 >> 21);
    t25 = (t24 & 1);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 21);
    t28 = (t27 & 1);
    *((unsigned int *)t18) = t28;
    xsi_vlog_mul_concat(t15, 0, 1, t17, 1U, t20, 1);
    xsi_vlogtype_concat(t13, 41, 41, 2U, t15, 0, t14, 41);
    t29 = (t0 + 3336);
    xsi_vlogvar_assign_value(t29, t13, 0, 0, 41);
    goto LAB8;

LAB10:    xsi_set_current_line(47, ng0);
    t5 = (t0 + 2776U);
    t6 = *((char **)t5);
    t5 = (t0 + 2736U);
    t15 = (t5 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t13, 41, t6, t16, 2, t17, 32, 1);
    t18 = (t0 + 3336);
    xsi_vlogvar_assign_value(t18, t13, 0, 0, 41);
    goto LAB12;

}

static void Always_55_3(char *t0)
{
    char t4[8];
    char t21[32];
    char t22[24];
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

LAB0:    t1 = (t0 + 5160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5528);
    *((int *)t2) = 1;
    t3 = (t0 + 5192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);
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

LAB10:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlog_get_part_select_value(t22, 77, t5, 76, 0);
    t6 = (t0 + 3336);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_get_part_select_value(t23, 41, t13, 40, 0);
    xsi_vlogtype_concat(t21, 118, 118, 2U, t23, 41, t22, 77);
    t19 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t19, t21, 0, 0, 118, 0LL);

LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(56, ng0);
    t19 = ((char*)((ng5)));
    t20 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 118, 0LL);
    goto LAB11;

}


extern void work_m_00000000002973815609_3105581684_init()
{
	static char *pe[] = {(void *)Cont_29_0,(void *)Always_32_1,(void *)Always_42_2,(void *)Always_55_3};
	xsi_register_didat("work_m_00000000002973815609_3105581684", "isim/IIR_tb_isim_beh.exe.sim/work/m_00000000002973815609_3105581684.didat");
	xsi_register_executes(pe);
}
