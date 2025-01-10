#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <unistd.h> // Nécessaire pour sleep()
#include <stdbool.h> // Nécessaire pour condition
#define FILENAME_SIZE 1024
#define MAX_LINE 2048
#define MAX_LIINE 1000
#define FILENAME_SIIZE 100
#define MAX_l 2000
#define MAX_LINES 1000 // Nombre maximum de lignes dans le fichier
#define MAX_LENGTH 256 // Longueur maximum d'une ligne

typedef struct {
    char id[MAX_LENGTH];
    char title[MAX_LENGTH];
    char author[MAX_LENGTH];
    char description[MAX_LENGTH];
    char price[MAX_LENGTH];
    char category[MAX_LENGTH];
    char availability[MAX_LENGTH];
} Livree;

typedef struct{
char nom[100] , mdp[100] ;
}user ;
typedef struct{

char IDL[10],TitreL[300],AuteurL[300],description[300],prixL[50];
char DisponibiliteL[50],CategorieL[300];
}Livre ;

void userinterface() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;30m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
        file = fopen("USERSinterface.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
                    }
        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == 'i' || ch == 'n' || ch == 's' || ch == 'c' || ch == 'r'  || ch == 'p' || ch == 't'  || ch == 'o' ||ch == 'n' || ch == 't' || ch == 'h' || ch == 'e' || ch == 'l' ||ch == 'b' || ch == 'r' || ch == 'a' || ch == 'y'  || ch == 'u'  || ch == 'w' || ch == 'S'|| ch == 'g' || ch == '!' || ch == 'd'|| ch == 'C'  || ch == 'm'  ) {

                printf("%s%c\033[0m", colors[0], ch);
            } else {
                // Sinon, afficher en jaune
                printf("%s%c\033[0m",color[2], ch);
            }
        }
        // Pause de 1 seconde avant la prochaine itération
        usleep(1000000);
fclose(file);
}
void flech() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;30m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
        file = fopen("fleeche.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }
    // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if ( ch == '\\' || ch == '.' || ch == ')' || ch == '(' || ch == '/' ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[0], ch);
            } else {
                // Sinon, afficher en jaune
                printf("%s%c\033[0m",color[2], ch);
            }
        }
        // Pause de 1 seconde avant la prochaine itération
        usleep(1000000);
fclose(file);
}
void deuxemeinter() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
    for (int i = 0; i < 3; i++) {

        file = fopen("Sans titre.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }
      // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '*' || ch == 'x' || ch == '+' || ch == '^'|| ch == 'o'|| ch == '=' || ch == 'I'|| ch == 'D'|| ch == 'K' || ch == 'Q' || ch == 'R' || ch == 'Y' || ch == 'Z' || ch == 'H') {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[i], ch);
            } else {
                // Sinon, afficher en jaune
                printf("%s%c\033[0m",color[i], ch);
            }
        }
     // Pause de 1 seconde avant la prochaine itération
        usleep(1000000);
        if(i < 2)
            system("cls");
    }
fclose(file);
}

void booksuppp() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;30m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
    int l = 0 ;



        file = fopen("supprimerbook.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }

        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '_' || ch == '-' || ch == 'q' || ch == '8' || ch == 'p' || ch == 'd' || ch == 'b' || ch == '"' || ch == '0' || ch == ';' || ch == ',' || ch =='`'  ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[3], ch);
            } else {
                // Sinon, afficher en jaune
                printf("\033[1;32m%c\033[0m", ch);
            }
        }
