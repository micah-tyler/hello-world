#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (argc > 1) {
        printf("Hello, %s.\n", argv[1]);
    } else {
        printf("Hello, player.\n");
    }
    int tries;
    char guess[25];
    char answer[25] = "green";
    for (tries=0; tries<10; tries++) {
        printf("Guess my favorite color: ");
        scanf("%25s", guess);
        if (strcmp(guess,answer)==0){
            printf("Correct.\n");
            break;
        } else if(strcmp(guess,"yellow")==0) {
            printf("Really? %d tries remain.\n",9-tries);
        } else {
            printf("Incorrect. %d tries remain.\n",9-tries);
        }
    }
    return 0;
}
