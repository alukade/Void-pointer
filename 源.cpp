#include<stdio.h>

int main()
{
	int num = 1024;
	int *pi = &num;
	const char *ps = "Fishc";
	void *pv;//不知道什么类型的时候，就可以先用个void*px 指针，想挖个坑，反正什么类型都能填进去

	pv = pi;
	printf("pi:%p,pv:%p\n", pi, pv);

	pv = ps;
	printf("ps:%p,pv:%p\n", ps, pv);

	return 0;

}