/*
    Saya Imam Chalish Rafidhul Haque NIM 2207260 mengerjakan soal Tes Mesin 6
    dalam mata kuliah Struktur Data untuk keberkahanNya maka saya
    tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

//library
#include "header.h"

//prosedur untuk membuat stack kosong
void createEmpty(stack *S)
{
    (*S).top = NULL;
}

//fungsi untuk mengecek apakah stack kosong
int isEmpty(stack S)
{
    int hasil = 0;
    if (S.top == NULL)
    {
        hasil = 1;
    }
    return hasil;
}


//fungsi untuk menghitung jumlah elemen dalam stack
int countElement(stack S)
{

    int hasil = 0;

    if (S.top != NULL)
    {
        /* stack tidak kosong */

        elemen *bantu;

        /* inisialisasi */
        bantu = S.top;
        while (bantu != NULL)
        {
            /* proses */
            hasil = hasil + 1;

            /* iterasi */
            bantu = bantu->next;
        }
    }
    return hasil;
}

//prosedur untuk menambah data (add ke paling atas)
void push(char judul[], int harga, stack *S)
{
    elemen *baru;
    baru = (elemen *)malloc(sizeof(elemen));

    strcpy(baru->kontainer.judul, judul);
    baru->kontainer.harga = harga;

    if ((*S).top == NULL)
    {
        // jika stack kosong
        baru->next = NULL;
    }
    else
    {
        // jika stack tidak kosong
        baru->next = (*S).top;
    }
    (*S).top = baru;
    baru = NULL;
}

//prosedur untuk menambah data (add ke paling atas)
void push2(stack *S, elemen* e)
{

    if ((*S).top == NULL)
    {
        // jika stack kosong
        e->next = NULL;
    }
    else
    {
        // jika stack tidak kosong
        e->next = (*S).top;
    }
    (*S).top = e;
    e = NULL;
}

//prosedur untuk menghapus data top
void pop(stack *S)
{
    if ((*S).top != NULL)
    {
        /*jika stack bukan list kosong*/
        elemen *hapus = (*S).top;
        if (countElement(*S) == 1)
        {
            (*S).top = NULL;
        }
        else
        {
            (*S).top = (*S).top->next;
        }
        hapus->next = NULL;
        free(hapus);
    }
    else
    {
        printf("stack kosong");
    }
}

void pop2(stack *S, stack *T)
{
    if ((*S).top != NULL)
    {
        /*jika stack bukan list kosong*/
        elemen *hapus = (*S).top;
        if (countElement(*S) == 1)
        {
            (*S).top = NULL;
        }
        else
        {
            (*S).top = (*S).top->next;
        }
        // hapus->next = NULL;
        // free(hapus);
        push2(T, hapus);
    }
    else
    {
        printf("stack kosong");
    }
}

//prosedur untuk print stack
void printStack(stack S)
{
    if (S.top != NULL)
    {
        // printf("------isi stack------\n");
        
        elemen *bantu = S.top;

        int i = 1;

        while (bantu != NULL)
        {
            // printf("====================\n");
            printf("%d. %s Rp.%d\n", i, bantu->kontainer.judul, bantu->kontainer.harga);
            bantu = bantu->next;
            i = i + 1;
        }

    }
    else
    {
        /* proses jika stack kosong */
        printf("- Kosong\n");
    }
}