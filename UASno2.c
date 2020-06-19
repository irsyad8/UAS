#include<stdio.h>
#include<conio.h>

#define MAX 50
#define true 1
#define false 0

char stack[MAX];
int top;

void init(void){
    top=0;
}

int full(void){
    if(top==MAX)
        return(true);
    else
        return(false);
}

int empty(void){
    if(top==0)
        return(true);
    else
        return(false);
}

char pop(void){
    char info;
    if(empty()!=true){
        info=stack[top];
        top--;
        return(info);
    }
    else
        printf("Stack underflow...\n");
}

void clear(void){
    top=0;
}

void push(char info){
    if(full()!=true){
        top++;
        stack[top]=info;
    }
    else
        printf("Stack overflow...\n");
}

void baca(void){
    int i;
    printf("isi stack : ");
    if(top>0){
        for(i=1;i<=top;i++)
            printf("%c ",stack[i]);
    }
    else
        printf("(kosong) \n");
}

void search(char info){
    int i;
    if (top>0){
        for(i=1;i<=top;++i){
            if(stack[i] == info){
                printf("Data %c berada pada posisi %d \n", info, i);
                break;
            } else{
                printf("Data yang dicari tidak terdapat pada stack\n");
                break;
            }
        }
    } else
        printf("(kosong) \n");
}

void main(){
    char pilih,khol;
    Printf("NAMA	: MUHAMMAD IRSYAD SHIDDIQ\n");
    Printf("NPM		: 197006044\n");
    Printf("KELOMPOK: 4\n");
    printf("----Demo Operasi Single Stack----\n");
    init();

    do{
        printf("operasi single stack:\n");
        printf("[1] PUSH\n");
        printf("[2] POP\n");
        printf("[3] CLEAR\n");
        printf("[4] BACA\n");
        printf("[5] SEARCH\n");
        printf("[6] SELESAI...\n");
        printf(" Pilihan : ");scanf("%s",&pilih);
        switch(pilih){
            case '1':
                printf("PUSH : ");scanf("%s",&khol);
                push(khol);
                break;
            case '2':
                khol=pop();
                printf("POP %c\n",khol);
                break;
            case '3':
                clear();
                break;
            case '4':
                baca();
                break;
            case '5':
                printf("SEARCH : ");scanf("%s",&khol);
                search(khol);
                break;
            case '6':
                break;
            default :
                printf("Salah pilih... \n");
        }
        printf("\n");
    }while(pilih!='6');
    getche();
}
