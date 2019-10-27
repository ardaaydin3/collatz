#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>




int main() 
{

int n=0;
int a=0;

pid_t pid;

do 
{
printf("Bir sayı giriniz.\n");
scanf("%d", &a);
} 
while( a<=0);

pid = fork();

if(pid ==0)

 {
 
 printf("child çalışıyor..\n");
 printf("%d\n",a);
 
 while(a!=1)
 {
 if(a%2 == 0)
 {
   a=a/2;
   }
   else if(a%2 == 1)
   {
    a = 3 * (a) + 1;
	}
	
	printf("%d\n", a);
	}
	printf("child process başarılı .\n");
	}
	else
	{
	printf("parents child processi bekliyor...\n");
	wait();
	printf("parent process başarılı.\n");
	}
	return 0;
	}