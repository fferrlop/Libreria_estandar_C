//
// Created by Francisco on 18/12/2023.
//

#include <string.h>
#include <stdio.h>


int main() {

//2. Cadenas
    char str1[] = "Hola";
    char str2[] = "Mundo";

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    char str[] = "Hola mundo";

    int length = strlen(str);

    printf("La longitud de '%s' es: %d\n", str, length);

//3. Archivos

    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return 1;
    }

    // Cerrar el archivo al final
    fclose(file);

    return 0;
}