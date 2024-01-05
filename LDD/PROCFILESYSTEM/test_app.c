#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include<sys/ioctl.h>

#define WR_VALUE _IOW('a','a',int)
#define RD_VALUE _IOR('b','b',int)


int main()
{
	int fd;
	int32_t val,num;
	
	printf("Opening driver..\n");
	fd = open("/dev/etx_device",O_RDWR);
	if(fd < 0)
	{
		printf("cannot open device file..\n");
		return 0;
	}
	printf("Enter value to send:");
	scanf("%d",&num);
	printf("Writing value..\n");
	ioctl(fd,WR_VALUE,(int32_t *)&num);
	
	
	printf("reading value from driver\n");
	ioctl(fd,RD_VALUE,(int32_t *)&val);
	printf("Value is %d\n", val);
	
	printf("Closing .\n");
	close(fd);
}
