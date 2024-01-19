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
static const char *ng0 = "D:/University/Study/2022fall/co/P_5/q3/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {0, 0};
static int ng6[] = {32, 0};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {4U, 0U};



static void Always_12_0(char *t0)
{
    char t10[8];
    char t36[8];
    char t41[8];
    char t52[8];
    char t64[8];
    char t77[8];
    char t83[8];
    char t120[8];
    char t131[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
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
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t65;
    unsigned int t66;
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
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(14, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 1368U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(15, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB17;

LAB11:    xsi_set_current_line(16, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1368U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB18;

LAB19:
LAB20:    t35 = (t0 + 1768);
    xsi_vlogvar_assign_value(t35, t10, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(18, ng0);

LAB21:    xsi_set_current_line(19, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(21, ng0);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB22:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng6)));
    memset(t10, 0, 8);
    xsi_vlog_signed_less(t10, 32, t4, 32, t7, 32);
    t8 = (t10 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB17;

LAB15:    xsi_set_current_line(34, ng0);

LAB44:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t7);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t8 = ((char*)((ng2)));
    memset(t36, 0, 8);
    t9 = (t10 + 4);
    t21 = (t8 + 4);
    t17 = *((unsigned int *)t10);
    t18 = *((unsigned int *)t8);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t21);
    t24 = (t20 ^ t23);
    t25 = (t19 | t24);
    t27 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t21);
    t29 = (t27 | t28);
    t31 = (~(t29));
    t32 = (t25 & t31);
    if (t32 != 0)
        goto LAB48;

LAB45:    if (t29 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t36) = 1;

LAB48:    memset(t41, 0, 8);
    t35 = (t36 + 4);
    t33 = *((unsigned int *)t35);
    t34 = (~(t33));
    t46 = *((unsigned int *)t36);
    t47 = (t46 & t34);
    t54 = (t47 & 1U);
    if (t54 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t35) != 0)
        goto LAB51;

LAB52:    t38 = (t41 + 4);
    t55 = *((unsigned int *)t41);
    t56 = *((unsigned int *)t38);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB53;

LAB54:    memcpy(t83, t41, 8);

LAB55:    t111 = (t83 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t83);
    t115 = (t114 & t113);
    t116 = (t115 != 0);
    if (t116 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t7 = ((char*)((ng2)));
    memset(t36, 0, 8);
    t8 = (t10 + 4);
    t9 = (t7 + 4);
    t17 = *((unsigned int *)t10);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t9);
    t24 = (t20 ^ t23);
    t25 = (t19 | t24);
    t27 = *((unsigned int *)t8);
    t28 = *((unsigned int *)t9);
    t29 = (t27 | t28);
    t31 = (~(t29));
    t32 = (t25 & t31);
    if (t32 != 0)
        goto LAB74;

LAB71:    if (t29 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t36) = 1;

LAB74:    memset(t41, 0, 8);
    t22 = (t36 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (~(t33));
    t46 = *((unsigned int *)t36);
    t47 = (t46 & t34);
    t54 = (t47 & 1U);
    if (t54 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t22) != 0)
        goto LAB77;

LAB78:    t37 = (t41 + 4);
    t55 = *((unsigned int *)t41);
    t56 = *((unsigned int *)t37);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB79;

LAB80:    memcpy(t83, t41, 8);

LAB81:    t96 = (t83 + 4);
    t112 = *((unsigned int *)t96);
    t113 = (~(t112));
    t114 = *((unsigned int *)t83);
    t115 = (t114 & t113);
    t116 = (t115 != 0);
    if (t116 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 31);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t7 = ((char*)((ng1)));
    memset(t36, 0, 8);
    t8 = (t10 + 4);
    t9 = (t7 + 4);
    t17 = *((unsigned int *)t10);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t9);
    t24 = (t20 ^ t23);
    t25 = (t19 | t24);
    t27 = *((unsigned int *)t8);
    t28 = *((unsigned int *)t9);
    t29 = (t27 | t28);
    t31 = (~(t29));
    t32 = (t25 & t31);
    if (t32 != 0)
        goto LAB110;

LAB107:    if (t29 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t36) = 1;

