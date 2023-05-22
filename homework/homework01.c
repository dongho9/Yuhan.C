#include <stdio.h>

int print_title_screen()
{
	printf("###############################\n");
	printf("##                           ##\n");
	printf("##        새 똥 피하기       ##\n");
	printf("##           V.0.1           ##\n");
	printf("##                           ##\n");
	printf("##  1. Start Game            ##\n");
	printf("##  2. How to Play           ##\n");
	printf("##  3. Exit                  ##\n");
	printf("##                           ##\n");
	printf("###############################\n");

	return 0;
}

int print_how_to_play_screen()
{
	printf("###############################\n");
	printf("##                           ##\n");
	printf("##      떨어지는 새똥을      ##\n");
	printf("##                           ##\n");
	printf("##   좌우 방향키를 이용해    ##\n");
	printf("##         피하시오          ##\n");
    printf("###############################\n");

    int menu_choice = 0;
    printf("\nReturn to menu? (1.yes 2.no) : ");
    scanf("%d", &menu_choice);
    if(menu_choice == 1)
    {
        return 0;
    }
    else if (menu_choice == 2) 
    {
        return 1; 
    }
    else
    {
        return 0; 
    }
}

int main()
{
	int game_state = 1;
	
	while(game_state)
	{
		print_title_screen();
		printf("input>");
		scanf("%d", &game_state);

		if(game_state == 2)
		{
			int return_to_menu = 1;

			while(return_to_menu)
			{
				return_to_menu = print_how_to_play_screen();
			}
		}
		else if(game_state == 3) 
		{
			return 0; 
		}
	}

	return 0;
}