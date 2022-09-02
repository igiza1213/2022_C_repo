#include <stdio.h>

void exam1(){
	int i;
	for(i = 1; i <= 6; i++){
		printf("i = %d\n", i);
		
	}
}

void exam2(){
	int i, sum = 0;
	for(i = 1;i <= 10;i++){
		sum += i;
		
	}
	printf("1~10까지의 합 : %d", sum);
}

void exam3(){
	int i, even, odd;
	even = odd = 0;
	for ( i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			even += i;
		}else
		{
			odd += i;
		}
	}
	printf("짝수합 = %d, 홀수합 = %d", even, odd);
}

void exam4(){
	int i;
	for (i = 1; i <= 9; i++)
	{
		printf("2 * %d == %d\n", i, 2 * i);
	}
	
}

void exam5(){
	int i, count = 0, sum = 0;
	for (i = 3; i <= 50; i += 3)
	{
		printf("%4d", i);
		sum += i;
		++count;
		if (count % 5 == 0)
		{
			printf("\n");
		}
	}
	printf("\nsum = %d", sum);
}

void exam6(){
	char ch;
	for (ch = 'F'; ch >= 'A'; ch--)
	{
		printf("%c ", ch);
	}
	
}

void exam7(){
	int i, n, fact = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		fact *= i;
	}
	printf("%d! = %d\n", n, fact);
	
	
}

void exam8(){
	int i, dan;
	printf("원하는 단은? ");
	scanf("%d", &dan);
	printf("\n*** %d단 ***\n", dan);
	for (i = 0; i <= 9; i++)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
	
	
}

void exam9(){
	int n1, n2, i;
	printf("두 수 입력: ");
	scanf("%d %d", &n1, &n2);
	if (n1 < n2)
	{
		for (i = n1; i <= n2; i++)
		{		
			printf("%d ", i);
		}
		
	}
	else
	{
		for (i = n2; i < n1; i++)
		{
			printf("%d ", i);
		}
		
	}
	
	
}

void exam10(){
	int num1, num2, i;
	printf("공배수를 구할 두 정수 입력 : ");
	scanf("%d %d", &num1, &num2);
	for (i = 1; i <= 100; i++)
	{
		if (i % num1 == 0 && i % num2 == 0)
		{
			printf("%d ", i);
		}
	}
	
	
}

void exam11(){
	
	
}

void exam12(){
	
	
}

void exam13(){
	
	
}

void exam14(){
	
	
}

void exam15(){
	
	
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
			case 11: exam11(); break;
			case 12: exam12(); break;
			case 13: exam13(); break;
			case 14: exam14(); break;
			case 15: exam15(); break;
			default: return 0 ;
		}
	}
}
