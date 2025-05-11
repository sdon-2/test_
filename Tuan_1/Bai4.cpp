#include <stdio.h>
#include <math.h>

int main(){
    int A[2], B[2], C[2], AB[2], AC[2];
    float a, b, c, d, S;
    printf("Nhap dinh A: ");
    scanf("%d%d",&A[0], &A[1]);
    printf("Nhap dinh B: ");
    scanf("%d%d",&B[0], &B[1]);
    printf("Nhap dinh C: ");
    scanf("%d%d",&C[0], &C[1]);

    //
    AB[0] = B[0] - A[0];
    AB[1] = B[1] - A[1];
    AC[0] = C[0] - A[0];
    AC[1] = C[1] - A[1];

    // AB
    if(A[0] == B[0]){
        c = A[1] - B[1];
        if(c<0) c = -c;
    }
    else if(A[1] == B[1]){
        c = A[0] - B[0];
        if(c<0) c = -c;
    }
    else{
        c = sqrt(pow((A[0] - B[0]), 2) + pow((A[1] - B[1]), 2));
    }
    printf("c = %f\n", c);

    // BC
    if(C[0] == B[0]){
        a = C[1] - B[1];
        if(a<0) a = -a;
    }
    else if(C[1] == B[1]){
        a = C[0] - B[0];
        if(a<0) a = -a;
    }
    else{
        a = sqrt(pow((C[0] - B[0]), 2) + pow((C[1] - B[1]), 2));
    }
    printf("a = %f\n", a);

    // AC
    if(A[0] == C[0]){
        b = A[1] - C[1];
        if(b<0) b = -b;
    }
    else if(A[1] == C[1]){
        b = A[0] - C[0];
        if(b<0) b = -b;
    }
    else{
        b = sqrt(pow((A[0] - C[0]), 2) + pow((A[1] - C[1]), 2));
    }
    printf("b = %f\n", b);

    printf("AB = (%d,%d)\n",AB[0], AB[1]);
    printf("AC = (%d,%d)\n",AC[0], AC[1]);
    
    d = (abs(AB[0]*AC[0]+AB[1]*AC[1]))/(sqrt(pow(AB[0],2)+pow(AB[1],2))*sqrt(pow(AC[0],2)+pow(AC[1],2)));
    printf("sin A = %f\n",sqrt(1-pow(d,2)));
    S = (1.0/2)*b*c*sqrt(1-pow(d,2));
    printf("Dien tich tam giac ABC la: %f",S);
    return 0;
}