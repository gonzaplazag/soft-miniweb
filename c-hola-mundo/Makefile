# define que mi compilador es gcc (que ya he instalado)
CC      := gcc

# opciones de compilador
# std=c11: usa estandar c11
# Wall: activa advertencias
# Wextra: activa mas advertencias
# Wpedantic: da advertencias estrictas
# O0: no optimizar
# g: incluir info para el debugger.
# Iinclude: busca headers en include.
CFLAGS  := -std=c11 -Wall -Wextra -Wpedantic -O0 -g -Iinclude

# Flags para el linker (vacio)
LDFLAGS :=

# Defino nombre de ejecutable
BIN     := build/hello

# Lista archivos fuente
SRCS    := src/main.c src/hello.c

# convertimos con .c en futuros .o en build
OBJS    := $(SRCS:src/%.c=build/%.o)

# se definen comandos y que ejecutan
.PHONY: all run clean format

all: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

build/%.o: src/%.c | build
	$(CC) $(CFLAGS) -c $< -o $@

build:
	mkdir -p build

run: all
	./$(BIN)

clean:
	rm -rf build