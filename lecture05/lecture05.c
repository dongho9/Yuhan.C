#include <stdio.h>

int main() 
{
	int attack, hp = 30;
	while (hp > 0) {
	  printf("주인공의 공격력을 입력하세요 : ");
	  scanf("%d", &attack);
	  printf("주인공의 공격력이 %d입니다\n", attack);
	  printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n", attack);

	  hp -= attack;
	  if (hp > 0) {
		  printf("적의 잔여 HP : %d\n", hp);
	  }
	  else{
	  	  printf("\n적을 물리쳤습니다!\n");
		  printf("Happy End\n");
		  break;
	  }
	}
	return 0;
}
