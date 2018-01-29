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
    work_m_00000000000280289211_2543652621_init();
    work_m_00000000001700613937_1467285622_init();
    work_m_00000000001339882554_1773947661_init();
    work_m_00000000002695699534_3492095230_init();
    work_m_00000000000276865632_3987101224_init();
    work_m_00000000001257118635_0766751495_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001257118635_0766751495");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
