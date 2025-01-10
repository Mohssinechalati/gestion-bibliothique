#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include"f.h"
#define FILENAME_SIZE 1024
#define MAX_LINE 2048
#define MAX_LIINE 256
#define FILENAME_SIIZE 100
#define MAX_LINES 1000 // Nombre maximum de lignes dans le fichier
#define MAX_LENGTH 256 // Longueur maximum d'une ligne





 int main(){

int max ;
int acce = 0 ;
int num ;
int go ;
Livre A ;
user B ;
char username[50] ;
char password[50];
    char filename[FILENAME_SIZE]= "real_books.csv";
    char title_to_delete[MAX_LINE];
    char author_to_delete[MAX_LINE];
    char filenamee[] = "real_books.csv";
    char id_to_modify[MAX_LIINE];

    char title [1000];
    char author [1000];
         const char *nom_fichier = "real_books.csv";
        Livree livres[MAX_LINES];
        int nb_livres;



    sleep(3);

    introduction();



    system("cls");
    sleep(3);
    deuxemeinter() ;



    //Sign in  \n Sign up

    printf("                                                                     ______________________________________________________________________________________________\n");
    printf("                                                                    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[36m<Se connecter>1\033[0m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n");
    printf("                                                                    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\033[36m<S'inscrire>2 \033[0m~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n");
    printf("                                                                     ______________________________________________________________________________________________\n");
    printf("\n\n                                                                                                              \033[36m\\\\\\\\>\033[0m");
    scanf("%d" , &go);
    system("cls");
    if(go == 2 ){
        userinterface();
        ow();
        printf("\033[1;36mNom d'utilisateurc : " );
        scanf("%s", B.nom);
        printf("            							\033[1;36mMot de passe : ");
        scanf("%s", B.mdp);
        oww();
        cree(B);
        go = 1 ;
         }
    if(go  == 1 ){

        while(1){
                flech();
        printf("\033[1;36mNom d'utilisateur\033[0m : ");
        scanf("%s", username);
        printf("                                                               \033[1;36mMot de passe\033[0m : ");
        scanf("%s", password);

            if(auth(username, password)) {
                acce = 1 ;
                break ;
                }else {

                        erorr();

                        printf("\033[1;31mNom d'utilisateur ou mot de passe incorrect.\033[0m\n");
                        sleep(5);
                        system("cls");
                      }
                }
}
        system("cls");
        apresauth();

       afficherBarreProgression(max);
        for(int x = 0 ;  ; x++){
            if (acce  == 1  ){
            system("cls");
        choix() ;

        printf("\n1-\033[1;32m<Ajouter une livre>\033[0m\t\t2-\033[1;32m<Supprimer livre>\033[0m\t\t3-\033[1;32m<Rechercher>\033[0m\t\t\t4-\033[1;32m<Modifier livre>\033[0m\t5-\033[1;32m<Trier livres>\033[0m\t\t00-\033[1;32m<Exit>\n\033[0m ");
        printf("////////>>");
        scanf("%d", &num);

         switch(num){


                case 1 :
                    system("cls");
                    catbooks();
                    printf("\n <<\033[31mAjoute Livre\033[0m>>\n\n\n");

                    printf("-\033[36mID : ");
                    scanf("%s",A.IDL);

                    while (getchar() != '\n');

                    printf("-\033[36mTitre : ");
                    gets(A.TitreL);

                    printf("-\033[36mAuteur : ");
                    gets(A.AuteurL);

                    printf("-\033[36mDescription : ");
                    gets(A.description);

                    printf("-\033[36mPrix : ");
                    scanf("%s",A.prixL);

                    while (getchar() != '\n');

                    printf("-\033[36mCategorie :  ");
                    gets(A.CategorieL);

                    printf("-\033[36mDisponibilite ( oui pour disponible, non pour non disponible) : \033[0m " );
                    gets(A.DisponibiliteL);


                ajouter(A);

                system("cls");
                bookajoutee();
                printf("\n \033[36mLe livre a ete ajoute avec succes ! Voici les details :\033[0m\n\n\ \033[31m\t\t%s,%s,%s,%s,%sDh,%s,%s\033[0m ", A.IDL,A.TitreL,A.AuteurL,A.description,A.prixL,A.CategorieL,A.DisponibiliteL );
                sleep(5);
                system("cls");
               break ;



   // Entrée utilisateur pour le titre et l'auteur
    case 2 :
        system("cls");
         booksupp();
        printf("\033[36mTitre à supprimer : ");
        scanf(" %[^\n]", title_to_delete);

        printf("\n\033[36mAuteur à supprimer : \033[0m");
        scanf(" %[^\n]", author_to_delete);

    // Appel de la fonction pour supprimer la ligne
        supprimer(filename, title_to_delete, author_to_delete);

            break ;
    case 3:
        system("cls");
        getchar();
        chercherbook();
        printf("\033[1;35mTitre : ");
        gets(title);

        printf("\n\033[1;35mAuteur: \033[0m");
        gets(author);
        system("cls");
        recherche(title,author);
            break ;

    case 4 :
            system("cls");
            modifbook();
        printf("\033[36mEntrez l'ID du livre à modifier : ");
        scanf(" %[^\n]", id_to_modify);
        modifierLivre(filenamee, id_to_modify);
            break ;

    case 5 :
         // Lire les livres depuis le fichier CSV
        nb_livres = lire_csv(nom_fichier, livres);
            if (nb_livres == 0) {
                printf("Aucun livre trouve ou erreur de lecture.\n");
            return 1;
                    }

        // Demander à l'utilisateur le critère de tri
        int choi;
        printf("Comment voulez-vous trier les livres ?\n");
        printf("1. Par titre\n");
        printf("2. Par categorie\n");
        printf("Votre choix : ");
        scanf("%d", &choi);

        // Trier en fonction du choix de l'utilisateur
        if (choi == 1) {
            qsort(livres, nb_livres, sizeof(Livree), comparer_titre);
            printf("Livres tries par titre.\n");
        } else if (choi == 2) {
            qsort(livres, nb_livres, sizeof(Livree), comparer_categorie);
            printf("Livres tries par categorie.\n");
        } else {
            printf("Choix invalide.\n");
            return 1;
    }

        // Écrire les livres triés dans le fichier CSV
        ecrire_csv(nom_fichier, livres, nb_livres);

        printf("Fichier trie et mis à jour avec succes.\n");

    case 00 :
      system("cls");
            Goodbye();
            sleep(5);
            return 0 ;
    default:
        printf("Choix invalide.\n");
        break; // Continue dans la fonction
       }
}

        }


 }