LAB110:    memset(t41, 0, 8);
    t22 = (t36 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (~(t33));
    t46 = *((unsigned int *)t36);
    t47 = (t46 & t34);
    t54 = (t47 & 1U);
    if (t54 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t22) != 0)
        goto LAB113;

LAB114:    t37 = (t41 + 4);
    t55 = *((unsigned int *)t41);
    t56 = *((unsigned int *)t37);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB115;

LAB116:    memcpy(t83, t41, 8);

LAB117:    t96 = (t83 + 4);
    t112 = *((unsigned int *)t96);
    t113 = (~(t112));
    t114 = *((unsigned int *)t83);
    t115 = (t114 & t113);
    t116 = (t115 != 0);
    if (t116 > 0)
        goto LAB129;

LAB130:    xsi_set_current_line(45, ng0);

LAB133:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB135;

LAB134:    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB135;

LAB138:    if (*((unsigned int *)t3) > *((unsigned int *)t4))
        goto LAB136;

LAB137:    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB139;

LAB140:    xsi_set_current_line(48, ng0);

LAB143:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t3, 32, t4, 32);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 32);

LAB141:
LAB131:
LAB95:
LAB69:    goto LAB17;

LAB18:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t31);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t32);
    goto LAB20;

LAB23:    xsi_set_current_line(21, ng0);

LAB25:    xsi_set_current_line(22, ng0);
    t9 = (t0 + 1208U);
    t21 = *((char **)t9);
    t9 = (t0 + 1168U);
    t22 = (t9 + 72U);
    t35 = *((char **)t22);
    t37 = (t0 + 2248);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    xsi_vlog_generic_get_index_select_value(t36, 32, t21, t35, 2, t39, 32, 1);
    t40 = ((char*)((ng7)));
    memset(t41, 0, 8);
    t42 = (t36 + 4);
    t43 = (t40 + 4);
    t16 = *((unsigned int *)t36);
    t17 = *((unsigned int *)t40);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t42);
    t20 = *((unsigned int *)t43);
    t23 = (t19 ^ t20);
    t24 = (t18 | t23);
    t25 = *((unsigned int *)t42);
    t27 = *((unsigned int *)t43);
    t28 = (t25 | t27);
    t29 = (~(t28));
    t31 = (t24 & t29);
    if (t31 != 0)
        goto LAB29;

LAB26:    if (t28 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t41) = 1;

LAB29:    t45 = (t41 + 4);
    t32 = *((unsigned int *)t45);
    t33 = (~(t32));
    t34 = *((unsigned int *)t41);
    t46 = (t34 & t33);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(27, ng0);

LAB43:    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB32:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t7, 32);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB22;

LAB28:    t44 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(22, ng0);

LAB33:    xsi_set_current_line(23, ng0);
    t48 = (t0 + 2088);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = ((char*)((ng7)));
    memset(t52, 0, 8);
    xsi_vlog_unsigned_add(t52, 32, t50, 32, t51, 32);
    t53 = (t0 + 2088);
    xsi_vlogvar_assign_value(t53, t52, 0, 0, 32);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1928);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t21 = (t4 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB35;

LAB34:    t22 = (t9 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t4) > *((unsigned int *)t9))
        goto LAB36;

LAB37:    t37 = (t10 + 4);
    t11 = *((unsigned int *)t37);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB32;

LAB35:    t35 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t10) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(24, ng0);

LAB42:    xsi_set_current_line(25, ng0);
    t38 = (t0 + 2088);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t42 = (t0 + 1928);
    xsi_vlogvar_assign_value(t42, t40, 0, 0, 32);
    goto LAB41;

LAB47:    t22 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t41) = 1;
    goto LAB52;

LAB51:    t37 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB52;

