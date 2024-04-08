################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables
C_SRCS += \
../src/frtos_skeleton/task_1.c \
../src/frtos_skeleton/task_2.c 

COMPILER_OBJS += \
src/frtos_skeleton/task_1.obj \
src/frtos_skeleton/task_2.obj 

C_DEPS += \
src/frtos_skeleton/task_1.d \
src/frtos_skeleton/task_2.d 

# Each subdirectory must supply rules for building sources it contributes
src/frtos_skeleton/%.obj: ../src/frtos_skeleton/%.c 
	@echo 'Scanning and building file: $<'
	@echo 'Invoking: Scanner and Compiler'
	@echo src\frtos_skeleton\cDepSubCommand.tmp=
	@sed -e "s/^/ /" "src\frtos_skeleton\cDepSubCommand.tmp"
	ccrx -subcommand="src\frtos_skeleton\cDepSubCommand.tmp" -output=dep="$(@:%.obj=%.d)" -MT="$(@:%.d=%.obj)" -MT="$(@:%.obj=%.d)" "$<"
	@echo src\frtos_skeleton\cSubCommand.tmp=
	@sed -e "s/^/ /" "src\frtos_skeleton\cSubCommand.tmp"
	ccrx -subcommand="src\frtos_skeleton\cSubCommand.tmp" "$<"
	@echo 'Finished Scanning and building: $<'
	@echo ''

