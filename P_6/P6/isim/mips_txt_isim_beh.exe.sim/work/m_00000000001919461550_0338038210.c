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
static const char *ng0 = "D:/University/Study/2022fall/co/P_6/P6_pipeline_cpu/HILO.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {0, 0, 0, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {5, 0};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {63, 0};
static int ng9[] = {32, 0};
static int ng10[] = {31, 0};
static int ng11[] = {10, 0};
static unsigned int ng12[] = {3U, 0U};



static void Always_20_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 4856);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 3048);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    goto LAB2;

}

static void Always_24_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t54[16];
    char t55[16];
    char t56[16];
    char t57[8];
    char t58[8];
    char t59[8];
    char t60[8];
    char t61[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
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
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
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
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    int t62;
    int t63;
    int t64;
    char *t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 4872);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(31, ng0);

LAB14:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(61, ng0);

LAB89:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB93;

LAB90:    if (t18 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t6) = 1;

LAB93:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(67, ng0);

LAB98:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 4, t5, 32);
    t7 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);

LAB96:
LAB21:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(25, ng0);

LAB13:    xsi_set_current_line(26, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    goto LAB12;

LAB17:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(32, ng0);

LAB22:    xsi_set_current_line(33, ng0);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng1)));
    memset(t30, 0, 8);
    t31 = (t29 + 4);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t28);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB26;

LAB23:    if (t42 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t30) = 1;

LAB26:    t46 = (t30 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 1968U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng1)));
    memset(t30, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB74;

LAB71:    if (t18 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t30) = 1;

LAB74:    t29 = (t30 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t30);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(58, ng0);

LAB88:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB77:
LAB29:    goto LAB21;

LAB25:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(33, ng0);

LAB30:    xsi_set_current_line(34, ng0);
    t52 = ((char*)((ng1)));
    t53 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 1, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB34;

LAB31:    if (t18 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t6) = 1;

LAB34:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB42;

LAB39:    if (t18 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t6) = 1;

LAB42:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB50;

LAB47:    if (t18 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t6) = 1;

LAB50:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB62;

LAB59:    if (t18 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t6) = 1;

LAB62:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB63;

LAB64:
LAB65:
LAB53:
LAB45:
LAB37:    goto LAB29;

LAB33:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(35, ng0);

LAB38:    xsi_set_current_line(36, ng0);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    xsi_vlogtype_sign_extend(t54, 64, t22, 32);
    t21 = (t0 + 1848U);
    t28 = *((char **)t21);
    xsi_vlogtype_sign_extend(t55, 64, t28, 32);
    xsi_vlog_signed_multiply(t56, 64, t54, 64, t55, 64);
    t21 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t21, t56, 0, 0, 64, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB37;

LAB41:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(38, ng0);

LAB46:    xsi_set_current_line(39, ng0);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    t21 = (t0 + 1848U);
    t28 = *((char **)t21);
    xsi_vlog_unsigned_multiply(t54, 64, t22, 32, t28, 32);
    t21 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t21, t54, 0, 0, 64, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB45;

LAB49:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(41, ng0);

LAB54:    xsi_set_current_line(42, ng0);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    t21 = (t0 + 1848U);
    t28 = *((char **)t21);
    memset(t58, 0, 8);
    xsi_vlog_signed_mod(t58, 32, t22, 32, t28, 32);
    t21 = (t0 + 3368);
    t29 = (t0 + 3368);
    t31 = (t29 + 72U);
    t32 = *((char **)t31);
    t45 = ((char*)((ng8)));
    t46 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t59, t60, t61, ((int*)(t32)), 2, t45, 32, 1, t46, 32, 1);
    t52 = (t59 + 4);
    t33 = *((unsigned int *)t52);
    t62 = (!(t33));
    t53 = (t60 + 4);
    t34 = *((unsigned int *)t53);
    t63 = (!(t34));
    t64 = (t62 && t63);
    t65 = (t61 + 4);
    t35 = *((unsigned int *)t65);
    t66 = (!(t35));
    t67 = (t64 && t66);
    if (t67 == 1)
        goto LAB55;

