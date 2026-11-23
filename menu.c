#include <stdio.h>

void DrawMenu(){
    const char menuHeader[] = "====================";
    const char menuTitle[]  = " Aplikacja Minibank ";
    const char menu1Option[] = "1. Sprawdź saldo";
    const char menu2Option[] = "2. Wpłać";
    const char menu3Option[] = "3. Wypłać";
    const char menu4Option[] = "4. Historia";
    const char menu5Option[] = "5. Wyjdź";
    const char menuPrompt[] = "Wybierz opcję: ";

    const char * list[] = {
        menuHeader, menuTitle, menuHeader,
        menu1Option, menu2Option, menu3Option,
        menu4Option, menu5Option, menuHeader,
        menuPrompt
    };

    for (int i = 0; i < 10; i++){
        printf("%s\n", list[i]);
    }
}

int Menu(){
    int response = 0;
    while (1){
        DrawMenu();
        scanf("%d", &response);

        if (response == 1)
            printf("Wybrano saldo\n");
        if (response == 2)
            printf("Wybrano wpłać\n");
        if (response == 3)
            printf("Wybraon wypłać\n");
        if (response == 4)
            printf("Wybrano historia\n");
        if (response == 5)
            break;
    }
}