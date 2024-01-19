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
static const char *ng0 = "D:/University/Study/2022fall/co/P_7/temp/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {0, 0};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {12U, 0U};



static void NetDecl_15_0(char *t0)
{
    char t3[16];
    char t6[8];
    char t14[16];
    char t18[8];
    char t26[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
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
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    xsi_vlogtype_concat(t3, 33, 33, 2U, t6, 1, t4, 32);
    t15 = (t0 + 1368U);
    t16 = *((char **)t15);
    t15 = (t0 + 1368U);
    t17 = *((char **)t15);
    memset(t18, 0, 8);
    t15 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t15) = t25;
    xsi_vlogtype_concat(t14, 33, 33, 2U, t18, 1, t16, 32);
    xsi_vlog_unsigned_add(t26, 33, t3, 33, t14, 33);
    t27 = (t0 + 4736);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_bit_copy(t31, 0, t26, 0, 33);
    xsi_driver_vfirst_trans(t27, 0, 32U);
    t32 = (t0 + 4624);
    *((int *)t32) = 1;

LAB1:    return;
}

static void NetDecl_16_1(char *t0)
{
    char t3[16];
    char t6[8];
    char t14[16];
    char t18[8];
    char t26[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
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
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    xsi_vlogtype_concat(t3, 33, 33, 2U, t6, 1, t4, 32);
    t15 = (t0 + 1368U);
    t16 = *((char **)t15);
    t15 = (t0 + 1368U);
    t17 = *((char **)t15);
    memset(t18, 0, 8);
    t15 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t15) = t25;
    xsi_vlogtype_concat(t14, 33, 33, 2U, t18, 1, t16, 32);
    xsi_vlog_unsigned_minus(t26, 33, t3, 33, t14, 33);
    t27 = (t0 + 4800);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_bit_copy(t31, 0, t26, 0, 33);
    xsi_driver_vfirst_trans(t27, 0, 32U);
    t32 = (t0 + 4640);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Always_18_2(char *t0)
{
    char t8[8];
    char t40[8];
    char t41[8];
    char t42[8];
    char t43[8];
    char t46[16];
    char t47[16];
    char t48[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 4656);
    *((int *)t2) = 1;
    t3 = (t0 + 4336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t0 + 2888);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 5);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB21:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB57;

LAB54:    if (t20 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t8) = 1;

LAB57:    t13 = (t8 + 4);
    t25 = *((unsigned int *)t13);
    t27 = (~(t25));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t31 = (t29 != 0);
    if (t31 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(57, ng0);

LAB115:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 5);

LAB60:    goto LAB2;

LAB7:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB21;

LAB9:    xsi_set_current_line(22, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    goto LAB21;

LAB11:    xsi_set_current_line(23, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t8) = t11;
    t4 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB22;

LAB23:
LAB24:    t35 = (t0 + 2728);
    xsi_vlogvar_assign_value(t35, t8, 0, 0, 32);
    goto LAB21;

LAB13:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t4 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB25;

LAB26:
LAB27:    t35 = (t0 + 2728);
    xsi_vlogvar_assign_value(t35, t8, 0, 0, 32);
    goto LAB21;

LAB15:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t7 = *((char **)t4);
    memset(t43, 0, 8);
    xsi_vlog_signed_less(t43, 32, t5, 32, t7, 32);
    memset(t40, 0, 8);
    t4 = (t43 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t43);
    t14 = (t11 & t10);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t4) != 0)
        goto LAB30;

LAB31:    t13 = (t40 + 4);
    t16 = *((unsigned int *)t40);
    t17 = *((unsigned int *)t13);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB32;

LAB33:    t19 = *((unsigned int *)t40);
    t20 = (~(t19));
    t23 = *((unsigned int *)t13);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t13) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t40) > 0)
        goto LAB38;

LAB39:    memcpy(t8, t22, 8);

LAB40:    t35 = (t0 + 2728);
    xsi_vlogvar_assign_value(t35, t8, 0, 0, 32);
    goto LAB21;

