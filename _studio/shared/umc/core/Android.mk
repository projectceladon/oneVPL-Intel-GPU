LOCAL_PATH:= $(call my-dir)

# Setting subdirectories to march thru
MFX_LOCAL_DIRS := \
    vm \
    vm_plus \
    umc

MFX_LOCAL_SRC_FILES := \
    $(patsubst $(LOCAL_PATH)/%, %, $(foreach dir, $(MFX_LOCAL_DIRS), $(wildcard $(LOCAL_PATH)/$(dir)/src/*.c))) \
    $(patsubst $(LOCAL_PATH)/%, %, $(foreach dir, $(MFX_LOCAL_DIRS), $(wildcard $(LOCAL_PATH)/$(dir)/src/*.cpp)))

MFX_LOCAL_INCLUDES := \
    $(foreach dir, $(MFX_LOCAL_DIRS), $(wildcard $(LOCAL_PATH)/$(dir)/include))

# =============================================================================

include $(CLEAR_VARS)
include $(MFX_HOME)/android/mfx_defs.mk

LOCAL_SRC_FILES := $(MFX_LOCAL_SRC_FILES)

LOCAL_C_INCLUDES := \
    $(MFX_LOCAL_INCLUDES) \
    $(MFX_INCLUDES_INTERNAL_HW)

LOCAL_CFLAGS := \
    $(MFX_CFLAGS_INTERNAL_HW) \
    -Wno-error \
    -Wno-unused-parameter

LOCAL_CFLAGS_32 := $(MFX_CFLAGS_INTERNAL_32)
LOCAL_CFLAGS_64 := $(MFX_CFLAGS_INTERNAL_64)

LOCAL_HEADER_LIBRARIES := libmfx_gen_headers
LOCAL_STATIC_LIBRARIES += libmfx_logging

LOCAL_MODULE_TAGS := optional
LOCAL_MODULE := libumc_core_hw

include $(BUILD_STATIC_LIBRARY)
