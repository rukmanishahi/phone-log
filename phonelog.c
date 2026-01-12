//this is not done yet gng


#include <stdio.h>
#include <string.h>
int main();
struct nu{
    char name[50];
    long long int num;
};
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
        printf("enter the name\n");
        scanf("%s", &phlogs[i].name);
        printf("enter the phone number\n");
        scanf("%lld", &phlogs[i].num);
        
    }
    int choice = main_menu(phlogs, n);

if (choice == 1) {
    display_logbook(phlogs, n);
} else {
    printf(exit_program(););
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
void exit_program() {
    printf("Exiting the program. Goodbye!\n");
}
    return 0;
}
int main(){}
    struct nu logs;
    printf("enter the name\n");
    scanf("%s\n",&logs.name);
    printf("enter the phone number\n");
    scanf("%d\n",&logs.num);
    menu(logs);
    return 0;

}
