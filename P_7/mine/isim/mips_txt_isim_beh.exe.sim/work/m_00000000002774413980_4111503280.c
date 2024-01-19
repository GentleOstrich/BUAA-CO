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
static const char *ng0 = "D:/University/Study/2022fall/co/P_7/temp/MDU.v";
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



static void Always_23_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 5016);
    *((int *)t2) = 1;
    t3 = (t0 + 4480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    goto LAB2;

}

static void Always_27_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t45[8];
    char t69[16];
    char t70[16];
    char t71[16];
    char t72[8];
    char t73[8];
    char t74[8];
    char t75[8];
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    char *t84;
    char *t85;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 5032);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
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

LAB11:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t2) == 0)
        goto LAB14;

LAB16:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB17:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(28, ng0);

LAB13:    xsi_set_current_line(29, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t6) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(34, ng0);

LAB21:    xsi_set_current_line(35, ng0);
    t7 = (t0 + 3368);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t28 = (t21 + 4);
    t29 = (t22 + 4);
    t19 = *((unsigned int *)t21);
    t20 = *((unsigned int *)t22);
    t23 = (t19 ^ t20);
    t24 = *((unsigned int *)t28);
    t25 = *((unsigned int *)t29);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t27 & t34);
    if (t35 != 0)
        goto LAB25;

LAB22:    if (t33 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t30) = 1;

LAB25:    t37 = (t30 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t30);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(62, ng0);

LAB96:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3368);
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
        goto LAB100;

LAB97:    if (t18 != 0)
        goto LAB99;

LAB98:    *((unsigned int *)t6) = 1;

LAB100:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(68, ng0);

LAB105:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 4, t5, 32);
    t7 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);

LAB103:
LAB28:    goto LAB20;

LAB24:    t36 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(35, ng0);

LAB29:    xsi_set_current_line(36, ng0);
    t43 = (t0 + 1368U);
    t44 = *((char **)t43);
    t43 = ((char*)((ng1)));
    memset(t45, 0, 8);
    t46 = (t44 + 4);
    t47 = (t43 + 4);
    t48 = *((unsigned int *)t44);
    t49 = *((unsigned int *)t43);
    t50 = (t48 ^ t49);
    t51 = *((unsigned int *)t46);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = (t50 | t53);
    t55 = *((unsigned int *)t46);
    t56 = *((unsigned int *)t47);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB33;

LAB30:    if (t57 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t45) = 1;

LAB33:    t61 = (t45 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t45);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(53, ng0);
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
        goto LAB81;

LAB78:    if (t18 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t30) = 1;

LAB81:    t29 = (t30 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t30);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(59, ng0);

LAB95:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB84:
LAB36:    goto LAB28;

LAB32:    t60 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(36, ng0);

LAB37:    xsi_set_current_line(37, ng0);
    t67 = ((char*)((ng1)));
    t68 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t68, t67, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
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
        goto LAB41;

LAB38:    if (t18 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t6) = 1;

LAB41:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(41, ng0);
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
        goto LAB49;

LAB46:    if (t18 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t6) = 1;

LAB49:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(44, ng0);
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
        goto LAB57;

LAB54:    if (t18 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t6) = 1;

LAB57:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(48, ng0);
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
        goto LAB69;

LAB66:    if (t18 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t6) = 1;

LAB69:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB70;

LAB71:
LAB72:
LAB60:
LAB52:
LAB44:    goto LAB36;

LAB40:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(38, ng0);

LAB45:    xsi_set_current_line(39, ng0);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    xsi_vlogtype_sign_extend(t69, 64, t22, 32);
    t21 = (t0 + 1848U);
    t28 = *((char **)t21);
    xsi_vlogtype_sign_extend(t70, 64, t28, 32);
    xsi_vlog_signed_multiply(t71, 64, t69, 64, t70, 64);
    t21 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t21, t71, 0, 0, 64, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB44;

LAB48:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(41, ng0);

