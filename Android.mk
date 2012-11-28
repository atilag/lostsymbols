LOCAL_PATH := $(call my-dir)
 
include $(CLEAR_VARS)
 
LOCAL_MODULE    := unresolved
LOCAL_SRC_FILES := unresolved.c

LOCAL_SHARED_LIBRARIES := liblog libcutils

 
include $(BUILD_SHARED_LIBRARY)
