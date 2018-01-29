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
static int ng4[] = {31, 0};



static void Cont_29_0(char *t0)
{
    char t5[8];
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
    memset(t5, 0, 8);
    xsi_vlog_signed_multiply(t5, 32, t3, 16, t4, 16);
    t2 = (t0 + 5608);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t10 = (t0 + 5480);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_32_1(char *t0)
{
    char t7[8];
    char t13[8];
    char t15[8];
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
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

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
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t12 & 4194303U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 4194303U);
    t5 = (t0 + 3496);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 22);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);
    t14 = ((char*)((ng1)));
    t16 = (t0 + 2776U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 4194303U);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 4194303U);
    xsi_vlogtype_concat(t13, 22, 22, 2U, t15, 22, t14, 0);
    t25 = (t0 + 3496);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 22);
    goto LAB8;

}

static void Always_42_2(char *t0)
{
    char t7[8];
    char t13[8];
    char t14[8];
    char t28[8];
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
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

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
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 22);
    *((unsigned int *)t13) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 22);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t12 & 511U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 511U);
    t5 = (t0 + 2776U);
    t6 = *((char **)t5);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t15 = (t6 + 4);
    t19 = *((unsigned int *)t6);
    t20 = (t19 >> 31);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 >> 31);
    t30 = (t23 & 1);
    *((unsigned int *)t5) = t30;
    xsi_vlogtype_concat(t7, 10, 10, 2U, t14, 1, t13, 9);
    t16 = (t0 + 3336);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 10);

LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);
    t15 = (t0 + 2776U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 22);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 22);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 1023U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 1023U);
    t25 = ((char*)((ng2)));
    t26 = (t0 + 2776U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    t26 = (t28 + 4);
    t29 = (t27 + 4);
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 31);
    t32 = (t31 & 1);
    *((unsigned int *)t28) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 31);
    t35 = (t34 & 1);
    *((unsigned int *)t26) = t35;
    xsi_vlog_mul_concat(t24, 0, 1, t25, 1U, t28, 1);
    xsi_vlogtype_concat(t13, 10, 10, 2U, t24, 0, t14, 10);
    t36 = (t0 + 3336);
    xsi_vlogvar_assign_value(t36, t13, 0, 0, 10);
    goto LAB8;

LAB10:    xsi_set_current_line(47, ng0);
    t5 = (t0 + 2776U);
    t6 = *((char **)t5);
    t5 = (t0 + 2736U);
    t15 = (t5 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t13, 10, t6, t16, 2, t17, 32, 1);
    t24 = (t0 + 3336);
    xsi_vlogvar_assign_value(t24, t13, 0, 0, 10);
    goto LAB12;

}

static void Always_55_3(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
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
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

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
    *((unsigned int *)t21) = (t11 & 4194303U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 4194303U);
    t13 = (t0 + 3336);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t24 = (t20 + 4);
    t15 = *((unsigned int *)t20);
    t16 = (t15 >> 0);
    *((unsigned int *)t22) = t16;
    t17 = *((unsigned int *)t24);
    t18 = (t17 >> 0);
    *((unsigned int *)t23) = t18;
    t25 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t25 & 1023U);
    t26 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t26 & 1023U);
    xsi_vlogtype_concat(t4, 32, 32, 2U, t22, 10, t21, 22);
    t27 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t27, t4, 0, 0, 32, 0LL);

LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(56, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    goto LAB11;

}


extern void work_m_00000000002973815609_2231798788_init()
{
	static char *pe[] = {(void *)Cont_29_0,(void *)Always_32_1,(void *)Always_42_2,(void *)Always_55_3};
	xsi_register_didat("work_m_00000000002973815609_2231798788", "isim/sos_scaled_tb_isim_beh.exe.sim/work/m_00000000002973815609_2231798788.didat");
	xsi_register_executes(pe);
}
