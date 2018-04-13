/*********************************************************************************************************************
* DAVE APP Name : PWM_CCU8       APP Version: 4.1.24
*
* NOTE:
* This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
*********************************************************************************************************************/

/**
 * @cond
 ***********************************************************************************************************************
 *
 * Copyright (c) 2015 - 2016, Infineon Technologies AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the
 * following conditions are met:
 *
 *   Redistributions of source code must retain the above copyright notice, this list of conditions and the  following
 *   disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following
 *   disclaimer in the documentation and/or other materials provided with the distribution.
 *
 *   Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * To improve the quality of the software, users are encouraged to share modifications, enhancements or bug fixes
 * with Infineon Technologies AG (dave@infineon.com).
 ***********************************************************************************************************************
 *
 * Change History
 * --------------
 *
 * 2015-02-14:
 *     - Initial version for DAVEv4
 *
 * 2015-06-20:
 *     - Copyright information updated.
 *
 * 2015-08-13:
 *     - Added support for initializing "ext_load_selector" member in "PWM_CCU8_CONFIG_t"
 *     - Added support for initializing  "immediate_write" member in  "PWM_CCU8_CONFIG_t"
 *     - Added support for initializing  "automatic_shadow_transfer" member in  "PWM_CCU8_CONFIG_t"
 *     - Added support for initializing  "shadow_transfer_mode" member in "PWM_CCU8_CONFIG_t"
 * @endcond
 *
 */

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/
#include "pwm_ccu8.h"

/**********************************************************************************************************************
 * DATA STRUCTURES
 **********************************************************************************************************************/


        const XMC_CCU8_SLICE_COMPARE_CONFIG_t  PWM_CCU8_0_timer_handle     =
            {
              .timer_mode            = (uint32_t)XMC_CCU8_SLICE_TIMER_COUNT_MODE_EA,
              .monoshot              = (uint32_t)XMC_CCU8_SLICE_TIMER_REPEAT_MODE_REPEAT,
              .shadow_xfer_clear     = 0U,
              .dither_timer_period   = 0U,
              .dither_duty_cycle     = 0U,
        
              .prescaler_mode        = (uint32_t)XMC_CCU8_SLICE_PRESCALER_MODE_NORMAL,
        
              .mcm_ch1_enable        = 0U,
              .mcm_ch2_enable        = 0U,
        
              .slice_status          = (uint32_t)XMC_CCU8_SLICE_STATUS_CHANNEL_1,
        
              .passive_level_out0    = (uint32_t)XMC_CCU8_SLICE_OUTPUT_PASSIVE_LEVEL_LOW, 
              .passive_level_out1    = (uint32_t)XMC_CCU8_SLICE_OUTPUT_PASSIVE_LEVEL_LOW, 
              .passive_level_out2    = (uint32_t)XMC_CCU8_SLICE_OUTPUT_PASSIVE_LEVEL_LOW, 
              .passive_level_out3    = (uint32_t)XMC_CCU8_SLICE_OUTPUT_PASSIVE_LEVEL_LOW, 
        
              .asymmetric_pwm        = 0U,
#if !defined(CCU8V3)         
              .invert_out0           = 0U,
              .invert_out1           = 1U,
              .invert_out2           = 0U,
              .invert_out3           = 1U,
#else                     
              .selector_out0         = XMC_CCU8_SOURCE_OUT0_ST1,
              .selector_out1         = XMC_CCU8_SOURCE_OUT1_INV_ST1,
              .selector_out2         = XMC_CCU8_SOURCE_OUT2_ST2,
              .selector_out3         = XMC_CCU8_SOURCE_OUT3_INV_ST2,
#endif
              .prescaler_initval     = 13U,
              .float_limit           = 0U,
              .dither_limit          = 0U,
              .timer_concatenation   = 0U,
            };


        const XMC_CCU8_SLICE_EVENT_CONFIG_t PWM_CCU8_0_event0_config = 
             {
                .mapped_input        = XMC_CCU8_SLICE_INPUT_A,
                .edge                = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_NONE,
                .level               = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_LOW,
                .duration            = XMC_CCU8_SLICE_EVENT_FILTER_DISABLED,
             };

        const XMC_CCU8_SLICE_EVENT_CONFIG_t PWM_CCU8_0_event1_config = 
             {
                .mapped_input        = XMC_CCU8_SLICE_INPUT_A,
                .edge                = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_NONE,
                .level               = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_LOW,
                .duration            = XMC_CCU8_SLICE_EVENT_FILTER_DISABLED,
             };

        const XMC_CCU8_SLICE_EVENT_CONFIG_t PWM_CCU8_0_event2_config = 
             {
                .mapped_input        = XMC_CCU8_SLICE_INPUT_A,
                .edge                = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_NONE,
                .level               = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_LOW,
                .duration            = XMC_CCU8_SLICE_EVENT_FILTER_DISABLED,
             };

        const XMC_CCU8_SLICE_DEAD_TIME_CONFIG_t  PWM_CCU8_0_dt_config = 
            {
              .enable_dead_time_channel1         = 0U,
              .enable_dead_time_channel2         = 0U,
              .channel1_st_path                  = 0U,
              .channel1_inv_st_path              = 0U,
              .channel2_st_path                  = 0U,
              .channel2_inv_st_path              = 0U,
              .div                               = (uint32_t)XMC_CCU8_SLICE_DTC_DIV_1,
        
              .channel1_st_rising_edge_counter   = 0U,
              .channel1_st_falling_edge_counter  = 0U,
        
              .channel2_st_rising_edge_counter   = 0U,
              .channel2_st_falling_edge_counter  = 0U,
            };



