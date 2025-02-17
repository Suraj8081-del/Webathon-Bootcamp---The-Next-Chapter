#include<stdio.h>
#include<string.h>
void Namaste();
void Bonjour();
int main()
{
    printf("Enter f for French & I for indian");
    char ch;
    scanf("%c",&ch);
    if (ch== 'I'){
        Namaste();
    }
    else
    {
        bonjour();
    }
    
  return 0;
}
    void Namaste(){
        printf("Namaste\n");
        }
    void Bonjour(){
        printf("Bonjour\n");
        }    