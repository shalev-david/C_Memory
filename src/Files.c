#include "include/Files.h"

void CopyFile(FILE* sourceFile, FILE* destFile){
    char character = fgetc(sourceFile);
    while (character != EOF)
    {
        fputc(character, destFile);
        character = fgetc(sourceFile);
    }
}