LAB17:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    xsi_vlogtype_concat(t46, 33, 33, 2U, t4, 1, t5, 32);
    t7 = (t0 + 1368U);
    t12 = *((char **)t7);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t47, 33, 33, 2U, t7, 1, t12, 32);
    xsi_vlog_unsigned_less(t48, 33, t46, 33, t47, 33);
    memset(t40, 0, 8);
    t13 = (t48 + 4);
    t9 = *((unsigned int *)t13);
    t10 = (~(t9));
    t11 = *((unsigned int *)t48);
    t14 = (t11 & t10);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t13) != 0)
        goto LAB43;

LAB44:    t22 = (t40 + 4);
    t16 = *((unsigned int *)t40);
    t17 = *((unsigned int *)t22);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB45;

LAB46:    t19 = *((unsigned int *)t40);
    t20 = (~(t19));
    t23 = *((unsigned int *)t22);
    t24 = (t20 || t23);
    if (t24 > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t22) > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t40) > 0)
        goto LAB51;

LAB52:    memcpy(t8, t49, 8);

LAB53:    t50 = (t0 + 2728);
    xsi_vlogvar_assign_value(t50, t8, 0, 0, 32);
    goto LAB21;

LAB22:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t31);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t32);
    goto LAB24;

LAB25:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t5);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t27 = (~(t25));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t31 = *((unsigned int *)t22);
    t32 = (~(t31));
    t26 = (t24 & t27);
    t30 = (t29 & t32);
    t33 = (~(t26));
    t34 = (~(t30));
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & t33);
    t37 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t37 & t34);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t33);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t34);
    goto LAB27;

LAB28:    *((unsigned int *)t40) = 1;
    goto LAB31;

LAB30:    t12 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB31;

LAB32:    t21 = ((char*)((ng6)));
    goto LAB33;

LAB34:    t22 = ((char*)((ng7)));
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t8, 32, t21, 32, t22, 32);
    goto LAB40;

LAB38:    memcpy(t8, t21, 8);
    goto LAB40;

LAB41:    *((unsigned int *)t40) = 1;
    goto LAB44;

LAB43:    t21 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB44;

LAB45:    t35 = ((char*)((ng2)));
    goto LAB46;

LAB47:    t49 = ((char*)((ng1)));
    goto LAB48;

LAB49:    xsi_vlog_unsigned_bit_combine(t8, 32, t35, 32, t49, 32);
    goto LAB53;

LAB51:    memcpy(t8, t35, 8);
    goto LAB53;

LAB56:    t12 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(29, ng0);

LAB61:    xsi_set_current_line(30, ng0);
    t21 = (t0 + 1848U);
    t22 = *((char **)t21);
    t21 = (t22 + 4);
    t32 = *((unsigned int *)t21);
    t33 = (~(t32));
    t34 = *((unsigned int *)t22);
    t36 = (t34 & t33);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t2 = (t4 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t14 = (t11 & t10);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t8) = t11;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t7 = (t8 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t23 = (t20 != 0);
    if (t23 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t8) = t11;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t7 = (t8 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t23 = (t20 != 0);
    if (t23 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(54, ng0);

LAB114:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 5);

LAB103:
LAB90:
LAB77:
LAB64:    goto LAB60;

LAB62:    xsi_set_current_line(30, ng0);

LAB65:    xsi_set_current_line(31, ng0);
    t35 = (t0 + 2328U);
    t49 = *((char **)t35);
    memset(t40, 0, 8);
    t35 = (t40 + 4);
    t50 = (t49 + 8);
    t51 = (t49 + 12);
    t38 = *((unsigned int *)t50);
    t39 = (t38 >> 0);
    t52 = (t39 & 1);
    *((unsigned int *)t40) = t52;
    t53 = *((unsigned int *)t51);
    t54 = (t53 >> 0);
    t55 = (t54 & 1);
    *((unsigned int *)t35) = t55;
    t56 = (t0 + 2328U);
    t57 = *((char **)t56);
    memset(t41, 0, 8);
    t56 = (t41 + 4);
    t58 = (t57 + 4);
    t59 = *((unsigned int *)t57);
    t60 = (t59 >> 31);
    t61 = (t60 & 1);
    *((unsigned int *)t41) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 >> 31);
    t64 = (t63 & 1);
    *((unsigned int *)t56) = t64;
    memset(t42, 0, 8);
    t65 = (t40 + 4);
    t66 = (t41 + 4);
    t67 = *((unsigned int *)t40);
    t68 = *((unsigned int *)t41);
    t69 = (t67 ^ t68);
    t70 = *((unsigned int *)t65);
    t71 = *((unsigned int *)t66);
    t72 = (t70 ^ t71);
    t73 = (t69 | t72);
    t74 = *((unsigned int *)t65);
    t75 = *((unsigned int *)t66);
    t76 = (t74 | t75);
    t77 = (~(t76));
    t78 = (t73 & t77);
    if (t78 != 0)
        goto LAB67;

LAB66:    if (t76 != 0)
        goto LAB68;

LAB69:    t80 = (t42 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t42);
    t84 = (t83 & t82);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(33, ng0);

LAB74:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 5);

