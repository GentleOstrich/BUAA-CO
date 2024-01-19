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
static const char *ng0 = "D:/University/Study/2022fall/co/P_7/temp/Bridge.v";
static unsigned int ng1[] = {32512U, 0U};
static unsigned int ng2[] = {32523U, 0U};
static unsigned int ng3[] = {32528U, 0U};
static unsigned int ng4[] = {32539U, 0U};
static int ng5[] = {0, 0};
static int ng6[] = {1, 0};



static void Always_25_0(char *t0)
{
    char t6[8];
    char t14[8];
    char t22[8];
    char t26[8];
    char t34[8];
    char t74[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;

LAB0:    t1 = (t0 + 4928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 5248);
    *((int *)t2) = 1;
    t3 = (t0 + 4960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 4294967295U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 4294967295U);
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 4294967295U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 4294967295U);
    t5 = (t0 + 3688);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB7;

LAB6:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB9:    memset(t14, 0, 8);
    t15 = (t6 + 4);
    t7 = *((unsigned int *)t15);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t15) != 0)
        goto LAB13;

LAB14:    t17 = (t14 + 4);
    t12 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t17);
    t19 = (t12 || t18);
    if (t19 > 0)
        goto LAB15;

LAB16:    memcpy(t34, t14, 8);

LAB17:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB34;

LAB33:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB36;

LAB35:    *((unsigned int *)t6) = 1;

LAB36:    memset(t14, 0, 8);
    t15 = (t6 + 4);
    t7 = *((unsigned int *)t15);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t15) != 0)
        goto LAB40;

LAB41:    t17 = (t14 + 4);
    t12 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t17);
    t19 = (t12 || t18);
    if (t19 > 0)
        goto LAB42;

LAB43:    memcpy(t34, t14, 8);

LAB44:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB59:
LAB32:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 15U);
    if (t11 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t2) != 0)
        goto LAB62;

LAB63:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t5);
    t18 = (~(t12));
    t19 = *((unsigned int *)t6);
    t28 = (t19 & t18);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(54, ng0);

LAB125:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB66:    goto LAB2;

LAB7:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB13:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB14;

LAB15:    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng2)));
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB19;

LAB18:    t24 = (t20 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t21) > *((unsigned int *)t20))
        goto LAB21;

LAB20:    *((unsigned int *)t22) = 1;

LAB21:    memset(t26, 0, 8);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t22);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t27) != 0)
        goto LAB25;

LAB26:    t35 = *((unsigned int *)t14);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t14 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB17;

LAB19:    t25 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t26) = 1;
    goto LAB26;

LAB25:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB26;

LAB27:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t14 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t14);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB29;

LAB30:    xsi_set_current_line(36, ng0);
    t72 = (t0 + 1848U);
    t73 = *((char **)t72);
    t72 = (t0 + 2408);
    xsi_vlogvar_assign_value(t72, t73, 0, 0, 32);
    goto LAB32;

LAB34:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB36;

LAB38:    *((unsigned int *)t14) = 1;
    goto LAB41;

LAB40:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB41;

LAB42:    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng4)));
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB46;

LAB45:    t24 = (t20 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB46;

LAB49:    if (*((unsigned int *)t21) > *((unsigned int *)t20))
        goto LAB48;

LAB47:    *((unsigned int *)t22) = 1;

LAB48:    memset(t26, 0, 8);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t22);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t27) != 0)
        goto LAB52;

LAB53:    t35 = *((unsigned int *)t14);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t14 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB44;

LAB46:    t25 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB48;

LAB50:    *((unsigned int *)t26) = 1;
    goto LAB53;

LAB52:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB53;

LAB54:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t14 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t14);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB56;

LAB57:    xsi_set_current_line(37, ng0);
    t72 = (t0 + 2008U);
    t73 = *((char **)t72);
    t72 = (t0 + 2408);
    xsi_vlogvar_assign_value(t72, t73, 0, 0, 32);
    goto LAB59;

LAB60:    *((unsigned int *)t6) = 1;
    goto LAB63;

LAB62:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(40, ng0);

LAB67:    xsi_set_current_line(41, ng0);
    t13 = (t0 + 1048U);
    t15 = *((char **)t13);
    t13 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t16 = (t15 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB69;

LAB68:    t17 = (t13 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB69;

LAB72:    if (*((unsigned int *)t15) < *((unsigned int *)t13))
        goto LAB71;

LAB70:    *((unsigned int *)t14) = 1;

LAB71:    memset(t22, 0, 8);
    t21 = (t14 + 4);
    t30 = *((unsigned int *)t21);
    t31 = (~(t30));
    t32 = *((unsigned int *)t14);
    t35 = (t32 & t31);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t21) != 0)
        goto LAB75;

LAB76:    t24 = (t22 + 4);
    t37 = *((unsigned int *)t22);
    t41 = *((unsigned int *)t24);
    t42 = (t37 || t41);
    if (t42 > 0)
        goto LAB77;

