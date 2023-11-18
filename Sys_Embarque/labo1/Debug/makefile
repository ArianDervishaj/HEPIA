################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := labo1
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all:
	+@$(MAKE) --no-print-directory main-build && $(MAKE) --no-print-directory post-build

# Main-build Target
main-build: labo1.axf

# Tool invocations
labo1.axf: $(OBJS) $(USER_OBJS) makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU C++ Linker'
	arm-none-eabi-c++ -L"/home/arian.dervisha/Documents/MCUXpresso_11.8.0_1165/workspace/mbed-os/Debug" -DMBED_DEBUG -DMBED_TRAP_ERRORS_ENABLED=1 -Wl,-n -Wl,--start-group -lstdc++ -lsupc++ -lm -lc -lgcc -lnosys -lmbed-os -Wl,--end-group -Xlinker -Map="labo1.map" -Xlinker -print-memory-usage -Xlinker --gc-sections -Xlinker --wrap=main -Xlinker --wrap=_malloc_r -Xlinker --wrap=_free_r -Xlinker --wrap=_realloc_r -Xlinker --wrap=_memalign_r -Xlinker --wrap=_calloc_r -Xlinker --wrap=exit -Xlinker --wrap=atexit -mcpu=cortex-m3 -mthumb -T ../../mbed-os/targets/TARGET_NXP/TARGET_LPC176X/device/TOOLCHAIN_GCC_ARM/LPC1768.ld -o "labo1.axf" $(OBJS) $(USER_OBJS) $(LIBS) -lstdc++ -lsupc++ -lm -lc -lgcc -lnosys -lmbed-os
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) labo1.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "labo1.axf"; # arm-none-eabi-objcopy -v -O binary "labo1.axf" "labo1.bin" ; # checksum -p LPC1769 -d "labo1.bin";
	-@echo ' '

.PHONY: all clean dependents main-build post-build

-include ../makefile.targets
