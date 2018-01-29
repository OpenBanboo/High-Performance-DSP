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
static int ng4[] = {66, 0};
static int ng5[] = {0, 0, 0, 0, 0, 0};



static void Cont_29_0(char *t0)
{
    char t5[24];
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
    xsi_vlog_signed_multiply(t5, 67, t3, 51, t4, 16);
    t2 = (t0 + 5608);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t5, 0, 67);
    xsi_driver_vfirst_trans(t2, 0, 66);
    t10 = (t0 + 5480);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_32_1(char *t0)
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
    xsi_vlog_get_part_select_value(t13, 44, t3, 43, 0);
    t2 = (t0 + 3496);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 44);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);
    t14 = ((char*)((ng1)));
    t16 = (t0 + 2776U);
    t17 = *((char **)t16);
    xsi_vlog_get_part_select_value(t15, 44, t17, 43, 0);
    xsi_vlogtype_concat(t13, 44, 44, 2U, t15, 44, t14, 0);
    t16 = (t0 + 3496);
    xsi_vlogvar_assign_value(t16, t13, 0, 0, 44);
    goto LAB8;

}

static void Always_42_2(char *t0)
{
    char t7[8];
    char t13[8];
    char t14[8];
    char t37[8];
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

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
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 8);
    t5 = (t3 + 12);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 12);
    *((unsigned int *)t13) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 12);
    *((unsigned int *)t2) = t11;
    t6 = (t3 + 16);
    t15 = (t3 + 20);
    t12 = *((unsigned int *)t6);
    t19 = (t12 << 20);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t19);
    t21 = *((unsigned int *)t15);
    t22 = (t21 << 20);
    t25 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t25 | t22);
    t26 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t26 & 4194303U);
    t27 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t27 & 4194303U);
    t16 = (t0 + 2776U);
    t17 = *((char **)t16);
    memset(t14, 0, 8);
    t16 = (t14 + 4);
    t18 = (t17 + 16);
    t23 = (t17 + 20);
    t28 = *((unsigned int *)t18);
    t29 = (t28 >> 2);
    t30 = (t29 & 1);
    *((unsigned int *)t14) = t30;
    t31 = *((unsigned int *)t23);
    t32 = (t31 >> 2);
    t40 = (t32 & 1);
    *((unsigned int *)t16) = t40;
    xsi_vlogtype_concat(t7, 23, 23, 2U, t14, 1, t13, 22);
    t24 = (t0 + 3336);
    xsi_vlogvar_assign_value(t24, t7, 0, 0, 23);

LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);
    t15 = (t0 + 2776U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 8);
    t18 = (t16 + 12);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 12);
    *((unsigned int *)t14) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 12);
    *((unsigned int *)t15) = t22;
    t23 = (t16 + 16);
    t24 = (t16 + 20);
    t25 = *((unsigned int *)t23);
    t26 = (t25 << 20);
    t27 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t27 | t26);
    t28 = *((unsigned int *)t24);
    t29 = (t28 << 20);
    t30 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t30 | t29);
    t31 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t31 & 8388607U);
    t32 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t32 & 8388607U);
    t34 = ((char*)((ng2)));
    t35 = (t0 + 2776U);
    t36 = *((char **)t35);
    memset(t37, 0, 8);
    t35 = (t37 + 4);
    t38 = (t36 + 16);
    t39 = (t36 + 20);
    t40 = *((unsigned int *)t38);
    t41 = (t40 >> 2);
    t42 = (t41 & 1);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 >> 2);
    t45 = (t44 & 1);
    *((unsigned int *)t35) = t45;
    xsi_vlog_mul_concat(t33, 0, 1, t34, 1U, t37, 1);
    xsi_vlogtype_concat(t13, 23, 23, 2U, t33, 0, t14, 23);
    t46 = (t0 + 3336);
    xsi_vlogvar_assign_value(t46, t13, 0, 0, 23);
    goto LAB8;

LAB10:    xsi_set_current_line(47, ng0);
    t5 = (t0 + 2776U);
    t6 = *((char **)t5);
    t5 = (t0 + 2736U);
    t15 = (t5 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t13, 23, t6, t16, 2, t17, 32, 1);
    t18 = (t0 + 3336);
    xsi_vlogvar_assign_value(t18, t13, 0, 0, 23);
    goto LAB12;

}

static void Always_55_3(char *t0)
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
    xsi_vlog_get_part_select_value(t22, 44, t5, 43, 0);
    t6 = (t0 + 3336);
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
    *((unsigned int *)t4) = (t11 & 8388607U);
    t14 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t14 & 8388607U);
    xsi_vlogtype_concat(t21, 67, 67, 2U, t4, 23, t22, 44);
    t23 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t23, t21, 0, 0, 67, 0LL);

LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(56, ng0);
    t19 = ((char*)((ng5)));
    t20 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 67, 0LL);
    goto LAB11;

}


extern void work_m_00000000002973815609_0702768479_init()
{
	static char *pe[] = {(void *)Cont_29_0,(void *)Always_32_1,(void *)Always_42_2,(void *)Always_55_3};
	xsi_register_didat("work_m_00000000002973815609_0702768479", "isim/sos_scaled_tb_isim_beh.exe.sim/work/m_00000000002973815609_0702768479.didat");
	xsi_register_executes(pe);
}
