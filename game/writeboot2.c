#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


int main()
{
	int r,w,r2;
	char buf[550], buf2[9000];
	r=open("load",O_RDONLY);
	r2=open("game",O_RDONLY);
	w=open("/dev/fd0",O_RDWR);
	read(r,buf,446+32);
	buf[510+32]=0x55;buf[511+32]=0xAA;
	write(w,(buf+32),512);
	read(r2, buf2, 8192+32);
	write(w,buf2+32,8192);
	return 0;
}
