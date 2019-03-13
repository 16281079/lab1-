#include<stdio.h>
#include<string.h>

int main()
{
char* s="Hello World!";
int len=12;
int result=0;

__asm__ __volatile__("movl %2,%%edx;\n\r"
"movl %1,%%ecx;\n\r"
"movl $1,%%ebx;\n\r"
"movl $4,%%eax;\n\r"
"int $0x80"
:"=m"(result)
:"m"(s),"r"(len)
:"%eax");

return 0;
}
