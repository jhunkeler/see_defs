#include <stdio.h>
#include <sys/cdefs.h>

int main(int argc, char *argv[]) {
#ifdef _XOPEN_SOURCE
    printf("_XOPEN_SOURCE = %luL\n", _XOPEN_SOURCE);
#endif

#ifdef _POSIX_C_SOURCE
    printf("_POSIX_C_SOURCE = %luL\n", _POSIX_C_SOURCE);
#endif

#ifdef __DARWIN_C_LEVEL
    printf("__DARWIN_C_LEVEL = %luL\n", __DARWIN_C_LEVEL);
#endif

    return 0;
}