LAB53:    t39 = (t0 + 1368U);
    t40 = *((char **)t39);
    memset(t52, 0, 8);
    t39 = (t52 + 4);
    t42 = (t40 + 4);
    t58 = *((unsigned int *)t40);
    t59 = (t58 >> 31);
    t60 = (t59 & 1);
    *((unsigned int *)t52) = t60;
    t61 = *((unsigned int *)t42);
    t62 = (t61 >> 31);
    t63 = (t62 & 1);
    *((unsigned int *)t39) = t63;
    t43 = ((char*)((ng1)));
    memset(t64, 0, 8);
    t44 = (t52 + 4);
    t45 = (t43 + 4);
    t65 = *((unsigned int *)t52);
    t66 = *((unsigned int *)t43);
    t67 = (t65 ^ t66);
    t68 = *((unsigned int *)t44);
    t69 = *((unsigned int *)t45);
    t70 = (t68 ^ t69);
    t71 = (t67 | t70);
    t72 = *((unsigned int *)t44);
    t73 = *((unsigned int *)t45);
    t74 = (t72 | t73);
    t75 = (~(t74));
    t76 = (t71 & t75);
    if (t76 != 0)
        goto LAB59;

LAB56:    if (t74 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t64) = 1;

LAB59:    memset(t77, 0, 8);
    t49 = (t64 + 4);
    t78 = *((unsigned int *)t49);
    t79 = (~(t78));
    t80 = *((unsigned int *)t64);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t49) != 0)
        goto LAB62;

LAB63:    t84 = *((unsigned int *)t41);
    t85 = *((unsigned int *)t77);
    t86 = (t84 & t85);
    *((unsigned int *)t83) = t86;
    t51 = (t41 + 4);
    t53 = (t77 + 4);
    t87 = (t83 + 4);
    t88 = *((unsigned int *)t51);
    t89 = *((unsigned int *)t53);
    t90 = (t88 | t89);
    *((unsigned int *)t87) = t90;
    t91 = *((unsigned int *)t87);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB55;

LAB58:    t48 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t77) = 1;
    goto LAB63;

LAB62:    t50 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB63;

LAB64:    t93 = *((unsigned int *)t83);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t83) = (t93 | t94);
    t95 = (t41 + 4);
    t96 = (t77 + 4);
    t97 = *((unsigned int *)t41);
    t98 = (~(t97));
    t99 = *((unsigned int *)t95);
    t100 = (~(t99));
    t101 = *((unsigned int *)t77);
    t102 = (~(t101));
    t103 = *((unsigned int *)t96);
    t104 = (~(t103));
    t26 = (t98 & t100);
    t30 = (t102 & t104);
    t105 = (~(t26));
    t106 = (~(t30));
    t107 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t107 & t105);
    t108 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t108 & t106);
    t109 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t109 & t105);
    t110 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t110 & t106);
    goto LAB66;

LAB67:    xsi_set_current_line(35, ng0);

LAB70:    xsi_set_current_line(36, ng0);
    t117 = (t0 + 1368U);
    t118 = *((char **)t117);
    t117 = (t0 + 1208U);
    t119 = *((char **)t117);
    memset(t120, 0, 8);
    xsi_vlog_unsigned_minus(t120, 32, t118, 32, t119, 32);
    t117 = (t0 + 1768);
    xsi_vlogvar_assign_value(t117, t120, 0, 0, 32);
    goto LAB69;

LAB73:    t21 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB74;

LAB75:    *((unsigned int *)t41) = 1;
    goto LAB78;

LAB77:    t35 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB78;

LAB79:    t38 = (t0 + 1368U);
    t39 = *((char **)t38);
    memset(t52, 0, 8);
    t38 = (t52 + 4);
    t40 = (t39 + 4);
    t58 = *((unsigned int *)t39);
    t59 = (t58 >> 31);
    t60 = (t59 & 1);
    *((unsigned int *)t52) = t60;
    t61 = *((unsigned int *)t40);
    t62 = (t61 >> 31);
    t63 = (t62 & 1);
    *((unsigned int *)t38) = t63;
    t42 = ((char*)((ng2)));
    memset(t64, 0, 8);
    t43 = (t52 + 4);
    t44 = (t42 + 4);
    t65 = *((unsigned int *)t52);
    t66 = *((unsigned int *)t42);
    t67 = (t65 ^ t66);
    t68 = *((unsigned int *)t43);
    t69 = *((unsigned int *)t44);
    t70 = (t68 ^ t69);
    t71 = (t67 | t70);
    t72 = *((unsigned int *)t43);
    t73 = *((unsigned int *)t44);
    t74 = (t72 | t73);
    t75 = (~(t74));
    t76 = (t71 & t75);
    if (t76 != 0)
        goto LAB85;

