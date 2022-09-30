#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exam1(){
	int n, a;
	printf("4자리수 입력: ");
	scanf("%d", &n);

	do
	{
		a = n % 10;
		n = n / 10;
		printf("%d", a);
	} while (n>=1);
	
}

void exam2(){
	int n, a1 = 0, a2 = 1, a3, i;
	printf("몇번째 항까지 구할까요? ");
	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		printf("%d ", a1);
		a3 = a1 + a2;

		a1 = a2;
		a2 = a3;
	}
	
}

void exam3(){
	int answer, cnt = 0, guess;
	srand(time(NULL));
	answer = rand() % 100 + 1;


	do
	{
		printf("1부터 100까지 숫자를 맞춰보세요 : ");
		scanf("%d", &guess);

		cnt++;

		if (guess > answer)
		{
			printf("제시한 숫자가 높습니다.\n");
		} else if (guess < answer)
		{
			printf("제시한 숫자가 낮습니다.\n");
		}
		
		



	} while (guess != answer);
	printf("축하합니다! 정답은 %d이고,  시도횟수는 %d\n입니다.", answer, cnt);
	

}

void exam4(){
	int a, b, temp, i;
	printf("***두 수 구간의 숫자 출력하기 ***\n");
	printf("두 수 입력 : ");
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	for ( i = a; i <=b; i++)
	{
		printf("%d ", i);
	}
	
	

}

void exam5(){
	int i, j;
	for ( i = 1; i <=5; i++)
	{
		j = 1;
		while (j<i)
		{
			printf("0");
			j++;
		}
		printf("*\n");
	}
	
}

void exam6(){
	int i, j;
	for ( i = 1; i <= 9; i++)
	{
		for ( j = 6; j <= 9; j++)
		{
			printf("%2d * %2d = %2d\t", j, i, j*i);
		}
		printf("\n");
	}
	
}

void exam7(){

}

void exam8(){

}

void exam9(){

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