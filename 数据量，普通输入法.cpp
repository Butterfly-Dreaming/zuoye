#include<stdio.h>
int main()
{
	int channel = 99;
	float pixel = 1000 * 1000;
	int second = 60 * 60 * 24;
	int gByte = channel * pixel * second / 1024 / 1024 / 1024;
	printf("%s 卫星数据量data is: %d GB \n", "我认为啊", gByte);
}
