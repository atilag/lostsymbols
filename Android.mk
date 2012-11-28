LOCAL_PATH := $(call my-dir)
 
include $(CLEAR_VARS)
 
LOCAL_MODULE := liblostsymbols
LOCAL_MODULE_TAGS := optional

LOCAL_SRC_FILES := unresolved.cpp

LOCAL_SHARED_LIBRARIES := liblog libcutils

 
include $(BUILD_SHARED_LIBRARY)
