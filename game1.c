#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int p,np;
    printf("singel player or multiplayers\n tpye 1 for singel player\n type 2 for multi players\n");
    scanf("%d", &p);
    if (p==1)
    {
       int n , g ,ng=1;
    srand(time(0));
    int level;
    printf("choose level \n type 1 for easy\n type 2 for medium\n type 3 for hard\n");
    scanf("%d",&level);
    if (level==3)
    {
        n=rand()%100+1;
        printf("Guess the number between 1 to 100\n");
    do
    {
        scanf("%d", &g);
        if (g>n)
        {
            printf("ooops!! Try a lower number please! : \n");
        }
        else if (g<n)
        {
            printf("ooops!! Try a higher number please! : \n");
        }
        else{
            printf("yeah! you got it in %d attempts \n", ng);
        }
        ng++;
        
    } while (g!=n);}
    else if (level==2)
    {
       n=rand()%50+1;
    printf("Guess the number between 1 to 50\n");
    do
    {
        scanf("%d", &g);
        if (g>n)
        {
            printf("ooops!! Try a lower number please! : \n");
        }
        else if (g<n)
        {
            printf("ooops!! Try a higher number please! : \n");
        }
        else{
            printf("yeah! you got it in %d attempts \n", ng);
        }
        ng++;
        
    } while (g!=n);  
    }
    else if (level==1)
    {
         n=rand()%10+1;
    printf("Guess the number between 1 to 10\n");
    do
    {
        scanf("%d", &g);
        if (g>n)
        {
            printf("ooops!! Try a lower number please! : \n");
        }
        else if (g<n)
        {
            printf("ooops!! Try a higher number please! : \n");
        }
        else{
            printf("yeah! you got it in %d attempts \n", ng);
        }
        ng++;
        
    } while (g!=n);
    }
    else
    {
        printf("INVALID INPUT");
    }  
    }
    else if (p==2)
    {
        int i=0;
        printf("Number of Players :  ");
        scanf("%d", &np);
        for (int i = 0; i < np; i++)
        {
            printf("Name for player %d : ",i+1);
            scanf("%s", name);
            printf("playe %d = %s\n", i+1, name);
        }
        int level;
        printf("choose level \n type 1 for easy\n type 2 for medium\n type 3 for hard\n");
        scanf("%d",&level);
        if (level==3)
        {
           do
        {
            int n , g ,ng=1;
            printf("Player %d begins\n",i+1);
            n=rand()%100+1;
            printf("Guess the number between 1 to 100\n");
            do
            {
            scanf("%d", &g);
            if (g>n)
            {
            printf("ooops!! Try a lower number please! : \n");
            }
            else if (g<n)
            {
            printf("ooops!! Try a higher number please! : \n");
            }
            else{
            printf("yeah! you got it in %d attempts \n", ng);
            }
            ng++;
        
            } while (g!=n);
            i++;
        } while (np!=i);

        }
        else if (level==2)
        {
             do
        {
            int n , g ,ng=1;
            printf("Player %d begins\n",i+1);
            n=rand()%50+1;
            printf("Guess the number between 1 to 50\n");
            do
            {
            scanf("%d", &g);
            if (g>n)
            {
            printf("ooops!! Try a lower number please! : \n");
            }
            else if (g<n)
            {
            printf("ooops!! Try a higher number please! : \n");
            }
            else{
            printf("yeah! you got it in %d attempts \n", ng);
            }
            ng++;
        
            } while (g!=n);
            i++;
        } while (np!=i); 
        } 
        else if (level==1)
        {
              do
        {
            int n , g ,ng=1;
            printf("Player %d begins\n",i+1);
            n=rand()%10+1;
            printf("Guess the number between 1 to 10\n");
            do
            {
            scanf("%d", &g);
            if (g>n)
            {
            printf("ooops!! Try a lower number please! : \n");
            }
            else if (g<n)
            {
            printf("ooops!! Try a higher number please! : \n");
            }
            else{
            printf("yeah! you got it in %d attempts \n", ng);
            }
            ng++;
        
            } while (g!=n);
            i++;
        } while (np!=i);}
        else
        {
            printf("INVALID INPUT");
        }
          
        }

        printf("the player who got in less attempts wins");

        return 0;
         
        }
        
        
        
    
    
    
        
