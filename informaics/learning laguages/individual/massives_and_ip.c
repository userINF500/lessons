#include <stdio.h>
#include <stdlib.h>
void fillArray(int arr[], int size, int a, int b) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (b - a + 1) + a; // Заполняем элементы массива случайными числами из отрезка [a; b]
    }
}

int main() {
    int size;
    int a, b;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the range [a; b]: ");
    scanf("%d %d", &a, &b);

    int arr[size];

    fillArray(arr, size, a, b);

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

struct IpHeader {
    unsigned char version;      // Версия IP-пакета
    unsigned char headerLength; // Длина заголовка в 32-битных словах
    unsigned char serviceType;  // Тип сервиса
    unsigned short totalLength; // Общая длина пакета
    unsigned short identification; // Идентификатор пакета
    unsigned short flagsAndOffset; // Флаги и смещение фрагмента
    unsigned char timeToLive;   // Время жизни пакета
    unsigned char protocol;     // Протокол верхнего уровня
    unsigned short checksum;    // Контрольная сумма заголовка
    unsigned int sourceAddress; // Адрес отправителя
    unsigned int destinationAddress; // Адрес получателя
};
