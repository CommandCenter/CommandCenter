################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CommandCenterMessagePort.cpp \
../src/CommandCenterServiceApp.cpp \
../src/CommandCenterServiceEntry.cpp \
../src/DeviceInfoPacket.cpp \
../src/DisplayInfo.cpp \
../src/EventPacket.cpp \
../src/FrameBufferHandler.cpp \
../src/FrameHandler.cpp \
../src/InputHandler.cpp \
../src/KeyCode.cpp \
../src/LueseyPidUtil.cpp \
../src/Packet.cpp \
../src/PacketHeader.cpp \
../src/PacketReceiver.cpp \
../src/PacketSender.cpp \
../src/ScreenSender.cpp \
../src/Tranceiver.cpp \
../src/input.cpp 

OBJS += \
./src/CommandCenterMessagePort.o \
./src/CommandCenterServiceApp.o \
./src/CommandCenterServiceEntry.o \
./src/DeviceInfoPacket.o \
./src/DisplayInfo.o \
./src/EventPacket.o \
./src/FrameBufferHandler.o \
./src/FrameHandler.o \
./src/InputHandler.o \
./src/KeyCode.o \
./src/LueseyPidUtil.o \
./src/Packet.o \
./src/PacketHeader.o \
./src/PacketReceiver.o \
./src/PacketSender.o \
./src/ScreenSender.o \
./src/Tranceiver.o \
./src/input.o 

CPP_DEPS += \
./src/CommandCenterMessagePort.d \
./src/CommandCenterServiceApp.d \
./src/CommandCenterServiceEntry.d \
./src/DeviceInfoPacket.d \
./src/DisplayInfo.d \
./src/EventPacket.d \
./src/FrameBufferHandler.d \
./src/FrameHandler.d \
./src/InputHandler.d \
./src/KeyCode.d \
./src/LueseyPidUtil.d \
./src/Packet.d \
./src/PacketHeader.d \
./src/PacketReceiver.d \
./src/PacketSender.d \
./src/ScreenSender.d \
./src/Tranceiver.d \
./src/input.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: C++ Compiler'
	clang++.exe -I"pch" -D_DEBUG -I"C:\workspace\CommandCenterService\inc" -O0 -g3 -Wall -c -fmessage-length=0 -target arm-tizen-linux-gnueabi -gcc-toolchain "C:/tizen-sdk/tools/smart-build-interface/../arm-linux-gnueabi-gcc-4.5/" -ccc-gcc-name arm-linux-gnueabi-g++ -march=armv7-a -mfloat-abi=softfp -mfpu=vfpv3-d16 -mtune=cortex-a8 -Wno-gnu -fPIE --sysroot="C:/tizen-sdk/platforms/tizen2.2/rootstraps/tizen-device-2.2.native" -I"C:/tizen-sdk/platforms/tizen2.2/rootstraps/tizen-device-2.2.native/usr/include/libxml2" -I"C:\tizen-sdk\library" -I"C:/tizen-sdk/platforms/tizen2.2/rootstraps/tizen-device-2.2.native/usr/include" -I"C:/tizen-sdk/platforms/tizen2.2/rootstraps/tizen-device-2.2.native/usr/include/osp" -D_APP_LOG -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


