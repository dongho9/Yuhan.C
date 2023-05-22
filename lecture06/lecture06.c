#include <stdio.h>

int main() {
    int player_attack, enemy_hp = 30;

    // 캐릭터 메이킹 화면
    printf("------------------------------------------\n");
    printf("주인공의 공격력을 입력하세요 : ");
    scanf("%d", &player_attack);
    printf("\n주인공은 공격력이 %d입니다.\n", player_attack);

    // 주인공이 적을 공격
    enemy_hp -= player_attack;
    printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n", player_attack);
    printf("\n적의 잔여 HP : %d\n", enemy_hp);

    // 적이 주인공을 공격
    printf("\n적이 주인공을 공격하여 주인공이 뒤졌습니다.\n");
    printf("Game Over\n");
    
    printf("------------------------------------------\n");

    // 캐릭터 메이킹 화면
    printf("주인공의 공격력을 입력하세요 : ");
    scanf("%d", &player_attack);
    printf("\n주인공은 공격력이 %d입니다.\n", player_attack);

    // 주인공이 적을 공격
    enemy_hp -= player_attack;
    printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n", player_attack);
    printf("\n적의 잔여 HP : %d\n", enemy_hp);

    // 적을 물리쳤을 경우
    if (enemy_hp <= 0) {
        printf("\n적을 물리쳤습니다!\n");
        printf("Happy End\n");
    }
    // 적이 남았을 경우
    else {
        printf("\n적이 주인공을 공격하여 주인공이 뒤졌습니다.\n");
        printf("Game Over\n");
    }

    printf("------------------------------------------\n");

    return 0;
}
