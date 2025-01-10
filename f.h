#pragma once
#define MAX_LINES 1000 // Nombre maximum de lignes dans le fichier
#define MAX_LENGTH 256 // Longueur maximum d'une ligne

typedef struct{
char nom[100] , mdp[100] ;
}user ;
typedef struct{

char IDL[10],TitreL[300],AuteurL[300],description[300],prixL[50];
char DisponibiliteL[50],CategorieL[300];
}Livre ;
typedef struct {
    char id[MAX_LENGTH];
    char title[MAX_LENGTH];
    char author[MAX_LENGTH];
    char description[MAX_LENGTH];
    char price[MAX_LENGTH];
    char category[MAX_LENGTH];
    char availability[MAX_LENGTH];
} Livree;
int comparer_titre(const void *a, const void *b);
int comparer_categorie(const void *a, const void *b);
int lire_csv(const char *nom_fichier, Livree livres[]);
void ecrire_csv(const char *nom_fichier, Livree livres[], int nb_livres);
void cree(user utilisateur) ;
int auth(const char *username , const char *password) ;
void ajouter(Livre list ) ;
void supprimer(const char *filename, const char *title_to_delete, const char *author_to_delete);
void modifierLivre(const char *filename, const char *id_to_modify);
void recherche( const char *title_to_compare, const char *author_to_compare);


void deuxemeinter() ;
void afficherBarreProgression(int maxProgression);
void flech();
void userinterface() ;
void catbooks() ;
void choix();
void introduction();
void ow();
void oww();
void apresauth();
void Goodbye();
void bookajoutee();
void booksupp();
void booksuppp();
void Livretrouve();
void chercherbook();
void modifbook();
void modifierbook();
void erorr();
void Trier();
void ApresTrier();
