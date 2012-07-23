################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Application.cpp \
../src/Electron.cpp \
../src/Element.cpp \
../src/Entity.cpp \
../src/EntityManager.cpp \
../src/InitialState.cpp \
../src/Particle.cpp \
../src/Photon.cpp \
../src/Proton.cpp \
../src/Socket.cpp \
../src/SocketState.cpp \
../src/VenusServer.cpp 

OBJS += \
./src/Application.o \
./src/Electron.o \
./src/Element.o \
./src/Entity.o \
./src/EntityManager.o \
./src/InitialState.o \
./src/Particle.o \
./src/Photon.o \
./src/Proton.o \
./src/Socket.o \
./src/SocketState.o \
./src/VenusServer.o 

CPP_DEPS += \
./src/Application.d \
./src/Electron.d \
./src/Element.d \
./src/Entity.d \
./src/EntityManager.d \
./src/InitialState.d \
./src/Particle.d \
./src/Photon.d \
./src/Proton.d \
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


