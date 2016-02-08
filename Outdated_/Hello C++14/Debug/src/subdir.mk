################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Hello\ C++14.cpp 

OBJS += \
./src/Hello\ C++14.o 

CPP_DEPS += \
./src/Hello\ C++14.d 


# Each subdirectory must supply rules for building sources it contributes
src/Hello\ C++14.o: ../src/Hello\ C++14.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++1y -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Hello C++14.d" -MT"src/Hello\ C++14.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


