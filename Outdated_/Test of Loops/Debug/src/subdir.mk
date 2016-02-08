################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Test\ of\ Loops.cpp 

OBJS += \
./src/Test\ of\ Loops.o 

CPP_DEPS += \
./src/Test\ of\ Loops.d 


# Each subdirectory must supply rules for building sources it contributes
src/Test\ of\ Loops.o: ../src/Test\ of\ Loops.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Test of Loops.d" -MT"src/Test\ of\ Loops.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


