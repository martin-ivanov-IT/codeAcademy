#include <stdio.h>
// Ако имеме дефинирано макро
// #define М
// кои от по долните дефиниции ще пропаднат:
// а) #if M
// b) #ifdef M
// c) #ifndef M
// d) #if defined(M)
// e) #if !defined(M)
// /

// /answer:
// а) #if M
// c) #ifndef M
// e) #if !defined(M)
#include <stdio.h>
void printt(){
    printf("if define");
}
#define M
void debugMsg(const char *pszMsg) { 
#ifdef M
 { printf("ifdef M: %s\n", (pszMsg)); }
#endif 

#ifndef M
 { printf("ifndef M: %s\n", (pszMsg)); }
#endif 
}

#if defined(M)
 #warning "if defined"
#endif
#if !defined(M)
 #warning "if !defined"
#endif


int main(void) {
debugMsg("test");
return 0; }