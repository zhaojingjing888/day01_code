#include "game.h"

void game(){
	
	srand((unsigned int)time(NULL));
	int r = rand()%RANG+1;
	
	int data = 0;
	for(;;){
		
		printf("please guss a number:");
		scanf ("%d",&data);
		if (r == data){
			printf("congratulation!!\n");
			break;
		}
		else if(r < data){
			printf("Too big!\n");
			
		}
		else {
			printf("Too small\n");
		}
		
	}
	
}