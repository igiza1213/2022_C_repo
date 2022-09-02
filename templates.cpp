#include <stdio.h>

void exam1(){
	
}

void exam2(){
	
}

void exam3(){
	
}

void exam4(){
	
}

void exam5(){
	
}



main(){
	int no;
	while(1){
		printf("문제 번호: ");
		scanf("%d", &no);
		printf("%d번 문제========================================================================\n", no);
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;

		}
	}
}
