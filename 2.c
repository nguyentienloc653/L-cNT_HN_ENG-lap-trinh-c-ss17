#include<stdio.h>
void addString(char *str);
void printString(char *str);
int stringLetter(char *str, int length);
int stringNumber(char *str, int length);
int stringSpecialCharacter(char *str, int length);

int main(){
	int choose, length;
    char str[100];
    do{
    	printf("MENU\n");
		printf("1.Nhap vao chuoi.\n");
		printf("2.In ra chuoi.\n");
		printf("3.Dem so luong chu cai trong chuoi va in ra.\n");
		printf("4.Dem so luong chu so trong chuoi va in ra .\n");
		printf("5.Dem so luong ky tu dac biet trong chuoi va in ra.\n");
		printf("6.Thoat.\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choose);
        switch(choose){
            case 1:
                addString(str);
                length= strlen(str);
                break;
            case 2:
                printString(str);
                break;
            case 3:
                stringLetter(str, length);
                break;
            case 4:
                stringNumber( str, length);
                break;
            case 5:
                stringSpecialCharacter( str, length);
                break;
            case 6:
                break;
        }
    } while(choose!=6);
}

void addString(char *str){
    printf("Moi ban nhap vao chuoi: ");
    getchar();
    fgets( str, 1000, stdin);
}

void printString(char *str){
    printf("%s", str);
}

int stringLetter(char *str,int length){
    int count=0;
    for(int i=0; i<length; i++ ){
        if(isalpha(*(str+i))){
            count++;
        }
    }
    printf("So luong chu cai la: %d \n", count);
}

int stringNumber(char *str,int length){
    int count=0;
    for(int i=0; i<length; i++ ){
        if(isdigit(*(str+i))){
            count++;
        }
    }
    printf("So luong chu so la: %d \n", count);
}

int stringSpecialCharacter(char *str, int length){
    int temp=0;
    for(int i=0; i<length; i++ ){
        if(isdigit(*(str+i)) || isalpha(*(str+i))){
            temp++;
        }
    }
    int count = length - temp -1;
    printf("So luong ky tu dac biet la: %d \n", count);
    return 0;
}
