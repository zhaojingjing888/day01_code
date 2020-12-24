#include "game.h"

void Menu()
{
	printf("*************************\n");
	printf("*****1:Play   2:Exit*****\n");
	printf("*************************\n");
}

int main(){
	//登录
	char name[64];
	char passwd [64];
	
	int times = 3;
	int land = 0;
	
	for (int i = times;i >= 1;i--){
	printf("please enter name:");
	scanf("%s",name);//数组使用函数会自动降维成数组，因此不需要加取地址符号
	printf("please enter password:");
	scanf("%s",passwd);
		if ((strcmp(name,NAME) == 0) && (strcmp(passwd,PASSWD) == 0)){
			land = 1;
			printf("Successful landing!!!\n");
			
			break;
		}
		else if (i == 1){
			printf("chance is over!please try again after 3s!!\n");
			Countdown();
			i = times+1;

		}
		else{
			
			printf("default landing!!please input again!\n");
			printf("you have %d chances\n",i-1);
		}
		
	}
	//倒计�?
	
	//游戏
	int quit = 0;
	while((!quit) && land)
	{
	Menu();
	printf("please input your select 1 or 2:\n");
	int select = 0;
	scanf("%d",&select);
	
	switch (select){
		case 1:{
			game();
			printf("Well done !! Do you want to play again?????\n");
			quit = 0;
			break;
		}
		case 2:{
			printf("Looking forward next time !\n");
			quit = 1;
			break;
		}
		default:{
			printf("error input!/n");
			break;
		}
	}
	}
	
	
	
	system("pause");
	return 0;
}