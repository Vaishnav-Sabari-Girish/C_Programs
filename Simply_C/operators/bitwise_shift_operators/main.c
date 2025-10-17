// Bitwise Shift operators are used to shift bits left and right by a specified number of bits

#include <stdio.h>

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')

int main() {
    unsigned char x = 0b00011100;
    unsigned char y = x << 1;
    unsigned char z = x >> 1;

    printf("Original x      : " BYTE_TO_BINARY_PATTERN "\n", BYTE_TO_BINARY(x));
    printf("Left Shift by 1 : " BYTE_TO_BINARY_PATTERN "\n", BYTE_TO_BINARY(y));
    printf("Right Shift by 1: " BYTE_TO_BINARY_PATTERN "\n", BYTE_TO_BINARY(z));

    return 0;
}
