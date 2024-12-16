CC = gcc
CFLAGS = -Wall -I./unidades/comprimento -I./unidades/massa -I./unidades/volume \
          -I./unidades/temperatura -I./unidades/velocidade -I./unidades/potencia \
          -I./unidades/area -I./unidades/tempo -I./unidades/dados

SRC = main.c \
      unidades/comprimento/comprimento.c \
      unidades/massa/massa.c \
      unidades/volume/volume.c \
      unidades/temperatura/temperatura.c \
      unidades/velocidade/velocidade.c \
      unidades/potencia/potencia.c \
      unidades/area/area.c \
      unidades/tempo/tempo.c \
      unidades/dados/dados.c

OBJ = $(SRC:.c=.o)
EXEC = conversor_unidades

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(EXEC)
