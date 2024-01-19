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
static const char *ng0 = "D:/University/Study/2022fall/co/P_7/P7_pipeline_cpu/NPC.v";
static int ng1[] = {4, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {14, 0};
static unsigned int ng4[] = {16768U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {1U, 0U};



static void NetDecl_17_0(char *t0)
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

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 5320);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t10 = (t0 + 5192);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_19_1(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1048U);
    t7 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 28);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 28);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 15U);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t6, 4, t5, 26, t2, 2);
    t15 = (t0 + 5384);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t3, 8);
    xsi_driver_vfirst_trans(t15, 0, 31U);
    t20 = (t0 + 5208);
    *((int *)t20) = 1;

LAB1:    return;
}

static void NetDecl_21_2(char *t0)
{
    char t4[8];
    char t5[8];
    char t7[8];
    char t17[8];
    char t21[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t6 = ((char*)((ng2)));
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 65535U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 65535U);
    t18 = ((char*)((ng3)));
    t19 = (t0 + 1368U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t19 = (t21 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 15);
    t25 = (t24 & 1);
    *((unsigned int *)t21) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 15);
    t28 = (t27 & 1);
    *((unsigned int *)t19) = t28;
    xsi_vlog_mul_concat(t17, 14, 1, t18, 1U, t21, 1);
    xsi_vlogtype_concat(t5, 32, 32, 3U, t17, 14, t7, 16, t6, 2);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 32, t4, 32, t5, 32);
    t30 = (t0 + 5448);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t29, 8);
    xsi_driver_vfirst_trans(t30, 0, 31U);
    t35 = (t0 + 5224);
    *((int *)t35) = 1;

LAB1:    return;
}

static void Cont_23_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t21[8];
    char t22[8];
    char t37[8];
    char t42[8];
    char t43[8];
    char t46[8];
    char t79[8];
    char t80[8];
    char t82[8];
    char t115[8];
    char t116[8];
    char t118[8];
    char t151[8];
    char t152[8];
    char t154[8];
    char t170[8];
    char t184[8];
    char t191[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
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
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t81;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t117;
    char *t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t153;
    char *t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    char *t183;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    char *t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    char *t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    int t215;
    int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    char *t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    char *t229;
    char *t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    char *t234;
    char *t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    char *t240;
    char *t241;
    char *t242;
    char *t243;
    char *t244;
    char *t245;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2168U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t21, 8);

LAB16:    t234 = (t0 + 5512);
    t241 = (t234 + 56U);
    t242 = *((char **)t241);
    t243 = (t242 + 56U);
    t244 = *((char **)t243);
    memcpy(t244, t3, 8);
    xsi_driver_vfirst_trans(t234, 0, 31);
    t245 = (t0 + 5240);
    *((int *)t245) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng4)));
    goto LAB9;

LAB10:    t23 = (t0 + 2328U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t24 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t23) != 0)
        goto LAB19;

LAB20:    t31 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB21;

LAB22:    t38 = *((unsigned int *)t22);
    t39 = (~(t38));
    t40 = *((unsigned int *)t31);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t31) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t22) > 0)
        goto LAB27;

LAB28:    memcpy(t21, t42, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t21, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t22) = 1;
    goto LAB20;

LAB19:    t30 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB20;

LAB21:    t35 = (t0 + 2488U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng1)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t36, 32, t35, 32);
    goto LAB22;

LAB23:    t44 = (t0 + 1688U);
    t45 = *((char **)t44);
    t44 = ((char*)((ng2)));
    memset(t46, 0, 8);
    t47 = (t45 + 4);
    t48 = (t44 + 4);
    t49 = *((unsigned int *)t45);
    t50 = *((unsigned int *)t44);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t47);
    t53 = *((unsigned int *)t48);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t48);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB33;

LAB30:    if (t58 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t46) = 1;

LAB33:    memset(t43, 0, 8);
    t62 = (t46 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t46);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t62) != 0)
        goto LAB36;

LAB37:    t69 = (t43 + 4);
    t70 = *((unsigned int *)t43);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB38;

LAB39:    t75 = *((unsigned int *)t43);
    t76 = (~(t75));
    t77 = *((unsigned int *)t69);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t69) > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t43) > 0)
        goto LAB44;

LAB45:    memcpy(t42, t79, 8);

LAB46:    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t21, 32, t37, 32, t42, 32);
    goto LAB29;

LAB27:    memcpy(t21, t37, 8);
    goto LAB29;

LAB32:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t43) = 1;
    goto LAB37;

LAB36:    t68 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB37;

LAB38:    t73 = (t0 + 2648U);
    t74 = *((char **)t73);
    goto LAB39;

