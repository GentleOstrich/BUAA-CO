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
static const char *ng0 = "D:/University/Study/2022fall/co/P_7/temp/DATAEXT.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {16, 0};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {24, 0};



static void Always_7_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t37[8];
    char t59[8];
    char t60[8];
    char t70[8];
    char t74[8];
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
    unsigned int t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t71;
    char *t72;
    char *t73;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(7, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(7, ng0);

LAB5:    xsi_set_current_line(8, ng0);
    t4 = (t0 + 1368U);
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

LAB11:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
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
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1368U);
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

LAB36:    xsi_set_current_line(26, ng0);

LAB64:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB37:
LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(8, ng0);

LAB13:    xsi_set_current_line(9, ng0);
    t28 = (t0 + 1208U);
    t29 = *((char **)t28);
    t28 = (t0 + 1768);
    xsi_vlogvar_assign_value(t28, t29, 0, 0, 32);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(10, ng0);

LAB21:    xsi_set_current_line(11, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t21 = (t30 + 4);
    t28 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (t31 >> 1);
    t33 = (t32 & 1);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t28);
    t35 = (t34 >> 1);
    t36 = (t35 & 1);
    *((unsigned int *)t21) = t36;
    t29 = ((char*)((ng2)));
    memset(t37, 0, 8);
    t38 = (t30 + 4);
    t39 = (t29 + 4);
    t40 = *((unsigned int *)t30);
    t41 = *((unsigned int *)t29);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB25;

LAB22:    if (t49 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t37) = 1;

LAB25:    t53 = (t37 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(13, ng0);

LAB30:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 65535U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 65535U);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t59, 0, 8);
    t7 = (t59 + 4);
    t21 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 15);
    t17 = (t16 & 1);
    *((unsigned int *)t59) = t17;
    t18 = *((unsigned int *)t21);
    t19 = (t18 >> 15);
    t20 = (t19 & 1);
    *((unsigned int *)t7) = t20;
    xsi_vlog_mul_concat(t37, 16, 1, t5, 1U, t59, 1);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t37, 16, t30, 16);
    t22 = (t0 + 1768);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);

LAB28:    goto LAB20;

LAB24:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(11, ng0);

LAB29:    xsi_set_current_line(12, ng0);
    t61 = (t0 + 1208U);
    t62 = *((char **)t61);
    memset(t60, 0, 8);
    t61 = (t60 + 4);
    t63 = (t62 + 4);
    t64 = *((unsigned int *)t62);
    t65 = (t64 >> 16);
    *((unsigned int *)t60) = t65;
    t66 = *((unsigned int *)t63);
    t67 = (t66 >> 16);
    *((unsigned int *)t61) = t67;
    t68 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t68 & 65535U);
    t69 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t69 & 65535U);
    t71 = ((char*)((ng3)));
    t72 = (t0 + 1208U);
    t73 = *((char **)t72);
    memset(t74, 0, 8);
    t72 = (t74 + 4);
    t75 = (t73 + 4);
    t76 = *((unsigned int *)t73);
    t77 = (t76 >> 31);
    t78 = (t77 & 1);
    *((unsigned int *)t74) = t78;
    t79 = *((unsigned int *)t75);
    t80 = (t79 >> 31);
    t81 = (t80 & 1);
    *((unsigned int *)t72) = t81;
    xsi_vlog_mul_concat(t70, 16, 1, t71, 1U, t74, 1);
    xsi_vlogtype_concat(t59, 32, 32, 2U, t70, 16, t60, 16);
    t82 = (t0 + 1768);
    xsi_vlogvar_assign_value(t82, t59, 0, 0, 32);
    goto LAB28;

LAB33:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(16, ng0);

LAB38:    xsi_set_current_line(17, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng1)));
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t29 = (t21 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t21);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t29);
    t36 = (t34 ^ t35);
    t40 = (t33 | t36);
    t41 = *((unsigned int *)t28);
    t42 = *((unsigned int *)t29);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB42;

LAB39:    if (t43 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t30) = 1;

LAB42:    t39 = (t30 + 4);
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = *((unsigned int *)t30);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
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

LAB52:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1048U);
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
        goto LAB58;

LAB55:    if (t18 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t6) = 1;

LAB58:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(23, ng0);

LAB63:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 24);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 24);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t5 = ((char*)((ng5)));
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t59, 0, 8);
    t7 = (t59 + 4);
    t21 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t59) = t17;
    t18 = *((unsigned int *)t21);
    t19 = (t18 >> 31);
    t20 = (t19 & 1);
    *((unsigned int *)t7) = t20;
    xsi_vlog_mul_concat(t37, 24, 1, t5, 1U, t59, 1);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t37, 24, t30, 8);
    t22 = (t0 + 1768);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);

