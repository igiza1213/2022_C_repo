#include <stdio.h>

void exam1(){
	int i;
	for (;1;)
		printf("%d", i);
	
	
}

void exam2(){
	int i, j;
	for ( i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}

void exam3(){
	int i, j;
	for ( i = 1; i <= 3; i++)
	{
		for ( j = 1; j <= 5; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	

}

void exam4(){
int i, j;
for ( i = 1; i <= 5; i++)
{
	for ( j = 1; j <= i; j++)
	{
		printf("*");
	}
	printf("\n");
}

}

void exam5(){
	int i, j, n;
	printf("출력할 행 입력: ");
	scanf("%d", &n);
	for ( i = 1; i <= n; i++)
	{
		for ( j = 1; j <= i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	
}

void exam6(){
	int i, j;
	for ( i = 1; i <= 5; ++i)
	{
		for ( j = 1; j <= i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	for ( i = 4; i >= 1; --i)
	{
		for ( j = 1; j <= i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	
}

void exam7(){
	int i, j;
	for ( i = 2; i <= 9; i++)
	{
		printf("*** %d단 ***\n", i);
		for ( j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	
}

void exam8(){
	int i, j;
	printf("┌");
	for ( j = 1; j <= 95; j++)
	{
		printf("─");
	}
	printf("┐\n");
	for ( j = 2; j <= 9; j++)
	{
		printf("│*** %d단 ***", j);
	}
	printf("│\n");
	for ( i = 1; i <= 9; i++)
	{
		for ( j = 2; j <= 9; j++)
		{
			printf("│%d * %d = %3d", j, i, j * i);
		}
		printf("│\n");
	}
}

void exam9(){
	int i;
	for ( i = 0; i < 10; i++)
	{
		if(i%3 == 0)
			continue;
		printf("%d", i);
	}
}

void exam10(){
	
}




main(){
	int num;
	while(1){
		printf("\n문제 번호: ");
		scanf("%d", &num);
		printf("%d번 문제========================================================================\n", num);
		switch(num){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
			case 6: exam6(); break;
			case 7: exam7(); break;
			case 8: exam8(); break;
			case 9: exam9(); break;
			case 10: exam10(); break;
			default: return 0 ;
		}
	}
}
