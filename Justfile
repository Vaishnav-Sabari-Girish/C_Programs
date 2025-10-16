# Variables
CFLAGS := "-Wall -Wextra -O2"
SRC := "main.c"
OUT := "main"

# Build rule
build:
    gcc {{SRC}} -o {{OUT}} {{CFLAGS}}

# Run rule
run:
    ./{{OUT}}

# Build + Run together
br:
    just build && just run