fclose(file);
}
void afficherBarreProgression(int maxProgression) {
   printf("\n <\33[32mPlease wait a few seconds\033[0m> \n");
        printf("[");
                for(int ii = 0; ii < 100; ii++) {
                    if(ii > 0 && ii < 10) {
                        printf("\b");
                        printf("\b");
                        printf("\b");
                        printf("\b");
                        printf("\b");

                    } else if (ii >= 10 && ii < 100) {
                        printf("\b");
                        printf("\b");
                        printf("\b");
                        printf("\b");
                        printf("\b");
                        printf("\b");
                    }
                    usleep(80000);
                    printf("\33[32m=\033[0m");
                    printf("]\33[32m %d\033[0m %%", ii+1);
                }
                sleep(2);
                system("cls");
}
void catbooks() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;35m","\033[1;30m","\033[1;29m"};
    const char *color[] = {"\033[1;36m", "\033[1;37m", "\033[1;35m"};
        file = fopen("catbook.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }
        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == 'o' || ch == '\\' || ch == '.' || ch == ')' || ch == '(' || ch == '/' ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[2], ch);
            } else {
                // Sinon, afficher en jaune
                printf("%s%c\033[0m",color[0], ch);
            }
        }
        fclose(file);
}
void choix() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;30m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
        file = fopen("choix.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }
        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '-' || ch == '=' || ch == '%' || ch == '*' || ch == '@' || ch == ':' || ch == '.' || ch == '#' || ch == '+'|| ch == 'A' || ch == 'D' || ch == 'B' || ch == 'o' || ch == 'k' || ch == 'S' || ch == 'u' || ch == 'p' || ch == 'C' || ch == 'h' || ch == 'e' || ch == 'c' || ch == 'M' || ch == 'd' || ch == 'i' || ch == 'f' || ch == 'E' || ch == 'x' || ch == 't' ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[0], ch);
            } else {
                // Sinon, afficher en jaune
                printf("%s%c\033[0m",color[2], ch);
            }
        }
fclose(file);
}
void introduction() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;30m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
    int l = 0 ;
        file = fopen("introduction.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }

        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '_' || ch == '-' || ch == ':' || ch == '>' || ch == '<' || ch == '/' || ch == '`' || ch == ']' || ch == '[' || ch == '|' || ch == '=' || ch =='\\'  ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[3], ch);
            } else {
                // Sinon, afficher en jaune
                printf("%s%c\033[0m",color[2], ch);
            }
        }
    printf("\n\nPlease Wait loading applicaiton: ");
    for(int x = 0; x < 100; x++) {
        if(l == 0) {
            printf("\033[36m\\\033[0m");
            l++;
        } else if(l == 1) {
            printf("\033[36m|\033[0m");
            l++;
        } else if(l == 2) {
            printf("\033[36m/\033[0m");
            l++;
        } else if(l == 3) {
            printf("\033[36m-\033[0m");
            l++;
        } else if(l == 4) {
            printf("\033[36m|\033[0m");
            l=0;
        }
        usleep(150000);
        printf("\b");
    }
fclose(file);
}
void ow() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;30m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
    int l = 0 ;
        file = fopen("ow2.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }
        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '_' || ch == '-' || ch == ':' || ch == '>' || ch == '<' || ch == '/' || ch == '`' || ch == ']' || ch == '[' || ch == '|' || ch == '=' || ch =='\\'  ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[3], ch);
            } else {
                // Sinon, afficher en jaune
                printf("%s%c\033[0m",color[2], ch);
            }
        }
fclose(file);
}
void oww() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;30m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
    int l = 0 ;
        file = fopen("ow1.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }
        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '_' || ch == '-' || ch == ':' || ch == '>' || ch == '<' || ch == '/' || ch == '`' || ch == ']' || ch == '[' || ch == '|' || ch == '=' || ch =='\\'  ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[3], ch);
            } else {
                // Sinon, afficher en jaune
                printf("%s%c\033[0m",color[2], ch);
            }
        }
fclose(file);
}
void apresauth() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;30m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
    int l = 0 ;
        file = fopen("apresauth.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }

        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '_' || ch == '-' || ch == ':' || ch == '>' || ch == '<' || ch == '/' || ch == '`' || ch == ']' || ch == '[' || ch == '|' || ch == '=' || ch =='\\'  ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[3], ch);
            } else {
                // Sinon, afficher en jaune
                printf("%s%c\033[0m",color[2], ch);
            }
        }
fclose(file);
}
void Goodbye() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;30m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
    int l = 0 ;
        file = fopen("goodbye.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }
    // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '_' || ch == '-' || ch == 'q' || ch == '8' || ch == 'p' || ch == 'd' || ch == 'b' || ch == '"' || ch == '0' || ch == ';' || ch == ',' || ch =='`'  ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[3], ch);
            } else {
                // Sinon, afficher en jaune
                printf("\033[1;31m%c\033[0m", ch);
            }
        }
