/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 5
 *   Hari dan Tanggal    : Senin, 11 Mei 2026
 *   Nama (NIM)          : 13224024
 *   Nama File           : soal1.c
 *   Deskripsi           : Program Penghitung derahat tiap simpul, simpul maksimum, dan simpul terisolasi dari sebuah adjacency matrix
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int max (int *list, int N){
    int nilai_max = list[0];
    int hasil = 0;
    for (int i = 1; i < N; i++)
    {
        if(list[i] > nilai_max) {
            nilai_max= list[i];
            hasil = i;
        }
    }
    return hasil;
}

int iso (int *list, int N){
    for (int i = 0; i < N; i++)
    {
        if(list[i] == 0) return i;
    }
}

int main(){
    int N; scanf("%d", &N);
    int matrix[N][N];
    int jml[N]; int buff;
    for (int i = 0; i < N; i++)
    {
        jml[i] = 0;
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &buff);
            matrix[i][j] = buff;
            if (buff ==1)
            {
                jml[i]+=1;
            }
            
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("DEGREE %d %d\n", i, jml[i]);
    }
    int maksimum = max(jml, N);
    printf("MAX_VERTEX %d\n", maksimum);
    int isolated = iso(jml, N);
    printf("ISOLATED %d", isolated);
    
    return 0;
}


