#include<stdio.h>
#include <stdlib.h>
#include<string.h>
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
void affichejour(struct produit T[1000]){
   size_t N=sizeof(T)/ sizeof(T[0]);
    for(int i=0;i<N;i++)
    {
        printf("historique de produit de num reference");
        printf(T[i].num_reference);
        size_t n=sizeof(T[i].E)/sizeof(T[i].E[0]);
        printf("les entrées");
        int k=0;
        while(k<n)
        {
        printf(T[i].E[k].dateentree.a);
        printf("\t");
        printf(T[i].E[k].dateentree.m);
        printf("\t");
        printf(T[i].E[k].dateentree.j);
        printf("\t");
        printf("le nb est");
        printf("\t");
        printf(T[i].E[k].nb1);
        printf("\n");

        for(int r=k+1;r<n;r++)
        { if ((T[i].E[r].dateentree.a==T[i].E[k].dateentree.a)&&(T[i].E[r].dateentree.m==T[i].E[k].dateentree.m)&&(T[i].E[r].dateentree.j==T[i].E[k].dateentree.j))
          {
            printf(T[i].E[r].dateentree.a);
            printf("\t");
            printf(T[i].E[r].dateentree.m);
            printf("\t");
            printf(T[i].E[r].dateentree.j);
            printf("\t");
            printf("le nb est");
            printf("\t");
            printf(T[i].E[r].nb1);
            printf("\n");}
          else
          { printf("*************************************************");
            printf(T[i].E[r].dateentree.a);
            printf("\t");
            printf(T[i].E[r].dateentree.m);
            printf("\t");
            printf(T[i].E[r].dateentree.j);
            printf("\t");
            printf("le nb est");
            printf("\t");
            printf(T[i].E[r].nb1);
            printf("\n");
            k=r;
        }}}
        size_t l=sizeof(T[i].S)/sizeof(T[i].S[0]);
        printf("les sorties");
        int p=0;
        while(p<l)
        {
            printf(T[i].S[p].datesortie.a);
            printf("\t");
            printf(T[i].S[p].datesortie.m);
            printf("\t");
            printf(T[i].S[p].datesortie.j);
            printf("\t");
            printf("le nb est");
            printf("\t");
            printf(T[i].S[p].nb2);
            printf("\n");

        for(int z=p+1;z<l;z++)
            { if ((T[i].S[z].datesortie.a==T[i].S[p].datesortie.a)&&(T[i].S[z].datesortie.m==T[i].S[p].datesortie.m)&&(T[i].S[z].datesortie.j==T[i].S[p].datesortie.j))
          {
            printf(T[i].S[z].datesortie.a);
            printf("\t");
            printf(T[i].S[z].datesortie.m);
            printf("\t");
            printf(T[i].S[z].datesortie.j);
            printf("\t");
            printf("le nb est");
            printf("\t");
            printf(T[i].S[z].nb2);
            printf("\n");}
          else
          { printf("*************************************************");
            printf(T[i].S[z].datesortie.a);
            printf("\t");
            printf(T[i].S[z].datesortie.m);
            printf("\t");
            printf(T[i].S[z].datesortie.j);
            printf("\t");
            printf("le nb est");
            printf("\t");
            printf(T[i].S[z].nb2);
            printf("\n");
            p=z;
          }}}}}
