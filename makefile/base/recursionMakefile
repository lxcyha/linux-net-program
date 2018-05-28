TARGET=cacu
CFLAGS=-O2
CC=gcc
export OBJSDIR=$(shell pwd)/objs

$(TARGET):$(OBJSDIR) main.o
	$(MAKE) -C add
	$(MAKE) -C sub
	$(CC) -o $(TARGET) $(OBJSDIR)/*.o
main.o:%.o:%.c
	$(CC) -c $< -o $(OBJSDIR)/$@ $(CFLAGS) -Iadd -Isub
clean:
	-$(RM) $(TARGET) 
	-$(RM) $(OBJSDIR)/*.o 
