#include <stdio.h>

// 메뉴 출력 함수
void printMenu() {
    printf("메뉴를 선택해주세요:\n");
    printf("1. 아메리카노 - 3000원\n");
    printf("2. 카페라떼 - 3500원\n");
    printf("3. 카푸치노 - 4000원\n");
    printf("4. 모카 - 4500원\n");
    printf("5. 핫초코 - 3500원\n");
    printf("주문을 종료하려면 'q'를 입력하세요.\n");
}

// 가격 계산 함수
int calculatePrice(int menu, int quantity) {
    int price = 0;

    switch (menu) {
        case 1:
            price = 3000 * quantity;
            break;
        case 2:
            price = 3500 * quantity;
            break;
        case 3:
            price = 4000 * quantity;
            break;
        case 4:
            price = 4500 * quantity;
            break;
        case 5:
            price = 3500 * quantity;
            break;
    }

    return price;
}

int main() {
    int menu;
    int quantity;
    int totalPrice = 0;
    char input;

    printf("커피숍에 오신 것을 환영합니다!\n");

    // 주문 내역을 저장할 배열
    int orderCount = 0;
    int orderMenu[100];
    int orderQuantity[100];
    int orderPrice[100];

    do {
        printMenu();

        printf("번호를 입력하세요: ");
        scanf(" %c", &input);

        if (input == 'q') {
            break;
        }

        menu = input - '0';

        if (menu < 1 || menu > 5) {
            printf("잘못된 메뉴 번호입니다. 다시 입력해주세요.\n");
            continue;
        }

        printf("수량을 입력하세요: ");
        scanf("%d", &quantity);

        int price = calculatePrice(menu, quantity);
        totalPrice += price;

        // 주문 내역 저장
        orderMenu[orderCount] = menu;
        orderQuantity[orderCount] = quantity;
        orderPrice[orderCount] = price;
        orderCount++;

        printf("주문한 메뉴: %d, 수량: %d, 가격: %d원\n", menu, quantity, price);

    } while (1);

    printf("총 주문 가격은 %d원 입니다.\n", totalPrice);

    // 전체 주문 내역 출력
    printf("전체 주문 내역:\n");
    for (int i = 0; i < orderCount; i++) {
        printf("주문 %d - 메뉴: %d, 수량: %d, 가격: %d원\n", i + 1, orderMenu[i], orderQuantity[i], orderPrice[i]);
    }

    return 0;
}
