################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Atom/Electron.cpp \
../src/Atom/Element.cpp \
../src/Atom/Particle.cpp \
../src/Atom/Photon.cpp \
../src/Atom/Proton.cpp 

OBJS += \
./src/Atom/Electron.o \
./src/Atom/Element.o \
./src/Atom/Particle.o \
./src/Atom/Photon.o \
./src/Atom/Proton.o 

CPP_DEPS += \
./src/Atom/Electron.d \
./src/Atom/Element.d \
./src/Atom/Particle.d \
./src/Atom/Photon.d \
./src/Atom/Proton.d 


# Each subdirectory must supply rules for building sources it contributes
src/Atom/%.o: ../src/Atom/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


