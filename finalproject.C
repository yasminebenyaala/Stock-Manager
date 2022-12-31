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
    char nom[30];
    int num_reference;
    int prix;
    struct entree E[500];
    struct sortie S[500];
};
int saisir()
{   int nbp;
    printf("saisir le nombre du produits de votre stock : ");
    scanf("%d",&nbp);
    return nbp;
}
struct produit saisir_produit()
{
        struct produit prod ;
        //size_t n=sizeof(prod.E)/sizeof(prod.E[0]);
        printf("saisir le nom du produit:");
        scanf("%s",prod.nom);
        printf("Le numero de reference du produit : ");
        scanf("%d",&prod.num_reference);
        printf("Le prix du produit=");
        scanf("%d",&prod.prix);
        printf("Date d'entree: \n");
        printf("saisir le jour=");
        scanf("%d",&prod.E[0].dateentree.j);
        printf("Le mois=");
        scanf("%d",&prod.E[0].dateentree.m);
        printf("L'annee=");
        scanf("%d",&prod.E[0].dateentree.a);
        printf("saisir la quantite in=");
        scanf("%d",&prod.E[0].nb1);
        printf("Date de sortie: \n");
        printf("saisir le jour=");
        scanf("%d",&prod.S[0].datesortie.j);
        printf("Le mois= ");
        scanf("%d",&prod.S[0].datesortie.m);
        printf("L'annee=");
        scanf("%d",&prod.S[0].datesortie.a);
        printf("saisir la quantite out=");
        scanf("%d",&prod.S[0].nb2);
        system("cls");
    return prod;
}
void affichejour(struct produit T[1000]){
   size_t N=sizeof(T)/ sizeof(T[0]);
    for(int i=0;i<N;i++)
    {
        printf("historique de produit de num reference = ");
        printf("%d",T[i].num_reference);
        size_t n=sizeof(T[i].E)/sizeof(T[i].E[0]);
        printf("\n les entrees: \n");
        int k=0;
        while(k<n)
        {
        printf("%d-%d-%d",T[i].E[k].dateentree.j,T[i].E[k].dateentree.m,T[i].E[k].dateentree.a);
        printf("la quantites de produits entrantes est :");
        printf("\t");
        printf("%d",T[i].E[k].nb1);
        printf("\n");

        for(int r=k+1;r<n;r++)
        { if ((T[i].E[r].dateentree.a==T[i].E[k].dateentree.a)&&(T[i].E[r].dateentree.m==T[i].E[k].dateentree.m)&&(T[i].E[r].dateentree.j==T[i].E[k].dateentree.j))
          {
            printf("%d-%d-%d",T[i].E[k].dateentree.j,T[i].E[r].dateentree.m,T[i].E[r].dateentree.a);
            printf("la quantites de produits entrantes est :");
            printf("\t");
            printf("%d",T[i].E[r].nb1);
            printf("\n");}
          else
          { printf("*************************************************");
            printf("\n");
            k=r;
        }}}
        size_t l=sizeof(T[i].S)/sizeof(T[i].S[0]);
        printf("\n Les sorties\n ");
        int p=0;
        while(p<l)
        {
            printf("%d-%d-%d",T[i].S[p].datesortie.j,T[i].S[p].datesortie.m,T[i].S[p].datesortie.a);
            printf("la quantites de produits sortants est");
            printf("\t");
            printf("%d",T[i].S[p].nb2);
            printf("\n");

        for(int z=p+1;z<l;z++)
            { if ((T[i].S[z].datesortie.a==T[i].S[p].datesortie.a)&&(T[i].S[z].datesortie.m==T[i].S[p].datesortie.m)&&(T[i].S[z].datesortie.j==T[i].S[p].datesortie.j))
          {
            printf("%d-%d-%d",T[i].S[z].datesortie.j,T[i].S[z].datesortie.m,T[i].S[z].datesortie.a);
            printf("la quantites de produits sortants est");
            printf("\t");
            printf("%d",T[i].S[z].nb2);
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
        printf("%d",T[i].num_reference);
        size_t n=sizeof(T[i].E)/sizeof(T[i].E[0]);
        printf("les entrées");
        int  k=0;
        while(k<n)
        {
            printf("%d-%d-%d",T[i].E[k].dateentree.j,T[i].E[k].dateentree.m,T[i].E[k].dateentree.a);
            printf("la quantites de produits entrantes est :");
            printf("\t");
            printf("%d",T[i].E[k].nb1);
            printf("\n");
            for(int j=k+1;j<n;j++){
                    if ((T[i].E[j].dateentree.a==T[i].E[k].dateentree.a)&&(T[i].E[j].dateentree.m==T[i].E[k].dateentree.m)){
                        printf("%d-%d-%d",T[i].E[j].dateentree.j,T[i].E[j].dateentree.m,T[i].E[j].dateentree.a);
                        printf("\t");
                        printf("la quantites de produits entrantes est :");
                        printf("\t");
                        printf("%d",T[i].E[j].nb1);
                        printf("\n");}
                    else {
                        printf("*************************************************");
                        printf("\n");
                        k=j;}}}
            size_t l=sizeof(T[i].S)/sizeof(T[i].S[0]);
            printf("les sorties");
            int p=0;
            while(p<l){
               printf("%d-%d-%d",T[i].S[p].datesortie.j,T[i].S[p].datesortie.m,T[i].S[p].datesortie.a);
                printf("\t");
                printf("la quantites de produits sortants est");
                printf("\t");
                printf("%d",T[i].S[p].nb2);
                printf("\n");

        for(int j=p+1;j<l;j++)
        { if ((T[i].S[j].datesortie.a==T[i].S[p].datesortie.a)&&(T[i].S[j].datesortie.m==T[i].S[p].datesortie.m)){
            printf("%d-%d-%d",T[i].S[j].datesortie.j,T[i].S[j].datesortie.m,T[i].S[j].datesortie.a);
            printf("\t");
            printf("la quantites de produits sortants est");
            printf("\t");
            printf("%d",T[i].S[j].nb2);
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
                    if (T[i].E[j].dateentree.a<d.a||T[i].E[j].dateentree.a==d.a&&T[i].E[j].dateentree.m<d.m||T[i].E[j].dateentree.a==d.a&&T[i].E[j].dateentree.m==d.m&&T[i].E[j].dateentree.j<d.j){
                        e=e+T[i].E[j].nb1;}}
            int s=0;
            size_t l=sizeof(T[i].S)/sizeof(T[i].S[0]);
            for (int k=0;k<l;k++){
                 if (T[i].S[k].datesortie.a<d.a||T[i].S[k].datesortie.a==d.a && T[i].S[k].datesortie.m<d.m||T[i].S[k].datesortie.a==d.a&&T[i].S[k].datesortie.m==d.m&&T[i].S[k].datesortie.j<d.j){
                        s=s+T[i].S[k].nb2;}}
            printf("le produit du nom %s et de reference %d est de quantite de stock courant = %d \n",T[i].nom[30],T[i].num_reference,e-s);
            printf("\n");}}

int existe1(int aa,int mm,int jj,struct entree Q[500])
{    int f=0;
     size_t lo=sizeof(Q)/sizeof(Q[0]);
     for (int w=0;w<lo;w++)
     {
         if (Q[w].dateentree.a==aa&&Q[w].dateentree.m==mm && Q[w].dateentree.j==jj)
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
void modifier (int ref,struct produit T[1000])
{
    int indice;
    size_t n=sizeof(T)/sizeof(T[0]);
    for (int i=0;i<n;i++)
    {
        if (T[i].num_reference==ref)
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
        printf("saisir votre choix \n");
        scanf("%d",&choix);
        system("cls");
   switch (choix)
     {
         case 1 :
             {  int nr;
                printf ("donner le nouveau numero de reference\n");
                scanf("%d",&nr);
                T[indice].num_reference=nr;}
                break;
         case 2:
             {  printf ("donner le nouveau nom :\n");
                char ch[30];
                scanf("%s",ch);
                T[indice].nom[30]=ch ;}
                break;
         case 3:
              { int pr;
                printf ("donner le nouveau prix=\n");
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
                    {   int nq;
                        printf ("donner la nouvelle quantité\n");
                        scanf("%d",&nq);
                        T[indice].E[existe1(aa,mm,jj,T[indice].E)].nb1=nq;}}
                    break;

         case 5:
            {
                    int aa,mm,jj;
                    printf("donner l'annee de quantite que vous voulez changer");
                    scanf("%d",&aa);
                    printf("donner le mois de quantite que vous voulez changer");
                    scanf("%d",&mm);
                    printf("donner le jour de quantite que vous voulez changer");
                    scanf("%d",&jj);
                    if (existe2(aa,mm,jj,T[indice].S)==-1)
                    {
                        printf("date n'existe pas");
                    }
                    else
                    {       int nq;
                            printf ("donner la nouvelle quantité\n");
                            scanf("%d",&nq);
                            T[indice].S[existe2(aa,mm,jj,T[indice].S)].nb2=nq;}}}

}
while(choix>6 ||choix<1);
}
int recherche(int ref,struct produit T[1000])
{   size_t n=sizeof(T)/sizeof(T[0]);
    bool test=false;
    for (int i=0;i<n;i++)
    {
        if (T[i].num_reference==ref)
        {
            test=true;
            }
    }
    if (test==true){
		printf("ce produit existe dans ce stock.\n");
		return 1;
	}
	else{
			printf("ce produit n'existe pas dans le stock");
			return 0;
	}
}
void supprimer(struct produit T[1000],int ref){
    size_t n=sizeof(T)/sizeof(T[0]);
    int i;
    for(i=0;i<n;i++){
        if(T[i].num_reference==ref){
            break;}}
        for(int k=i;k<n-1;k++){
                T[k]=T[k+1];
        }
        printf("\n SUPPRESSION D'UN PRODUIT EFFECTUEE AVEC SUCCES \n");
}
void afficher (int ref,struct produit T[1000])
{
    int indice;
    size_t n=sizeof(T)/sizeof(T[0]);
    for (int i=0;i<n;i++)
    {
        if (T[i].num_reference==ref)
        {
            indice=i;
            break;
        }
    }
        if(recherche(ref,T)==1)
    {
        printf("Num de reference :\t");
        printf("%d\n",ref);
        printf("Nom :\t");
        printf("%s\n",T[indice].nom[30]);
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
        printf("produit n'existe pas.\n");
    }
}
void ajouter(struct produit T[1000]){
	char nom_ajouter[25];
	int Q,ref,prix;
	printf("donner le numero de reference du produit a ajouter\n");
	scanf("%d",&ref);
	int aa,mm,jj;
    printf("donner l'annee de l'ajout\t");
    scanf("%d",&aa);
    printf("donner le mois de l'ajout\t");
    scanf("%d",&mm);
    printf("donner le jour de l'ajout\t");
    scanf("%d",&jj);
	bool test=false;
	printf("donner la quantite a ajouter\n");
    scanf("%d",&Q);
	size_t n=sizeof(T)/sizeof(T[0]);
	for(int i=0;i<n;i++){
		if(T[i].num_reference==ref){
			size_t N=sizeof(T[i].E)/sizeof(T[i].E[0]);
			T[i].E[N].dateentree.a=aa;
			T[i].E[N].dateentree.m=mm;
			T[i].E[N].dateentree.j=jj;
			T[i].E[N].nb1=Q;
			test=true;}
	}
	if(test==false){
		n+=1;
		printf("donner le nom du produit a ajouter\n");
        scanf("%s",nom_ajouter);
		T[n].nom[30]=nom_ajouter[25];
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
int main()
{
    /*HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);*/
    struct date datee;
    struct produit prod;
    int choix;
	int ref,i,nbp;
	struct produit *stock;
	nbp=saisir();
	stock=(struct produit *)malloc(nbp*sizeof(struct produit));
	for(i=0;i<nbp;i++){
		*(stock+i)=saisir_produit();
	}
	do{
            do{
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
                printf("6-Quitter.\n");
                printf("7-Historiques.\n");
                printf("Faites votre choix:\n");
                scanf("%d",&choix);}
            while (choix>7 || choix<1);
	switch(choix)
	{
		case 1:
			ajouter(stock);
			break;
		case 2:
		    printf("donner le num ref du produit que vous voulez supprimer !\n");
		    scanf("ref: %d",&ref);
			supprimer(stock,ref);
			break;
		case 3:
		    printf("donner le num ref du produit que vous voulez modifier !\n");
		    scanf("ref: %d",&ref);
			modifier(ref,stock);
			break;
		case 4:
		    printf("donner le num ref du produit que vous voulez afficher !\n");
		    scanf("ref: %d",&ref);
			afficher(ref,stock);
			break;
		case 5:
		    printf("donner le num ref du produit que vous voulez rechercher !\n");
		    scanf("ref: %d",&ref);
			recherche(ref,stock);
			break;
        case 7:
            printf("donner l'annee \t");
            scanf("%d",&datee.a);
            printf("donner le mois \t");
            scanf("%d",&datee.m);
            printf("donner le jour \t");
            scanf("%d",&datee.j);
            stockcourant(stock,datee);
            break;
		default:
        printf("Erreur:s'il vous plait taper un choix compris entre 1 et 9\n");
    }}
    while (choix!=9);
}

