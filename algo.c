#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Element;
       do {
        printf ("geben sie eine ganze Zahl ein \n");
        scanf ("%d", &Element);

            Element % 2 == 0 ;
	    if (Element % 2 == 0)
               {
													                    printf("%i ist eine gerade Zahl\n",Element);
															                    }
	     else {
         	        printf("%i ist eine ungerade Zahl\n",Element);
                 }
        }while (Element != 0);


}
												         
