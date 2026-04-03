CC      := clang++
sources := main.cpp
exe     := main.exe

LLVM_CONFIG := llvm-config
CXXFLAGS := $(shell $(LLVM_CONFIG) --cxxflags)
LDFLAGS  := $(shell $(LLVM_CONFIG) --ldflags --libs --system-libs)

.PHONY: all run clean

all : $(exe)

$(exe) : $(sources)
	$(CC) $(CXXFLAGS) $(sources)  -o $@  $(LDFLAGS) 
run : $(exe)
	./$(exe)
clean :
	rm -rf $(exe)