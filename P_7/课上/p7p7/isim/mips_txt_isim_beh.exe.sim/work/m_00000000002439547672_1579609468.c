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
static const char *ng0 = "D:/University/Study/2022fall/co/P_7/P7_pipeline_cpu/CMP.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static void NetDecl_9_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
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
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t5) = 1;

LAB7:    t20 = (t0 + 3512);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t5 + 4);
    t28 = *((unsigned int *)t5);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0U);
    t33 = (t0 + 3416);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void Cont_11_1(char *t0)
{
    char t4[8];
    char t20[8];
    char t34[8];
    char t41[8];
    char t73[8];
    char t88[8];
    char t104[8];
    char t116[8];
    char t125[8];
    char t133[8];
    char t165[8];
    char t173[8];
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    int t157;
    int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    char *t177;
    char *t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    char *t203;
    char *t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    char *t214;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t21) != 0)
        goto LAB10;

LAB11:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB12;

LAB13:    memcpy(t41, t20, 8);

LAB14:    memset(t73, 0, 8);
    t74 = (t41 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t41);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t74) != 0)
        goto LAB24;

LAB25:    t81 = (t73 + 4);
    t82 = *((unsigned int *)t73);
    t83 = (!(t82));
    t84 = *((unsigned int *)t81);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB26;

LAB27:    memcpy(t173, t73, 8);

LAB28:    t201 = (t0 + 3576);
    t202 = (t201 + 56U);
    t203 = *((char **)t202);
    t204 = (t203 + 56U);
    t205 = *((char **)t204);
    memset(t205, 0, 8);
    t206 = 1U;
    t207 = t206;
    t208 = (t173 + 4);
    t209 = *((unsigned int *)t173);
    t206 = (t206 & t209);
    t210 = *((unsigned int *)t208);
    t207 = (t207 & t210);
    t211 = (t205 + 4);
    t212 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t212 | t206);
    t213 = *((unsigned int *)t211);
    *((unsigned int *)t211) = (t213 | t207);
    xsi_driver_vfirst_trans(t201, 0, 0);
    t214 = (t0 + 3432);
    *((int *)t214) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t20) = 1;
    goto LAB11;

LAB10:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB11;

LAB12:    t32 = (t0 + 1688U);
    t33 = *((char **)t32);
    memset(t34, 0, 8);
    t32 = (t33 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (~(t35));
    t37 = *((unsigned int *)t33);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t32) != 0)
        goto LAB17;

LAB18:    t42 = *((unsigned int *)t20);
    t43 = *((unsigned int *)t34);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t20 + 4);
    t46 = (t34 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB15:    *((unsigned int *)t34) = 1;
    goto LAB18;

LAB17:    t40 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB18;

LAB19:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t20 + 4);
    t56 = (t34 + 4);
    t57 = *((unsigned int *)t20);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t34);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB21;

LAB22:    *((unsigned int *)t73) = 1;
    goto LAB25;

LAB24:    t80 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB25;

LAB26:    t86 = (t0 + 1368U);
    t87 = *((char **)t86);
    t86 = ((char*)((ng2)));
    memset(t88, 0, 8);
    t89 = (t87 + 4);
    t90 = (t86 + 4);
    t91 = *((unsigned int *)t87);
    t92 = *((unsigned int *)t86);
    t93 = (t91 ^ t92);
    t94 = *((unsigned int *)t89);
    t95 = *((unsigned int *)t90);
    t96 = (t94 ^ t95);
    t97 = (t93 | t96);
    t98 = *((unsigned int *)t89);
    t99 = *((unsigned int *)t90);
    t100 = (t98 | t99);
    t101 = (~(t100));
    t102 = (t97 & t101);
    if (t102 != 0)
        goto LAB32;

LAB29:    if (t100 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t88) = 1;

LAB32:    memset(t104, 0, 8);
    t105 = (t88 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t88);
    t109 = (t108 & t107);
    t110 = (t109 & 1U);
    if (t110 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t105) != 0)
        goto LAB35;

LAB36:    t112 = (t104 + 4);
    t113 = *((unsigned int *)t104);
    t114 = *((unsigned int *)t112);
    t115 = (t113 || t114);
    if (t115 > 0)
        goto LAB37;

LAB38:    memcpy(t133, t104, 8);

LAB39:    memset(t165, 0, 8);
    t166 = (t133 + 4);
    t167 = *((unsigned int *)t166);
    t168 = (~(t167));
    t169 = *((unsigned int *)t133);
    t170 = (t169 & t168);
    t171 = (t170 & 1U);
    if (t171 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t166) != 0)
        goto LAB53;

