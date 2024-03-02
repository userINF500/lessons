
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

    p = malloc(size * sizeof(int));

    fill(p, size, a, b);

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", p[i]);
    }
    free(p);
}

typedef struct IpHeader 
{
    unsigned char version:4;
    unsigned char hdr_size:4;

}t_ipV4;


void bits_field(const struct IpHeader *hdr)
{ 
    unsigned char *ptr = (unsigned char *)&hdr;
    printf("Struct size = %zu\n", sizeof(hdr));
    printf("Content = %hhx\n", *ptr);
    printf("Version = %hhx\n", hdr->version);
    printf("Size = %#hhx\n", hdr->hdr_size);
}

void massive_of_ip_packets() {
    const int packetCount = 10; 

    struct IpHeader packetHeaders[packetCount];

    for (int i = 0; i < packetCount; i++) {
        packetHeaders[i].version = (unsigned char)rand();
        packetHeaders[i].hdr_size = (unsigned char)rand();
        
    }

     for (int i = 0; i < packetCount; i++) 
    {
        printf("packet %d:\n", i + 1);
       bits_field(&packetHeaders[i]);
        printf("\n");
    }
}
int main ()
{
    massive_of_ip_packets();
    return 0;
}
