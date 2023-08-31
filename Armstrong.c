#include <stdio.h>

int main ()
{
    char string = "hello ";

    char vowels = {'a','e','i','o','u'};
    
    char vowels_present = 0 ;

    for (int i = 0 ; i<= length(string); i++ ){
        if (string == vowels){
            vowels_present = 1;
            }
    }

    if (vowels_present = 1){
        printf("Yes !");
        
    }   else {
        Printf("Nooo!");
    }

    return 0;

}