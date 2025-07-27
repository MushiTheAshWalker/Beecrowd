#include<stdio.h>
#include<string.h>
int main()
{
    char A[30],B[30],C[30];
    fgets(A,sizeof(A),stdin);
    fgets(B,sizeof(B),stdin);
    fgets(C,sizeof(C),stdin);
    A[strcspn(A, "\n")] = '\0';
    B[strcspn(B, "\n")] = '\0';
    C[strcspn(C, "\n")] = '\0';
    if (strcmp(A,"vertebrado")==0)
    {
        if (strcmp(B,"mamifero")==0)
        {
            if (strcmp(C,"onivoro")==0)
            {
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
            
        }
        else if (strcmp(B,"ave")==0)
        {
            if (strcmp(C,"carnivoro")==0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
            
        }
        
        
    }
    else if (strcmp(A, "invertebrado") == 0) {
        if (strcmp(B, "inseto") == 0) {
            if (strcmp(C, "hematofago") == 0) {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else if (strcmp(B, "anelideo") == 0) {
            if (strcmp(C, "onivoro") == 0) {
                printf("minhoca\n");
            } else {
                printf("sanguessuga\n");
            }
        }
    }
return 0;
}

