################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/labo1.cpp 

CPP_DEPS += \
./src/labo1.d 

OBJS += \
./src/labo1.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C++ Compiler'
	arm-none-eabi-c++ -std=gnu++98 -DDEVICE_FLASH=1 -DARM_MATH_CM3 -DDEVICE_DIGITALIN=1 -DDEVICE_SLEEP=1 -DTARGET_CORTEX -DTARGET_NXP -DCOMPONENT_NSPE=1 -DDEVICE_I2CSLAVE=1 -DDEVICE_PWMOUT=1 -DDEVICE_I2C=1 -DTARGET_CORTEX_M -DTOOLCHAIN_GCC -DTARGET_LIKE_MBED -D__CMSIS_RTOS -DDEVICE_MPU=1 -DDEVICE_DEBUG_AWARENESS=1 -DTOOLCHAIN_GCC_ARM -D__CORTEX_M3 -DTARGET_LPC1768 -DDEVICE_ANALOGIN=1 -DTARGET_M3 -DCOMPONENT_PSA_SRV_EMUL=1 -DDEVICE_SPISLAVE=1 -DDEVICE_INTERRUPTIN=1 -D__MBED_CMSIS_RTOS_CM -DCOMPONENT_PSA_SRV_IMPL=1 -DTARGET_LPC176X -DTARGET_LPCTarget -D__MBED__=1 -DDEVICE_ETHERNET=1 -DDEVICE_CAN=1 -DDEVICE_EMAC=1 -DDEVICE_DIGITALOUT=1 -DMBED_BUILD_TIMESTAMP=1570193752.760802 -DDEVICE_SEMIHOST=1 -DDEVICE_STDIO_MESSAGES=1 -DDEVICE_SPI=1 -DDEVICE_SERIAL=1 -DDEVICE_LOCALFILESYSTEM=1 -DTARGET_NXP_EMAC -DTARGET_MBED_LPC1768 -DTARGET_DEBUG -DDEVICE_PORTOUT=1 -DDEVICE_RTC=1 -DTARGET_LIKE_CORTEX_M3 -DDEVICE_ANALOGOUT=1 -DTARGET_hepialight2 -DDEVICE_SERIAL_FC=1 -DDEVICE_PORTIN=1 -DDEVICE_PORTINOUT=1 -DDEVICE_USTICKER=1 -D__NEWLIB__ -DDEBUG -D__CODE_RED -DCORE_M3 -DCPP_USE_HEAP -D__LPC17XX__ -I"/home/arian/Desktop/HEPIA/Sys_Embarque/labos/labo1/." -I"/home/arian/Desktop/HEPIA/Sys_Embarque/labos/labo1/inc" -I"/home/arian/Desktop/HEPIA/Sys_Embarque/labos/mbed-os" -I"/home/arian/Desktop/HEPIA/Sys_Embarque/labos/mbed-os/cmsis" -I"/home/arian/Desktop/HEPIA/Sys_Embarque/labos/mbed-os/cmsis/TARGET_CORTEX_M" -I"/home/arian/Desktop/HEPIA/Sys_Embarque/labos/mbed-os/drivers" -I"/home/arian/Desktop/HEPIA/Sys_Embarque/labos/mbed-os/hal" -I"/home/arian/Desktop/HEPIA/Sys_Embarque/labos/mbed-os/hal/storage_abstraction" -I"/home/arian/Desktop/HEPIA/Sys_Embarque/labos/mbed-os/platform" -I"/home/arian/Desktop/HEPIA/Sys_Embarque/labos/mbed-os/targets/TARGET_NXP" -I"/home/arian/Desktop/HEPIA/Sys_Embarque/labos/mbed-os/targets/TARGET_NXP/TARGET_LPC176X" -I"/home/arian/Desktop/HEPIA/Sys_Embarque/labos/mbed-os/targets/TARGET_NXP/TARGET_LPC176X/TARGET_MBED_LPC1768" -I"/home/arian/Desktop/HEPIA/Sys_Embarque/labos/mbed-os/targets/TARGET_NXP/TARGET_LPC176X/device" -include"/home/arian/Desktop/HEPIA/Sys_Embarque/labos/mbed-os/mbed_config.h" -O0 -fno-rtti -fmessage-length=0 -fno-exceptions -fno-builtin -ffunction-sections -fdata-sections -funsigned-char -fno-delete-null-pointer-checks -fomit-frame-pointer -g3 -Wall -Wextra -c -DMBED_DEBUG -DMBED_TRAP_ERRORS_ENABLED=1 -Wno-unused-parameter -Wno-missing-field-initializers -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m3 -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/labo1.d ./src/labo1.o

.PHONY: clean-src

