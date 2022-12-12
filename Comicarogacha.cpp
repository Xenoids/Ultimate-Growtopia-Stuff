#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>

void title();
void loading();
void menu();
void submenu();

int main()
{
	menu();
}
	

void title()
{
	puts("=================================================");
	puts("\|  Mari menggacha di Comicarogacha 69 :D        \|");
	puts("=================================================\n");
	
}

void menu()
{
	title();
	int pilihan;
	char t1[] = "Ga bisa gacha di Comicaro? disini aja! :D\n\n";
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
		system("cls");
		title();
		int jumlah;
		
	char t1[] = "Input jumlah kandidat yang ingin dimasskan (Angka) :\n";
	for(int i=0;t1[i]!=NULL;i++)
	{
		printf("%c",t1[i]);
		for(int j=0;j<=9999999;j++)
		{
			
		}
	}
		//puts("Input jumlah kandidat yang ingin dimasskan : ");
		printf(">>");
		scanf("%d",&jumlah);
		getchar();
		char list_mass[jumlah][100];
		
		
		puts("");
		
		
		char t2[] = "Input kandidat massnya! (Huruf) :\n";
		for(int i=0;t2[i]!=NULL;i++)
	{
		printf("%c",t2[i]);
		for(int j=0;j<=9999999;j++)
		{
			
		}
	}
	
		
		
		for(int i=0;i<jumlah;i++)
		{
			printf(">>%d. ",i+1);
			scanf("%[^\n]",list_mass[i]);
			getchar();
		}
		
//		for(int i=0;i<jumlah;i++)
//		{
//			printf("%s\n",list_mass[i]);
//		}
		
		int gachacount;
		puts("");
		char t3[] = "Input berapa kali gacha? :\n";
		for(int i=0;t3[i]!=NULL;i++)
	{
		printf("%c",t3[i]);
		for(int j=0;j<=9999999;j++)
		{
			
		}
	}
		printf(">>");
		scanf("%d",&gachacount);
		getchar();
		int i=0;
		int lower = 1;
		int upper = jumlah;
		
		// counter
		int count[jumlah]={0};
		
		system("cls");
		title();
		printf("Press ENTER to gacha!\n");
		puts("Good Luck :) May RNG Bless You ^o^");
		do{
			char key;
			int result_gacha;
			if(kbhit())
			{
				key = getch();
				if(key == 13)
				{
				i++;
				srand(time(0)+i);
				result_gacha = (rand() % (upper-lower+1)) + lower;
				printf("%d. Result : %s\n",i,list_mass[result_gacha-1]);
				
				for(int i=0;i<jumlah;i++)
				{
//					for(int j=0;j<)
					if(result_gacha == i+1) count[i]++;
					// 1 == 1 , count[0]++
				}
				
				// Debug Purpose
//				for(int i=0;i<gachacount;i++)
//				{
//					printf("count[%d]: %d\n",i,count[i]);
//				}
			
//				if(result_gacha == 1) count[0]++;
//				if(result_gacha == 2) count[1]++;
//				if(result_gacha == 3) count[2]++;
//				if(result_gacha == 4) count[3]++;
				}
			}
		}while(gachacount > i);
		
		printf("\n\nGACHA RESULT\n");
		//		printf("asg = %d\ntangram = %d\nblueberry= %d\nportculis= %d\n",count[0],count[1],count[2],count[3]);
		for(int i=0;i<jumlah;i++)
		{
			printf("%s = %d\n",list_mass[i],count[i]);
		}
			
		printf("\n");
		system("pause");
		system("cls");
		menu();
		break;
		
	
		}	
			
		default:
		char t4[] = "Terima kasih telah menggunakan jasa gacha kami ^o^!\n";
		char t5[] = "Pasti gachanya busuk kan YAHAHAHAHA mampus kuli sana :)";
		
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
	puts("1. Gacha Mass!");
	puts("2. Exit");
}



