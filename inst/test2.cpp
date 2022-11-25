#include <stdio.h>

void exam1(){
	int i;
	scanf("%d", &i);
	printf("%c", i);

}

void exam2(){
	int i, n = 0, sum = 0;

	for ( i = 1; i <= 7	; i++)
	{
		scanf("%d", &n);

		if (n % 2 != 0)
		{
			sum += n;
		} 

		
		
		
	}

	if (sum == 0)
	{
		printf("-1");
	}else{
	

	printf("%d", sum);
	}
}

void exam3(){
	int i, n, min = 24;
	int arr[10001]; 

	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for ( i = 0; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
		
	}

	printf("%d", min);
	
	



}

void exam4(){
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	
}

void exam5(){

}

void exam6(){

}

void exam7(){

}

void exam8(){

}

void exam9(){

}

void exam10(){

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