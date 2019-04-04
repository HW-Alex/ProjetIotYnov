/**
  ******************************************************************************
  * @file    stm32l0xx_hal_bluenrg_exti.h
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    01-October-2014
  * @brief   HAL specific implementation for stm32xx_lppuart.c
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2014 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32L0XX_HAL_BLUENRG_EXTI_H
#define __STM32L0XX_HAL_BLUENRG_EXTI_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l0xx_hal.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported defines --------------------------------------------------------*/
/* Exported macros -----------------------------------------------------------*/
 /**
   * @brief  Disable EXTI interrupt on selected GPIO
   *
   * @param  __EXTILINE__: specifies the GPIO Exti sources to be disabled.
   *
   * @retval None
   */
 #define __HAL_LPPUART_EXTI_DISABLE_IT(__EXTILINE__)   (EXTI->IMR &= (~(__EXTILINE__)))

 /**
   * @brief  Enable EXTI interrupt on selected GPIO
   *
   * @param  __EXTILINE__: specifies the GPIO Exti sources to be enabled.
   *
   * @retval None
   */
 #define __HAL_LPPUART_EXTI_ENABLE_IT(__EXTILINE__)   (EXTI->IMR |= (__EXTILINE__))

 /**
   * @brief  Enable EXTI rising edge configuration on selected GPIO
   *
   * @param  __EXTILINE__: specifies the GPIO Exti sources to be disabled.
   *
   * @retval None
   */
 #define __HAL_LPPUART_EXTI_ENABLE_RISING_EDGE(__EXTILINE__)   (EXTI->RTSR |= (__EXTILINE__))

 /**
   * @brief  Enable EXTI falling edge configuration on selected GPIO
   *
   * @param  __EXTILINE__: specifies the GPIO Exti sources to be disabled.
   *
   * @retval None
   */
 #define __HAL_LPPUART_EXTI_ENABLE_FALLING_EDGE(__EXTILINE__)   (EXTI->FTSR |= (__EXTILINE__))

/* Exported functions ------------------------------------------------------- */

#ifdef __cplusplus
}
#endif

#endif /*__STM32L0XX_HAL_BLUENRG_EXTI_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
