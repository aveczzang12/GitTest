#include <stdio.h>

int main() {
    int menu;
    int quantity;
    int totalPrice = 0;

    printf("커피숍에 오신 것을 환영합니다!\n");
    printf("메뉴를 선택해주세요:\n");
    printf("1. 아메리카노 - 3000원\n");
    printf("2. 카페라떼 - 3500원\n");
    printf("3. 카푸치노 - 4000원\n");
    printf("4. 모카 - 4500원\n");
    printf("5. 핫초코 - 3500원\n");
    printf("번호를 입력하세요: ");
    scanf("%d", &menu);

    printf("수량을 입력하세요: ");
    scanf("%d", &quantity);

    switch (menu) {
        case 1:
            totalPrice = 3000 * quantity;
            printf("아메리카노를 %d잔 주문하셨습니다.\n", quantity);
            break;
        case 2:
            totalPrice = 3500 * quantity;
            printf("카페라떼를 %d잔 주문하셨습니다.\n", quantity);
            break;
        case 3:
            totalPrice = 4000 * quantity;
            printf("카푸치노를 %d잔 주문하셨습니다.\n", quantity);
            break;
        case 4:
            totalPrice = 4500 * quantity;
            printf("모카를 %d잔 주문하셨습니다.\n", quantity);
            break;
        case 5:
            totalPrice = 3500 * quantity;
            printf("핫초코를 %d잔 주문하셨습니다.\n", quantity);
            break;
        default:
            printf("잘못된 메뉴 번호입니다.\n");
            return 0;
    }

    printf("총 주문 가격은 %d원 입니다.\n", totalPrice);

    return 0;
}
