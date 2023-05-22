#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define WIDTH 40    
#define HEIGHT 20   
#define KEY_UP 72   
#define KEY_DOWN 80 

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
	printf("##   방향키를 이용해 위아래로 ##\n");
	printf("##         이동하세요         ##\n");
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

void play_game(){
    int birdX, birdY;          
    int obstacleX, obstacleY;  
    int score = 0;  

    void setup() {
        birdX = WIDTH / 2;        
        birdY = HEIGHT / 2;
        obstacleX = WIDTH - 1;    
        obstacleY = rand() % HEIGHT;
    }

    void draw() {
        system("cls");  

        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                if (x == birdX && y == birdY) {
                    printf("@");    
                } else if (x == obstacleX && y == obstacleY) {
                    printf("#");    
                } else {
                    printf(" ");    
                }
            }
            printf("\n");
        }

        printf("Score: %d\n", score);  
    }

    void input() {
        if (_kbhit()) {  
            char key = _getch();
            if (key == 'w' || key == 'W' || key == KEY_UP) {
                birdY--;  
            } else if (key == 's' || key == 'S' || key == KEY_DOWN) {
                birdY++;  
            }
        }
    }

    void update() {
        obstacleX--;  

        if (obstacleX < 0) {  
            obstacleX = WIDTH - 1;                
            obstacleY = rand() % HEIGHT;          
            score++;                              
        }

        if (birdY >= HEIGHT || birdY < 0) { 
            printf("Game Over!\n");
            exit(0);
        }

        if (birdX == obstacleX && birdY == obstacleY) {  
            printf("Game Over!\n");
            exit(0);
        }
    }

    setup();

    while (1) {
        draw();
        input();
        update();
    }
}

int main()
{
    int game_state = 1;

    while (game_state)
    {
        print_title_screen();
        printf("input> ");
        scanf("%d", &game_state);

        if (game_state == 1)
        {
            play_game();
        }
        else if (game_state == 2)
        {
            int return_to_menu = 1;

            while (return_to_menu)
            {
                return_to_menu = print_how_to_play_screen();
            }
        }
        else if (game_state == 3)
        {
            return 0;
        }
    }

    return 0;
}