# Automatically generated on Tue Jun  7 21:58:03 2011
#
# Do not edit, modify UserConf.mk instead!
#

PLATFORM=ENET_SAM7X
HWDEF+=-D$(PLATFORM)
LDNAME=at91sam7x512_rom
LDSCRIPT=$(top_srcdir)/arch/arm/ldscripts/$(LDNAME).ld
TRGT = arm-none-eabi-
MCU=arm7tdmi
CRUROM=crurom


include $(top_blddir)/UserConf.mk
