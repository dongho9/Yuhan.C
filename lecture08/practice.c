#include <stdio.h>

int main() {
    int player_attack, enemy_hp = 30;

    printf("------------------------------------------\n");
    printf("적의 HP : %d\n", enemy_hp);
    
    while (enemy_hp > 0) {
        printf("주인공의 공격력을 입력하세요 : ");
        scanf("%d", &player_attack);
        printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n", player_attack);

        enemy_hp -= player_attack;
        if (enemy_hp > 0) {
            printf("적의 잔여 HP : %d\n", enemy_hp);
        } else {
            printf("\n적을 물리쳤습니다!\n");
            printf("Happy End\n");
            break;
        }
        
        printf("\n");
    }
    
    printf("------------------------------------------\n");

    return 0;
}