LAB72:    goto LAB64;

LAB67:    *((unsigned int *)t42) = 1;
    goto LAB69;

LAB68:    t79 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(31, ng0);

LAB73:    xsi_set_current_line(32, ng0);
    t86 = ((char*)((ng9)));
    t87 = (t0 + 2888);
    xsi_vlogvar_assign_value(t87, t86, 0, 0, 5);
    goto LAB72;

LAB75:    xsi_set_current_line(36, ng0);

LAB78:    xsi_set_current_line(37, ng0);
    t5 = (t0 + 2168U);
    t7 = *((char **)t5);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t12 = (t7 + 8);
    t13 = (t7 + 12);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t13);
    t20 = (t19 >> 0);
    t23 = (t20 & 1);
    *((unsigned int *)t5) = t23;
    t21 = (t0 + 2168U);
    t22 = *((char **)t21);
    memset(t40, 0, 8);
    t21 = (t40 + 4);
    t35 = (t22 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (t24 >> 31);
    t27 = (t25 & 1);
    *((unsigned int *)t40) = t27;
    t28 = *((unsigned int *)t35);
    t29 = (t28 >> 31);
    t31 = (t29 & 1);
    *((unsigned int *)t21) = t31;
    memset(t41, 0, 8);
    t49 = (t8 + 4);
    t50 = (t40 + 4);
    t32 = *((unsigned int *)t8);
    t33 = *((unsigned int *)t40);
    t34 = (t32 ^ t33);
    t36 = *((unsigned int *)t49);
    t37 = *((unsigned int *)t50);
    t38 = (t36 ^ t37);
    t39 = (t34 | t38);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t59 = (t39 & t55);
    if (t59 != 0)
        goto LAB80;

LAB79:    if (t54 != 0)
        goto LAB81;

LAB82:    t56 = (t41 + 4);
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t41);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(39, ng0);

LAB87:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 5);

LAB85:    goto LAB77;

LAB80:    *((unsigned int *)t41) = 1;
    goto LAB82;

LAB81:    t51 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(37, ng0);

LAB86:    xsi_set_current_line(38, ng0);
    t57 = ((char*)((ng9)));
    t58 = (t0 + 2888);
    xsi_vlogvar_assign_value(t58, t57, 0, 0, 5);
    goto LAB85;

LAB88:    xsi_set_current_line(42, ng0);

LAB91:    xsi_set_current_line(43, ng0);
    t12 = (t0 + 2168U);
    t13 = *((char **)t12);
    memset(t40, 0, 8);
    t12 = (t40 + 4);
    t21 = (t13 + 8);
    t22 = (t13 + 12);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    t27 = (t25 & 1);
    *((unsigned int *)t40) = t27;
    t28 = *((unsigned int *)t22);
    t29 = (t28 >> 0);
    t31 = (t29 & 1);
    *((unsigned int *)t12) = t31;
    t35 = (t0 + 2168U);
    t49 = *((char **)t35);
    memset(t41, 0, 8);
    t35 = (t41 + 4);
    t50 = (t49 + 4);
    t32 = *((unsigned int *)t49);
    t33 = (t32 >> 31);
    t34 = (t33 & 1);
    *((unsigned int *)t41) = t34;
    t36 = *((unsigned int *)t50);
    t37 = (t36 >> 31);
    t38 = (t37 & 1);
    *((unsigned int *)t35) = t38;
    memset(t42, 0, 8);
    t51 = (t40 + 4);
    t56 = (t41 + 4);
    t39 = *((unsigned int *)t40);
    t52 = *((unsigned int *)t41);
    t53 = (t39 ^ t52);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t56);
    t59 = (t54 ^ t55);
    t60 = (t53 | t59);
    t61 = *((unsigned int *)t51);
    t62 = *((unsigned int *)t56);
    t63 = (t61 | t62);
    t64 = (~(t63));
    t67 = (t60 & t64);
    if (t67 != 0)
        goto LAB93;

