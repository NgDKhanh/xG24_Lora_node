################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include gecko_sdk_4.2.3/platform/service/udelay/src/subdir.mk
-include gecko_sdk_4.2.3/platform/service/system/src/subdir.mk
-include gecko_sdk_4.2.3/platform/service/sleeptimer/src/subdir.mk
-include gecko_sdk_4.2.3/platform/service/iostream/src/subdir.mk
-include gecko_sdk_4.2.3/platform/service/device_init/src/subdir.mk
-include gecko_sdk_4.2.3/platform/peripheral/src/subdir.mk
-include gecko_sdk_4.2.3/platform/emlib/src/subdir.mk
-include gecko_sdk_4.2.3/platform/emdrv/dmadrv/src/subdir.mk
-include gecko_sdk_4.2.3/platform/driver/i2cspm/src/subdir.mk
-include gecko_sdk_4.2.3/platform/common/toolchain/src/subdir.mk
-include gecko_sdk_4.2.3/platform/common/src/subdir.mk
-include gecko_sdk_4.2.3/platform/Device/SiliconLabs/EFR32MG24/Source/subdir.mk
-include gecko_sdk_4.2.3/hardware/driver/bmp280/src/subdir.mk
-include gecko_sdk_4.2.3/hardware/driver/bmp280/bosch/BMP280_driver/subdir.mk
-include gecko_sdk_4.2.3/hardware/board/src/subdir.mk
-include gecko_sdk_4.2.3/app/common/util/app_log/subdir.mk
-include autogen/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := i2c_scan
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: main-build

# Main-build Target
main-build: i2c_scan.axf

