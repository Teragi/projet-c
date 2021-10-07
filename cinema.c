#include<stdio.h>
#include<cs50.h>
#include<string.h>

typedef struct
{
    string categorie;
    string movie1; //Première Proposition
    string movie2; 
    string movie3;
}
film; //Nom de mon conteneur 


int main(void)
{
    film list[3]; 
    
    list[0].categorie = "Categorie Enfant"; //Catégorie Enfant
    list[0].movie1 = "Le Roi Lion";
    list[0].movie2 = "La Petite Sirène";
    list[0].movie3 = "Raya et Le Dernier Dragon";
    
    list[1].categorie = "Categorie Adolescent"; //Catégorie Ado
    list[1].movie1 = "Twilight";
    list[1].movie2 = "The Kissing Booth";
    list[1].movie3 = "High School Musical";
    
    list[2].categorie = "Categorie Adulte"; //Catégorie Adulte
    list[2].movie1 = "The Sinning";
    list[2].movie2 = "La Nonne";
    list[2].movie3 = "The Conjuring"; 
    
    int age = get_int("Quel est ton âge ?\n");
    
    
    //Début du niveau 1
    if (age < 11)
    {   
        for (int i = 0; i < 3; i++)
        {
            if (strcmp(list[i].categorie, "Categorie Enfant") == 0)
            {
                printf("%s\n", list[i].categorie); 
            }
        }
        
    }
    else if (age < 17)
    {
        for (int i = 0; i < 3; i++)
        {
            if (strcmp(list[i].categorie, "Categorie Adolescent") == 0)
            {
                printf("%s\n", list[i].categorie);
            }
        }
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            if (strcmp(list[i].categorie, "Categorie Adulte") == 0)
            {
                printf("%s\n", list[i].categorie);
            }
        }
    }

    //Fin niveau 1
    
}


