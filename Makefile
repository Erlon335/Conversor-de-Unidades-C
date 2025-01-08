
CC = gcc
CFLAGS = -Wall -Wextra -g3
INCLUDE_DIR = -Iinclude

SRC_DIR = src/features
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(SRC_FILES:.c=.o)
MAIN = main.c
OUTPUT_DIR = output
OUTPUT_FILE = $(OUTPUT_DIR)/conversor.exe

all: $(OUTPUT_FILE)

$(OUTPUT_FILE): $(MAIN) $(OBJ_FILES)
	@mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $(MAIN) $(OBJ_FILES) $(INCLUDE_DIR) -o $(OUTPUT_FILE)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE_DIR)

format:
	clang-format -i $(MAIN) $(SRC_FILES) include/*.h

lint:
	clang-tidy $(MAIN) $(SRC_FILES) -- -Iinclude

clean:
	rm -rf $(OUTPUT_DIR) $(SRC_DIR)/*.o

test: $(OUTPUT_FILE)
	@echo "Executando o programa:"
	./$(OUTPUT_FILE)

.PHONY: all format lint clean test
