#include<stdio.h>

int main()
{
	int num = 1024;
	int *pi = &num;
	const char *ps = "Fishc";
	void *pv;//��֪��ʲô���͵�ʱ�򣬾Ϳ������ø�void*px ָ�룬���ڸ��ӣ�����ʲô���Ͷ������ȥ

	pv = pi;
	printf("pi:%p,pv:%p\n", pi, pv);

	pv = ps;
	printf("ps:%p,pv:%p\n", ps, pv);

	return 0;

}