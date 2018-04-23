/*********************************************************************************************************************
* DAVE APP Name : E_EEPROM_XMC4       APP Version: 4.0.16
*
* NOTE:
* This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
*********************************************************************************************************************/

/**
 * @cond
 ***********************************************************************************************************************
 *
 * Copyright (c) 2016, Infineon Technologies AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the
 * following conditions are met:
 *
 *   Redistributions of source code must retain the above copyright notice, this list of conditions and the  following
 *   disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
 *   following disclaimer in the documentation and/or other materials provided with the distribution.
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
 * 2016-01-20:
 *     - Initial version<br>
 * 2016-07-08:
 *     - Fixed incorrect case for an included header.<br>
 *
 * @endcond
 *
 */

#ifndef E_EEPROM_XMC4_CONF_H
#define E_EEPROM_XMC4_CONF_H

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/

/**********************************************************************************************************************
 * MACROS
 **********************************************************************************************************************/


#define E_EEPROM_XMC4_MAJOR_VERSION (4U) /**< Major version number of E_EEPROM_XMC4 APP*/
#define E_EEPROM_XMC4_MINOR_VERSION (0U) /**< Minor version number of E_EEPROM_XMC4 APP*/
#define E_EEPROM_XMC4_PATCH_VERSION (16U) /**< Patch version number of E_EEPROM_XMC4 APP*/
 
#define E_EEPROM_XMC4_DATA_BLOCK_SIZE 2048U /**< Data size defined in the UI interface "Data block size"*/

#define E_EEPROM_XMC4_ACTUAL_FLASH_BLOCK_SIZE 4096U /**< Internally assigned data block size by the APP
                                                                     Only allow multiples of 512 bytes till 8192*/

#define E_EEPROM_XMC4_FCE_KERNEL_BASE (FCE_KE0_BASE)  /**< FCE kernel number used for CRC calculation*/


#endif /* E_EEPROM_XMC4_H */
/*CODE_BLOCK_END*/

