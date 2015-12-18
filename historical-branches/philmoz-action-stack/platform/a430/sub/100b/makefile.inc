#30F8
PLATFORMID=12536

PLATFORMOS=vxworks

MAXRAMADDR=0xffffff
MEMBASEADDR=0x1900
RESTARTSTART=0x50000
MEMISOSTART=0x9F7D0
ROMBASEADDR=0xffc00000


PLFLAGS=-DMEMBASEADDR=$(MEMBASEADDR) -DMEMISOSTART=$(MEMISOSTART) -DMEMISOSIZE=$(MEMISOSIZE)
PLFLAGS+=-DRESTARTSTART=$(RESTARTSTART)