# Tool invocations
i2c_scan.axf: $(OBJS) $(USER_OBJS) makefile objects.mk $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m33 -mthumb -T "C:\Users\admin\SimplicityStudio\v5_workspace\i2c_scan\autogen\linkerfile.ld" -Xlinker --gc-sections -Xlinker -Map="i2c_scan.map" -mfpu=fpv5-sp-d16 -mfloat-abi=hard --specs=nano.specs -u _printf_float -o i2c_scan.axf -Wl,--start-group "./ADC_lib.o" "./app.o" "./bh1750.o" "./i2c_scan.o" "./lora_uart.o" "./main.o" "./pms7003.o" "./autogen/sl_board_default_init.o" "./autogen/sl_device_init_clocks.o" "./autogen/sl_event_handler.o" "./autogen/sl_i2cspm_init.o" "./autogen/sl_iostream_handles.o" "./autogen/sl_iostream_init_eusart_instances.o" "./autogen/sl_iostream_init_usart_instances.o" "./gecko_sdk_4.2.3/app/common/util/app_log/app_log.o" "./gecko_sdk_4.2.3/hardware/board/src/sl_board_control_gpio.o" "./gecko_sdk_4.2.3/hardware/board/src/sl_board_init.o" "./gecko_sdk_4.2.3/hardware/driver/bmp280/bosch/BMP280_driver/bmp280.o" "./gecko_sdk_4.2.3/hardware/driver/bmp280/src/sl_bmp280.o" "./gecko_sdk_4.2.3/platform/Device/SiliconLabs/EFR32MG24/Source/startup_efr32mg24.o" "./gecko_sdk_4.2.3/platform/Device/SiliconLabs/EFR32MG24/Source/system_efr32mg24.o" "./gecko_sdk_4.2.3/platform/common/src/sl_assert.o" "./gecko_sdk_4.2.3/platform/common/src/sl_slist.o" "./gecko_sdk_4.2.3/platform/common/src/sl_string.o" "./gecko_sdk_4.2.3/platform/common/toolchain/src/sl_memory.o" "./gecko_sdk_4.2.3/platform/driver/i2cspm/src/sl_i2cspm.o" "./gecko_sdk_4.2.3/platform/emdrv/dmadrv/src/dmadrv.o" "./gecko_sdk_4.2.3/platform/emlib/src/em_burtc.o" "./gecko_sdk_4.2.3/platform/emlib/src/em_cmu.o" "./gecko_sdk_4.2.3/platform/emlib/src/em_core.o" "./gecko_sdk_4.2.3/platform/emlib/src/em_emu.o" "./gecko_sdk_4.2.3/platform/emlib/src/em_eusart.o" "./gecko_sdk_4.2.3/platform/emlib/src/em_gpio.o" "./gecko_sdk_4.2.3/platform/emlib/src/em_i2c.o" "./gecko_sdk_4.2.3/platform/emlib/src/em_iadc.o" "./gecko_sdk_4.2.3/platform/emlib/src/em_ldma.o" "./gecko_sdk_4.2.3/platform/emlib/src/em_msc.o" "./gecko_sdk_4.2.3/platform/emlib/src/em_system.o" "./gecko_sdk_4.2.3/platform/emlib/src/em_timer.o" "./gecko_sdk_4.2.3/platform/emlib/src/em_usart.o" "./gecko_sdk_4.2.3/platform/peripheral/src/peripheral_sysrtc.o" "./gecko_sdk_4.2.3/platform/service/device_init/src/sl_device_init_dcdc_s2.o" "./gecko_sdk_4.2.3/platform/service/device_init/src/sl_device_init_emu_s2.o" "./gecko_sdk_4.2.3/platform/service/device_init/src/sl_device_init_hfxo_s2.o" "./gecko_sdk_4.2.3/platform/service/device_init/src/sl_device_init_lfxo_s2.o" "./gecko_sdk_4.2.3/platform/service/device_init/src/sl_device_init_nvic.o" "./gecko_sdk_4.2.3/platform/service/iostream/src/sl_iostream.o" "./gecko_sdk_4.2.3/platform/service/iostream/src/sl_iostream_eusart.o" "./gecko_sdk_4.2.3/platform/service/iostream/src/sl_iostream_retarget_stdio.o" "./gecko_sdk_4.2.3/platform/service/iostream/src/sl_iostream_stdlib_config.o" "./gecko_sdk_4.2.3/platform/service/iostream/src/sl_iostream_uart.o" "./gecko_sdk_4.2.3/platform/service/iostream/src/sl_iostream_usart.o" "./gecko_sdk_4.2.3/platform/service/sleeptimer/src/sl_sleeptimer.o" "./gecko_sdk_4.2.3/platform/service/sleeptimer/src/sl_sleeptimer_hal_burtc.o" "./gecko_sdk_4.2.3/platform/service/sleeptimer/src/sl_sleeptimer_hal_sysrtc.o" "./gecko_sdk_4.2.3/platform/service/sleeptimer/src/sl_sleeptimer_hal_timer.o" "./gecko_sdk_4.2.3/platform/service/system/src/sl_system_init.o" "./gecko_sdk_4.2.3/platform/service/system/src/sl_system_process_action.o" "./gecko_sdk_4.2.3/platform/service/udelay/src/sl_udelay.o" "./gecko_sdk_4.2.3/platform/service/udelay/src/sl_udelay_armv6m_gcc.o" -lgcc -lc -lm -lnosys -Wl,--end-group -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building hex file: i2c_scan.hex'
	arm-none-eabi-objcopy -O ihex "i2c_scan.axf" "i2c_scan.hex"
	@echo ' '

	@echo 'Building bin file: i2c_scan.bin'
	arm-none-eabi-objcopy -O binary "i2c_scan.axf" "i2c_scan.bin"
	@echo ' '

	@echo 'Building s37 file: i2c_scan.s37'
	arm-none-eabi-objcopy -O srec "i2c_scan.axf" "i2c_scan.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "i2c_scan.axf" -A
	@echo ' '

# Other Targets
clean:
	-@$(foreach FILE, $(EXECUTABLES), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(OBJS), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(C_DEPS), $(shell $(RM) $(FILE)) )
	-$(RM) i2c_scan.axf
	-@echo ' '

.PHONY: all clean dependents main-build

-include ../makefile.targets