LAB92:    if (t63 != 0)
        goto LAB94;

LAB95:    t58 = (t42 + 4);
    t68 = *((unsigned int *)t58);
    t69 = (~(t68));
    t70 = *((unsigned int *)t42);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(45, ng0);

LAB100:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 5);

LAB98:    goto LAB90;

LAB93:    *((unsigned int *)t42) = 1;
    goto LAB95;

LAB94:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(43, ng0);

LAB99:    xsi_set_current_line(44, ng0);
    t65 = ((char*)((ng8)));
    t66 = (t0 + 2888);
    xsi_vlogvar_assign_value(t66, t65, 0, 0, 5);
    goto LAB98;

LAB101:    xsi_set_current_line(48, ng0);

LAB104:    xsi_set_current_line(49, ng0);
    t12 = (t0 + 2168U);
    t13 = *((char **)t12);
    memset(t40, 0, 8);
    t12 = (t40 + 4);
    t21 = (t13 + 8);
    t22 = (t13 + 12);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    t27 = (t25 & 1);
    *((unsigned int *)t40) = t27;
    t28 = *((unsigned int *)t22);
    t29 = (t28 >> 0);
    t31 = (t29 & 1);
    *((unsigned int *)t12) = t31;
    t35 = (t0 + 2168U);
    t49 = *((char **)t35);
    memset(t41, 0, 8);
    t35 = (t41 + 4);
    t50 = (t49 + 4);
    t32 = *((unsigned int *)t49);
    t33 = (t32 >> 31);
    t34 = (t33 & 1);
    *((unsigned int *)t41) = t34;
    t36 = *((unsigned int *)t50);
    t37 = (t36 >> 31);
    t38 = (t37 & 1);
    *((unsigned int *)t35) = t38;
    memset(t42, 0, 8);
    t51 = (t40 + 4);
    t56 = (t41 + 4);
    t39 = *((unsigned int *)t40);
    t52 = *((unsigned int *)t41);
    t53 = (t39 ^ t52);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t56);
    t59 = (t54 ^ t55);
    t60 = (t53 | t59);
    t61 = *((unsigned int *)t51);
    t62 = *((unsigned int *)t56);
    t63 = (t61 | t62);
    t64 = (~(t63));
    t67 = (t60 & t64);
    if (t67 != 0)
        goto LAB106;

LAB105:    if (t63 != 0)
        goto LAB107;

LAB108:    t58 = (t42 + 4);
    t68 = *((unsigned int *)t58);
    t69 = (~(t68));
    t70 = *((unsigned int *)t42);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB109;

LAB110:    xsi_set_current_line(51, ng0);

LAB113:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 5);

LAB111:    goto LAB103;

LAB106:    *((unsigned int *)t42) = 1;
    goto LAB108;

LAB107:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB108;

LAB109:    xsi_set_current_line(49, ng0);

LAB112:    xsi_set_current_line(50, ng0);
    t65 = ((char*)((ng5)));
    t66 = (t0 + 2888);
    xsi_vlogvar_assign_value(t66, t65, 0, 0, 5);
    goto LAB111;

}


extern void work_m_00000000003566657583_0886308060_init()
{
	static char *pe[] = {(void *)NetDecl_15_0,(void *)NetDecl_16_1,(void *)Always_18_2};
	xsi_register_didat("work_m_00000000003566657583_0886308060", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003566657583_0886308060.didat");
	xsi_register_executes(pe);
}
