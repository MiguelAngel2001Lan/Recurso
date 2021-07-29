#include <stdio.h>
#include "utils.h" //Nuestra bibli
#include <stdlib.h>
enum Mode{
        easy = 1,
        medium = 2,
        hard =3
};

typedef struct PLAYERCONFIG{
        char* answer;
        int index;
        int life;
        int difficult;
}playerConfig;

char* country = "AnyContryInTxt";
char* encodedCountry = "*********";
char* difficultStr;


int main(){
        srand(time(NULL));

        country = selectRandomLine("./paises.txt");
        encodedCountry = encodeCountry( country);

        playerConfig player1 = { (char*)malloc(sizeof(char))   , 0 , 7, easy };

        printf("Select Difficult\n1-. easy\n2-. medium\n3-.hard\n" );
        scanf(  "%d", &player1.difficult    );

        switch(   player1.difficult  ){
                case easy:
                        player1.life = 7;
                        difficultStr = "Easy";
                        printf("Difficult selected easy with %d lifes\n", player1.life );

                        break;
                case medium:
                        player1.life = 4;
                        difficultStr = "Medium";
                        printf("Difficult selected medium with %d lifes\n", player1.life);
                        break;
                case hard:
                        player1.life = 2;
                        difficultStr = "Diffult";
                        printf("Difficult selected hard with %d lifes\n", player1.life);
                        break;
        };

        sleep(3000);
        system("clear");

        while(player1.life){
                system("clear");
                printf("difficult: %s\tlife: %d\tword: %s\t WordReal: %s\n",  difficultStr, player1.life, encodedCountry, country );

                printf("\tEnter a character:\t");
                scanf("%s", player1.answer );
                printf("\n\tEnter a index:\t");
                scanf("%d", &player1.index   );

                if(  compareIndexCharacterString( country, player1.index-1,  player1.answer[0]  )    ){
                        encodedCountry[player1.index-1] = player1.answer[0];
                }else{
                        player1.life--;
                };

                sleep(1500);
        }




        return 0;
}