LAB56:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t57, 0, 8);
    xsi_vlog_signed_divide(t57, 32, t3, 32, t4, 32);
    t2 = (t0 + 3368);
    t5 = (t0 + 3368);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng10)));
    t22 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t58, t59, t60, ((int*)(t8)), 2, t21, 32, 1, t22, 32, 1);
    t28 = (t58 + 4);
    t9 = *((unsigned int *)t28);
    t62 = (!(t9));
    t29 = (t59 + 4);
    t10 = *((unsigned int *)t29);
    t63 = (!(t10));
    t64 = (t62 && t63);
    t31 = (t60 + 4);
    t11 = *((unsigned int *)t31);
    t66 = (!(t11));
    t67 = (t64 && t66);
    if (t67 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB53;

LAB55:    t36 = *((unsigned int *)t61);
    t68 = (t36 + 0);
    t37 = *((unsigned int *)t59);
    t38 = *((unsigned int *)t60);
    t69 = (t37 - t38);
    t70 = (t69 + 1);
    xsi_vlogvar_wait_assign_value(t21, t58, t68, *((unsigned int *)t60), t70, 0LL);
    goto LAB56;

LAB57:    t12 = *((unsigned int *)t60);
    t68 = (t12 + 0);
    t13 = *((unsigned int *)t58);
    t14 = *((unsigned int *)t59);
    t69 = (t13 - t14);
    t70 = (t69 + 1);
    xsi_vlogvar_wait_assign_value(t2, t57, t68, *((unsigned int *)t59), t70, 0LL);
    goto LAB58;

LAB61:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(45, ng0);

LAB66:    xsi_set_current_line(46, ng0);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    t21 = (t0 + 1848U);
    t28 = *((char **)t21);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_mod(t30, 32, t22, 32, t28, 32);
    t21 = (t0 + 3368);
    t29 = (t0 + 3368);
    t31 = (t29 + 72U);
    t32 = *((char **)t31);
    t45 = ((char*)((ng8)));
    t46 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t57, t58, t59, ((int*)(t32)), 2, t45, 32, 1, t46, 32, 1);
    t52 = (t57 + 4);
    t33 = *((unsigned int *)t52);
    t62 = (!(t33));
    t53 = (t58 + 4);
    t34 = *((unsigned int *)t53);
    t63 = (!(t34));
    t64 = (t62 && t63);
    t65 = (t59 + 4);
    t35 = *((unsigned int *)t65);
    t66 = (!(t35));
    t67 = (t64 && t66);
    if (t67 == 1)
        goto LAB67;

LAB68:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_divide(t6, 32, t3, 32, t4, 32);
    t2 = (t0 + 3368);
    t5 = (t0 + 3368);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng10)));
    t22 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t30, t57, t58, ((int*)(t8)), 2, t21, 32, 1, t22, 32, 1);
    t28 = (t30 + 4);
    t9 = *((unsigned int *)t28);
    t62 = (!(t9));
    t29 = (t57 + 4);
    t10 = *((unsigned int *)t29);
    t63 = (!(t10));
    t64 = (t62 && t63);
    t31 = (t58 + 4);
    t11 = *((unsigned int *)t31);
    t66 = (!(t11));
    t67 = (t64 && t66);
    if (t67 == 1)
        goto LAB69;

LAB70:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB65;

LAB67:    t36 = *((unsigned int *)t59);
    t68 = (t36 + 0);
    t37 = *((unsigned int *)t57);
    t38 = *((unsigned int *)t58);
    t69 = (t37 - t38);
    t70 = (t69 + 1);
    xsi_vlogvar_wait_assign_value(t21, t30, t68, *((unsigned int *)t58), t70, 0LL);
    goto LAB68;

LAB69:    t12 = *((unsigned int *)t58);
    t68 = (t12 + 0);
    t13 = *((unsigned int *)t30);
    t14 = *((unsigned int *)t57);
    t69 = (t13 - t14);
    t70 = (t69 + 1);
    xsi_vlogvar_wait_assign_value(t2, t6, t68, *((unsigned int *)t57), t70, 0LL);
    goto LAB70;

LAB73:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(50, ng0);

LAB78:    xsi_set_current_line(51, ng0);
    t31 = (t0 + 2008U);
    t32 = *((char **)t31);
    t31 = (t0 + 1968U);
    t45 = (t31 + 72U);
    t46 = *((char **)t45);
    t52 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t57, 32, t32, t46, 2, t52, 32, 1);
    t53 = ((char*)((ng1)));
    memset(t58, 0, 8);
    t65 = (t57 + 4);
    t71 = (t53 + 4);
    t33 = *((unsigned int *)t57);
    t34 = *((unsigned int *)t53);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t65);
    t37 = *((unsigned int *)t71);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t65);
    t41 = *((unsigned int *)t71);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB82;

LAB79:    if (t42 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t58) = 1;

LAB82:    t73 = (t58 + 4);
    t47 = *((unsigned int *)t73);
    t48 = (~(t47));
    t49 = *((unsigned int *)t58);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(54, ng0);

LAB87:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB85:    goto LAB77;

LAB81:    t72 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(51, ng0);

LAB86:    xsi_set_current_line(52, ng0);
    t74 = (t0 + 2168U);
    t75 = *((char **)t74);
    t74 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t74, t75, 0, 0, 32, 0LL);
    goto LAB85;

LAB92:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(62, ng0);

LAB97:    xsi_set_current_line(63, ng0);
    t28 = (t0 + 3368);
    t29 = (t28 + 56U);
    t31 = *((char **)t29);
    memset(t30, 0, 8);
    t32 = (t30 + 4);
    t45 = (t31 + 8);
    t46 = (t31 + 12);
    t33 = *((unsigned int *)t45);
    t34 = (t33 >> 0);
    *((unsigned int *)t30) = t34;
    t35 = *((unsigned int *)t46);
    t36 = (t35 >> 0);
    *((unsigned int *)t32) = t36;
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 & 4294967295U);
    t38 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t38 & 4294967295U);
    t52 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t52, t30, 0, 0, 32, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 4294967295U);
    t8 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB96;

}


extern void work_m_00000000001919461550_0338038210_init()
{
	static char *pe[] = {(void *)Always_20_0,(void *)Always_24_1};
	xsi_register_didat("work_m_00000000001919461550_0338038210", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000001919461550_0338038210.didat");
	xsi_register_executes(pe);
}
