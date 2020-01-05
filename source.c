#include<stdio.h>
int main() { char b[1024] = { 0 }, *p = b, s[] = "#include<stdio.h>%cint main() { char b[1024] = { 0 }, *p = b, s[] = %c%s%c; sprintf(b + 1, s, 10, 34, s, 34); while (*(++p)) putchar(*p); while (*(--p)) putchar(*p); return 0; }"; sprintf(b + 1, s, 10, 34, s, 34); while (*(++p)) putchar(*p); while (*(--p)) putchar(*p); return 0; }
