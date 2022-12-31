#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include <stdbool.h>
struct date{
    int a,m,j;
};
struct entree{
    struct date dateentree;
    int nb1;
};
struct sortie{
    struct date datesortie;
    int nb2;
};
struct produit{
    char nom;
    int num_reference;
    int prix;
    struct entree E[500];
    struct sortie S[500];
};
int existe1(int aa,int mm,int jj,struct entree Q[500])
{    int f=0;
     size_t lo=sizeof(Q)/sizeof(Q[0]);
     for (int w=0;w<lo;w++)
     {
         if ((Q[w].dateentree.a==aa)&&(Q[w].dateentree.m==mm)&&(Q[w].dateentree.j==jj))
         {
             f=w;
             return (f);
         }
     }

     return (-1);
}
int existe2(int aa,int mm,int jj,struct sortie Q[500])
{    int f=0;
     size_t lo=sizeof(Q)/sizeof(Q[0]);
     for (int w=0;w<lo;w++)
     {
         if ((Q[w].datesortie.a==aa)&&(Q[w].datesortie.m==mm)&&(Q[w].datesortie.j==jj))
         {
             f=w;
             return (f);
         }
     }
     return (-1);
}
void modifier (struct produit p,struct produit T[1000])
{
    int indice;
    size_t n=sizeof(T)/sizeof(T[0]);
    for (i=0;i<n;i++)
    {
        if (T[i]==p)
        {
            indice=i;
            break;
        }
    }
    int choix;

     do
   {
        printf("Quel information vous voulez changer ?\n");
        printf("1.numero de reference\n");
        printf("2.nom\n");
        printf("3.prix\n");
        printf("4.quantite in \n");
        printf("5.quantite out\n");
        printf("6.quitter\n");
        printf("saisir votre choix \n"):
        scanf("%d",&choix);
        system("cls");
   switch (choix)
     {
         case 1 :
             {  printf ("donner le nouveau numero de reference\n");
                int nr;
                scanf("%d",&nr);
                T[indice].num_reference=nr;}
         break;
         case 2:
             {printf ("donner le nouveau nom\n");
              char ch[30];
              scanf("%s",ch);
              T[indice].nom=ch ;}
         break;
         case 3:
              {printf ("donner le nouveau prix\n");
               int pr;
               scanf("%d",&pr);
               T[indice].prix=pr;}
         break;
         case 4:
                {   int aa,mm,jj;
                    printf("donner l'annee de quantité que vous voulez changer");
                    scanf("%d",&aa);
                    printf("donner le mois de quantité que vous voulez changer");
                    scanf("%d",&mm);
                    printf("donner le jour de quantité que vous voulez changer");
                    scanf("%d",&jj);
                    if (existe1(aa,mm,jj,T[indice].E)==-1)
                    {
                        printf("date n'existe pas");
                    }
                    else

                        {printf ("donner la nouvelle quantité\n");
                         int nq;
                         scanf("%d",&nq);
                         T[indice].E[existe1(aa,mm,jj,T[indice].E)].nb1=nq;
                        }
                    }
         case 5:
            {
                int aa,mm,jj;
                    printf("donner l'annee de quantité que vous voulez changer");
                    scanf("%d",&aa);
                    printf("donner le mois de quantité que vous voulez changer");
                    scanf("%d",&mm);
                    printf("donner le jour de quantité que vous voulez changer");
                    scanf("%d",&jj);
                    if (existe2(aa,mm,jj,T[indice].S)==-1)
                    {
                        printf("date n'existe pas");
                    }
                    else

                        {printf ("donner la nouvelle quantité\n");
                         int nq;
                         scanf("%d",&nq);
                         T[indice].S[existe(aa,mm,jj,T[indice].S)].nb2=nq;
                        }
            }
                }

}
while(choix>6 ||choix<1);
}
void recherche(int ref,struct produit T[1000])
{   size_t n=sizeof(T)/sizeof(T[0]);
    bool test=false;
    for (int i=0;i<n;i++)
    {
        if (T[i].num_reference==ref)
        {
            test=true;
            break;}
    }
    if (test==true){
		printf("ce produit existe dans ce stock.\n");
	}
	else{
			printf("ce produit n'existe pas dans le stock");
	}
}
void Supprimer(struct produit T[1000],int ref){
    size_t n=sizeof(T)/sizeof(T[0]);
    for(int i=0;i<n;i++){
        if(T[i].num_reference==ref){
            break;}}
        for(int k=i;k<n-1;k++){
                T[k]=T[k+1];
        }
        printf("\n SUPPRESSION D'UN PRODUIT EFFECTUEE AVEC SUCCES \n");
}
void afficher (int ref,struct produit T[1000])
{   bool d;
    d=recherche(ref,T[1000]);
    int indice;
    size_t n=sizeof(T)/sizeof(T[0]);
    for (i=0;i<n;i++)
    {
        if (T[i].num_reference==ref)
        {
            indice=i;
            break;
        }
    }
     if(d==true)
    {
        printf("Num de reference :\t");
        printf("%d\n",ref);
        printf("Nom :\t");
        printf("%s\n",T[indice].nom);
        printf("prix:\t");
        printf("%d\n",T[indice].prix);
        printf("date d'entree| \n");
        printf("-----------------------------------------------------------------------------------------\n");
        size_t n=sizeof(T[indice].E)/sizeof(T[indice].E[0]);

        for (int q=0;q<n;q++)
        {
            printf("\n");
            printf("%d-%d-%d |\t",T[indice].E[q].dateentree.a,T[indice].E[q].dateentree.m,T[indice].E[q].dateentree.j);
            printf("quantite|\t");
            printf("%d|",T[indice].E[q].nb1);

        }
        printf("\n");
        printf("date sortie|\t");
        printf("\n");
        printf("--------------------------------------------------------------------------------------------\n");
        size_t l=sizeof(T[indice].S)/sizeof(T[indice].S[0]);

        for (int v=0;v<l;v++)
        {
            printf("\n");
            printf("%d-%d-%d |\t",T[indice].S[v].datesortie.a,T[indice].S[v].datesortie.m,T[indice].S[v].datesortie.j);
            printf("%d|",T[indice].S[v].nb2);

        }
    }
    else
    {
        printf("produit n'existe pas");
    }
}
void Ajouter(struct produit T[1000]){
	char nom_ajouter[25];
	printf("donner le nom du produit a ajouter\n");
	scanf("%s",nom_ajouter);
	int aa,mm,jj;
    printf("donner l'annee de l'ajout\t");
    scanf("%d",&aa);
    printf("donner le mois de l'ajout\t");
    scanf("%d",&mm);
    printf("donner le jour de l'ajout\t");
    scanf("%d",&jj);
	bool test=false;
	int Q,ref,prix;
	printf("donner la quantite a ajouter\n");
    scanf("%d",&Q);
	size_t n=sizeof(T)/sizeof(T[0]);
	for(int i=0;i<n;i++){
		if(T[i].nom==nom_ajouter){
			size_t N=sizeof(T[i].E)/sizeof(T[i].E[0]);
			T[i].E[N].dateentree.a=aa;
			T[i].E[N].dateentree.m=mm;
			T[i].E[N].dateentree.j=jj;
			T[i].E[N].nb1=Q;
			test=true;}
	}
	if(test==false){
		n+=1;
		T[n].nom=nom_ajouter;
		printf("saisir le numero de reference\t");
		scanf("%d",&ref);
		T[n].num_reference=ref;
		T[n].E[0].dateentree.a=aa;
		T[n].E[0].dateentree.m=mm;
		T[n].E[0].dateentree.j=jj;
		T[n].E[0].nb1=Q;
		printf("saisir le prix = \n");
		scanf("%d",&prix);
		T[n].prix=prix;}
	printf("Felicitation,votre ajout est fait avec succes");
}
int menu()
{
    system("cls");
    printf("****************Stock-Manager****************\n");
    printf("\n");
    printf("\n");
    printf("*******MENU*******\n");
    printf("\n");
    printf("1-Ajouter un produit.\n");
    printf("2-Supprimer un produit.\n");
    printf("3-Modifier un produit.\n");
    printf("4-Afficher les caracteristques d'un produit.\n");
    printf("5-Recherche d'un produit.\n");
    printf("6-Quitter\n");
    printf("Faites votre choix:\n");
    int choix;
    scanf("%d",&choix);
    return choix;
}