LAB53:    xsi_set_current_line(42, ng0);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    t21 = (t0 + 1848U);
    t28 = *((char **)t21);
    xsi_vlog_unsigned_multiply(t69, 64, t22, 32, t28, 32);
    t21 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t21, t69, 0, 0, 64, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB52;

LAB56:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(44, ng0);

LAB61:    xsi_set_current_line(45, ng0);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    t21 = (t0 + 1848U);
    t28 = *((char **)t21);
    memset(t72, 0, 8);
    xsi_vlog_signed_mod(t72, 32, t22, 32, t28, 32);
    t21 = (t0 + 3528);
    t29 = (t0 + 3528);
    t36 = (t29 + 72U);
    t37 = *((char **)t36);
    t43 = ((char*)((ng8)));
    t44 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t73, t74, t75, ((int*)(t37)), 2, t43, 32, 1, t44, 32, 1);
    t46 = (t73 + 4);
    t31 = *((unsigned int *)t46);
    t76 = (!(t31));
    t47 = (t74 + 4);
    t32 = *((unsigned int *)t47);
    t77 = (!(t32));
    t78 = (t76 && t77);
    t60 = (t75 + 4);
    t33 = *((unsigned int *)t60);
    t79 = (!(t33));
    t80 = (t78 && t79);
    if (t80 == 1)
        goto LAB62;

LAB63:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t45, 0, 8);
    xsi_vlog_signed_divide(t45, 32, t3, 32, t4, 32);
    t2 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng10)));
    t22 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t72, t73, t74, ((int*)(t8)), 2, t21, 32, 1, t22, 32, 1);
    t28 = (t72 + 4);
    t9 = *((unsigned int *)t28);
    t76 = (!(t9));
    t29 = (t73 + 4);
    t10 = *((unsigned int *)t29);
    t77 = (!(t10));
    t78 = (t76 && t77);
    t36 = (t74 + 4);
    t11 = *((unsigned int *)t36);
    t79 = (!(t11));
    t80 = (t78 && t79);
    if (t80 == 1)
        goto LAB64;

LAB65:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB60;

LAB62:    t34 = *((unsigned int *)t75);
    t81 = (t34 + 0);
    t35 = *((unsigned int *)t73);
    t38 = *((unsigned int *)t74);
    t82 = (t35 - t38);
    t83 = (t82 + 1);
    xsi_vlogvar_wait_assign_value(t21, t72, t81, *((unsigned int *)t74), t83, 0LL);
    goto LAB63;

LAB64:    t12 = *((unsigned int *)t74);
    t81 = (t12 + 0);
    t13 = *((unsigned int *)t72);
    t14 = *((unsigned int *)t73);
    t82 = (t13 - t14);
    t83 = (t82 + 1);
    xsi_vlogvar_wait_assign_value(t2, t45, t81, *((unsigned int *)t73), t83, 0LL);
    goto LAB65;

LAB68:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(48, ng0);

LAB73:    xsi_set_current_line(49, ng0);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    t21 = (t0 + 1848U);
    t28 = *((char **)t21);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_mod(t30, 32, t22, 32, t28, 32);
    t21 = (t0 + 3528);
    t29 = (t0 + 3528);
    t36 = (t29 + 72U);
    t37 = *((char **)t36);
    t43 = ((char*)((ng8)));
    t44 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t45, t72, t73, ((int*)(t37)), 2, t43, 32, 1, t44, 32, 1);
    t46 = (t45 + 4);
    t31 = *((unsigned int *)t46);
    t76 = (!(t31));
    t47 = (t72 + 4);
    t32 = *((unsigned int *)t47);
    t77 = (!(t32));
    t78 = (t76 && t77);
    t60 = (t73 + 4);
    t33 = *((unsigned int *)t60);
    t79 = (!(t33));
    t80 = (t78 && t79);
    if (t80 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_divide(t6, 32, t3, 32, t4, 32);
    t2 = (t0 + 3528);
    t5 = (t0 + 3528);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng10)));
    t22 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t30, t45, t72, ((int*)(t8)), 2, t21, 32, 1, t22, 32, 1);
    t28 = (t30 + 4);
    t9 = *((unsigned int *)t28);
    t76 = (!(t9));
    t29 = (t45 + 4);
    t10 = *((unsigned int *)t29);
    t77 = (!(t10));
    t78 = (t76 && t77);
    t36 = (t72 + 4);
    t11 = *((unsigned int *)t36);
    t79 = (!(t11));
    t80 = (t78 && t79);
    if (t80 == 1)
        goto LAB76;

