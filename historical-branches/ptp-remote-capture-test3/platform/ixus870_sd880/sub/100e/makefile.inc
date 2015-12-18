PLATFORMID=12694

PLATFORMOS=dryos

MEMBASEADDR=0x1900
MEMISOSTART=0xDE578
ROMBASEADDR=0xFF810000


PLFLAGS=-DMEMBASEADDR=$(MEMBASEADDR) -DMEMISOSTART=$(MEMISOSTART) -DMEMISOSIZE=$(MEMISOSIZE)

NEED_ENCODED_DISKBOOT=1
KEYSYS=d4

PLATFORMOSVER=31