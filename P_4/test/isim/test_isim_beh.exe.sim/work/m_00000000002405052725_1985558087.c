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
static const char *ng0 = "D:/University/Study/2022fall/co/P_4/test/test.v";



static void Always_28_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t6);
    t8 = (t8 & 1);
    if (*((unsigned int *)t5) != 0)
        goto LAB6;

LAB7:    t10 = 1;

LAB9:    t11 = (t10 <= 31);
    if (t11 == 1)
        goto LAB10;

LAB11:    *((unsigned int *)t4) = t8;

LAB8:    t13 = (t0 + 1608);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);
    goto LAB2;

LAB6:    t9 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB8;

LAB10:    t7 = (t7 >> 1);
    t12 = (t7 & 1);
    t8 = (t8 ^ t12);

LAB12:    t10 = (t10 + 1);
    goto LAB9;

}


extern void work_m_00000000002405052725_1985558087_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000002405052725_1985558087", "isim/test_isim_beh.exe.sim/work/m_00000000002405052725_1985558087.didat");
	xsi_register_executes(pe);
}
