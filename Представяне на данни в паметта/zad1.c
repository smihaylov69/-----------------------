#include <stdio.h>
#include <limits.h>

#define PRINT_CHAR \
    printf("%-15s %-12s %-20d %-22d %-22d %-22s %-22u\n", "char", "%d", sizeof(char), CHAR_MAX, CHAR_MIN, "%u", UCHAR_MAX);

#define PRINT_SHORT \
    printf("%-15s %-12s %-20d %-22hd %-22hd %-22s %-22hu\n", "short", "%hd", sizeof(short), SHRT_MAX, SHRT_MIN, "%hu", USHRT_MAX);


#define PRINT_INT \
    printf("%-15s %-12s %-20d %-22d %-22d %-22s %-22u\n", "int", "%d", sizeof(int), INT_MAX, INT_MIN, "%u", UINT_MAX);

#define PRINT_LONG \
    printf("%-15s %-12s %-20d %-22ld %-22ld %-22s %-22lu\n", "long", "%ld", sizeof(long), LONG_MAX, LONG_MIN, "%lu", ULONG_MAX);

#define PRINT_LONGLONG \
    printf("%-15s %-12s %-20d %-22lld %-22lld %-22s %-22llu\n", "long long", "%lld", sizeof(long long), LONG_LONG_MAX, LONG_LONG_MIN, "%llu", ULONG_LONG_MAX);

void main() {
    printf("%-15s %-12s %-20s %-22s %-22s %-22s %-22s\n", "Type", "Format", "Size (bytes)", "Max (signed)", "Min (signed)", "Format (unsigned)", "Max (unsigned)");
    printf("\n");
    PRINT_CHAR
    PRINT_SHORT
    PRINT_INT
    PRINT_LONG
    PRINT_LONGLONG
}