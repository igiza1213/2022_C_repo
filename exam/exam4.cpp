#include <stdio.h>
#include <string.h>

void exam1(){
	int num[3];
	num[0] = 10;
	num[1] = 20;
    num[2] = 30;
	for (int i = 0; i < 3; i++)
	{
		printf("num[%d] = %d\n", i, num[i]);
	}
	
}

void exam2(){
	int arr[5] = {10, 15, 85, 66, 20};
	printf("%d\n", arr[0]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[4]);
}

void exam3(){
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = 5;
	}
	printf("a[5]: %d\n", a[5]);
	printf("a[7]: %d\n", a[7]);
}

void exam4(){
	int data[6];
	for (int i = 0; i < 6; i++)
	{
		printf("정수를 입력 : ");
		scanf("%d", &data[i]);
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", data[i]);
	}
	
}

void exam5(){
	int score[5];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("%d번 학생의 프로그래밍 성적을 입력: ", i+1);
		scanf("%d", &score[i]);
	}
	for (int i = 0; i < 5; i++)
    {
		sum += score[i];
	}
	printf("총점: %d\n", sum);
	printf("평균: %.2f\n", (float)sum/5);
	
}

void exam6(){
	int score[5];
	int max = 0, min = 100;
	for (int i = 0; i < 5; i++)
    {
		printf("%d번 학생의 프로그래밍 성적을 입력: ", i+1);
		scanf("%d", &score[i]);
		if (score[i] > max)
        {
			max = score[i];
		}
		if (score[i] < min)
        {
			min = score[i];
		}
	}

	
	printf("최고점수 : %d\n최소점수 : %d", max, min);
}

void exam7(){
	int h[] = {170, 178, 175, 180, 177, 167, 189};
	int h_min = h[0], num;
	for (int i = 0; i < 7; i++)
    {
		if (h[i] < h_min)
		{
			h_min = h[i];
			num = i + 1;
		}
	}
	printf("가장 키가 작은 학생번호 = %d번, 키 = %dcm \n", num, h_min);
}

void exam8(){
	char str[10];
	printf("당신의 이름은 무엇입니까? : ");
	scanf("%s", str);
	printf("안녕하세요 %s님\n", str);
}

void exam9(){
	char str1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char str2[] = "world!";
	int i;

	
	for ( i = 0; i < 6; i++)
	{
		printf("%c", str1[i]);
	}
	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);

	
	printf("str1의 길이 : %d\n", strlen(str1));
	printf("str2의 길이 : %d\n", strlen(str2));

	str2[5] = '*';
	printf("str2 : %s\n", str2);

	printf("strlen: %d sizeof: %d\n", strlen(str1), sizeof(str1));

	int a[10];
	printf("sizeof: %d\n", sizeof(a));


	

}

void exam10(){
	int i;
	char str[10]= "Good time";
	for ( i = 0; i < 10; i++)
	{
		printf("%c\n", str[i]);
	}
	
}

void exam11(){
	char str[6] = "apple";
	int i = 0;
	printf("한문자씩 출력\n");
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	
}

void exam12(){
	char a[] = "seoul robotics";
	printf("%s\n", a);
	a[5] = '\0';
	printf("%s\n", a);
}

void exam13(){
	char voca[50];
	int len = 0;
	printf("영단어 입력: ");
	scanf("%s", voca);
	while (voca[len] != '\0')
	{
		len++;
	}
	printf("입력한 영단어의 길이는 %d\n", len);
	
}

void exam14(){
	char str[100];
	int i;
	fflush(stdin);
	gets(str);
	printf("str의 문자길이: %d\n", strlen(str));
	for ( i = 0; i < strlen(str); i++)
	{
		printf("%c", str[i]);
	}
	for ( i = strlen(str)-1; i >= 0	; i--)
	{
		printf("%c", str[i]);
	}
	
}

void exam15(){

}

void exam16(){
	int a[2][3] = {{100, 90, 80}, {70, 60, 50}};
	int i, j;
	for (i = 0; i < 2; i++)
	{
			for ( j = 0; j < 3; j++)
			{
				printf("%4d", a[i][j]);
			}
		printf("\n");
			
	}
	

}

void exam17(){
	int a[4][2];
	int tot, i, j;
	double avg;

	for ( i = 0; i < 4; i++)
	{
		printf("%d번 학생의 수학, C언어 성적 입력: ", i+1);
		for ( j = 0; j < 2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	for ( i = 0; i < 4; i++)
	{
		tot = 0;
		for ( j = 0; j < 2; j++)
		{
			tot += a[i][j];
		}
		avg = tot / 2.0;
		printf("%d번 학생의 ", i+1);
		printf("총점 : %3d, 평균 : %.2f\n", tot, avg);
		

	}
}

void exam18(){
// 	 
// 
// 
}

void exam19(){
	// char ani1[4][10] = {
	// 	{'c', 'a', 't', '\0'},
	// 	{'h', 'o', 'r', 's', 'e', '\0'},
	// 	{'d', 'o', 'g', '\0'},
	// 	{'t', 'i', 'g', 'e', 'r', '\0'}
	// }
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