#if UC_FAMILY == XMC1
        const XMC_GPIO_CONFIG_t  PWM_CCU8_0_ch1_out1_config    =
           {
               .mode                = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3,
               .input_hysteresis    = XMC_GPIO_INPUT_HYSTERESIS_STANDARD,
               .output_level        = XMC_GPIO_OUTPUT_LEVEL_LOW
           };
#endif

#if UC_FAMILY == XMC4
        const XMC_GPIO_CONFIG_t  PWM_CCU8_0_ch1_out1_config    =
           {
               .mode                = XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3,
               .output_level        = XMC_GPIO_OUTPUT_LEVEL_LOW,
               .output_strength     = XMC_GPIO_OUTPUT_STRENGTH_MEDIUM
           };
#endif
/*------------------------------------------------------------------------------------*/

        const PWM_CCU8_CONFIG_t  PWM_CCU8_0_config_handle =
            {
                .start_control                       = true,      
                .period_value                        = 8788U,
                .compare1_value                      = 4394U,
                .compare2_value                      = 4390U,

                .int_per_match                       = false,
                .int_cmp1_match_up                   = false,
                .int_cmp1_match_down                 = false,
                .int_cmp2_match_up                   = false,
                .int_cmp2_match_down                 = false,
                .int_one_match_down                  = false,
                .int_e0                              = false,
                .int_e1                              = false,
                .int_e2                              = false,
                
                .sr_per_match                        = XMC_CCU8_SLICE_SR_ID_0,
                .sr_cmp1_match_up                    = XMC_CCU8_SLICE_SR_ID_0,
                .sr_cmp1_match_down                  = XMC_CCU8_SLICE_SR_ID_0,
                .sr_cmp2_match_up                    = XMC_CCU8_SLICE_SR_ID_0,
                .sr_cmp2_match_down                  = XMC_CCU8_SLICE_SR_ID_0,
                .sr_one_match_down                   = XMC_CCU8_SLICE_SR_ID_0,
                .sr_e0                               = XMC_CCU8_SLICE_SR_ID_0,
                .sr_e1                               = XMC_CCU8_SLICE_SR_ID_0,
                .sr_e2                               = XMC_CCU8_SLICE_SR_ID_0,
                
                .event0_config_ptr                   = &PWM_CCU8_0_event0_config,
                .event1_config_ptr                   = &PWM_CCU8_0_event1_config,
                .event2_config_ptr                   = &PWM_CCU8_0_event2_config,
                 
                .ext_start_event                     = XMC_CCU8_SLICE_EVENT_NONE,
                .ext_start_mode                      = XMC_CCU8_SLICE_START_MODE_TIMER_START,

                .ext_stop_event                      = XMC_CCU8_SLICE_EVENT_NONE,
                .ext_stop_mode                       = XMC_CCU8_SLICE_END_MODE_TIMER_STOP,

                .ext_count_dir_event                 = XMC_CCU8_SLICE_EVENT_NONE,

                .ext_gate_event                      = XMC_CCU8_SLICE_EVENT_NONE,

                .ext_count_event                     = XMC_CCU8_SLICE_EVENT_NONE,

                .ext_load_event                      = XMC_CCU8_SLICE_EVENT_NONE,
                .ext_load_selector                   = XMC_CCU8_SLICE_COMPARE_CHANNEL_1,

                .ext_mod_event                       = XMC_CCU8_SLICE_EVENT_NONE,
                .ext_mod_mode                        = XMC_CCU8_SLICE_MODULATION_MODE_CLEAR_ST_OUT,
                .ext_mod_sync                        = false,

                .ext_override_edge_event             = XMC_CCU8_SLICE_EVENT_NONE,

                .ext_override_level_event            = XMC_CCU8_SLICE_EVENT_NONE,

                .ext_trap_enable                     = false,
                .ext_trap_event                      = XMC_CCU8_SLICE_EVENT_NONE,
                .ext_trap_sync                       = true,
                .ext_trap_exit                       = XMC_CCU8_SLICE_TRAP_EXIT_MODE_AUTOMATIC,

                .mcm_shadow_txfr_mode                = XMC_CCU8_MULTI_CHANNEL_SHADOW_TRANSFER_SW_SLICE0,

                .dt_config_ptr                       = &PWM_CCU8_0_dt_config,

#if (UC_SERIES != XMC45) /*STC register not available on XMC45xx devices */
                .shadow_transfer_mode                = XMC_CCU8_SLICE_SHADOW_TRANSFER_MODE_ONLY_IN_PERIOD_MATCH,
#endif

#if (UC_SERIES == XMC14) /*below feature available in XMC14xx devices */
                .immediate_write                     = 0U,

                .automatic_shadow_transfer           = 0U,

                .cascaded_shadow_txfr_enable         = false,
#endif
                .ccu8_cc8_slice_timer_ptr            = &PWM_CCU8_0_timer_handle,

                .gpio_ch1_out0_enable                = false,
                .gpio_ch1_out0_ptr                   = (XMC_GPIO_PORT_t *) NULL,
                .gpio_ch1_out0_pin                   = 0U,
                .gpio_ch1_out0_config_ptr            = NULL,    

                .gpio_ch1_out1_enable                = true,
                .gpio_ch1_out1_ptr                   = (XMC_GPIO_PORT_t *) PORT5_BASE,
                .gpio_ch1_out1_pin                   = 8U,
                .gpio_ch1_out1_config_ptr            = &PWM_CCU8_0_ch1_out1_config,    

                .gpio_ch2_out2_enable                = false,
                .gpio_ch2_out2_ptr                   = (XMC_GPIO_PORT_t *) NULL,
                .gpio_ch2_out2_pin                   = 0U,
                .gpio_ch2_out2_config_ptr            = NULL,    

                .gpio_ch2_out3_enable                = false,
                .gpio_ch2_out3_ptr                   = (XMC_GPIO_PORT_t *) NULL,
                .gpio_ch2_out3_pin                   = 0U,
                .gpio_ch2_out3_config_ptr            = NULL,    
                .global_ccu8_handle                   = (GLOBAL_CCU8_t*) &GLOBAL_CCU8_0,
               };

         PWM_CCU8_t PWM_CCU8_0 =
            {
                .config_ptr                          = &PWM_CCU8_0_config_handle,
                .ccu8_module_ptr                     = (XMC_CCU8_MODULE_t*) CCU80_BASE,
                .ccu8_slice_ptr                      = (XMC_CCU8_SLICE_t*) CCU80_CC80,
                .kernel_number                       = 0U,
                .slice_number                        = 0U,
                .shadow_txfr_msk                     = (uint32_t)XMC_CCU8_SHADOW_TRANSFER_SLICE_0,
                .dither_shadow_txfr_msk              = (uint32_t)XMC_CCU8_SHADOW_TRANSFER_DITHER_SLICE_0,
                .prescaler_shadow_txfr_msk           = (uint32_t)XMC_CCU8_SHADOW_TRANSFER_PRESCALER_SLICE_0,

                .state                               = PWM_CCU8_STATE_UNINITIALIZED,
                .sym_duty1                           = 5000U,
                .sym_duty2                           = 5005U,
                .asym_duty                           = 0U,
                .asym_shift                          = 0U,
            };

/********************************************************************************************************/