fclose(file);
}
void bookajoutee() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;30m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
    int l = 0 ;
        file = fopen("bookajoutee.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }
        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '_' || ch == '-' || ch == 'q' || ch == '8' || ch == 'p' || ch == 'd' || ch == 'b' || ch == '"' || ch == '0' || ch == ';' || ch == ',' || ch =='`'  ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[3], ch);
            } else {
                // Sinon, afficher en jaune
                printf("\033[1;32m%c\033[0m", ch);
            }
        }
fclose(file);
}
void booksupp() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;30m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
    int l = 0 ;



        file = fopen("suppbook.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }

        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '_' || ch == '-' || ch == 'q' || ch == '8' || ch == 'p' || ch == 'd' || ch == 'b' || ch == '"' || ch == '0' || ch == ';' || ch == ',' || ch =='`'  ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[3], ch);
            } else {
                // Sinon, afficher en jaune
                printf("\033[1;32m%c\033[0m", ch);
            }
        }
fclose(file);
}
void Livretrouve() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;30m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
    int l = 0 ;



        file = fopen("livretourve.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }

        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if ( ch == '-' || ch == ','  || ch == '~' || ch == ')' || ch == '(' || ch == '^' || ch == '0' || ch == '/' || ch == '\\'   ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[3], ch);
            } else {
                // Sinon, afficher en jaune
                printf("\033[1;32m%c\033[0m", ch);
            }
        }
fclose(file);
}
void chercherbook() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;30m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
    int l = 0 ;



        file = fopen("lookingforbook.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }

        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '#' || ch == '=' || ch == '+' || ch == '-' || ch == ':' || ch == '@' || ch == '%' || ch == '/'  ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[3], ch);
            } else {
                // Sinon, afficher en jaune
                printf("\033[1;32m%c\033[0m", ch);
            }
        }
fclose(file);
}
void modifbook() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;30m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
    int l = 0 ;



        file = fopen("modiflovre.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }

        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '/' || ch == '|' || ch == '\\' || ch == ')' || ch == '(' || ch == '_'  ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[3], ch);
            } else {
                // Sinon, afficher en jaune
                printf("\033[1;32m%c\033[0m", ch);
            }
        }
fclose(file);
}
void modifierbook() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;30m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
    int l = 0 ;



        file = fopen("modifierlivre.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }

        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '~' || ch == '-' || ch == '\\' || ch == '/' || ch == '_' || ch == '='  ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[3], ch);
            } else {
                // Sinon, afficher en jaune
                printf("\033[1;32m%c\033[0m", ch);
            }
        }
fclose(file);
}
void erorr() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;32m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
    int l = 0 ;



        file = fopen("error.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }

        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '|' || ch == '_'   ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[3], ch);
            } else {
                // Sinon, afficher en jaune
                printf("\033[1;31m%c\033[0m", ch);
            }
        }
fclose(file);
}
void Trier() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;34m", "\033[1;36m","\033[1;32m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
    int l = 0 ;



        file = fopen("trierr.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }

        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '|' || ch == '_' || ch == '`' || ch == 'U' || ch == ' ['|| ch == ']'|| ch == '('  || ch == ')'|| ch == '-'|| ch == '='|| ch == ';' ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[2], ch);
            } else {
                // Sinon, afficher en jaune
                printf("\033[1;35m%c\033[0m", ch);
            }
        }
