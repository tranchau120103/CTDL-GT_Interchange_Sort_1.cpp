https://sinhvientot.net/thuat-toan-sap-xep-doi-cho-truc-tiep-interchange-sort/

#include <stdio.h>
#include <conio.h>

void Nhap(int a[], int n) {
    //dung vong lap for duyet tu vi tri index thu 0 cho den vi tri n - 1 
    for (int i = 0; i <= n - 1; i++) {
        //nhap gia tri va gan vao tung phan tu a[i] cua mang
        printf("NHAP A[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void Xuat(int a[], int n) {
    printf("\nCAC PHAN TU CO TRONG MANG\n");
    for (int i = 0; i <= n - 1; i++) {
        // xuat cac phan tu a[i] co trong mang ra man hinh
        printf("A[%d] = %d \n", i, a[i]);
    }
}

void swap(int& a, int& b)
{
    int x = a;
    a = b;
    b = x;
}void Sapxep(int a[], int n)
{
    for (int i = 0; i < n - 1;i++)
        for (int j = i + 1; j < n;j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
}void main()
{
    int N;
    int A[100];
    Nhap(A, N);
    Sapxep(A, N);
    Xuat(A, N);
    getch();
}