void affichemois(struct produit T[1000])
{   size_t N=sizeof(T)/sizeof(T[0]);
    for(int i=0;i<N;i++)
    {   printf("historique de produit de num reference");
        printf(T[i].num_reference);
        size_t n=sizeof(T[i].E)/sizeof(T[i].E[0]);
        printf("les entrées");
        int  k=0;
        while(k<n)
        {
            printf(T[i].E[k].dateentree.a);
            printf("\t");
            printf(T[i].E[k].dateentree.m);
            printf("\t");
            printf(T[i].E[k].dateentree.j);
            printf("\t");
            printf("le nb est");
            printf("\t");
            printf(T[i].E[k].nb1);
            printf("\n");
            for(int j=k+1;j<n;j++){
                    if ((T[i].E[j].dateentree.a==T[i].E[k].dateentree.a)&&(T[i].E[j].dateentree.m==T[i].E[k].dateentree.m)){
                        printf(T[i].E[j].dateentree.a);
                        printf("\t");
                        printf(T[i].E[j].dateentree.m);
                        printf("\t");
                        printf(T[i].E[j].dateentree.j);
                        printf("\t");
                        printf("le nb est");
                        printf("\t");
                        printf(T[i].E[j].nb1);
                        printf("\n");}
                    else {
                        printf("*************************************************");
                        printf(T[i].E[j].dateentree.a);
                        printf("\t");
                        printf(T[i].E[j].dateentree.m);
                        printf("\t");
                        printf(T[i].E[j].dateentree.j);
                        printf("\t");
                        printf("le nb est");
                        printf("\t");
                        printf(T[i].E[j].nb1);
                        printf("\n");
                        k=j;}}}
            size_t l=sizeof(T[i].S)/sizeof(T[i].S[0]);
            printf("les sorties");
            int p=0;
            while(p<l){
                printf(T[i].S[p].datesortie.a);
                printf("\t");
                printf(T[i].S[p].datesortie.m);
                printf("\t");
                printf(T[i].S[p].datesortie.j);
                printf("\t");
                printf("le nb est");
                printf("\t");
                printf(T[i].S[p].nb2);
                printf("\n");

        for(int j=p+1;j<l;j++)
        { if ((T[i].S[j].datesortie.a==T[i].S[p].datesortie.a)&&(T[i].S[j].datesortie.m==T[i].S[p].datesortie.m)){
            printf(T[i].S[j].datesortie.a);
            printf("\t");
            printf(T[i].S[j].datesortie.m);
            printf("\t");
            printf(T[i].S[j].datesortie.j);
            printf("\t");
            printf("le nb est");
            printf("\t");
            printf(T[i].S[j].nb2);
            printf("\n");}
          else {
                printf("*************************************************");
                printf(T[i].S[j].datesortie.a);
                printf("\t");
                printf(T[i].S[j].datesortie.m);
                printf("\t");
                printf(T[i].S[j].datesortie.j);
                printf("\t");
                printf("le nb est");
                printf("\t");
                printf(T[i].S[j].nb2);
                printf("\n");
                p=j;}}}}}
void stockcourant(struct produit T[1000],struct date d){
    size_t N=sizeof(T)/sizeof(T[0]);
    for(int i=0;i<N;i++){
            int e=0;
            size_t n=sizeof(T[i].E)/sizeof(T[i].E[0]);
            for (int j=0;j<n;j++) {
                     if (T[i].E[j].dateentree.a<d.a){
                        e=e+T[i].E[j].nb1;}
                    if (T[i].E[j].dateentree.a=d.a){
                        if(T[i].E[j].dateentree.m<d.m){
                            e=e+T[i].E[j].nb1;}}
                    if ((T[i].E[j].dateentree.a=d.a)&&(T[i].E[j].dateentree.m<d.m)){
                        if (T[i].E[j].dateentree.j<d.j){
                            e=e+T[i].E[j].nb1;}
                   }}
            int s=0;
            size_t l=sizeof(T[i].S)/sizeof(T[i].S[0]);
            for (int k=0;k<l;k++){
                    if (T[i].S[k].datesortie.a<d.a){
                        s=s+T[i].S[k].nb2;}
                    if (T[i].S[k].datesortie.a=d.a){
                        if(T[i].S[k].datesortie.m<d.m){
                            s=s+T[i].S[k].nb2;}}
                    if ((T[i].S[k].datesortie.a=d.a)&&(T[i].S[k].datesortie.m<d.m)){
                        if (T[i].S[k].datesortie.j<d.j){
                            s=s+T[i].S[k].nb2;}}}

            printf(T[i].nom);
            printf("|\t");
            printf('%d',e-s);
            printf("\n");}}

