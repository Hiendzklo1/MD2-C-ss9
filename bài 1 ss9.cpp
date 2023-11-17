#include <stdio.h>
int isPrime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr[100];
    int n = 0;
	int max = arr[0];
    int min = arr[0];
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu co gia tri nhu vay\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu can nhap: ");
                scanf("%d", &n);
                printf("Nhap gia tri cho cac phan tu:\n");
                for (int i = 0; i < n; ++i) {
                    printf("arr[%d]: ", i);
                    scanf("%d", &arr[i]);
                }
                break;

            case 2:
                printf("Gia tri cac phan tu dang quan ly:\n");
                for (int i = 0; i < n; ++i) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Gia tri cac phan tu chan va tong:\n");
                int sumEven = 0;
                for (int i = 0; i < n; ++i) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sumEven += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan: %d\n", sumEven);
                break;

            case 4:
                if (n > 0) {
                    for (int i = 1; i < n; ++i) {
                        if (arr[i] > max) {
                            max = arr[i];
                        }
                        if (arr[i] < min) {
                            min = arr[i];
                        }
                    }
                    printf("Gia tri lon nhat: %d\n", max);
                    printf("Gia tri nho nhat: %d\n", min);
                } else {
                    printf("Mang chua co phan tu.\n");
                }
                break;

            case 5:
                printf("Cac so nguyen to trong mang va tong:\n");
                int sumPrime = 0;
                for (int i = 0; i < n; ++i) {
                    if (isPrime(arr[i])) {
                        printf("%d ", arr[i]);
                        sumPrime += arr[i];
                    }
                }
                printf("\nTong cac so nguyen to: %d\n", sumPrime);
                break;

            case 6:
                if (n > 0) {
                    int target;
                    int count = 0;
                    printf("Nhap so can thong ke: ");
                    scanf("%d", &target);
                    for (int i = 0; i < n; ++i) {
                        if (arr[i] == target) {
                            count++;
                        }
                    }
                    printf("Trong mang co %d phan tu co gia tri %d.\n", count, target);
                } else {
                    printf("Mang chua co phan tu.\n");
                }
                break
                    int newValue, insertIndex;
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &newValue);
                    printf("Nhap vi tri can them (tu 0 den %d): ", n);
                    scanf("%d", &insertIndex);
                    if (insertIndex >= 0 && insertIndex <= n) {
                        for (int i = n; i > insertIndex; --i) {
                            arr[i] = arr[i - 1];
                        }
                        arr[insertIndex] = newValue;
                        n++;
                        printf("Them phan tu thanh cong.\n");
                    } else {
                        printf("Vi tri khong hop le.\n");
                    }
                } else {
                    printf("Khong the them phan tu, mang da day.\n");
                }

            case 7:
                if (n < 100) {
                    int newValue, insertIndex;
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &newValue);
                    printf("Nhap vi tri can them (tu 0 den %d): ", n);
                    scanf("%d", &insertIndex);
                    if (insertIndex >= 0 && insertIndex <= n) {
                        for (int i = n; i > insertIndex; --i) {
                            arr[i] = arr[i - 1];
                        }
                        arr[insertIndex] = newValue;
                        n++;
                        printf("Them phan tu thanh cong.\n");
                    } else {
                        printf("Vi tri khong hop le.\n");
                    }
                } else {
                    printf("Khong the them phan tu, mang da day.\n");
                }
                break;
            case 8:
                printf("Ket thuc chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n");
                break;
        }
    } while (choice != 8);

    return 0;
}

