################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/PSA1_Part2.cpp 

OBJS += \
./src/PSA1_Part2.o 

CPP_DEPS += \
./src/PSA1_Part2.d 


# Each subdirectory must supply rules for building sources it contributes
src/PSA1_Part2.o: ../src/PSA1_Part2.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/PSA1_Part2.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


