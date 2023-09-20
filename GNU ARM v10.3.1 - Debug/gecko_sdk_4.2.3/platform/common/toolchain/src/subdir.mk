################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk/platform/common/toolchain/src/sl_memory.c 

OBJS += \
./gecko_sdk_4.2.3/platform/common/toolchain/src/sl_memory.o 

C_DEPS += \
./gecko_sdk_4.2.3/platform/common/toolchain/src/sl_memory.d 


# Each subdirectory must supply rules for building sources it contributes
gecko_sdk_4.2.3/platform/common/toolchain/src/sl_memory.o: C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk/platform/common/toolchain/src/sl_memory.c gecko_sdk_4.2.3/platform/common/toolchain/src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m33 -mthumb -std=c99 '-DDEBUG=1' '-DDEBUG_EFM=1' '-DEFR32MG24B210F1536IM48=1' '-DHARDWARE_BOARD_DEFAULT_RF_BAND_2400=1' '-DHARDWARE_BOARD_SUPPORTS_1_RF_BAND=1' '-DHARDWARE_BOARD_SUPPORTS_RF_BAND_2400=1' '-DSL_BOARD_NAME="BRD2703A"' '-DSL_BOARD_REV="A02"' '-DSL_COMPONENT_CATALOG_PRESENT=1' -I"C:\Users\admin\SimplicityStudio\v5_workspace\i2c_scan\gecko_sdk_4.2.3\hardware\driver\bmp280\inc" -I"C:\Users\admin\SimplicityStudio\v5_workspace\i2c_scan\gecko_sdk_4.2.3\hardware\driver\bmp280\bosch\BMP280_driver" -I"C:\Users\admin\SimplicityStudio\v5_workspace\i2c_scan\config" -I"C:\Users\admin\SimplicityStudio\v5_workspace\i2c_scan\autogen" -I"C:\Users\admin\SimplicityStudio\v5_workspace\i2c_scan" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//platform/Device/SiliconLabs/EFR32MG24/Include" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//app/common/util/app_log" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//platform/common/inc" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//hardware/driver/bmp280/inc" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//hardware/driver/bmp280/bosch/BMP280_driver" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//hardware/board/inc" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//platform/CMSIS/Core/Include" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//platform/service/device_init/inc" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//platform/emdrv/dmadrv/inc" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//platform/emdrv/common/inc" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//platform/emlib/inc" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//platform/driver/i2cspm/inc" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//platform/service/iostream/inc" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//platform/peripheral/inc" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//platform/common/toolchain/inc" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//platform/service/system/inc" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//platform/service/sleeptimer/inc" -I"C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk//platform/service/udelay/inc" -Os -Wall -Wextra -mno-sched-prolog -fno-builtin -ffunction-sections -fdata-sections -imacrossl_gcc_preinclude.h -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mcmse --specs=nano.specs -c -fmessage-length=0 -MMD -MP -MF"gecko_sdk_4.2.3/platform/common/toolchain/src/sl_memory.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


