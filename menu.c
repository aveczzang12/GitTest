#include <stdio.h>

int main() {
    int menu;

    printf("커피숍에 오신 것을 환영합니다!\n");
    printf("메뉴를 선택해주세요:\n");
    printf("1. 아메리카노\n");
    printf("2. 카페라떼\n");
    printf("3. 카푸치노\n");
    printf("4. 모카\n");
    printf("5. 핫초코\n");
    printf("번호를 입력하세요: ");
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("아메리카노를 주문하셨습니다.\n");
            break;
        case 2:
            printf("카페라떼를 주문하셨습니다.\n");
            break;
        case 3:
            printf("카푸치노를 주문하셨습니다.\n");
            break;
        case 4:
            printf("모카를 주문하셨습니다.\n");
            break;
        case 5:
            printf("핫초코를 주문하셨습니다.\n");
            break;
        default:
            printf("잘못된 메뉴 번호입니다.\n");
            break;
    }

    return 0;
}
