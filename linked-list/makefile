# Variáveis
CC = gcc
CFLAGS = -Wall -Wextra
LDFLAGS =

# Arquivos do projeto
SOURCES = example.c linked_list.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = payment_app

# Regra padrão para compilação
all: $(EXECUTABLE)

# Regra para compilar os objetos
$(OBJECTS): $(SOURCES)
	$(CC) $(CFLAGS) -c $^

# Regra para compilar o executável
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $^ -o $@

# Regra para limpar os arquivos gerados
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
