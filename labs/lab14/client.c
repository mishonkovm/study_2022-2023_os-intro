/*
* client.c - реализация клиента
*
* чтобы запустить пример, необходимо:
* 1. запустить программу server на одной консоли;
* 2. запустить программу client на другой консоли.
*/

#include "common.h"

#define MESSAGE "Hello Server!!!\n"

int
main()
{
int writefd; /* дескриптор для записи в FIFO */
int msglen;

/* баннер */
printf("FIFO Client...\n");

/* цикл отвечающий за отправку сообщения о текущем времени */
for(int i=0; i<4; i++)
{
/* получим доступ к FIFO */
if((writefd = open(FIFO_NAME, O_WRONLY)) < 0) 
{
fprintf(stderr, "%s: Невозможно открыть FIFO (%s)\n",
__FILE__, strerror(errno));
exit(-1);
break;
}

/* текущее время */
long int ttime=time(NULL);
char* text=ctime(&ttime);
 
/* передадим сообщение серверу */
msglen = strlen(MESSAGE);
if(write(writefd, MESSAGE, msglen) != msglen)
{
fprintf(stderr, "%s: Ошибка записи в FIFO (%s)\n",
__FILE__, strerror(errno));
exit(-2);
}
/* приостановка работы клиента на 5 секунд */
 sleep(5);
}
 
/* закроем доступ к FIFO */
close(writefd);
exit(0);
}
