################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Application.cpp \
../src/Entity.cpp \
../src/EntityManager.cpp \
../src/InitialState.cpp \
../src/Socket.cpp \
../src/SocketState.cpp \
../src/VenusServer.cpp 

OBJS += \
./src/Application.o \
./src/Entity.o \
./src/EntityManager.o \
./src/InitialState.o \
./src/Socket.o \
./src/SocketState.o \
./src/VenusServer.o 

CPP_DEPS += \
./src/Application.d \
./src/Entity.d \
./src/EntityManager.d \
./src/InitialState.d \
./src/Socket.d \
./src/SocketState.d \
./src/VenusServer.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


