// nen dung swith case
#include <stdio.h>

int main() {
    int month, days;
    printf("Nhap vao so thang tu (1-12): ");
    scanf("%d", &month);
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            printf("Thang %d co 31 ngay.\n", month);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            printf("Thang %d co 30 ngay.\n", month);
            break;
        case 2:
            days = 28; // 
            printf("Thang 2 có 28 hoac 29 ngay tuy theo nam nhuan.\n");
            break;
        default:
            printf("So thang khong hop le.\n");
            break;
    }

    return 0;
}