fclose(file);
}
void ApresTrier() {
    FILE *file;
    char ch;
    const char *colors[] = {"\033[1;38m", "\033[1;36m", "\033[1;36m","\033[1;32m","\033[1;29m"};
    const char *color[] = {"\033[1;32m", "\033[1;37m", "\033[1;35m"};
    int l = 0 ;



        file = fopen("trierbook.txt", "r");
        if (file == NULL) {
            printf("\033[1;31mErreur : Impossible d'ouvrir le fichier %s\033[0m\n", "Sans titre.txt"); // Message en rouge
            return;
        }

        // Lire et afficher chaque caractère avec des couleurs
        while ((ch = fgetc(file)) != EOF) {
            if (ch == '|' || ch == '_' || ch == '`' || ch == 'U' || ch == ' ['|| ch == ']'|| ch == '('  || ch == ')'|| ch == '-'|| ch == '='|| ch == ';' ) {
                // Si le caractère est '*', afficher dans une couleur spécifique à l'itération
                printf("%s%c\033[0m", colors[1], ch);
            } else {
                // Sinon, afficher en jaune
                printf("\033[1;35m%c\033[0m", ch);
            }
        }
fclose(file);
}





// Fonction pour comparer par Titre
int comparer_titre(const void *a, const void *b) {
    Livree *livree1 = (Livree *)a;
    Livree *livree2 = (Livree *)b;
    return strcmp(livree1->title, livree2->title);
}

// Fonction pour comparer par Catégorie
int comparer_categorie(const void *a, const void *b) {
    Livree *livree1 = (Livree *)a;
    Livree *livree2 = (Livree *)b;
    int cmp = strcmp(livree1->category, livree2->category);
    if (cmp == 0) {
        // Si les catégories sont identiques, trier par titre
        return strcmp(livree1->title, livree2->title);
    }
    return cmp;
}


// Fonction pour lire les livres depuis un fichier CSV
int lire_csv(const char *nom_fichier, Livree livres[]) {
    FILE *fichier = fopen(nom_fichier, "r");
    if (!fichier) {
        perror("Erreur lors de l'ouverture du fichier");
        return 0;
    }

    char ligne[MAX_LENGTH];
    int nb_livres = 0;

    // Ignorer la première ligne (en-tête)
    fgets(ligne, MAX_LENGTH, fichier);

    while (fgets(ligne, MAX_LENGTH, fichier)) {
        sscanf(ligne, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]",
               livres[nb_livres].id,
               livres[nb_livres].title,
               livres[nb_livres].author,
               livres[nb_livres].description,
               livres[nb_livres].price,
               livres[nb_livres].category,
               livres[nb_livres].availability);
        nb_livres++;
    }
    fclose(fichier);
    return nb_livres;
}

// Fonction pour écrire les livres dans un fichier CSV
void ecrire_csv(const char *nom_fichier, Livree livres[], int nb_livres) {
    FILE *fichier = fopen(nom_fichier, "w");
    if (!fichier) {
        perror("Erreur lors de l'ouverture du fichier pour écriture");
        return;
    }

    // Écrire l'en-tête
    fprintf(fichier, "ID,Title,Author,Description,Price,Category,Availability\n");

    // Écrire les livres
    for (int i = 0; i < nb_livres; i++) {
        fprintf(fichier, "%s,%s,%s,%s,%s,%s,%s\n",
                livres[i].id,
                livres[i].title,
                livres[i].author,
                livres[i].description,
                livres[i].price,
                livres[i].category,
                livres[i].availability);
    }
    fclose(fichier);
}

