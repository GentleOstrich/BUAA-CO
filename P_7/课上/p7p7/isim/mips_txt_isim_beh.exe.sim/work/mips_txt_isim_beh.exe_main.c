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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003332367926_4066630463_init();
    work_m_00000000004108574064_3097610606_init();
    work_m_00000000002878301370_3224323566_init();
    work_m_00000000001755481027_0112637215_init();
    work_m_00000000003792445637_1621229167_init();
    work_m_00000000002159617080_1785967555_init();
    work_m_00000000002439547672_1579609468_init();
    work_m_00000000003828308776_0757879789_init();
    work_m_00000000001414790329_1907459465_init();
    work_m_00000000002809630514_0886308060_init();
    work_m_00000000001863339008_4111503280_init();
    work_m_00000000000251055971_2137656763_init();
    work_m_00000000003242446445_0938077668_init();
    work_m_00000000001557762845_3975733304_init();
    work_m_00000000000145993786_2181625025_init();
    work_m_00000000000304300041_3508565487_init();
    work_m_00000000000456073239_0156190743_init();
    work_m_00000000000056312757_0053799672_init();
    work_m_00000000000586739043_3877310806_init();
    work_m_00000000002148573628_1131260308_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002148573628_1131260308");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
