#include<stdio.h>
int main(){
int raw,col,num;
scanf("%d",&num);
for(raw=num;raw>=1;raw--){
 for(col=1;col<=raw;col++) {
    if(col==raw||col==1){
    printf("*");
    }
    else{
        printf(" ");
    }

}

printf("\n");
}

}
