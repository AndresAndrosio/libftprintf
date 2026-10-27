#include "ft_printf.h"
#include "stdio.h"
#include <limits.h>
int main(void)
{
// text char 
    size_t len1;
    size_t len2;
    printf("uno dos tres%c\n",'1');
    ft_printf("uno dos tres%c",'1');
    printf("\n----------\n");
    printf("uno dos tres%c\n",'a');
    ft_printf("uno dos tres%c",'a');
    char * p;
    printf("\nP\n");
    printf("hola que %p tal\n",&p);
    ft_printf("hola que %p tal",&p);
    printf("\nd\n");
    printf("1hola que %d tal\n",0x043);
    ft_printf("1hola que %d tal\n",0x043);
    printf("2hola que %d tal\n",043);
    ft_printf("2hola que %d tal\n",043);
    printf("3hola que %d tal\n",43);
    ft_printf("3hola que %d tal\n",43);
    printf("\ns\n");
    printf("3hola que %s tal%s\n","primero","segundo");
    ft_printf("3hola que %s tal%s\n","primero","segundo");
   
    printf("\ni\n");
    printf("hola que %i tal\n",-1234);
    ft_printf("hola que %i tal",-1234);

    printf("\nu\n");
    len1=printf("hola que %u tal\n",-0);
    len2=ft_printf("hola que %u tal\n",-0);
    printf("%ld == %ld\n",len1,len2);

    printf("\n----------\n");
    len1=printf("%u\n",-0);
    len2=ft_printf("%u\n",-0);
    printf("%ld == ft:%ld\n",len1,len2);
    printf("\n----------\n");
    len1=printf("%u\n",0);
    len2=ft_printf("%u\n",0);
    printf("%ld == ft:%ld\n",len1,len2);
    printf("\n----------\n");
    len1=printf("%u\n",-1);
    len2=ft_printf("%u\n",-1);
    printf("%ld == ft:%ld\n",len1,len2);
    printf("\n----------\n");
    len1=printf("%u\n",INT_MAX);
    len2=ft_printf("%u\n",INT_MAX);
    printf("%ld == ft:%ld\n",len1,len2);

    // printf("\nx\n");
    // printf("hola que %x tal\n",123);
    // ft_printf("hola que %x tal",123);
    // printf("\n----------\n");
    // printf("hola que %x tal\n",12345);
    // ft_printf("hola que %x tal",12345);
    // printf("\n----------\n");
    // printf("hola que %x tal\n",-12345);
    // ft_printf("hola que %x tal",-12345);
    // printf("\nX\n");
    // printf("hola que %X tal\n",123);
    // ft_printf("hola que %X tal",123);
    // printf("\n----------\n");
    // printf("hola que %X tal\n",12345);
    // ft_printf("hola que %X tal",12345);
    // printf("\n----------\n");
    // printf("hola que %X tal\n",-12345);
    // ft_printf("hola que %X tal",-12345);
    // printf("hola que %X tal\n",-12345);
    // printf("\nMix test\n");
    // ft_printf("hola que %X tal %% num:%d\n",-12345,987);
    // printf("hola que %X tal %% num:%d",-12345,987);
    // printf("\n----------\n");
    // printf("1%p",NULL);
    // ft_printf("2%d",NULL);
    // printf("\n----------\n");
    // printf(" %p %p ", LONG_MIN, LONG_MAX);
    // ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
    // ft_printf(" NULL %s NULL ", NULL);
    // printf(" NULL %s NULL ", (char *)NULL);
    // ft_printf("1%p\n",NULL);
    // ft_printf("2%d\n",NULL);
}