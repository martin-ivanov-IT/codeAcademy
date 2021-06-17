#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct participant{
    
 unsigned numOfPart;
 char *firstName;
 char *secondName;
 int age;
}participant;
int myFree(participant *participants, int listSize);
int addPart(participant* participants, int listSize);
int myPrint(participant* participants,int count);

int main(){
    int listSize = 0;
    printf("enter count of participants:\n");
    scanf("%d", &listSize);
    if(listSize == 0){
        exit(1);
    }
    participant *participants;
    participants=malloc(listSize*sizeof(participant));
    if(participants == NULL){
        exit(1);
    }

    if(addPart(participants, listSize)){
        exit(2);
    }

    if(myFree(participants,listSize)){
        exit(4);
    }
    free(participants);
}

int addPart(participant* participants, int listSize){
    int i;
    int count=0;
    char choice='1';
    for(i=0;choice!='0';i++){
        printf("enter the participant number\n");
        scanf(" %d",&participants[i].numOfPart);
        printf("enter  the participant name : \n");
        participants[i].firstName=malloc(20);
        if(participants[i].firstName == NULL){
            return 2;
        }
        scanf("%s",participants[i].firstName);
        printf("enter the participant second name : \n");
        participants[i].secondName=malloc(20);
        if(participants[i].secondName == NULL){
            return 2;
        }
        scanf("%s",participants[i].secondName);
        printf("enter the participant age : \n");
        scanf(" %d",&participants[i].age);
        if(participants[i].age <=0){
            return 2;
        }
        count++;
        if(count == listSize){
            break;
        }
        printf("do you have another participant to add.Press 1 or pres 0 for exit. \n");
        scanf(" %c",&choice);
        if(choice != '1'  && choice != '0' ){
            return 2;
        }
        
   
    }
    if(myPrint(participants,count)){
        exit(3);
    }
    return 0; 
}
int myPrint(participant* participants,int count){
    if(count <= 0){
        return 3;
    }
    for(int i=0;i<count;i++){
        printf("Num of part:%d\n",participants[i].numOfPart);
        printf("First name:%s\n",participants[i].firstName);
        printf("Second name:%s\n",participants[i].secondName);
        printf("age : %d\n",participants[i].age);
    }
    return 0;
}

int myFree(participant* participants, int listSize){

    for(int i=0;i<listSize;i++){
        free(participants[i].firstName);
        free(participants[i].secondName);
    }
    return 0;
}