#include <stdio.h>
#include<iostream.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include<dos.h>
#define LEFT  1
#define RIGHT 2

struct node
{
 char word[20],meaning[100];
 node *left,*right;
};

node *maketree(char[],char[]);

node* treefromfile();
void filefromtree(node*);
void addword(node*,char[],char[]);
void seperateword(char[],char[],char[]);
void displayall(node*);
node* bsearch(node*,char[]);
void showmenu();
FILE *file_ptr;

void prog()
{
 clrscr();
 char word[20],meaning[100];
 int menuchoice;
 node *temp;
 temp=treefromfile();
 if(temp==NULL)
 {
  printf("
File does not exist or dictionary is empty...");
  getch();
 }
 while(1)
 {
  clrscr();
  showmenu();
  scanf("
%d",&menuchoice);
  switch(menuchoice)
  {
   case 1:printf("
Enter word : ");
	  scanf("%s",word);
	  printf("
Enter meaning : " );
	  flushall();
	  gets(meaning);
	  if(temp==NULL)
	   temp=maketree(word,meaning);
	  else
	   addword(temp,word,meaning);
	  break;
   case 2:if(temp==NULL)
	   printf("
The dictionary is empty...");
	  else
	  {
	   printf("
Find meaning of : ");
	   flushall();
	   gets(word);
	   node *t;
	   t=bsearch(temp,word);
	   if(t==NULL)
	    printf("
Word not found...");
	   else
	   {
	    printf("

%s : ",t->word);
	    puts(t->meaning);
	   }
	  }
	  getch();
	  break;
   case 3:if(temp==NULL)
	   printf("
Dictionary is empty...");
	  else
	   displayall(temp);
	  getch();
	  break;
   case 4:filefromtree(temp);
	  exit(1);
	  break;
   default:cout<<"



Enter Again";
	   delay(1000);
	   prog();
	   break;
  }
 }
}
void showmenu()
{
 printf("
		COMPUTER DICTIONARY");
 printf("
[1].	Add a word.");
 printf("
[2].	Find meaning.");
 printf("
[3].	Display all.");
 printf("
[4]. Save and Close.



Enter Choice");
}
node* treefromfile()
{
 node *ptree=NULL;
 char word[20],meaning[100],str[120],*i;
 int flags=0;
 file_ptr=fopen("C:\dict.anu","r");
 if(file_ptr==NULL)
  ptree=NULL;
 else
 {

  while(!feof(file_ptr))
  {
	i=fgets(str,120,file_ptr);
	if(i==NULL)
	break;
	seperateword(str,word,meaning);
	if(flags==0)
	{
	 ptree=maketree(word,meaning);
	 flags=1;
	}
	else
	 addword(ptree,word,meaning);
  }

  fclose(file_ptr);
 }
 return ptree;
}
node* maketree(char w[],char m[])
{
 node *p;
 p=new node;
 strcpy(p->word,w);
 strcpy(p->meaning,m);
 p->left=NULL;
 p->right=NULL;
 return p;
}
void seperateword(char str[],char w[],char m[])
{
 int i,j;
 for(i=0;str[i]!=' ';i++)
  w[i]=str[i];
 w[i++]=NULL;	//Append the null and skip the space.
 for(j=0;str[i]!='
';i++,j++)
 {
  m[j]=str[i];
 }
 m[j]=NULL;
}
void addword(node *tree,char word[],char meaning[])
{
 node *p,*q;
 p=q=tree;
 while(strcmp(word,p->word)!=0 && p!=NULL)
 {
  q=p;
  if(strcmp(word,p->word)<0)
   p=p->left;
  else
   p=p->right;
 }
 if(strcmp(word,q->word)==0)
 {
  printf("
This word already exists...");
  delay(1000);
 }
 else if(strcmp(word,q->word)<0)
  q->left=maketree(word,meaning);
 else
  q->right=maketree(word,meaning);
}
node* bsearch(node *tree,char word[])
{
 node *q;
 q=tree;
 while(q!=NULL)
 {
  //p=q;
  if(strcmp(word,q->word)<0)
   q=q->left;
  else if(strcmp(word,q->word)>0)
   q=q->right;
  if(strcmp(word,q->word)==0)
   break;
 }
 return q;
}
void filefromtree(node *tree)
{
 void travandwrite(node*);
 file_ptr=fopen("C:\dict.anu","w");
 if(file_ptr==NULL)
 {
  printf("
Cannot open file for writing data...");
 }
 else //if(tree==NULL)
 {
  if(tree!=NULL)
  {
   travandwrite(tree);
  }
  fclose(file_ptr);  //Close the file anyway.
 }
}
void travandwrite(node *tree)
{
 if(tree!=NULL)
 {
  fprintf(file_ptr,"%s %s
",tree->word,tree->meaning);
  travandwrite(tree->left);
  travandwrite(tree->right);
 }
}
void displayall(node *tree)
{
 if(tree!=NULL)
 {
  displayall(tree->left);
  printf("%s : %s
",tree->word,tree->meaning);
  displayall(tree->right);
 }
}

void intro()
{
int i;
clrscr();
gotoxy(20,20);
cout<<"DICTIONARY LOADING";
for(i=0;i<50;i++)
{
 gotoxy(15+i,21);
 cout<<"???";
 gotoxy(20,22);
 cout<<2*i<<"% completed";
 delay(150);
}
gotoxy(20,20);
cout<<"DICTIONARY LOADING COMPLETED";
clrscr();
}
void main()
{
clrscr();
intro();
prog();
}


