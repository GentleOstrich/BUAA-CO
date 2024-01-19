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
static const char *ng0 = "D:/University/Study/2022fall/co/P_5/p5_old/p5_1/q1/NPC.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {14, 0};
static int ng3[] = {0, 0};
static int ng4[] = {4, 0};
static unsigned int ng5[] = {12288U, 0U};
static unsigned int ng6[] = {8U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {39U, 0U};
static unsigned int ng12[] = {1U, 0U};



static void Cont_27_0(char *t0)
{
    char t3[8];
    char t6[8];
    char t9[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 4928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    t7 = (t0 + 2168U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 15);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t7) = t16;
    xsi_vlog_mul_concat(t6, 14, 1, t4, 1U, t9, 1);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t6, 14, t5, 16, t2, 2);
    t17 = (t0 + 1688U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t3, 32, t18, 32);
    t17 = (t0 + 5856);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t19, 8);
    xsi_driver_vfirst_trans(t17, 0, 31);
    t24 = (t0 + 5744);
    *((int *)t24) = 1;

LAB1:    return;
}

static void Cont_28_1(char *t0)
{
    char t3[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 5176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1848U);
    t6 = *((char **)t5);
    t5 = (t0 + 1688U);
    t8 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 28);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 28);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 15U);
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 15U);
    xsi_vlogtype_concat(t3, 32, 32, 4U, t7, 4, t6, 26, t4, 1, t2, 1);
    t16 = (t0 + 5920);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t3, 8);
    xsi_driver_vfirst_trans(t16, 0, 31);
    t21 = (t0 + 5760);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Always_30_2(char *t0)
{
    char t6[8];
    char t33[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 5424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 5776);
    *((int *)t2) = 1;
    t3 = (t0 + 5456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t3, 32, t2, 32);
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 32);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng8)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t7 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t7 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng10)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t7 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t7 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(83, ng0);

LAB47:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(39, ng0);

LAB20:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB21:    t4 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t8 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB19;

LAB9:    xsi_set_current_line(49, ng0);

LAB26:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1048U);
    t9 = *((char **)t4);
    t4 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t10 = (t9 + 4);
    t11 = (t4 + 4);
    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t4);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB30;

LAB27:    if (t21 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t6) = 1;

LAB30:    t25 = (t6 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB31;

LAB32:
LAB33:    goto LAB19;

LAB11:    xsi_set_current_line(57, ng0);

LAB35:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng3)));
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2648U);
    t4 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB19;

LAB13:    xsi_set_current_line(63, ng0);

LAB36:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng3)));
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2648U);
    t4 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB19;

LAB15:    xsi_set_current_line(69, ng0);

LAB37:    xsi_set_current_line(70, ng0);
    t4 = ((char*)((ng1)));
    t9 = (t0 + 2168U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng2)));
    t11 = (t0 + 2168U);
    t24 = *((char **)t11);
    memset(t34, 0, 8);
    t11 = (t34 + 4);
    t25 = (t24 + 4);
    t12 = *((unsigned int *)t24);
    t13 = (t12 >> 15);
    t14 = (t13 & 1);
    *((unsigned int *)t34) = t14;
    t15 = *((unsigned int *)t25);
    t16 = (t15 >> 15);
    t17 = (t16 & 1);
    *((unsigned int *)t11) = t17;
    xsi_vlog_mul_concat(t33, 14, 1, t9, 1U, t34, 1);
    xsi_vlogtype_concat(t6, 32, 32, 3U, t33, 14, t10, 16, t4, 2);
    t31 = (t0 + 4008);
    xsi_vlogvar_assign_value(t31, t6, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4008);
    t4 = (t2 + 56U);
    t9 = *((char **)t4);
    t10 = (t0 + 2328U);
    t11 = *((char **)t10);
    memset(t6, 0, 8);
    t10 = (t6 + 4);
    t24 = (t11 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t24);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 3U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 3U);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_lshift(t33, 32, t9, 32, t6, 2);
    t25 = (t0 + 1688U);
    t31 = *((char **)t25);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t33, 32, t31, 32);
    t25 = (t0 + 3848);
    xsi_vlogvar_assign_value(t25, t34, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t6, 0, 8);
    t9 = (t4 + 4);
    t10 = (t2 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t9);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB41;

LAB38:    if (t21 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t6) = 1;

LAB41:    t24 = (t6 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(77, ng0);

LAB46:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB44:    goto LAB19;

LAB22:    xsi_set_current_line(41, ng0);

LAB25:    xsi_set_current_line(42, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 3208);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB24;

LAB29:    t24 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(50, ng0);

LAB34:    xsi_set_current_line(51, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 3208);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB40:    t11 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(72, ng0);

LAB45:    xsi_set_current_line(73, ng0);
    t25 = ((char*)((ng3)));
    t31 = (t0 + 3208);
    xsi_vlogvar_assign_value(t31, t25, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 3688);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3848);
    t4 = (t2 + 56U);
    t9 = *((char **)t4);
    t10 = (t0 + 3048);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB44;

}


extern void work_m_00000000003400623600_0757879789_init()
{
	static char *pe[] = {(void *)Cont_27_0,(void *)Cont_28_1,(void *)Always_30_2};
	xsi_register_didat("work_m_00000000003400623600_0757879789", "isim/mips_isim_beh.exe.sim/work/m_00000000003400623600_0757879789.didat");
	xsi_register_executes(pe);
}