//Fonction pour cree  account print  nom,mdp sur fichier csv
void cree(user utilisateur){
int max;

FILE *file = fopen("users.csv", "a");
    if (file == NULL) {
        printf("Erreur d'ouverture du fichier.\n");
        exit(1);
    }

    fprintf(file, "\n%s,%s", utilisateur.nom , utilisateur.mdp);

    fclose(file);
    printf("\n|<\033[1;35mvotre compte a ete ajoute  avec succes.\033[0m>|\n");
    afficherBarreProgression(max);
}
//Fonction pour verfier   nom,mdp  sais par utilisateur   sont  meme   sur fichier csv
int auth(const char *username , const char *password){


    FILE *file = fopen("users.csv", "r");
    if (file == NULL) {
        printf("Erreur d'ouverture du fichier.\n");
        return 0;
    }


    int max;
    char line[100];
    char file_username[50];
    char file_password[50];

    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file)) {

        sscanf(line, "%49[^,],%49[^\n]", file_username, file_password);


        if (strcmp(file_username, username) == 0 && strcmp(file_password, password) == 0) {
            fclose(file);
            return 1;
        }
    }

    afficherBarreProgression(max);

    fclose(file);

    return 0;
}
// Fonction pour supprimer une ligne avec un titre et un auteur spécifiques  par  cree deux fichier et suppr  orginal et  garder   nov  avec meme nom d'ancien
void supprimer(const char *filename, const char *title_to_delete, const char *author_to_delete) {
    FILE *file, *temp;
    char temp_filename[FILENAME_SIZE];
    char buffer[MAX_LINE];
    bool found = false; // Drapeau pour vérifier si la ligne est trouvée
    bool keep_reading = true;//condtion boucle
    int max;

    // Création du nom du fichier temporaire
    strcpy(temp_filename, "temp____");
    strcat(temp_filename, filename);

    // Ouverture des fichiers
    file = fopen(filename, "r");
    temp = fopen(temp_filename, "w");

    if (file == NULL || temp == NULL) {
        printf("Error opening file(s)\n");
        exit(1);
    }

    // Lecture et traitement ligne par ligne

    while (keep_reading) {
        if (fgets(buffer, MAX_LINE, file) == NULL) {
            keep_reading = false;
            continue;
        }

        // Extraction des champs
        char *id = strtok(buffer, ",");           // 1ère colonne : ID
        char *title = strtok(NULL, ",");         // 2ᵉ colonne : Title
        char *author = strtok(NULL, ",");        // 3ᵉ colonne : Author
        char *description = strtok(NULL, ",");   // 4ᵉ colonne : Description
        char *price = strtok(NULL, ",");         // 5ᵉ colonne : Price
        char *category = strtok(NULL, ",");      // 6ᵉ colonne : Category
        char *availability = strtok(NULL, ",");  // 7ᵉ colonne : Availability

        // Vérification si la ligne doit être supprimée
        if (title != NULL && author != NULL &&
            strcmp(title, title_to_delete) == 0 &&
            strcmp(author, author_to_delete) == 0) {
            found = true; // Ligne trouvée
            continue;     // Ne pas écrire cette ligne dans le fichier temporaire
        }

        // Réécriture de la ligne dans le fichier temporaire
        fprintf(temp, "%s,%s,%s,%s,%s,%s,%s", id, title, author, description, price, category, availability);
    }

    // Fermeture des fichiers
    fclose(file);
    fclose(temp);

    // Si aucune ligne n'a été trouvée
    if (!found) {
            afficherBarreProgression(max);
            system("cls");

         erorr();
        printf("\033[1;31m Aucune ligne trouvee avec le titre '%s' et l'auteur '%s'.\033[0m\n", title_to_delete, author_to_delete);
        remove(temp_filename); // Supprimer le fichier temporaire inutile
        sleep(5);
        return;
    }

    // Suppression du fichier original
    if (remove(filename) != 0) {
            erorr();
        printf("\033[1;31mError: Failed to delete the original file '%s'.\033[0m\n", filename);
        remove(temp_filename); // Supprime le fichier temporaire pour éviter un fichier partiel
        exit(1);

    }

    // Renommage du fichier temporaire
    if (rename(temp_filename, filename) != 0) {
            erorr();
        printf("033[1;31mError: Failed to rename the temporary file '%s'.\033[0m\n", temp_filename);
        exit(1);

    }

    //fonction  interface apres trouve la ligne

        afficherBarreProgression( max);
        system("cls");

        //vérification d'une ligne supprimais
        printf("\n\n\t\033[1;31mLa ligne avec le titre '%s' et l'auteur '%s' a ete supprimee avec succes.\033[0m\n\n", title_to_delete, author_to_delete);
        booksuppp();
        sleep(5);

}
//Fonction pour ajouter  livre    dans 1 ligne   separa par ','  chaque colone  dans un fichier  csv
void ajouter(Livre list){
    int max;
FILE* f =fopen("C:\\Users\\Yassi\\Desktop\\emsi\\2AP\\langage-c projet\\gestion biblio\\real_books.csv", "a");
if(f == 0 ){
    printf("error d'ouvrire  le fichier ");
    exit(1);

}
    //ajoute  livre  sur fichier  dans  une ligne  avec colone separe   par ','
    fprintf(f, "\n%s,%s,%s,%s,%s,%s,%s", list.IDL,list.TitreL,list.AuteurL,list.description,list.prixL,list.CategorieL,list.DisponibiliteL);
    afficherBarreProgression( max);
    fclose(f);
}
//Fonction pour  modifier   livre dans un fichier  csv ,   avec choix   c que utilisateur veut  modifier    sauf  ID
void modifierLivre(const char *filename, const char *id_to_modify) {
    FILE *file, *temp;
    char temp_filename[FILENAME_SIZE];
    char buffer[MAX_LINE];
    int choix;
    bool found = false;

    char new_title[MAX_LINE] = "";
    char new_author[MAX_LINE] = "";
    char new_description[MAX_LINE] = "";
    char new_price[MAX_LINE] = "";
    char new_category[MAX_LINE] = "";
    char new_availability[MAX_LINE] = "";

    // Création du nom du fichier temporaire
    strcpy(temp_filename, "temp_");
    strcat(temp_filename, filename);

    // Ouverture des fichiers
    file = fopen(filename, "r");
    temp = fopen(temp_filename, "w");
    if (file == NULL || temp == NULL) {
        printf("Erreur lors de l'ouverture des fichiers.\n");
        exit(1);
    }

    // Lecture et traitement ligne par ligne
    while (fgets(buffer, MAX_LINE, file)) {
        // Copie pour éviter d'altérer l'original
        char buffer_copy[MAX_LINE];
        strcpy(buffer_copy, buffer);
        // Supprime le ',' à la fin de la chaîne
        char *id = strtok(buffer_copy, ",");
        char *title = strtok(NULL, ",");
        char *author = strtok(NULL, ",");
        char *description = strtok(NULL, ",");
        char *price = strtok(NULL, ",");
        char *category = strtok(NULL, ",");
        char *availability = strtok(NULL, ",");

        if (id != NULL && strcmp(id, id_to_modify) == 0) {
            found = true;

            // Afficher les informations actuelles du livre
            printf("Livre trouve :\n");
            printf("Titre : %s\nAuteur : %s\nDescription : %s\nPrix : %s\nCategorie : %s\nDisponibilite : %s\n",
                   title, author, description, price, category, availability);

            // Menu de modification
            printf("Que voulez-vous modifier ?\n");
            printf("1. Titre\n2. Auteur\n3. Description\n4. Prix\n5. Categorie\n6. Disponibilite\n7. Tout\n");
            printf("///>>");
            scanf("%d", &choix);
            getchar(); // Pour nettoyer le buffer

            switch (choix) {
                case 1:
                    printf("\033[36mEntrez le nouveau titre : ");
                    fgets(new_title, MAX_LINE, stdin);//stdin (Standard Input) est un flux par défaut utilisé pour lire les données saisies par l'utilisateur.
                    strtok(new_title, "\n"); // Supprimer le '\n'
                    break;
                case 2:
                    printf("\033[36mEntrez le nouvel auteur : ");
                    fgets(new_author, MAX_LINE, stdin);
                    strtok(new_author, "\n");
                    break;
                case 3:
                    printf("\033[36mEntrez la nouvelle description : ");
                    fgets(new_description, MAX_LINE, stdin);
                    strtok(new_description, "\n");
                    break;
                case 4:
                    printf("\033[36mEntrez le nouveau prix : ");
                    fgets(new_price, MAX_LINE, stdin);
                    strtok(new_price, "\n");
                    break;
                case 5:
                    printf("\033[36mEntrez la nouvelle categorie : ");
                    fgets(new_category, MAX_LINE, stdin);
                    strtok(new_category, "\n");
                    break;
                case 6:
                    printf("\033[36mEntrez la nouvelle disponibilite : ");
                    fgets(new_availability, MAX_LINE, stdin);
                    strtok(new_availability, "\n");
                    break;
                case 7:
                    printf("\033[36mEntrez le nouveau titre : ");
                    fgets(new_title, MAX_LINE, stdin);
                    strtok(new_title, "\n");

                    printf("\033[36mEntrez le nouvel auteur : ");
                    fgets(new_author, MAX_LINE, stdin);
                    strtok(new_author, "\n");

                    printf("\033[36mEntrez la nouvelle description : ");
                    fgets(new_description, MAX_LINE, stdin);
                    strtok(new_description, "\n");

                    printf("\033[36mEntrez la nouvelle catégorie : ");
                    fgets(new_category, MAX_LINE, stdin);
                    strtok(new_category, "\n");

                    printf("\033[36mEntrez la nouvelle disponibilité : ");
                    fgets(new_availability, MAX_LINE, stdin);
                    strtok(new_availability, "\n");

                    printf("\033[36mEntrez le nouveau prix : ");
                    fgets(new_price, MAX_LINE, stdin);
                    strtok(new_price, "\n");
                    break;
                default:
                    erorr();
                    printf("\033[31mChoix invalide.\033[0m\n");
                    break;
            }

            // Réécrire avec les nouvelles valeurs  pk strlen ?   pour  print le reste de livre   avec  nov modif par utilisateur
            fprintf(temp, "%s,%s,%s,%s,%s,%s,%s\n",
                    id,
                    strlen(new_title) ? new_title : title,
                    strlen(new_author) ? new_author : author,
                    strlen(new_description) ? new_description : description,
                    strlen(new_price) ? new_price : price,
                    strlen(new_category) ? new_category : category,
                    strlen(new_availability) ? new_availability : availability);
        } else {
            // Réécrire la ligne originale
            fprintf(temp, "%s", buffer);
        }
    }

    fclose(file);
    fclose(temp);

    if (!found) {
            system("cls");
            erorr();
        printf("\033[31mAucun livre trouve avec l'ID '%s'.\033[0m\n", id_to_modify);
        sleep(5);
        remove(temp_filename);
        return;
    }

    // Remplacer l'ancien fichier par le nouveau
    remove(filename);
    rename(temp_filename, filename);
     system("cls");
     modifierbook();
    printf("\033[32mModification reussie.\033[0m\n");
    sleep(5);
}
//Fonction pour trouve   une livre dans fichier  csv par Titre et auteur
void recherche( const char *title_to_compare, const char *author_to_compare) {
    FILE *file;

    char buffer[MAX_l];
    bool found = false; // Drapeau pour vérifier si la ligne est trouvée
    bool keep_reading = true;//condtion boucle



    // Ouverture des fichiers
    file = fopen("real_books.csv", "r");

    if (file == NULL ) {
        printf("Error opening file(s)\n");
        exit(1);
    }

    // Lecture et traitement ligne par ligne

    while (keep_reading) {
        if (fgets(buffer, MAX_l, file) == NULL) {
            keep_reading = false;
            continue;
        }

        // Extraction des champs
        char *id = strtok(buffer, ",");           // 1ère colonne : ID
        char *title = strtok(NULL, ",");         // 2ᵉ colonne : Title
        char *author = strtok(NULL, ",");        // 3ᵉ colonne : Author
        char *description = strtok(NULL, ",");   // 4ᵉ colonne : Description
        char *price = strtok(NULL, ",");         // 5ᵉ colonne : Price
        char *category = strtok(NULL, ",");      // 6ᵉ colonne : Category
        char *availability = strtok(NULL, ",");  // 7ᵉ colonne : Availability

        // Vérification si la ligne  trouve   apres affichier a l utilisateur  insperation   fct supprime
        if (title != NULL && author != NULL &&
            strcmp(title, title_to_compare) == 0 &&
            strcmp(author, author_to_compare) == 0) {
            found = true; // Ligne trouvée
            Livretrouve();
            printf("\n\n\033[1;35mTitre : %s\nAuteur : %s\ndescription: %s\nPrix : %s\ncategory : %s\navailability : %s\n\033[0m", title, author,description, price,category,availability);
            sleep(5);
            break ;
        }

        }


    system("cls");
 fclose(file);
}





