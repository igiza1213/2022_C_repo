#include <stdio.h>

void exam1(){
    int n, i ,j;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++)
            printf("*");
        printf("\n");
    }


}

void exam2(){
	int n, i ,j;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

void exam3(){
	int n, i ,j;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = n; j >= i; j--)
            printf("*");
        printf("\n");
    }
}

void exam4(){
	int n, i ,j, m;
    scanf("%d", &n);
	m = (n - 3)/2;
    for ( i = 1; i <= n; i++)
	{
		printf("*");
	}
	printf("\n");
	for ( i = 1; i <= m; i++)
	{
		printf("*");
		for ( j = 1; j < i; j++)
		{
			printf(" ");
		}
		printf("*");
		for ( j = m-1; j >= i; j--)
		{
			printf(" ");
		}
		printf("*");
		for ( j = m-1; j >= i; j--)
		{
			printf(" ");
		}
		printf("*");
		for ( j = 1; j < i; j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for ( i = 1; i <= n; i++)
	{
		printf("*");
	}
	printf("\n");
	for ( i = 1; i <= m; i++)
	{
		printf("*");
		for ( j = m-1; j >= i; j--)
		{
			printf(" ");
		}
		printf("*");
		for ( j = 1; j < i; j++)
		{
			printf(" ");
		}
		printf("*");
		for ( j = 1; j < i; j++)
		{
			printf(" ");
		}
		printf("*");
		for ( j = m-1; j >= i; j--)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for ( i = 1; i <= n; i++)
	{
		printf("*");
	}
	
	
}

void exam5(){
	int n, i ,j;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
	for(i = 1; i <= n; i++){
        for(j = n-1; j >= i; j--)
            printf("*");
        printf("\n");
    }
}

void exam6(){
	int n, i ,j;
    scanf("%d", &n);
    for (i = 0; i <= (n/2); i++) 
	{
		for (j=i; j <= (n/2)-1; j++) {
			printf(" ");
		}
        for (j = 0; j <=(i*2); j++) {
			printf("*");
		}
		printf("\n");
    }
}

void exam7(){
	int n, i ,j;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for ( j = 1; j < i; j++)
		{
			printf(" ");
		}
		printf("**\n");


    }
}

void exam8(){
	int n, i;
    scanf("%d", &n);
	int array[1000];
	for(i = 0; i < n; i++){
		scanf("%d", &array[i]);
	}
	for (i = n-1; i >= 0; i--)
	{
		printf("%d ",array[i]);
	}

	
}

void exam9(){
	int n, i, j, array[100];
	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	for ( j = 0; j < 2; j++)
    {
		for ( i = 0; i < n; i++)
		{
			printf("%d\n", array[i]);
		}
	}
}

void exam10(){
	int n, i, sum = 0, a;
	scanf("%d", &n);
	for ( i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		if (a%5== 0)
		{
			sum += a;
		}
		
	}
	printf("%d", sum);
}

void exam11(){
	int n, i, j, cnt = 1;
	
	scanf("%d", &n);

	int arr[n][n];

	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			arr[i][j] = cnt;
			cnt++;

			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	
}

void exam12(){
	int n, i, j;
	
	scanf("%d", &n);
	int cnt;

	int arr[n][n];

	for ( i = 0; i < n; i++)
	{
		cnt = n * (i+1);
		for ( j = 0; j < n; j++)
		{
			
			arr[i][j] = cnt;
			cnt--;

			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	
}

void exam13(){
	int n, i, j, cnt = 1;
	
	scanf("%d", &n);

	int arr[n][n];

	for ( i = 0; i < n; i++)
	{
		cnt = 1 + i;
		for ( j = 0; j < n; j++)
		{
			arr[i][j] = cnt;
			cnt += n;

			printf("%d ", arr[i][j]);
		}
		
		printf("\n");
	}
}

void exam14(){
	int n, i, j, cnt;
	
	scanf("%d", &n);

	int arr[n][n];

	for ( i = 0; i < n; i++)
	{
		cnt = n - i;
		for ( j = 0; j < n; j++)
		{
			arr[i][j] = cnt;
			cnt += n;

			printf("%d ", arr[i][j]);
		}
		
		printf("\n");
	}
}

void exam15(){
	int n, m, i, j, cnt;
	
	scanf("%d %d", &n, &m);

	int arr[n][m];
	cnt = n * m;
	for ( i = 0; i < n; i++)
	{
		
		for ( j = 0; j < m; j++)
		{
			arr[i][j] = cnt;
			cnt--;

			printf("%d ", arr[i][j]);
		}
		
		printf("\n");
	}
}

void exam16(){
	int n, m, i, j, cnt = 1;
	
	scanf("%d %d", &n, &m);

	int arr[n][m];
	
	for ( i = n	-1; i >= 0; i--)
	{
		
		for ( j = 0; j < m; j++)
		{
			arr[i][j] = cnt;
			cnt++;

			
		}
		
		
	}
	for ( i = 0; i < n; i++)
	{
		for ( j = 0; j < m; j++)
		{
			printf("%d ", arr[i][j]);	
		}
		printf("\n");
	}
	
}

void exam17(){

	int n, m, i, j, cnt;
	
	scanf("%d %d", &n, &m);

	int arr[n][m];
	
	for ( i = 0; i < n; i++)
	{
		cnt = n * m - i;
		for ( j = 0; j < m; j++)
		{
			arr[i][j] = cnt;
			cnt -= n;

			printf("%d ", arr[i][j]);
		}
		
		printf("\n");
	}
}

void exam18(){
	int n, m, i, j, cnt;
	
	scanf("%d %d", &n, &m);

	int arr[n][m];
	
	for ( i = n	-1; i >= 0; i--)
	{
		cnt = n * m - i;
		for ( j = 0; j < m; j++)
		{
			arr[i][j] = cnt;
			cnt -= n;

			printf("%d ", arr[i][j]);	
		}
		printf("\n");
		
	}
	
	
}

void exam19(){

}

void exam20(){

}

void exam21(){

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
			case 16: exam16(); break;
			case 17: exam17(); break;
			case 18: exam18(); break;
			case 19: exam19(); break;
			case 20: exam20(); break;
			case 21: exam21(); break;
            default: return 0 ;
		}
	}
}