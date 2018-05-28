TARGET=cacu
CFLAGS=-O2 -Iadd -Isub
CC=gcc
DIRS=sub add .
FILES=$(foreach dir,$(DIRS),$(wildcard $(dir)/*.c))
OBJS=$(patsubst %.c,%.o,$(FILES))

$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS)
clean:
	-$(RM) $(TARGET) 
	-$(RM) $(OBJS) 
