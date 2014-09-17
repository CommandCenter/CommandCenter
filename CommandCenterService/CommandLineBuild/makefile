################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

CPP_DEPS += ./src/tizenx.h.pch.d

# All of the sources participating in the build are defined here
# -include sources.mk
O_SRCS := 
PO_SRCS := 
CPP_SRCS := 
C_UPPER_SRCS := 
C_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
EDC_SRCS := 
ASM_SRCS := 
CXX_SRCS := 
C++_SRCS := 
CC_SRCS := 
MO_FILES := 
OBJS := 
C++_DEPS := 
C_DEPS := 
CC_DEPS := 
EDJ_FILES := 
CPP_DEPS := 
EXECUTABLES := 
C_UPPER_DEPS := 
CXX_DEPS := 

# Every subdirectory with source files must be described here
SUBDIRS := \
src \

# -include src/subdir.mk
# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CommandCenterMessagePort.cpp \
../src/CommandCenterServiceApp.cpp \
../src/CommandCenterServiceEntry.cpp \
../src/DeviceInfoPacket.cpp \
../src/DisplayInfo.cpp \
../src/FrameBufferHandler.cpp \
../src/FrameHandler.cpp \
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
./src/FrameBufferHandler.o \
./src/FrameHandler.o \
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
./src/FrameBufferHandler.d \
./src/FrameHandler.d \
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
	$(CC) -D_DEBUG -I"$(PROJPATH)\inc" -O0 -g3 -Wall -c -fmessage-length=0 $(TC_COMPILER_MISC) -fPIE --sysroot="$(ROOTSTRAP)" -I"$(ROOTSTRAP)/usr/include/libxml2" -I"$(SDKPATH)\library" -I"$(ROOTSTRAP)/usr/include" -I"$(ROOTSTRAP)/usr/include/osp" -D_APP_LOG -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


# -include objects.mk
USER_OBJS :=

LIBS :=

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: makesubdirs CommandCenterService.exe secondary-outputs

# Tool invocations
CommandCenterService.exe: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: C++ Linker'
	$(CC) -o"CommandCenterService.exe" $(OBJS) $(USER_OBJS) $(LIBS) -L"$(PROJPATH)\lib" $(TC_LINKER_MISC) -pie -lpthread -Xlinker -rpath="/opt/usr/apps/${APPID}/lib" -Xlinker -rpath="/home/developer/sdk_tools/lib" --sysroot="$(ROOTSTRAP)" -L"$(ROOTSTRAP)/usr/lib" -L"$(ROOTSTRAP)/usr/lib/osp" -losp-uifw -losp-appfw -losp-image -losp-json -losp-ime -losp-net -lpthread -losp-content -losp-locations -losp-telephony -losp-uix -losp-media -losp-messaging -losp-web -losp-social -losp-wifi -losp-bluetooth -losp-nfc -losp-face -losp-secure-element -losp-speech-tts -losp-speech-stt -losp-shell -losp-shell-core -losp-vision -lxml2 -lalut -lopenal
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./src/tizenx.h.pch.d ./src/tizenx.h.pch
	-$(RM) $(MO_FILES)$(OBJS)$(C++_DEPS)$(C_DEPS)$(CC_DEPS)$(EDJ_FILES)$(CPP_DEPS)$(EXECUTABLES)$(C_UPPER_DEPS)$(CXX_DEPS) CommandCenterService.exe
	-@echo ' '

secondary-outputs: $(MO_FILES) $(EDJ_FILES)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

makesubdirs: $(SUBDIRS)

$(SUBDIRS):
	@echo 'Creating sub directory: $@'
	@mkdir -p $@

$(OBJS):%.o:src/tizenx.h.pch

src/tizenx.h.pch: ../inc/tizenx.h
	@echo 'Building file: $<'
	@echo 'Generate pch file'
	$(CC) -D_DEBUG -I"$(PROJPATH)\inc" -O0 -g3 -Wall -c -fmessage-length=0 $(TC_COMPILER_MISC) -fPIE --sysroot="$(ROOTSTRAP)" -I"$(ROOTSTRAP)/usr/include/libxml2" -I"$(SDKPATH)\library" -I"$(ROOTSTRAP)/usr/include" -I"$(ROOTSTRAP)/usr/include/osp" -D_APP_LOG -MMD -MP -MF"./src/tizenx.h.pch.d" -MT"./src/tizenx.h.pch.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

