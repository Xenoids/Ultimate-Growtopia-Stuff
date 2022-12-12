#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>

void title();
void title2();
void loading();
void menu();
void submenu();
int main()
{
	char t1[] = "Input GrowID anda : ";
	char t2[] = "Password anda : ";
	title();
	for(int i=0;t1[i]!=NULL;i++)
	{
		printf("%c",t1[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
	}
	char GrowID[100];
	char ch;
	char pass[100];
	int i;
	

	scanf("%s",&GrowID);
	getchar();
	
		for(int i=0;t2[i]!=NULL;i++)
	{
		printf("%c",t2[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
	}
	
	scanf("%s",&pass);
	getchar();
	
	system("cls");
	
	loading();
	
	


	// sudah login
	
	menu();


	//Debug Purpose
	//printf("%s",GrowID);
	//printf("%s",pass);
	

}
	
void title()
{
	puts("====================================");
	puts("\|  Selamat Datang di BukanPeqi!    \|");
	puts("====================================\n");
}

void title2()
{
	puts("=================================================");
	puts("\|  Selamat Datang nicholasvt!, di BukanPeqi!    \|");
	puts("=================================================\n");
	
}

void menu()
{
	title2();
	int pilihan;
	char t1[] = "Apa yang ingin anda lakukan? :)\n\n";
	for(int i=0;t1[i]!=NULL;i++)
	{
		printf("%c",t1[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
	}
	
	submenu();
	
	printf("\n>>");
	scanf("%d",&pilihan);
	
	switch(pilihan)
	{
		case 1:
		{
		char t1[] = "Processing...\n";
		char t2[] = "Executing the command...\n";
		char t3[] = "Successfull!!!\n\n";
		
		for(int i=0;t1[i]!=NULL;i++)
		{
		printf("%c",t1[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
		}
	
		sleep(5);
		
			for(int i=0;t2[i]!=NULL;i++)
		{
		printf("%c",t2[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
		}
		
		sleep(5);
		
			for(int i=0;t3[i]!=NULL;i++)
		{
		printf("%c",t3[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
		}
		
		system("pause");
		system("cls");
		menu();
		break;
		
	
		}	
			
		case 2:
		{
		char t1[] = "Processing...\n";
		char t2[] = "Executing the command...\n";
		char t3[] = "Successfull!!!\n\n";
		
		for(int i=0;t1[i]!=NULL;i++)
		{
		printf("%c",t1[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
		}
	
		sleep(5);
		
			for(int i=0;t2[i]!=NULL;i++)
		{
		printf("%c",t2[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
		}
		
		sleep(5);
		
			for(int i=0;t3[i]!=NULL;i++)
		{
		printf("%c",t3[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
		}
		
		system("pause");
		system("cls");
		menu();
		break;
		}
			
		case 3:
			{
		char t1[] = "Processing...\n";
		char t2[] = "Executing the command...\n";
		char t3[] = "Error.....#@?!\n";
		char t4[] = "Break sendirilah TOLOL! manja amat ngandalin App mulu >:(\n\n";
		
		for(int i=0;t1[i]!=NULL;i++)
		{
		printf("%c",t1[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
		}
	
		sleep(5);
		
			for(int i=0;t2[i]!=NULL;i++)
		{
		printf("%c",t2[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
		}
		
		sleep(5);
		
			for(int i=0;t3[i]!=NULL;i++)
		{
		printf("%c",t3[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
		}
		
			sleep(5);
			
				for(int i=0;t4[i]!=NULL;i++)
		{
		printf("%c",t4[i]);
		for(int j=0;j<=8888888;j++)
		{
			
		}
		}
		
		system("pause");
		system("cls");
		menu();
		break;
		}
	
			
		case 4:
		{
		char t1[] = "Processing...\n";
		char t2[] = "Error.....@#!?\n";
		char t3[] = "Kalau mau kaya, ya kerja GOBLOX!!\n\n";
		for(int i=0;t1[i]!=NULL;i++)
		{
		printf("%c",t1[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
		}
	
		sleep(5);
		
			for(int i=0;t2[i]!=NULL;i++)
		{
		printf("%c",t2[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
		}
		
		sleep(5);
		
			for(int i=0;t3[i]!=NULL;i++)
		{
		printf("%c",t3[i]);
		for(int j=0;j<=8888888;j++)
		{
			
		}
		}
		
		system("pause");
		system("cls");
		menu();
		break;
		
		}
	
		
		default:
		char t4[] = "Terima kasih telah menggunakan App BukanPeqi!\n";
		char t5[] = "Akun anda sudah menjadi milik kami :D mampus koe!!!!";
		
				for(int i=0;t4[i]!=NULL;i++)
		{
		printf("%c",t4[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
		}

			for(int i=0;t5[i]!=NULL;i++)
		{
		printf("%c",t5[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
		}
		system("exit");
		sleep(5);
		system("cls");
		
	}
	

}

void submenu()
{
	puts("1. Summon Death Spike Tree");
	puts("2. Harvest all Death Spike Tree");
	puts("3. Break all Death Spike Block");
	puts("4. Insert 100000000000 BGL to your Backpack");
	puts("5. Exit App BukanPeqi");
}

void loading()
{
	char t1[] = "Processing...\n";
	char t2[] = "Mencari database akun growtopia...";
	char t3[] = "Akun ditemukan!\n\nGrowID : nicholasvt\nLevel : 53\n\n";
	for(int i=0;t1[i]!=NULL;i++)
	{
		printf("%c",t1[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
	}
	
	sleep(5);
	
	for(int i=0;t2[i]!=NULL;i++)
	{
		printf("%c",t2[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
	}
	
	sleep(5);
	
	for(int i=0;t3[i]!=NULL;i++)
	{
		printf("%c",t3[i]);
		for(int j=0;j<=88888888;j++)
		{
			
		}
	}
	
	system("pause");
	system("cls");
}


