/*
    Saya Imam Chalish Rafidhul Haque NIM 2207260 mengerjakan soal Tes Mesin 6
    dalam mata kuliah Struktur Data untuk keberkahanNya maka saya
    tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

//library
#include <stdio.h>
#include <malloc.h>
#include <string.h>

//struct untuk menyimpan kontainer
typedef struct
{
    char judul[50];
    int harga;
} buku;

//mendefinisikan pointer next untuk kontainer
typedef struct elmt *alamatelmt;

//struct untuk elemen
typedef struct elmt
{
    buku kontainer;
    alamatelmt next;
} elemen;

//struct untuk stack
typedef struct
{
    elemen *top;
} stack;

//prosedur untuk membuat stack kosong
void createEmpty(stack *S);

//fungsi untuk mengecek apakah stack kosong
int isEmpty(stack S);

//fungsi untuk menghitung jumlah elemen dalam stack
int countElement(stack S);

//prosedur untuk menambah data (add ke paling atas)
void push(char judul[], int harga, stack *S);

void push2(stack *S, elemen* e);

//prosedur untuk menghapus data top
void pop(stack *S);

void pop2(stack *S, stack *T);

//prosedur untuk print stack
void printStack(stack S);