LAB78:    memcpy(t74, t22, 8);

LAB79:    t81 = (t74 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t74);
    t85 = (t84 & t83);
    t86 = (t85 != 0);
    if (t86 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB97;

LAB96:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB97;

LAB100:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB99;

LAB98:    *((unsigned int *)t6) = 1;

LAB99:    memset(t14, 0, 8);
    t15 = (t6 + 4);
    t7 = *((unsigned int *)t15);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t15) != 0)
        goto LAB103;

LAB104:    t17 = (t14 + 4);
    t12 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t17);
    t19 = (t12 || t18);
    if (t19 > 0)
        goto LAB105;

LAB106:    memcpy(t34, t14, 8);

LAB107:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB120;

LAB121:    xsi_set_current_line(49, ng0);

LAB124:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB122:
LAB94:    goto LAB66;

LAB69:    t20 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB71;

LAB73:    *((unsigned int *)t22) = 1;
    goto LAB76;

LAB75:    t23 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB76;

LAB77:    t25 = (t0 + 1048U);
    t27 = *((char **)t25);
    t25 = ((char*)((ng2)));
    memset(t26, 0, 8);
    t33 = (t27 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB81;

LAB80:    t38 = (t25 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB81;

LAB84:    if (*((unsigned int *)t27) > *((unsigned int *)t25))
        goto LAB83;

LAB82:    *((unsigned int *)t26) = 1;

LAB83:    memset(t34, 0, 8);
    t40 = (t26 + 4);
    t43 = *((unsigned int *)t40);
    t44 = (~(t43));
    t45 = *((unsigned int *)t26);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t40) != 0)
        goto LAB87;

LAB88:    t50 = *((unsigned int *)t22);
    t51 = *((unsigned int *)t34);
    t52 = (t50 & t51);
    *((unsigned int *)t74) = t52;
    t49 = (t22 + 4);
    t66 = (t34 + 4);
    t72 = (t74 + 4);
    t53 = *((unsigned int *)t49);
    t54 = *((unsigned int *)t66);
    t55 = (t53 | t54);
    *((unsigned int *)t72) = t55;
    t56 = *((unsigned int *)t72);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB79;

LAB81:    t39 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB83;

LAB85:    *((unsigned int *)t34) = 1;
    goto LAB88;

LAB87:    t48 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB88;

LAB89:    t60 = *((unsigned int *)t74);
    t61 = *((unsigned int *)t72);
    *((unsigned int *)t74) = (t60 | t61);
    t73 = (t22 + 4);
    t75 = (t34 + 4);
    t62 = *((unsigned int *)t22);
    t63 = (~(t62));
    t64 = *((unsigned int *)t73);
    t65 = (~(t64));
    t67 = *((unsigned int *)t34);
    t68 = (~(t67));
    t69 = *((unsigned int *)t75);
    t70 = (~(t69));
    t58 = (t63 & t65);
    t59 = (t68 & t70);
    t71 = (~(t58));
    t76 = (~(t59));
    t77 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t77 & t71);
    t78 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t78 & t76);
    t79 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t79 & t71);
    t80 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t80 & t76);
    goto LAB91;

LAB92:    xsi_set_current_line(41, ng0);

LAB95:    xsi_set_current_line(42, ng0);
    t87 = ((char*)((ng5)));
    t88 = (t0 + 2888);
    xsi_vlogvar_assign_value(t88, t87, 0, 0, 4);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB94;

LAB97:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB99;

LAB101:    *((unsigned int *)t14) = 1;
    goto LAB104;

LAB103:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB104;

LAB105:    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    t20 = ((char*)((ng4)));
    memset(t22, 0, 8);
    t23 = (t21 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB109;

LAB108:    t24 = (t20 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB109;

LAB112:    if (*((unsigned int *)t21) > *((unsigned int *)t20))
        goto LAB111;

LAB110:    *((unsigned int *)t22) = 1;

LAB111:    memset(t26, 0, 8);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t22);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t27) != 0)
        goto LAB115;

LAB116:    t35 = *((unsigned int *)t14);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t14 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB117;

LAB118:
LAB119:    goto LAB107;

LAB109:    t25 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB111;

LAB113:    *((unsigned int *)t26) = 1;
    goto LAB116;

LAB115:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB116;

LAB117:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t14 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t14);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB119;

LAB120:    xsi_set_current_line(45, ng0);

LAB123:    xsi_set_current_line(46, ng0);
    t72 = ((char*)((ng5)));
    t73 = (t0 + 2888);
    xsi_vlogvar_assign_value(t73, t72, 0, 0, 4);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB122;

}


extern void work_m_00000000000456073239_0156190743_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_00000000000456073239_0156190743", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000000456073239_0156190743.didat");
	xsi_register_executes(pe);
}
