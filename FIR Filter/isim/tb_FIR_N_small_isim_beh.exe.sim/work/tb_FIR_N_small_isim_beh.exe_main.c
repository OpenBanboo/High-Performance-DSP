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
    work_m_00000000002973815609_0151924473_init();
    work_m_00000000004049820904_3181901173_init();
    work_m_00000000002695978890_0396517937_init();
    work_m_00000000002053178963_4116338960_init();
    work_m_00000000001975258301_3462602210_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001975258301_3462602210");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
