CC = clang
CFLAGS = -g -Wall -O0 -MMD -MP

TARGET = tiny-fcgi
LDLIBS = -lfcgi
OBJS = tiny-fcgi.o

.PHONY: all
all : $(TARGET) 

.PHONY: clean
clean:
	-$(RM) $(TARGET) $(OBJS)

$(TARGET) : $(OBJS)
