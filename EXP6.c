#include<stdio.h>
#include<stdlib.h>

int mutex=1, full=0, empty=3, x=0;

int wait(int);
int signal(int);
void producer();
void consumer();

int main() {
    int n;
    printf("\n1.Producer\n2.Consumer\n3.Exit\n");
    while(1) {
        printf("\n Enter your choice\n");
        scanf("%d", &n);
        switch(n) {
            case 1:
                if(mutex == 1 && empty != 0)
                    producer();
                else
                    printf("Buffer is full\n");
                break;
            case 2:
                if(mutex == 1 && full != 0)
                    consumer();
                else
                    printf("Buffer is empty\n");
                break;
            case 3:
                exit(0);
                break;
        }
    }
    return 0;
}

int wait(int s) {
    return (--s);
}

int signal(int s) {
    return (++s);
}

void producer() {
    mutex = wait(mutex);
    empty = wait(empty);
    x++;
    printf("\nProducer produces the item %d\n", x);
    full = signal(full);
    mutex = signal(mutex);
}

void consumer() {
    mutex = wait(mutex);
    full = wait(full);
    printf("\nConsumer consumes the item %d\n", x);
    x--;
    empty = signal(empty);
    mutex = signal(mutex);
}