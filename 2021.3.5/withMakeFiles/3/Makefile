CC=gcc
COMPILE=$(CC) -g
CFILES=$(dir \s *.c*)
OBJECT=3.o funcs.o
TARGET=launch
$(TARGET):$(OBJECT)
	$(COMPILE) -o $@ $(OBJECT)
.c:.o
	$(COMPILE) -c $< -o $@
clean:
	del $(TARGET).exe $(OBJECT)