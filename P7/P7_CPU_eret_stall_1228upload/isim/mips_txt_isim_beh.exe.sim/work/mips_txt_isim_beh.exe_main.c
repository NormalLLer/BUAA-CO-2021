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
    work_m_00000000000346491092_1733832700_init();
    work_m_00000000002560485074_0532604035_init();
    work_m_00000000004159526537_2309632077_init();
    work_m_00000000001430059182_1621229167_init();
    work_m_00000000000864522408_1900013699_init();
    work_m_00000000001865418443_1937331930_init();
    work_m_00000000002384611970_1579609468_init();
    work_m_00000000000882931876_1785967555_init();
    work_m_00000000004135648781_0757879789_init();
    work_m_00000000002635463273_1757008917_init();
    work_m_00000000003845852661_1443397725_init();
    work_m_00000000000139470710_2409577941_init();
    work_m_00000000000684156283_1414413828_init();
    work_m_00000000000583285308_0378956911_init();
    work_m_00000000000011576259_0886308060_init();
    work_m_00000000004265762358_4111503280_init();
    work_m_00000000000271492457_0651552387_init();
    work_m_00000000003742323912_1717722151_init();
    work_m_00000000003494605746_2579282444_init();
    work_m_00000000003599537612_4140825114_init();
    work_m_00000000001707992982_0430450161_init();
    work_m_00000000002767152774_3975733304_init();
    work_m_00000000001291591715_2600510813_init();
    work_m_00000000003552421801_2992910937_init();
    work_m_00000000001801280735_3483947727_init();
    work_m_00000000003342536257_1917266896_init();
    work_m_00000000001296088005_3553574384_init();
    work_m_00000000000379134971_3531428753_init();
    work_m_00000000001584269725_3508565487_init();
    work_m_00000000003938555791_0156190743_init();
    work_m_00000000000056312757_0053799672_init();
    work_m_00000000000870348509_3877310806_init();
    work_m_00000000001001255173_1131260308_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001001255173_1131260308");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
