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
static const char *ng0 = "D:/University/Study/2022fall/co/P_5/p5_old/p5_1/q1/ADD4.v";
static int ng1[] = {4, 0};



static void Always_6_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(6, ng0);
    t2 = (t0 + 2688);
    *((int *)t2) = 1;
    t3 = (t0 + 2400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(6, ng0);

LAB5:    xsi_set_current_line(7, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 32, t4, 32);
    t7 = (t0 + 1448);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB2;

}


extern void work_m_00000000000125276489_1861809063_init()
{
	static char *pe[] = {(void *)Always_6_0};
	xsi_register_didat("work_m_00000000000125276489_1861809063", "isim/mips_isim_beh.exe.sim/work/m_00000000000125276489_1861809063.didat");
	xsi_register_executes(pe);
}
