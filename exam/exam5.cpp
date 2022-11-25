#include <stdio.h>

void exam1(){
	int arr[5];
	int max, min, i;
	for ( i = 0; i < 5; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}
	max = min = arr[0];
	for ( i = 0; i < 5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}	
	}
	printf("최대값: %d\n", max);
	printf("최소값: %d\n", min);

	

}

void exam2(){
	int arr[5], sum = 0, i;
	float avg;
	for ( i = 0; i < 5; i++)
	{
		printf("%d라운드 점수 : ", i+1);
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	avg = sum / 5.0;
	printf("\n총점은 %d점이며, 평균 %.2f점입니다.", sum, avg);
}

void exam3(){
	int i, n;
	int a[10] = {65, 45, 73, 5, 82, 25, 3, 34, 12, 20};
	printf("검색할 데이터: ");
	scanf("%d", &n);
	for ( i = 0; i < 10; i++)
	{
		if (n == a[i])
		{
			printf("%d는 a[%d]에 있습니다.\n", n, i);
			break;
		}
	}
	if (i == 10)
	{
		printf("%d은(는) 찾을 수 없습니다.", n);
	}
}

void exam4(){
	int i, su, cnt = 0;
	int b[10] = {25, 7, 25, 7, 3, 25, 3, 7, 25, 1};
	printf("데이터: ");
	scanf("%d", &su);
	for ( i = 0; i < 10; i++)
	{
		if (b[i] == su)
		{
			cnt++;
		}
	}
	printf("%d은(는) %d개 있습니다.\n", su, cnt);
	
}

void exam5(){
	int arr[4][5];
	int i, j, cnt = 1;
	for ( i = 0; i < 4; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			arr[i][j] = cnt++; 
		}
	}
	for ( i = 0; i < 4; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	
	
}

void exam6(){
	char mark[5][5] = {'\0'};
	int i, j;
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			if (i == j)
			{
				mark[i][j] = 'X';
			}
		}
	}
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			printf("%3c", mark[i][j]);
		}
		printf("\n");
	}
	
	
}

void exam7(){
	char mark[5][5] = {'\0'};
	int i,j;
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			if (i == j || i == (4-j))
			{
				mark[i][j] = 'X';
			}
			
		}
		
	}
	
	for ( i = 0; i < 5; i++)
	{
		for ( j = 0; j < 5; j++)
		{
			printf(" %c ", mark[i][j]);
		}
		printf("\n");
	}
}

void exam8(){
	int num[10] = {29,24,56,42,35,41,64,79,51,14};
	int sum = 0;
	int i;
	for ( i = 0; i < 9; i = i+2)
	{
		sum += num[i];
	}
	printf("%d", sum);
	
}

void exam9(){
	int a[5] = {1,2,3,4,5};
	int temp;
	int i;
	for ( i = 0; i < 5; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	temp=a[0];
	for ( i = 0; i < 4; i++)
	{
		a[i] = a[i+1];
	}
	a[4] = temp;
	for ( i = 0; i < 5; i++)
	{
		printf("%d", a[i]);
	}
	
	
	
}

void exam10(){
	int length = 0;
	char str[50];
	fflush(stdin);
	gets(str);
	int i = 0;
	for ( i = 0;str[i]; i++)
	{
		length += 1;
	}
	printf("%d", length);
	
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

void exam16(){

}

void exam17(){

}

void exam18(){

}

void exam19(){

}

void exam20(){

}

void exam21(){

}

void exam22(){

}

void exam23(){

}

void exam24(){

}

void exam25(){

}

void exam26(){

}

void exam27(){

}

void exam28(){

}

void exam29(){

}

void exam30(){

}




main(){
	int num;
	while(1){
    	printf("\nexam number: ");
		scanf("%d", &num);
		printf("%d exam========================================================================\n", num);
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
			case 16: exam16(); break;
			case 17: exam17(); break;
			case 18: exam18(); break;
			case 19: exam19(); break;
			case 20: exam20(); break;
			case 21: exam21(); break;
			case 22: exam22(); break;
			case 23: exam23(); break;
			case 24: exam24(); break;
			case 25: exam25(); break;
			case 26: exam26(); break;
			case 27: exam27(); break;
			case 28: exam28(); break;
			case 29: exam29(); break;
			case 30: exam30(); break;
            default: return 0 ;
		}
	}
}