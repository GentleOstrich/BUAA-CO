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
static const char *ng0 = "D:/University/Study/2022fall/co/P_7/temp/D.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {16768U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {12288U, 0U};
static unsigned int ng6[] = {28668U, 0U};
static unsigned int ng7[] = {4U, 0U};



static void Always_18_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t32[8];
    char t44[8];
    char t48[8];
    char t56[8];
    char t84[8];
    char t99[8];
    char t103[8];
    char t111[8];
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
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t100;
    char *t101;
    char *t102;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(19, ng0);
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

LAB11:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
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

LAB19:    xsi_set_current_line(29, ng0);

LAB22:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
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
        goto LAB26;

LAB23:    if (t18 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t6) = 1;

LAB26:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
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

LAB36:    xsi_set_current_line(40, ng0);

LAB39:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);
    t5 = ((char*)((ng4)));
    memset(t30, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t31 = (t23 & t27);
    if (t31 != 0)
        goto LAB41;

LAB40:    if (t26 != 0)
        goto LAB42;

LAB43:    memset(t32, 0, 8);
    t22 = (t30 + 4);
    t33 = *((unsigned int *)t22);
    t34 = (~(t33));
    t35 = *((unsigned int *)t30);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t22) != 0)
        goto LAB46;

LAB47:    t29 = (t32 + 4);
    t38 = *((unsigned int *)t32);
    t39 = (!(t38));
    t40 = *((unsigned int *)t29);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB48;

LAB49:    memcpy(t56, t32, 8);

LAB50:    memset(t84, 0, 8);
    t85 = (t56 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t56);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t85) != 0)
        goto LAB65;

LAB66:    t92 = (t84 + 4);
    t93 = *((unsigned int *)t84);
    t94 = (!(t93));
    t95 = *((unsigned int *)t92);
    t96 = (t94 || t95);
    if (t96 > 0)
        goto LAB67;

LAB68:    memcpy(t111, t84, 8);

LAB69:    t139 = (t111 + 4);
    t140 = *((unsigned int *)t139);
    t141 = (~(t140));
    t142 = *((unsigned int *)t111);
    t143 = (t142 & t141);
    t144 = (t143 != 0);
    if (t144 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(47, ng0);

LAB86:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB84:
LAB37:
LAB29:
LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(19, ng0);

LAB13:    xsi_set_current_line(20, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(24, ng0);

LAB21:    xsi_set_current_line(25, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 32, 0LL);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB20;

LAB25:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(30, ng0);

LAB30:    xsi_set_current_line(31, ng0);
    t21 = (t0 + 2728);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 32, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB29;

LAB33:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(35, ng0);

LAB38:    xsi_set_current_line(36, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 32, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB37;

LAB41:    *((unsigned int *)t30) = 1;
    goto LAB43;

LAB42:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t32) = 1;
    goto LAB47;

LAB46:    t28 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB47;

LAB48:    t42 = (t0 + 1048U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng5)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    if (*((unsigned int *)t45) != 0)
        goto LAB52;

LAB51:    t46 = (t42 + 4);
    if (*((unsigned int *)t46) != 0)
        goto LAB52;

LAB55:    if (*((unsigned int *)t43) < *((unsigned int *)t42))
        goto LAB53;

LAB54:    memset(t48, 0, 8);
    t49 = (t44 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t44);
    t53 = (t52 & t51);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t49) != 0)
        goto LAB58;

LAB59:    t57 = *((unsigned int *)t32);
    t58 = *((unsigned int *)t48);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = (t32 + 4);
    t61 = (t48 + 4);
    t62 = (t56 + 4);
    t63 = *((unsigned int *)t60);
    t64 = *((unsigned int *)t61);
    t65 = (t63 | t64);
    *((unsigned int *)t62) = t65;
    t66 = *((unsigned int *)t62);
    t67 = (t66 != 0);
    if (t67 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB50;

LAB52:    t47 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB54;

LAB53:    *((unsigned int *)t44) = 1;
    goto LAB54;

LAB56:    *((unsigned int *)t48) = 1;
    goto LAB59;

LAB58:    t55 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB59;

LAB60:    t68 = *((unsigned int *)t56);
    t69 = *((unsigned int *)t62);
    *((unsigned int *)t56) = (t68 | t69);
    t70 = (t32 + 4);
    t71 = (t48 + 4);
    t72 = *((unsigned int *)t70);
    t73 = (~(t72));
    t74 = *((unsigned int *)t32);
    t75 = (t74 & t73);
    t76 = *((unsigned int *)t71);
    t77 = (~(t76));
    t78 = *((unsigned int *)t48);
    t79 = (t78 & t77);
    t80 = (~(t75));
    t81 = (~(t79));
    t82 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t82 & t80);
    t83 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t83 & t81);
    goto LAB62;

LAB63:    *((unsigned int *)t84) = 1;
    goto LAB66;

LAB65:    t91 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB66;

LAB67:    t97 = (t0 + 1048U);
    t98 = *((char **)t97);
    t97 = ((char*)((ng6)));
    memset(t99, 0, 8);
    t100 = (t98 + 4);
    if (*((unsigned int *)t100) != 0)
        goto LAB71;

LAB70:    t101 = (t97 + 4);
    if (*((unsigned int *)t101) != 0)
        goto LAB71;

LAB74:    if (*((unsigned int *)t98) > *((unsigned int *)t97))
        goto LAB72;

LAB73:    memset(t103, 0, 8);
    t104 = (t99 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t99);
    t108 = (t107 & t106);
    t109 = (t108 & 1U);
    if (t109 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t104) != 0)
        goto LAB77;

LAB78:    t112 = *((unsigned int *)t84);
    t113 = *((unsigned int *)t103);
    t114 = (t112 | t113);
    *((unsigned int *)t111) = t114;
    t115 = (t84 + 4);
    t116 = (t103 + 4);
    t117 = (t111 + 4);
    t118 = *((unsigned int *)t115);
    t119 = *((unsigned int *)t116);
    t120 = (t118 | t119);
    *((unsigned int *)t117) = t120;
    t121 = *((unsigned int *)t117);
    t122 = (t121 != 0);
    if (t122 == 1)
        goto LAB79;

LAB80:
LAB81:    goto LAB69;

LAB71:    t102 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t102) = 1;
    goto LAB73;

LAB72:    *((unsigned int *)t99) = 1;
    goto LAB73;

LAB75:    *((unsigned int *)t103) = 1;
    goto LAB78;

LAB77:    t110 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB78;

LAB79:    t123 = *((unsigned int *)t111);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t111) = (t123 | t124);
    t125 = (t84 + 4);
    t126 = (t103 + 4);
    t127 = *((unsigned int *)t125);
    t128 = (~(t127));
    t129 = *((unsigned int *)t84);
    t130 = (t129 & t128);
    t131 = *((unsigned int *)t126);
    t132 = (~(t131));
    t133 = *((unsigned int *)t103);
    t134 = (t133 & t132);
    t135 = (~(t130));
    t136 = (~(t134));
    t137 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t137 & t135);
    t138 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t138 & t136);
    goto LAB81;

LAB82:    xsi_set_current_line(44, ng0);

LAB85:    xsi_set_current_line(45, ng0);
    t145 = ((char*)((ng7)));
    t146 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t146, t145, 0, 0, 5, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB84;

}


extern void work_m_00000000000325453871_0112637215_init()
{
	static char *pe[] = {(void *)Always_18_0};
	xsi_register_didat("work_m_00000000000325453871_0112637215", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000000325453871_0112637215.didat");
	xsi_register_executes(pe);
}
