#include <stdio.h>

int print_title_screen()
{
	printf("###############################\n");
	printf("##                           ##\n");
	printf("##         Dino Run          ##\n");
	printf("##          V.0.1            ##\n");
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
	printf("##      To Avoid Enemy       ##\n");
	printf("##                           ##\n");
	printf("##  Press Space Bar To Jump  ##\n");
	printf("##                           ##\n");
    printf("###############################\n");

    int menu_choice = 0;
    printf("\nReturn to menu? (1.yes 2.no) : ");
    scanf("%d", &menu_choice);
    if(menu_choice == 1)
    {
        return 1; // 메뉴로 복귀하기 위해 1을 반환
    }
    else
    {
        return 0; // 다시 게임 설명 화면을 출력하기 위해 0을 반환
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

		if(game_state == 2) // 2번 메뉴를 선택한 경우
		{
			int return_to_menu = 1; // 기본값으로 1을 설정하여 while문이 최초 1회 실행될 수 있도록 함

			while(return_to_menu)
			{
				return_to_menu = print_how_to_play_screen(); // 메뉴로 돌아갈지, 다시 설명을 출력할지에 대한 반환값을 받음
			}
		}
	}

	return 0;
}

