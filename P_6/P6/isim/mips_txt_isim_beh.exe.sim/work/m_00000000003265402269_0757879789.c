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
static const char *ng0 = "D:/University/Study/2022fall/co/P_6/P6_pipeline_cpu/NPC.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {14, 0};
static unsigned int ng3[] = {4U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {4, 0};
static unsigned int ng6[] = {12288U, 0U};
static unsigned int ng7[] = {8U, 0U};
static int ng8[] = {1, 0};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {5U, 0U};



static void Cont_24_0(char *t0)
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

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
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
    t17 = (t0 + 5640);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t19, 8);
    xsi_driver_vfirst_trans(t17, 0, 31);
    t24 = (t0 + 5512);
    *((int *)t24) = 1;

LAB1:    return;
}

static void Cont_26_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 5704);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5528);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_28_2(char *t0)
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

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1848U);
    t6 = *((char **)t5);
    t5 = (t0 + 2648U);
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
    t16 = (t0 + 5768);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t3, 8);
    xsi_driver_vfirst_trans(t16, 0, 31);
    t21 = (t0 + 5544);
    *((int *)t21) = 1;

LAB1:    return;
}

static void Always_30_3(char *t0)
{
    char t6[8];
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

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 5560);
    *((int *)t2) = 1;
    t3 = (t0 + 5224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t3, 32, t2, 32);
    t4 = (t0 + 3368);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 32);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
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

LAB14:
LAB16:
LAB15:    xsi_set_current_line(64, ng0);

LAB43:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(36, ng0);

LAB18:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB19:    t4 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t8 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB17;

LAB9:    xsi_set_current_line(45, ng0);

LAB24:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1048U);
    t9 = *((char **)t4);
    t4 = ((char*)((ng8)));
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
        goto LAB28;

LAB25:    if (t21 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t6) = 1;

LAB28:    t25 = (t6 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB29;

LAB30:
LAB31:    goto LAB17;

LAB11:    xsi_set_current_line(52, ng0);

LAB33:    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng4)));
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2488U);
    t4 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB17;

LAB13:    xsi_set_current_line(57, ng0);

LAB34:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1208U);
    t9 = *((char **)t4);
    t4 = ((char*)((ng8)));
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
        goto LAB38;

LAB35:    if (t21 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t6) = 1;

LAB38:    t25 = (t6 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB17;

LAB20:    xsi_set_current_line(38, ng0);

LAB23:    xsi_set_current_line(39, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 3208);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB22;

LAB27:    t24 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(46, ng0);

LAB32:    xsi_set_current_line(47, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 3208);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB31;

LAB37:    t24 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(58, ng0);

LAB42:    xsi_set_current_line(59, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 3208);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2328U);
    t4 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 3528);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB41;

}


extern void work_m_00000000003265402269_0757879789_init()
{
	static char *pe[] = {(void *)Cont_24_0,(void *)Cont_26_1,(void *)Cont_28_2,(void *)Always_30_3};
	xsi_register_didat("work_m_00000000003265402269_0757879789", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003265402269_0757879789.didat");
	xsi_register_executes(pe);
}
