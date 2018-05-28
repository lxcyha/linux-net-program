VPATH=add:sub:.
OBJSDIR=objs
OBJS=add_int.o add_float.o sub_int.o sub_float.o main.o
TARGET=cacu
CFLAGS=-Iadd -Isub -O2
RM=rm -f
CC=gcc

$(TARGET):$(OBJSDIR) $(OBJS)
	$(CC) -o $(TARGET) $(OBJSDIR)/*.o $(CFLAGES)
$(OBJS):%.o:%.c
	$(CC) -c $(CFLAGS) $< -o $(OBJSDIR)/$@
$(OBJSDIR):
	mkdir -p ./$@
clean:
	-$(RM) $(TARGET) 
	-$(RM) $(OBJSDIR)/*.o 

