#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define bool int 
typedef struct {
    char c;
    int line;
}scope;

// structure of a stack node 
struct sNode { 
    char data; 
    struct sNode* next; 
}; 

// Function to push an item to stack 
void push(struct sNode** top_ref, int new_data); 

// Function to pop an item from stack 
int pop(struct sNode** top_ref); 

// Returns 1 if character1 and character2 are matching left 
// and right Brackets 
bool isMatchingPair(char character1, char character2) 
{ 
    if (character1 == '(' && character2 == ')') 
        return 1; 
    else if (character1 == '{' && character2 == '}') 
        return 1; 
    else if (character1 == '[' && character2 == ']') 
        return 1; 
    else
        return 0; 
} 

bool areBracketsBalanced(scope scopes[], int scopesCount) 
{ 
    int i = 0; 
  
    // Declare an empty character stack 
    struct sNode* stack = NULL; 
  
    // Traverse the given expression to check matching 
    // brackets 
    for (int i = 0; i < scopesCount; i++)
    {
        // If the scopes[i] is a starting bracket then push 
        // it 
        if (scopes[i].c == '{' || scopes[i].c == '(' || scopes[i].c == '[') 
            push(&stack, scopes[i].c); 
  
        // If scopes[i] is an ending bracket then pop from 
        // stack and check if the popped bracket is a 
        // matching pair*/ 
        if (scopes[i].c == '}' || scopes[i].c == ')'
            || scopes[i].c == ']') { 
  
            // If we see an ending bracket without a pair 
            // then return false 
            if (stack == NULL) 
                return 0; 
  
            // Pop the top element from stack, if it is not 
            // a pair bracket of character then there is a 
            // mismatch. 
            // his happens for expressions like {(}) 
            else if (!isMatchingPair(pop(&stack), scopes[i].c)) 
                return 0; 
        }  
    }

    // If there is something left in expression then there 
    // is a starting bracket without a closing 
    // bracket 
    if (stack == NULL) 
        return 1; // balanced 
    else
        return 0; // not balanced 
} 

int main( ) {
    FILE *text = NULL;
    char*fileName = "text.txt";
    text = fopen (fileName, "r");
    scope scopes[100];
    int scopesCount = 0;
   
    if(text==NULL)
    printf("Failed to open %s.\n",fileName);
    char str[100];
    int lineCount = 1;
    char* scopesChars = "(){}[]";
    while (fgets(str,100,text)!=NULL)
    {
        int i = 0;
        char *ret;
        while (str[i])
        {
            ret = strchr(scopesChars, str[i]);
            if (ret!=NULL)
            {
                scopes[scopesCount].c = str[i];
                scopes[scopesCount].line = lineCount;
                ++scopesCount;
            }
            
            ++i;
        }
       ++lineCount;
    }
    
     if (areBracketsBalanced(scopes,scopesCount)) 
        printf("Balanced \n"); 
    else
        printf("Not Balanced \n"); 
    
    
    return 0;
     
}

// Function to push an item to stack 
void push(struct sNode** top_ref, int new_data) 
{ 
    // allocate node 
    struct sNode* new_node 
        = (struct sNode*)malloc(sizeof(struct sNode)); 
  
    if (new_node == NULL) { 
        printf("Emty Stack"); 
        getchar(); 
        exit(0); 
    } 
  
    // put in the data 
    new_node->data = new_data; 
  
    // link the old list off the new node 
    new_node->next = (*top_ref); 
  
    // move the head to point to the new node 
    (*top_ref) = new_node; 
} 
  
// Function to pop an item from stack 
int pop(struct sNode** top_ref) 
{ 
    char res; 
    struct sNode* top; 
  
    // If stack is empty then error 
    if (*top_ref == NULL) { 
        printf("Emty Stack");
        getchar(); 
        exit(0); 
    } 
    else { 
        top = *top_ref; 
        res = top->data; 
        *top_ref = top->next; 
        free(top); 
        return res; 
    } 
} 