LAB61:
LAB53:
LAB45:    goto LAB37;

LAB41:    t38 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(17, ng0);

LAB46:    xsi_set_current_line(18, ng0);
    t52 = (t0 + 1208U);
    t53 = *((char **)t52);
    memset(t59, 0, 8);
    t52 = (t59 + 4);
    t61 = (t53 + 4);
    t51 = *((unsigned int *)t53);
    t54 = (t51 >> 0);
    *((unsigned int *)t59) = t54;
    t55 = *((unsigned int *)t61);
    t56 = (t55 >> 0);
    *((unsigned int *)t52) = t56;
    t57 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t57 & 255U);
    t58 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t58 & 255U);
    t62 = ((char*)((ng5)));
    t63 = (t0 + 1208U);
    t71 = *((char **)t63);
    memset(t70, 0, 8);
    t63 = (t70 + 4);
    t72 = (t71 + 4);
    t64 = *((unsigned int *)t71);
    t65 = (t64 >> 7);
    t66 = (t65 & 1);
    *((unsigned int *)t70) = t66;
    t67 = *((unsigned int *)t72);
    t68 = (t67 >> 7);
    t69 = (t68 & 1);
    *((unsigned int *)t63) = t69;
    xsi_vlog_mul_concat(t60, 24, 1, t62, 1U, t70, 1);
    xsi_vlogtype_concat(t37, 32, 32, 2U, t60, 24, t59, 8);
    t73 = (t0 + 1768);
    xsi_vlogvar_assign_value(t73, t37, 0, 0, 32);
    goto LAB45;

LAB49:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(19, ng0);

LAB54:    xsi_set_current_line(20, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    memset(t37, 0, 8);
    t21 = (t37 + 4);
    t28 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (t31 >> 8);
    *((unsigned int *)t37) = t32;
    t33 = *((unsigned int *)t28);
    t34 = (t33 >> 8);
    *((unsigned int *)t21) = t34;
    t35 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t35 & 255U);
    t36 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t36 & 255U);
    t29 = ((char*)((ng5)));
    t38 = (t0 + 1208U);
    t39 = *((char **)t38);
    memset(t60, 0, 8);
    t38 = (t60 + 4);
    t52 = (t39 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (t40 >> 15);
    t42 = (t41 & 1);
    *((unsigned int *)t60) = t42;
    t43 = *((unsigned int *)t52);
    t44 = (t43 >> 15);
    t45 = (t44 & 1);
    *((unsigned int *)t38) = t45;
    xsi_vlog_mul_concat(t59, 24, 1, t29, 1U, t60, 1);
    xsi_vlogtype_concat(t30, 32, 32, 2U, t59, 24, t37, 8);
    t53 = (t0 + 1768);
    xsi_vlogvar_assign_value(t53, t30, 0, 0, 32);
    goto LAB53;

LAB57:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(21, ng0);

LAB62:    xsi_set_current_line(22, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    memset(t37, 0, 8);
    t21 = (t37 + 4);
    t28 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (t31 >> 16);
    *((unsigned int *)t37) = t32;
    t33 = *((unsigned int *)t28);
    t34 = (t33 >> 16);
    *((unsigned int *)t21) = t34;
    t35 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t35 & 255U);
    t36 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t36 & 255U);
    t29 = ((char*)((ng5)));
    t38 = (t0 + 1208U);
    t39 = *((char **)t38);
    memset(t60, 0, 8);
    t38 = (t60 + 4);
    t52 = (t39 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (t40 >> 23);
    t42 = (t41 & 1);
    *((unsigned int *)t60) = t42;
    t43 = *((unsigned int *)t52);
    t44 = (t43 >> 23);
    t45 = (t44 & 1);
    *((unsigned int *)t38) = t45;
    xsi_vlog_mul_concat(t59, 24, 1, t29, 1U, t60, 1);
    xsi_vlogtype_concat(t30, 32, 32, 2U, t59, 24, t37, 8);
    t53 = (t0 + 1768);
    xsi_vlogvar_assign_value(t53, t30, 0, 0, 32);
    goto LAB61;

}


extern void work_m_00000000003242446445_0938077668_init()
{
	static char *pe[] = {(void *)Always_7_0};
	xsi_register_didat("work_m_00000000003242446445_0938077668", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003242446445_0938077668.didat");
	xsi_register_executes(pe);
}
