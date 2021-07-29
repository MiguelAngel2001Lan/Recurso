#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>




void sleep(size_t m_s){
    m_s = m_s/1000;
    clock_t initial_time = time(NULL); //Tiempo inicial//
    clock_t desired_time = initial_time + m_s ;
    for(clock_t current_time = initial_time; current_time < desired_time; current_time = time(NULL) ){};
}

//selectAWord//

//randomNumber
char list[3][6]={ "", "", ""};


int randomNumber(int maxNumber){

        int number = rand()%maxNumber + 1;
        return number;
}

//printFileList//
void printFileList(char* path  ){
        FILE* file =  fopen(path, "r");
        char currentLine[10];

        while (  fscanf(  file, "%s", currentLine ) != EOF  )
        {
                printf("line: %s\n",currentLine );
        }

        fclose(file);
}


char* selectRandomLine(char* path){
        FILE* file =  fopen(path, "r");
        char* currentLine  = (char*)malloc(sizeof(char)*10  );
        int number = randomNumber(20);
        int iterator = 1;

        while (  fscanf(  file, "%s", currentLine ) != EOF  )
        {
                if(iterator == number ){
                    return  currentLine;
                }

                iterator++;
        }
}

int  len(char* str){
        int tam = 0;
        for( ;*str ; tam++, str++ ){};
        return tam;
}


char* encodeCountry(   char* country   ){
        printf(  "tam: %d\n",   len(country)  );
        char* encodedStr =  (char*)malloc(sizeof(char)*len(country));
        for( int i = 0;  i< len(country); i++  ){
                encodedStr[i] = '*';
        }

        return encodedStr;
}


bool compareIndexCharacterString(char* wordToCheck, int index, char character ){
        if( wordToCheck[index] == character ){
                return true;
        };
        return false;
        // return wordToCheck[index] == character  ?  true: false;
}