void afficher (int g,struct produit T[1000])
{ int d;
 d=recherche(g,T[1000]);
 if(d!=0)
{
    printf("Num de reference :\t");
    printf("%d\n",g);
    printf("Nom :\t");
    printf("%s\n",T[d].nom);
    printf("prix:\t");
    printf("%d\n",T[d].prix);
    printf("date entrée|\t");
    printf("quantité|\t");
    printf("\n");
    printf("---------------------------------------------------------------------------------------------------------------\n");
    size_t n=sizeof(T[d].E)/sizeof(T[d].E[0]);

    for (int q=0;q<n;q++)
    {
        printf("\n");
        printf("%d -%d-%d |\t",T[d].E[q].dateentree.a,T[d].E[q].dateentree.m,T[d].E[q].dateentree.j);
        printf("%d|\t",T[d].E[q].nb1);

    }
    printf("\n");
   printf("date sortie|\t");
    printf("quantité|\t");
    printf("\n");
    printf("---------------------------------------------------------------------------------------------------------------\n");
    size_t l=sizeof(T[d].S)/sizeof(T[d].S[0]);

    for (int v=0;v<l;v++)
    {
        printf("\n");
        printf("%d -%d-%d |\t",T[d].S[v].datesortie.a,T[d].S[v].datesortie.m,T[d].S[v].datesortie.j);
        printf("%d|\t",T[d].S[v].nb2);

    }
}
else
{
    printf("produit n'existe pas");
}
}


int existe(int aa,int mm,int jj,struct entree Q[500])
{    int f=0;
     size_t lo=sizeof(Q)/sizeof(Q[0]);
     for (int w=0;w<lo;w++)
     {
         if ((Q[w].dateentree.a==aa)&&(Q[w].dateentree.m==mm)&&(Q[w].dateentree.j==jj))
         {
             f=w;
         }
     }
     return (f);
}

void modifier (struct produit p)
{
    if(recherche(p)==0)
    {
        printf("le produit a modifier n'existe pas");
    }
    else
    {
        int choix;
    printf("Quel information vous voulez changer ?\n");

    printf("1.numero de reference\n");
    printf("2.nom\n");
    printf("3.prix\n");
    printf("4.quantité in \n");
    printf("5.quantité out\n");
     do
   {
         scanf("%d",&choix);
   }    while(choix>5 ||choix<1);
   switch (choix)
     {
         case 1 :
             {printf ("donner le nouveau numero de reference\n");
              int nr;
              scanf("%d",nr);
            p.num_reference=nr;}
         break;
         case 2:
             {printf ("donner le nouveau nom\n");
              char*ch;
              scanf("%s",ch);
              p.nom=ch ;}
         break;
         case 3:
              {printf ("donner le nouveau prix\n");
               int pr;
               scanf("%d",pr);
               p.prix=pr;}
         break;
         case 4:
                {   int aa,mm,jj;
                    printf("donner l'annee de quantité que vous voulez changer");
                    scanf("%d",aa);
                    printf("donner le mois de quantité que vous voulez changer");
                    scanf("%d",mm);
                    printf("donner le jour de quantité que vous voulez changer");
                    scanf("%d",jj);
                    if (existe(aa,mm,jj,p.E)==0)
                    {
                        printf("date n'existe pas");
                    }
                    else

                        {printf ("donner la nouvelle quantité\n");
                         int nq;
                         scanf("%d",nq);
                         p.E[existe(aa,mm,jj,p.E)].nb1=nq;
                        }
                    }
         case 5:
            {
                int aa,mm,jj;
                    printf("donner l'annee de quantité que vous voulez changer");
                    scanf("%d",aa);
                    printf("donner le mois de quantité que vous voulez changer");
                    scanf("%d",mm);
                    printf("donner le jour de quantité que vous voulez changer");
                    scanf("%d",jj);
                    if (existe(aa,mm,jj,p.S)==0)
                    {
                        printf("date n'existe pas");
                    }
                    else

                        {printf ("donner la nouvelle quantité\n");
                         int nq;
                         scanf("%d",nq);
                         p.S[existe(aa,mm,jj,p.S)].nb2=nq;
                        }
            }
                }

}
}








