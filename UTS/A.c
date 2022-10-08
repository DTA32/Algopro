#include<stdio.h>
#include<stdlib.h>

int main(){
    char inp1,inp2;
    scanf("%c%c",&inp1,&inp2);
    if(inp1 == 'C'){
        printf("Nada %c%c adalah 261.63 Hz\n",inp1,inp2);
    }
    else if(inp1 == 'D'){
        printf("Nada %c%c adalah 293.66 Hz\n",inp1,inp2);
    }
    else if(inp1 == 'E'){
        printf("Nada %c%c adalah 329.63 Hz\n",inp1,inp2);
    }
    else if(inp1 == 'F'){
        printf("Nada %c%c adalah 349.23 Hz\n",inp1,inp2);
    }
    else if(inp1 == 'G'){
        printf("Nada %c%c adalah 392.00 Hz\n",inp1,inp2);
    }
    else if(inp1 == 'A'){
        printf("Nada %c%c adalah 440.00 Hz\n",inp1,inp2);
    }
    else if(inp1 == 'B'){
        printf("Nada %c%c adalah 493.88 Hz\n",inp1,inp2);
    }
}