LAB77:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB72;

LAB74:    t34 = *((unsigned int *)t73);
    t81 = (t34 + 0);
    t35 = *((unsigned int *)t45);
    t38 = *((unsigned int *)t72);
    t82 = (t35 - t38);
    t83 = (t82 + 1);
    xsi_vlogvar_wait_assign_value(t21, t30, t81, *((unsigned int *)t72), t83, 0LL);
    goto LAB75;

LAB76:    t12 = *((unsigned int *)t72);
    t81 = (t12 + 0);
    t13 = *((unsigned int *)t30);
    t14 = *((unsigned int *)t45);
    t82 = (t13 - t14);
    t83 = (t82 + 1);
    xsi_vlogvar_wait_assign_value(t2, t6, t81, *((unsigned int *)t45), t83, 0LL);
    goto LAB77;

LAB80:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(53, ng0);

LAB85:    xsi_set_current_line(54, ng0);
    t36 = (t0 + 2008U);
    t37 = *((char **)t36);
    t36 = (t0 + 1968U);
    t43 = (t36 + 72U);
    t44 = *((char **)t43);
    t46 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t45, 32, t37, t44, 2, t46, 32, 1);
    t47 = ((char*)((ng1)));
    memset(t72, 0, 8);
    t60 = (t45 + 4);
    t61 = (t47 + 4);
    t31 = *((unsigned int *)t45);
    t32 = *((unsigned int *)t47);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t60);
    t35 = *((unsigned int *)t61);
    t38 = (t34 ^ t35);
    t39 = (t33 | t38);
    t40 = *((unsigned int *)t60);
    t41 = *((unsigned int *)t61);
    t42 = (t40 | t41);
    t48 = (~(t42));
    t49 = (t39 & t48);
    if (t49 != 0)
        goto LAB89;

LAB86:    if (t42 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t72) = 1;

LAB89:    t68 = (t72 + 4);
    t50 = *((unsigned int *)t68);
    t51 = (~(t50));
    t52 = *((unsigned int *)t72);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(56, ng0);

LAB94:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB92:    goto LAB84;

LAB88:    t67 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(54, ng0);

LAB93:    xsi_set_current_line(55, ng0);
    t84 = (t0 + 2168U);
    t85 = *((char **)t84);
    t84 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t84, t85, 0, 0, 32, 0LL);
    goto LAB92;

LAB99:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(63, ng0);

LAB104:    xsi_set_current_line(64, ng0);
    t28 = (t0 + 3528);
    t29 = (t28 + 56U);
    t36 = *((char **)t29);
    memset(t30, 0, 8);
    t37 = (t30 + 4);
    t43 = (t36 + 8);
    t44 = (t36 + 12);
    t31 = *((unsigned int *)t43);
    t32 = (t31 >> 0);
    *((unsigned int *)t30) = t32;
    t33 = *((unsigned int *)t44);
    t34 = (t33 >> 0);
    *((unsigned int *)t37) = t34;
    t35 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t35 & 4294967295U);
    t38 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t38 & 4294967295U);
    t46 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t46, t30, 0, 0, 32, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3528);
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
    t8 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB103;

}


extern void work_m_00000000002774413980_4111503280_init()
{
	static char *pe[] = {(void *)Always_23_0,(void *)Always_27_1};
	xsi_register_didat("work_m_00000000002774413980_4111503280", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002774413980_4111503280.didat");
	xsi_register_executes(pe);
}
