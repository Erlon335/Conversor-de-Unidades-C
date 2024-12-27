TARGET = build/conversor

SRC_DIR = src
FEATURES_DIR = $(SRC_DIR)/features
INCLUDE_DIR = include
BUILD_DIR = build

SRC_FILES = $(SRC_DIR)/main.c $(wildcard $(FEATURES_DIR)/*.c)

OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRC_FILES))

CC = gcc
CFLAGS = -I$(INCLUDE_DIR) -Wall -Wextra -std=c99
LDFLAGS =

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(BUILD_DIR)

help:
	@echo "Comandos disponíveis:"
	@echo "  make         - Compila o projeto"
	@echo "  make clean   - Remove arquivos gerados na compilação"
	@echo "  make help    - Mostra esta mensagem de ajuda"

.PHONY: all clean help
