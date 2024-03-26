ifeq ($(strip $(AUDIO_ENABLE)), yes)
    SRC += muse.c
endif
LEADER_ENABLE = yes
DYNAMIC_MACRO_ENABLE = yes
