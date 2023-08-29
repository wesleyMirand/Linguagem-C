#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Inforem a sua idade:");
    scanf("i", &idade);

    //idade >=18
    //idade <=67

    if(idade >=18 && idade <=67) {
        printf("Pode doar!\n\n");
    }
    else {
        printf("Não pode doar!\n\n");
    }
    return 0;
}



  /*   || -> OU (or)
    if(idade >=18 || idade <=67) {
        printf("não pode doar!\n\n");
    }
    else {
        print("pode doar!\n\n")
    }
    return 0;
} */
