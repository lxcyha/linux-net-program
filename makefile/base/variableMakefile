OBJS=add/add_int.o add/add_float.o sub/sub_int.o sub/sub_float.o main.o
TARGET=cacu
CFLAGS=-Iadd -Isub -O2
RM=rm -f
CC=gcc

$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(CFLAGES)
$(OBJS):%.o:%.c
	$(CC) -c $(CFLAGS) $< -o $@
clean:
	$(RM) $(TARGET) $(OBJS) 