LAB82:    if (t74 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t64) = 1;

LAB85:    memset(t77, 0, 8);
    t48 = (t64 + 4);
    t78 = *((unsigned int *)t48);
    t79 = (~(t78));
    t80 = *((unsigned int *)t64);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t48) != 0)
        goto LAB88;

LAB89:    t84 = *((unsigned int *)t41);
    t85 = *((unsigned int *)t77);
    t86 = (t84 & t85);
    *((unsigned int *)t83) = t86;
    t50 = (t41 + 4);
    t51 = (t77 + 4);
    t53 = (t83 + 4);
    t88 = *((unsigned int *)t50);
    t89 = *((unsigned int *)t51);
    t90 = (t88 | t89);
    *((unsigned int *)t53) = t90;
    t91 = *((unsigned int *)t53);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB90;

LAB91:
LAB92:    goto LAB81;

LAB84:    t45 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB85;

LAB86:    *((unsigned int *)t77) = 1;
    goto LAB89;

LAB88:    t49 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB89;

LAB90:    t93 = *((unsigned int *)t83);
    t94 = *((unsigned int *)t53);
    *((unsigned int *)t83) = (t93 | t94);
    t87 = (t41 + 4);
    t95 = (t77 + 4);
    t97 = *((unsigned int *)t41);
    t98 = (~(t97));
    t99 = *((unsigned int *)t87);
    t100 = (~(t99));
    t101 = *((unsigned int *)t77);
    t102 = (~(t101));
    t103 = *((unsigned int *)t95);
    t104 = (~(t103));
    t6 = (t98 & t100);
    t26 = (t102 & t104);
    t105 = (~(t6));
    t106 = (~(t26));
    t107 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t107 & t105);
    t108 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t108 & t106);
    t109 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t109 & t105);
    t110 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t110 & t106);
    goto LAB92;

LAB93:    xsi_set_current_line(37, ng0);

LAB96:    xsi_set_current_line(38, ng0);
    t111 = (t0 + 1208U);
    t117 = *((char **)t111);
    t111 = (t0 + 1368U);
    t118 = *((char **)t111);
    memset(t120, 0, 8);
    t111 = (t117 + 4);
    if (*((unsigned int *)t111) != 0)
        goto LAB98;

LAB97:    t119 = (t118 + 4);
    if (*((unsigned int *)t119) != 0)
        goto LAB98;

LAB101:    if (*((unsigned int *)t117) > *((unsigned int *)t118))
        goto LAB99;

LAB100:    t122 = (t120 + 4);
    t123 = *((unsigned int *)t122);
    t124 = (~(t123));
    t125 = *((unsigned int *)t120);
    t126 = (t125 & t124);
    t127 = (t126 != 0);
    if (t127 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(40, ng0);

LAB106:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t3, 32, t4, 32);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t10, 0, 0, 32);

LAB104:    goto LAB95;

LAB98:    t121 = (t120 + 4);
    *((unsigned int *)t120) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB100;

LAB99:    *((unsigned int *)t120) = 1;
    goto LAB100;

LAB102:    xsi_set_current_line(38, ng0);

LAB105:    xsi_set_current_line(39, ng0);
    t128 = (t0 + 1208U);
    t129 = *((char **)t128);
    t128 = (t0 + 1368U);
    t130 = *((char **)t128);
    memset(t131, 0, 8);
    xsi_vlog_unsigned_minus(t131, 32, t129, 32, t130, 32);
    t128 = (t0 + 1768);
    xsi_vlogvar_assign_value(t128, t131, 0, 0, 32);
    goto LAB104;

LAB109:    t21 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB110;

LAB111:    *((unsigned int *)t41) = 1;
    goto LAB114;

LAB113:    t35 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB114;

