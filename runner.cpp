#include <stdio.h>
#include <windows.h>

//main
int main(){
    //value
    int min, max, i;
    char name[100];
    system("chcp 65001");
    system("cls");
    //scanf
    printf("파일이름과 최소문제번호와 최대문제번호를 띄어쓰기로 구분해 작성해주세요(파일이름 형식예시: name.cpp)\n");
    scanf("%s %d %d", &name, &min ,&max);

    FILE* fp = fopen( name , "w");

    //문제 검사
    if (min > max)
    {
        printf("최소문제번호가 최대문제번호보다 클 수 없습니다.");
        return 0;
    }
    
    //정상 확인
    if (fp == NULL)
    {
        printf("파일을 생성할 수 없습니다.");
    } else
    {   
        //작성
        fprintf(fp, "#include <stdio.h>");
        for (i = min; i <= max; i++)
        {
            fprintf(fp, "\n\nvoid exam%d(){\n\n}", i);

        }
        fprintf(fp, "\n\n\n\n\nmain(){\n	int num;\n	while(1){\n    	printf(\"\\n문제 번호: \");\n		scanf(\"%%d\", &num);\n		printf(\"%%d번 문제========================================================================\\n\", num);\n		switch(num){");
        for (i = min; i <= max; i++)
        {
            fprintf(fp, "\n			case %d: exam%d(); break;", i, i);
        }
        fprintf(fp, "\n            default: return 0 ;\n		}\n	}\n}");


        printf("파일을 정상적으로 생성했습니다.");
        fclose(fp);
    }
    
}