#include <stdio.h>
#include <stdlib.h>

void fill(int p[], int size, int a, int b) {
    for (int i = 0; i < size; i++) {
        p[i] = rand() % (b - a + 1) + a; // Заполняем элементы массива случайными числами из отрезка [a; b]
    }
}

void fillArray() 
{
    int size;
    int a, b, *p;
   
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the range [a; b]: ");
    scanf("%d %d", &a, &b);

    int arr[size];
    p = malloc(size * sizeof(int));

    fill(p, size, a, b);

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", p[i]);
    }
    free(p);
}

struct IpHeader 
{
    unsigned char version;      
    unsigned char headerLength;
    unsigned char serviceType;  
    unsigned short totalLength; 
    unsigned short identification; 
    unsigned short flagsAndOffset; 
    unsigned char timeToLive;   
    unsigned char protocol;     
    unsigned short checksum;    
    unsigned int sourceAddress; 
    unsigned int destinationAddress; 
};

void printIpHeaderFields(const struct IpHeader *header) 
{
    printf("Версия: %02x\n", header->version);
    printf("Длина заголовка: %02x\n", header->headerLength);
    printf("Тип сервиса: %02x\n", header->serviceType);
    printf("Общая длина пакета: %04x\n", header->totalLength);
    printf("Идентификатор пакета: %04x\n", header->identification);
    printf("Флаги и смещение фрагмента: %04x\n", header->flagsAndOffset);
    printf("Время жизни пакета: %02x\n", header->timeToLive);
    printf("Протокол верхнего уровня: %02x\n", header->protocol);
    printf("Контрольная сумма заголовка: %04x\n", header->checksum);
    printf("Адрес отправителя: %08x\n", header->sourceAddress);
    printf("Адрес получателя: %08x\n", header->destinationAddress);
}


void massive_of_ip_packets() {
    const int packetCount = 10; 

    struct IpHeader packetHeaders[packetCount];

    for (int i = 0; i < packetCount; i++) {
        struct IpHeader *header = &packetHeaders[i];
        header->version = 4;
        header->headerLength = 5;
        header->serviceType = (unsigned char)rand();
        header->totalLength = (unsigned short)rand();
        header->identification = (unsigned short)rand();
        header->flagsAndOffset = (unsigned short)rand();
        header->timeToLive = (unsigned char)rand();
        header->protocol = (unsigned char)rand();
        header->checksum = (unsigned short)rand();
        header->sourceAddress =(unsigned int)rand();
        header->destinationAddress = (unsigned int)rand();
    }
    
     for (int i = 0; i < packetCount; i++) 
    {
        printf("Пакет %d:\n", i + 1);
        printIpHeaderFields(&packetHeaders[i]);
        printf("\n");
    }
}
int main ()
{
    massive_of_ip_packets();
    return 0;
}
