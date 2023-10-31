/*
    Saya Imam Chalish Rafidhul Haque NIM 2207260 mengerjakan soal Tes Mesin 6
    dalam mata kuliah Struktur Data untuk keberkahanNya maka saya
    tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main()
{
    stack S;
    createEmpty(&S);

    stack T;
    createEmpty(&T);

    int i;
    buku data[6];
    for(i=0; i<6; i++){
        scanf("%s %d", data[i].judul, &data[i].harga);
    }

    printf("==========================\n");
    printf("Buku di S1:\n");
    printStack(S);
    printf("\n");
    printf("Buku di S2:\n");
    printStack(T);
    printf("==========================\n");


    i=0;
    push(data[i].judul, data[i].harga, &S); i++;
    push(data[i].judul, data[i].harga, &T); i++;
    push(data[i].judul, data[i].harga, &T); i++;

    printf("Buku di S1:\n");
    printStack(S);
    printf("\n");
    printf("Buku di S2:\n");
    printStack(T);

    pop(&S);
    pop2(&T, &S);
    push(data[i].judul, data[i].harga, &S); i++;
    push(data[i].judul, data[i].harga, &T); i++;
    push(data[i].judul, data[i].harga, &S); i++;

    pop(&T);
    pop2(&S, &T);

    printf("==========================\n");
    printf("Buku di S1:\n");
    printStack(S);
    printf("\n");
    printf("Buku di S2:\n");
    printStack(T);
    printf("==========================\n");


    return 0;
}