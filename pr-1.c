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
            printf("\t");
            printf('%d',e-s);ss
            printf('\n');}}








