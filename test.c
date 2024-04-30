#include<stdio.h>
#include<stdlib.h>

int x=0,y=0;
char input;

void draw(x,y){

    system("cls");
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){

            if (i==y && j==x){
                printf(" %c%c",987,987);
            }
            else{
                printf(" . ");
            }
        }
        printf("\n");
    }
}

char input_handling(){
    scanf("%c",&input);
    switch(input){
    case 'd':
            if(x>=9){x=0;}
            else if(x<9){x+=1;}
            draw(x,y);
            break;

    case 'a':
            if(x<0){x=9;}
            else if(x<=9){x-=1;}
            draw(x,y);
            break;
    case 's':
            if(y>9){y=0;}
            else if(y<9){y+=1;}
            draw(x,y);
            break;

    case 'w':
            if(y<0){y=9;}
            else if(y<=9){y-=1;}
            draw(x,y);
            break;


            }
}

int main(){

    while(1){
        draw(x,y);
        input_handling();
    }

}