LAB115:    t38 = (t0 + 1368U);
    t39 = *((char **)t38);
    memset(t52, 0, 8);
    t38 = (t52 + 4);
    t40 = (t39 + 4);
    t58 = *((unsigned int *)t39);
    t59 = (t58 >> 31);
    t60 = (t59 & 1);
    *((unsigned int *)t52) = t60;
    t61 = *((unsigned int *)t40);
    t62 = (t61 >> 31);
    t63 = (t62 & 1);
    *((unsigned int *)t38) = t63;
    t42 = ((char*)((ng2)));
    memset(t64, 0, 8);
    t43 = (t52 + 4);
    t44 = (t42 + 4);
    t65 = *((unsigned int *)t52);
    t66 = *((unsigned int *)t42);
    t67 = (t65 ^ t66);
    t68 = *((unsigned int *)t43);
    t69 = *((unsigned int *)t44);
    t70 = (t68 ^ t69);
    t71 = (t67 | t70);
    t72 = *((unsigned int *)t43);
    t73 = *((unsigned int *)t44);
    t74 = (t72 | t73);
    t75 = (~(t74));
    t76 = (t71 & t75);
    if (t76 != 0)
        goto LAB121;

LAB118:    if (t74 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t64) = 1;

LAB121:    memset(t77, 0, 8);
    t48 = (t64 + 4);
    t78 = *((unsigned int *)t48);
    t79 = (~(t78));
    t80 = *((unsigned int *)t64);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t48) != 0)
        goto LAB124;

LAB125:    t84 = *((unsigned int *)t41);
    t85 = *((unsigned int *)t77);
    t86 = (t84 & t85);
    *((unsigned int *)t83) = t86;
    t50 = (t41 + 4);
    t51 = (t77 + 4);
    t53 = (t83 + 4);
    t88 = *((unsigned int *)t50);
    t89 = *((unsigned int *)t51);
    t90 = (t88 | t89);
    *((unsigned int *)t53) = t90;
    t91 = *((unsigned int *)t53);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB126;

LAB127:
LAB128:    goto LAB117;

LAB120:    t45 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB121;

LAB122:    *((unsigned int *)t77) = 1;
    goto LAB125;

LAB124:    t49 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB125;

LAB126:    t93 = *((unsigned int *)t83);
    t94 = *((unsigned int *)t53);
    *((unsigned int *)t83) = (t93 | t94);
    t87 = (t41 + 4);
    t95 = (t77 + 4);
    t97 = *((unsigned int *)t41);
    t98 = (~(t97));
    t99 = *((unsigned int *)t87);
    t100 = (~(t99));
    t101 = *((unsigned int *)t77);
    t102 = (~(t101));
    t103 = *((unsigned int *)t95);
    t104 = (~(t103));
    t6 = (t98 & t100);
    t26 = (t102 & t104);
    t105 = (~(t6));
    t106 = (~(t26));
    t107 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t107 & t105);
    t108 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t108 & t106);
    t109 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t109 & t105);
    t110 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t110 & t106);
    goto LAB128;

LAB129:    xsi_set_current_line(43, ng0);

LAB132:    xsi_set_current_line(44, ng0);
    t111 = (t0 + 1208U);
    t117 = *((char **)t111);
    t111 = (t0 + 1368U);
    t118 = *((char **)t111);
    memset(t120, 0, 8);
    xsi_vlog_unsigned_minus(t120, 32, t117, 32, t118, 32);
    t111 = (t0 + 1768);
    xsi_vlogvar_assign_value(t111, t120, 0, 0, 32);
    goto LAB131;

LAB135:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB137;

LAB136:    *((unsigned int *)t10) = 1;
    goto LAB137;

LAB139:    xsi_set_current_line(46, ng0);

LAB142:    xsi_set_current_line(47, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1368U);
    t35 = *((char **)t21);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_minus(t36, 32, t22, 32, t35, 32);
    t21 = (t0 + 1768);
    xsi_vlogvar_assign_value(t21, t36, 0, 0, 32);
    goto LAB141;

}


extern void work_m_00000000002787205954_0886308060_init()
{
	static char *pe[] = {(void *)Always_12_0};
	xsi_register_didat("work_m_00000000002787205954_0886308060", "isim/tb_isim_beh.exe.sim/work/m_00000000002787205954_0886308060.didat");
	xsi_register_executes(pe);
}
