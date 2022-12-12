#include <stdio.h> // buat semua library
#include <string.h>
#include <windows.h>
#include <stdlib.h>

void decrypt(char ini_pass[]);
void encrypt(char ini_pass[]);
void menu(int pilih,char ini_pass[]);
void menu_encrypt(char ini_pass[]);
void menu_decrypt(char ini_pass[]);

int main()
{
	char pass[50];
	int choose;
	puts("Decryptor Kenektopian 96 BUKAN 69 ");
	puts("===================================");
	puts("Pilih Menu :");
	menu(choose,pass);
	printf("hasil : %s",pass);
	puts("");
	system("pause");
	return 0;
}

void encrypt(char ini_pass[])
{
	for(int i = 0; i<strlen(ini_pass); i++)
	{
		ini_pass[i] = ini_pass[i] + 6;
	
	}
	//	printf("%d\n",strlen(ini_pass));
}

void decrypt(char ini_pass[])
{
		for(int i = 0 ; i<strlen(ini_pass); i++)
	{
		ini_pass[i] = ini_pass[i] - 6;
	
	}
	//	printf("%d\n",strlen(ini_pass));
}

void menu(int pilih, char ini_pass[])
{
	puts("1. Encrypt tulisan");
	puts("2. Decrypt tulisan");
	puts("3. Exit");
	printf(">>");
	scanf("%d",&pilih);
	switch(pilih)
	{
		case 1:
		system("cls");
		menu_encrypt(ini_pass);	
		break;
		
		case 2:
		system("cls");
		menu_decrypt(ini_pass);
		break;
		
		default:
		puts("Oke gan");
		exit(0);
	}
}

void menu_encrypt(char ini_pass[])
{
	puts("Encrypt tulisan");
	puts("===========================================");
	puts("input tulisan yang mau diencrypt:");
	printf(">>");
	scanf("%s",ini_pass);
	getchar();
	encrypt(ini_pass);
}

void menu_decrypt(char ini_pass[])
{
	puts("Encrypt tulisan");
	puts("===========================================");
	puts("input tulisan yang mau didecrypt:");
	printf(">>");
	scanf("%s",ini_pass);
	getchar();
	decrypt(ini_pass);
}

