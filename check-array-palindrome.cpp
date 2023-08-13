#include <iostream>

int main ()
{
    int arr[] = {1, 5, 7, -1, 5} ; 
    int size = sizeof(arr)/sizeof(int) ;

    int check = 1 ;
    for ( int i = 0 ; i<size ; i++ )
    {
        if ( arr[i] != arr[size-i-1])
        {
            std::cout<< 
            "Not Palindrome";
            check = 0;
            break;
        }
    }

    if ( check == 1)
    std::cout<< "Palindrome" ;
}