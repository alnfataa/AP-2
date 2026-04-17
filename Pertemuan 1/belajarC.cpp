#include <stdio.h> //header std untuk c
#include <conio.h>

int main(){
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("Hello world!!\n");

    printf("Masukan Nama :");
    gets(nama); //get string

       printf("Masukan NIM :");
    scanf("%d", &nim); 

    getchar();

    printf("Masukan Kom : ");
    gets(kom);

    printf("masukan ip :");
    scanf("%f", &ip);
//output
printf("Nama : ");
puts(nama); //put string untuk string dlm bentuk arry char

printf("Nim :  %d\n", nim);

printf("KOM : ");
puts(kom);

printf("IP : %2.ALAf\n", ip);

printf("press any button to continue...");
getch();

}