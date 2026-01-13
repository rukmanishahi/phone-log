//this is not done yet gng
#include <stdio.h>
#include <string.h>
struct nu{
    char name[50];
    long long int num;
};
void exit_program() {
    printf("Exiting the program. Goodbye!\n");
}
void display_logbook(struct nu phlogs[], int n);
int main_menu(struct nu phlogs[], int n){
    char ch;
    int j;
    printf("would u like to view the phone book? (y or n)\n");
    scanf(" %c", &ch);
    if (ch == 'y'|| ch == 'Y'){
        //disp the log book
       // for(j = 0; j < n; j++){ //j is for the index of the contacts
         //   printf("--------------------\n");
           // printf("Name: %s\n",phlogs[j].name);
            //printf("Number: %d\n",phlogs[j].num);
        return 1;
        }
        else{
            return 0;
    } 
        return main_menu(phlogs, n);
}
int main(){
    struct nu phlogs[50];
    int i, n, choice;
    printf("enter the amount of contacts\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the name (w/o spaces)::\n");
        scanf("%s", phlogs[i].name);
        printf("enter the phone number::\n");
        scanf("%lld", &phlogs[i].num);
    }
    choice = main_menu(phlogs, n);

    if (choice == 1) {
        display_logbook(phlogs, n);

    }
     else {
        exit_program();
    }
return 0;
}

void display_logbook(struct nu phlogs[], int n) {
    int j;
    for (j = 0; j < n; j++) {
        printf("------------------\n");
        printf("Name: %s\n", phlogs[j].name);
        printf("Number: %lld\n", phlogs[j].num);
    }
}
int more_contacts(struct nu phlogs[], int n) {
    printf("\n would u like to add more contacts? (y or n)\n");
    char ch2;
    scanf(" %c", &ch2);
        if (ch2 == 'y' || ch2 == 'Y') {
            int new_n;
            printf("enter the number of new contacts to add:\n");
            scanf("%d", &new_n);
            for (int k = n; k < n + new_n; k++) {
                printf("enter the name\n");
                scanf("%s", phlogs[k].name);
                printf("enter the phone number\n");
                scanf("%lld", &phlogs[k].num);
            }
            n += new_n; // update total number of contacts
        } 
        else {
            exit_program();
        }
}
