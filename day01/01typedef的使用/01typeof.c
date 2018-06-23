#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<string.h>  
#include<stdlib.h>  

typedef struct Person
{
	char a;
	int b;
	char c;
	int d;
}MyPerson;

typedef long long MYLONG;

void calculateArraySize(int arr[])// int arr[]等价于  int * arr
{
	printf("%d\n", sizeof(arr));
}
void test()
{
	MyPerson pPerson = { 'a', 1, 'b', 2 };
	//直接赋值
	pPerson.a = 'm';
	//间接赋值
	//第一种
	MyPerson * p = &pPerson;
	p->c = 'n';
	//第三种
	char* pChar = &pPerson;
	*(int*)(pChar + 12) = 2000;
	*(int*)((int*)pChar + 1) = 3000;
	printf("%c\n%d\n%c\n%d\n", pPerson.a, pPerson.b, pPerson.c, pPerson.d);
}

int main01()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

int addone()
{
	static int a = 3;
	a++;
	printf("%d\n", a);
}
int main02()
{
	for (int i = 0; i < 3; i++)
	{
		addone();
	}
	system("pause");
	return EXIT_SUCCESS;
}

int main()
{
	char** a =malloc(sizeof(char)*3);
	for (int  i = 0; i < 3; i++)
	{
		char buf[1024] = { 0 };
		scanf("%s", buf);
		char  * currentP = malloc(sizeof(char)*1024);
		strcpy(currentP, buf);
		a[i] = currentP;
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", a[i]);
	}
	system("pause");
	return EXIT_SUCCESS;
}

