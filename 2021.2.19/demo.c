#include <stdio.h>
#include <string.h>
struct tagPaper {
unsigned m_nBookId;
char *m_szTitle;
char m_szAuthor[64];
char m_szSubject[256];
};
int main( ) {
struct tagPaper tagPapers[100];
for (int i = 0; i < 10; i++)
{
struct tagPaper stPaper;
stPaper.m_nBookId = 123456;
char* s = "Paper title";
//strcpy( stPaper.m_szTitle, "Paper title");
stPaper.m_szTitle = s;
strcpy( stPaper.m_szAuthor, "Autor");
strcpy( stPaper.m_szSubject, "paper subject");
tagPapers[i] = stPaper;
}
for (int i = 0; i < 10; i++)
{
printf( "Paper id : %d\n", tagPapers[i].m_nBookId);
printf( "Paper title : %s\n", tagPapers[i].m_szTitle);
printf( "Paper author : %s\n", tagPapers[i].m_szAuthor);
printf( "Paper subject : %s\n", tagPapers[i].m_szSubject);
printf("----\n");
}


return 0;
}