#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
void nhapMotChuoiDemSoTu() {
     char chuoi[255];
     printf("Nhap vao mot chuoi\n");
     gets(chuoi);
    // printf("%s", &chuoi[5]);
     printf("%d\n", strlen(chuoi));
 
     for (int i= strlen(chuoi); i>=0 ;i--) {
         printf("%c\n", chuoi[i]);
     }
 }
 int main()
 {
 	nhapMotChuoiDemSoTu();
 }
 