LAB54:    t174 = *((unsigned int *)t73);
    t175 = *((unsigned int *)t165);
    t176 = (t174 | t175);
    *((unsigned int *)t173) = t176;
    t177 = (t73 + 4);
    t178 = (t165 + 4);
    t179 = (t173 + 4);
    t180 = *((unsigned int *)t177);
    t181 = *((unsigned int *)t178);
    t182 = (t180 | t181);
    *((unsigned int *)t179) = t182;
    t183 = *((unsigned int *)t179);
    t184 = (t183 != 0);
    if (t184 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB28;

LAB31:    t103 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t104) = 1;
    goto LAB36;

LAB35:    t111 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t111) = 1;
    goto LAB36;

LAB37:    t117 = (t0 + 1688U);
    t118 = *((char **)t117);
    memset(t116, 0, 8);
    t117 = (t118 + 4);
    t119 = *((unsigned int *)t117);
    t120 = (~(t119));
    t121 = *((unsigned int *)t118);
    t122 = (t121 & t120);
    t123 = (t122 & 1U);
    if (t123 != 0)
        goto LAB43;

LAB41:    if (*((unsigned int *)t117) == 0)
        goto LAB40;

LAB42:    t124 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t124) = 1;

LAB43:    memset(t125, 0, 8);
    t126 = (t116 + 4);
    t127 = *((unsigned int *)t126);
    t128 = (~(t127));
    t129 = *((unsigned int *)t116);
    t130 = (t129 & t128);
    t131 = (t130 & 1U);
    if (t131 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t126) != 0)
        goto LAB46;

LAB47:    t134 = *((unsigned int *)t104);
    t135 = *((unsigned int *)t125);
    t136 = (t134 & t135);
    *((unsigned int *)t133) = t136;
    t137 = (t104 + 4);
    t138 = (t125 + 4);
    t139 = (t133 + 4);
    t140 = *((unsigned int *)t137);
    t141 = *((unsigned int *)t138);
    t142 = (t140 | t141);
    *((unsigned int *)t139) = t142;
    t143 = *((unsigned int *)t139);
    t144 = (t143 != 0);
    if (t144 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB39;

LAB40:    *((unsigned int *)t116) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t125) = 1;
    goto LAB47;

LAB46:    t132 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t132) = 1;
    goto LAB47;

LAB48:    t145 = *((unsigned int *)t133);
    t146 = *((unsigned int *)t139);
    *((unsigned int *)t133) = (t145 | t146);
    t147 = (t104 + 4);
    t148 = (t125 + 4);
    t149 = *((unsigned int *)t104);
    t150 = (~(t149));
    t151 = *((unsigned int *)t147);
    t152 = (~(t151));
    t153 = *((unsigned int *)t125);
    t154 = (~(t153));
    t155 = *((unsigned int *)t148);
    t156 = (~(t155));
    t157 = (t150 & t152);
    t158 = (t154 & t156);
    t159 = (~(t157));
    t160 = (~(t158));
    t161 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t161 & t159);
    t162 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t162 & t160);
    t163 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t163 & t159);
    t164 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t164 & t160);
    goto LAB50;

LAB51:    *((unsigned int *)t165) = 1;
    goto LAB54;

LAB53:    t172 = (t165 + 4);
    *((unsigned int *)t165) = 1;
    *((unsigned int *)t172) = 1;
    goto LAB54;

LAB55:    t185 = *((unsigned int *)t173);
    t186 = *((unsigned int *)t179);
    *((unsigned int *)t173) = (t185 | t186);
    t187 = (t73 + 4);
    t188 = (t165 + 4);
    t189 = *((unsigned int *)t187);
    t190 = (~(t189));
    t191 = *((unsigned int *)t73);
    t192 = (t191 & t190);
    t193 = *((unsigned int *)t188);
    t194 = (~(t193));
    t195 = *((unsigned int *)t165);
    t196 = (t195 & t194);
    t197 = (~(t192));
    t198 = (~(t196));
    t199 = *((unsigned int *)t179);
    *((unsigned int *)t179) = (t199 & t197);
    t200 = *((unsigned int *)t179);
    *((unsigned int *)t179) = (t200 & t198);
    goto LAB57;

}


extern void work_m_00000000002439547672_1579609468_init()
{
	static char *pe[] = {(void *)NetDecl_9_0,(void *)Cont_11_1};
	xsi_register_didat("work_m_00000000002439547672_1579609468", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002439547672_1579609468.didat");
	xsi_register_executes(pe);
}
