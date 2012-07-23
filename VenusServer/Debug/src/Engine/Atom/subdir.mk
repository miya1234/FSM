################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Engine/Atom/Electron.cpp \
../src/Engine/Atom/Element.cpp \
../src/Engine/Atom/Particle.cpp \
../src/Engine/Atom/Photon.cpp \
../src/Engine/Atom/Proton.cpp 

OBJS += \
./src/Engine/Atom/Electron.o \
./src/Engine/Atom/Element.o \
./src/Engine/Atom/Particle.o \
./src/Engine/Atom/Photon.o \
./src/Engine/Atom/Proton.o 

CPP_DEPS += \
./src/Engine/Atom/Electron.d \
./src/Engine/Atom/Element.d \
./src/Engine/Atom/Particle.d \
./src/Engine/Atom/Photon.d \
./src/Engine/Atom/Proton.d 


# Each subdirectory must supply rules for building sources it contributes
src/Engine/Atom/%.o: ../src/Engine/Atom/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