LAB40:    t73 = (t0 + 1688U);
    t81 = *((char **)t73);
    t73 = ((char*)((ng5)));
    memset(t82, 0, 8);
    t83 = (t81 + 4);
    t84 = (t73 + 4);
    t85 = *((unsigned int *)t81);
    t86 = *((unsigned int *)t73);
    t87 = (t85 ^ t86);
    t88 = *((unsigned int *)t83);
    t89 = *((unsigned int *)t84);
    t90 = (t88 ^ t89);
    t91 = (t87 | t90);
    t92 = *((unsigned int *)t83);
    t93 = *((unsigned int *)t84);
    t94 = (t92 | t93);
    t95 = (~(t94));
    t96 = (t91 & t95);
    if (t96 != 0)
        goto LAB50;

LAB47:    if (t94 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t82) = 1;

LAB50:    memset(t80, 0, 8);
    t98 = (t82 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t82);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t98) != 0)
        goto LAB53;

LAB54:    t105 = (t80 + 4);
    t106 = *((unsigned int *)t80);
    t107 = *((unsigned int *)t105);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB55;

LAB56:    t111 = *((unsigned int *)t80);
    t112 = (~(t111));
    t113 = *((unsigned int *)t105);
    t114 = (t112 || t113);
    if (t114 > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t105) > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t80) > 0)
        goto LAB61;

LAB62:    memcpy(t79, t115, 8);

LAB63:    goto LAB41;

LAB42:    xsi_vlog_unsigned_bit_combine(t42, 32, t74, 32, t79, 32);
    goto LAB46;

LAB44:    memcpy(t42, t74, 8);
    goto LAB46;

LAB49:    t97 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t80) = 1;
    goto LAB54;

LAB53:    t104 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB54;

LAB55:    t109 = (t0 + 2808U);
    t110 = *((char **)t109);
    goto LAB56;

LAB57:    t109 = (t0 + 1688U);
    t117 = *((char **)t109);
    t109 = ((char*)((ng6)));
    memset(t118, 0, 8);
    t119 = (t117 + 4);
    t120 = (t109 + 4);
    t121 = *((unsigned int *)t117);
    t122 = *((unsigned int *)t109);
    t123 = (t121 ^ t122);
    t124 = *((unsigned int *)t119);
    t125 = *((unsigned int *)t120);
    t126 = (t124 ^ t125);
    t127 = (t123 | t126);
    t128 = *((unsigned int *)t119);
    t129 = *((unsigned int *)t120);
    t130 = (t128 | t129);
    t131 = (~(t130));
    t132 = (t127 & t131);
    if (t132 != 0)
        goto LAB67;

LAB64:    if (t130 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t118) = 1;

LAB67:    memset(t116, 0, 8);
    t134 = (t118 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (~(t135));
    t137 = *((unsigned int *)t118);
    t138 = (t137 & t136);
    t139 = (t138 & 1U);
    if (t139 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t134) != 0)
        goto LAB70;

LAB71:    t141 = (t116 + 4);
    t142 = *((unsigned int *)t116);
    t143 = *((unsigned int *)t141);
    t144 = (t142 || t143);
    if (t144 > 0)
        goto LAB72;

LAB73:    t147 = *((unsigned int *)t116);
    t148 = (~(t147));
    t149 = *((unsigned int *)t141);
    t150 = (t148 || t149);
    if (t150 > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t141) > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t116) > 0)
        goto LAB78;

LAB79:    memcpy(t115, t151, 8);

LAB80:    goto LAB58;

LAB59:    xsi_vlog_unsigned_bit_combine(t79, 32, t110, 32, t115, 32);
    goto LAB63;

LAB61:    memcpy(t79, t110, 8);
    goto LAB63;

LAB66:    t133 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t133) = 1;
    goto LAB67;

LAB68:    *((unsigned int *)t116) = 1;
    goto LAB71;

LAB70:    t140 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t140) = 1;
    goto LAB71;

LAB72:    t145 = (t0 + 1528U);
    t146 = *((char **)t145);
    goto LAB73;

LAB74:    t145 = (t0 + 1688U);
    t153 = *((char **)t145);
    t145 = ((char*)((ng7)));
    memset(t154, 0, 8);
    t155 = (t153 + 4);
    t156 = (t145 + 4);
    t157 = *((unsigned int *)t153);
    t158 = *((unsigned int *)t145);
    t159 = (t157 ^ t158);
    t160 = *((unsigned int *)t155);
    t161 = *((unsigned int *)t156);
    t162 = (t160 ^ t161);
    t163 = (t159 | t162);
    t164 = *((unsigned int *)t155);
    t165 = *((unsigned int *)t156);
    t166 = (t164 | t165);
    t167 = (~(t166));
    t168 = (t163 & t167);
    if (t168 != 0)
        goto LAB84;

LAB81:    if (t166 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t154) = 1;

LAB84:    memset(t170, 0, 8);
    t171 = (t154 + 4);
    t172 = *((unsigned int *)t171);
    t173 = (~(t172));
    t174 = *((unsigned int *)t154);
    t175 = (t174 & t173);
    t176 = (t175 & 1U);
    if (t176 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t171) != 0)
        goto LAB87;

