################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Engine/Application.cpp \
../src/Engine/Entity.cpp \
../src/Engine/EntityManager.cpp \
../src/Engine/InitialState.cpp \
../src/Engine/Socket.cpp \
../src/Engine/SocketState.cpp 

OBJS += \
./src/Engine/Application.o \
./src/Engine/Entity.o \
./src/Engine/EntityManager.o \
./src/Engine/InitialState.o \
./src/Engine/Socket.o \
./src/Engine/SocketState.o 

CPP_DEPS += \
./src/Engine/Application.d \
./src/Engine/Entity.d \
./src/Engine/EntityManager.d \
./src/Engine/InitialState.d \
./src/Engine/Socket.d \
./src/Engine/SocketState.d 


# Each subdirectory must supply rules for building sources it contributes
src/Engine/%.o: ../src/Engine/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