LAB88:    t178 = (t170 + 4);
    t179 = *((unsigned int *)t170);
    t180 = *((unsigned int *)t178);
    t181 = (t179 || t180);
    if (t181 > 0)
        goto LAB89;

LAB90:    memcpy(t191, t170, 8);

LAB91:    memset(t152, 0, 8);
    t223 = (t191 + 4);
    t224 = *((unsigned int *)t223);
    t225 = (~(t224));
    t226 = *((unsigned int *)t191);
    t227 = (t226 & t225);
    t228 = (t227 & 1U);
    if (t228 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t223) != 0)
        goto LAB101;

LAB102:    t230 = (t152 + 4);
    t231 = *((unsigned int *)t152);
    t232 = *((unsigned int *)t230);
    t233 = (t231 || t232);
    if (t233 > 0)
        goto LAB103;

LAB104:    t236 = *((unsigned int *)t152);
    t237 = (~(t236));
    t238 = *((unsigned int *)t230);
    t239 = (t237 || t238);
    if (t239 > 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t230) > 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t152) > 0)
        goto LAB109;

LAB110:    memcpy(t151, t240, 8);

LAB111:    goto LAB75;

LAB76:    xsi_vlog_unsigned_bit_combine(t115, 32, t146, 32, t151, 32);
    goto LAB80;

LAB78:    memcpy(t115, t146, 8);
    goto LAB80;

LAB83:    t169 = (t154 + 4);
    *((unsigned int *)t154) = 1;
    *((unsigned int *)t169) = 1;
    goto LAB84;

LAB85:    *((unsigned int *)t170) = 1;
    goto LAB88;

LAB87:    t177 = (t170 + 4);
    *((unsigned int *)t170) = 1;
    *((unsigned int *)t177) = 1;
    goto LAB88;

LAB89:    t182 = (t0 + 1848U);
    t183 = *((char **)t182);
    memset(t184, 0, 8);
    t182 = (t183 + 4);
    t185 = *((unsigned int *)t182);
    t186 = (~(t185));
    t187 = *((unsigned int *)t183);
    t188 = (t187 & t186);
    t189 = (t188 & 1U);
    if (t189 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t182) != 0)
        goto LAB94;

LAB95:    t192 = *((unsigned int *)t170);
    t193 = *((unsigned int *)t184);
    t194 = (t192 & t193);
    *((unsigned int *)t191) = t194;
    t195 = (t170 + 4);
    t196 = (t184 + 4);
    t197 = (t191 + 4);
    t198 = *((unsigned int *)t195);
    t199 = *((unsigned int *)t196);
    t200 = (t198 | t199);
    *((unsigned int *)t197) = t200;
    t201 = *((unsigned int *)t197);
    t202 = (t201 != 0);
    if (t202 == 1)
        goto LAB96;

LAB97:
LAB98:    goto LAB91;

LAB92:    *((unsigned int *)t184) = 1;
    goto LAB95;

LAB94:    t190 = (t184 + 4);
    *((unsigned int *)t184) = 1;
    *((unsigned int *)t190) = 1;
    goto LAB95;

LAB96:    t203 = *((unsigned int *)t191);
    t204 = *((unsigned int *)t197);
    *((unsigned int *)t191) = (t203 | t204);
    t205 = (t170 + 4);
    t206 = (t184 + 4);
    t207 = *((unsigned int *)t170);
    t208 = (~(t207));
    t209 = *((unsigned int *)t205);
    t210 = (~(t209));
    t211 = *((unsigned int *)t184);
    t212 = (~(t211));
    t213 = *((unsigned int *)t206);
    t214 = (~(t213));
    t215 = (t208 & t210);
    t216 = (t212 & t214);
    t217 = (~(t215));
    t218 = (~(t216));
    t219 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t219 & t217);
    t220 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t220 & t218);
    t221 = *((unsigned int *)t191);
    *((unsigned int *)t191) = (t221 & t217);
    t222 = *((unsigned int *)t191);
    *((unsigned int *)t191) = (t222 & t218);
    goto LAB98;

LAB99:    *((unsigned int *)t152) = 1;
    goto LAB102;

LAB101:    t229 = (t152 + 4);
    *((unsigned int *)t152) = 1;
    *((unsigned int *)t229) = 1;
    goto LAB102;

LAB103:    t234 = (t0 + 2968U);
    t235 = *((char **)t234);
    goto LAB104;

LAB105:    t234 = (t0 + 2648U);
    t240 = *((char **)t234);
    goto LAB106;

LAB107:    xsi_vlog_unsigned_bit_combine(t151, 32, t235, 32, t240, 32);
    goto LAB111;

LAB109:    memcpy(t151, t235, 8);
    goto LAB111;

}


extern void work_m_00000000003828308776_0757879789_init()
{
	static char *pe[] = {(void *)NetDecl_17_0,(void *)NetDecl_19_1,(void *)NetDecl_21_2,(void *)Cont_23_3};
	xsi_register_didat("work_m_00000000003828308776_0757879789", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003828308776_0757879789.didat");
	xsi_register_executes(pe);
}
