#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void factors_of_length();//18 may
void max_vowel_or_consonant();//21 may
void check_even();//22 may
void N_characters_most_consonant();//26 may
void characters_at_multiples_of_x_reverse();//29 may
void pattern_with_alphabet_and_star();//4 june
void second_half_and_first_half_of_vowels();//6 june
void atleast_one_uppercase_and_one_lowercase();//9 june
void difference_count_of_two_strings();//10 june
void circular_string();//22 june
int main()
{
    int ch,response;
    do
    {
    printf("\n-------------------------------------------------------------------------------\n1.Characters-Factors of Length\n2.Max vowel or consonant\n3.Check all the characters are Vowels or Not\n4.N-characters most consonant\n5.Characters at multiples of x reverse\n6.Pattern with alphabet and star\n7.Second half and First half of vowels\n8.Atleast one Uppercase and one Lowercase\n9.Difference count of two strings\n10.circular string\n-------------------------------------------------------------------------------\n");
    printf("\nEnter Your Choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        factors_of_length();//18 may
        break;
    case 2:
        max_vowel_or_consonant();//21 may
        break;
    case 3:
        check_even();//22 may
        break;
    case 4:
        N_characters_most_consonant();//26 may
        break;
    case 5:
        characters_at_multiples_of_x_reverse();//29 may
        break;
    case 6:
        pattern_with_alphabet_and_star();//4 june
        break;
    case 7:
        second_half_and_first_half_of_vowels();//6 june
        break;
    case 8:
        atleast_one_uppercase_and_one_lowercase();//9 june
        break;
    case 9:
        difference_count_of_two_strings();//10 june
        break;
    case 10:
        circular_string();//22 june
        break;
    default:
        printf("\nEnter The Choices Between 1 to 10 ");
    }
    printf("\n\n\nPress 1 to continue : ");
    scanf("%d",&response);
    }while(response==1);
    return 0;
}

void factors_of_length()//18 may
{
    char s[1000];
    int ind,itr,pos;
    printf("\n\n*******************************************************************************\nDESCRIPTION:\nThis program prints the characters which are present\nAt the positions of the factors based on the length of the string\n*******************************************************************************\n\n");
    printf("\nEnter The String : ");
    scanf("%s",s);
    printf("\n");
    printf("Since the length of the string is \"%d\" the factors of %d in the string are printed\n",strlen(s),strlen(s));
    printf("\n");
    for(ind=1;ind<=strlen(s);ind++)
        if(strlen(s)%ind==0)
        {
            pos=ind-1;
            for(itr=0;itr<strlen(s);itr++)
                if(pos==itr)
                    printf("%c ",s[itr]);
        }
}

void max_vowel_or_consonant()//21 may
{
    char s[1000];
   int ind,vcount=0,ccount=0;
   printf("\n\n*******************************************************************************\nDESCRIPTION:\nThis program prints the characters of the string \nBased on the maximum count of vowels or consonants \n*******************************************************************************\n\n");
   printf("\nEnter the string : ");
   scanf("%s",s);
   for(ind=0;ind<strlen(s);ind++)
   {
        if(strchr("aeiou",s[ind])!=0)
            vcount++;
        else
            ccount++;
   }
   if(vcount>ccount)
   {
       printf("\nSince the string contains the maximum count of vowels\nvowels of the string are printed\n\n");
        for(ind=0;ind<strlen(s);ind++)
            if(strchr("aeiou",s[ind])!=0)
                printf("%c ",s[ind]);
   }
    else if(ccount>vcount)
    {
        printf("\nSince the string contains the maximum count of consonants\nconsonants of the string are printed\n\n");
        for(ind=0;ind<strlen(s);ind++)
            if(strchr("aeiou",s[ind])==0)
                printf("%c ",s[ind]);
    }
    else
    {
        printf("\nSince the string contains the same count of vowels and consonants\nThe complete string is printed\n\n");
        printf("%s",s);
    }
}

void check_even()//22 may
{
    int ind,f1=0,f2=0,f3=0,f4=0,f5=0;
    char s[1000];
    printf("\n\n*******************************************************************************\nDESCRIPTION:\nThis program prints YES when the entire string is vowel\nElse prints NO\n*******************************************************************************\n\n");
    printf("\nEnter the string : ");
    scanf("%s",&s);
    for(ind=0;ind<strlen(s);ind++)
    {
        if(s[ind]=='a')
            f1=1;
        if(s[ind]=='e')
            f2=1;
        if(s[ind]=='i')
            f3=1;
        if(s[ind]=='o')
            f4=1;
        if(s[ind]=='u')
            f5=1;
    }
    if(f1&&f2&&f3&&f4&&f5)
    {
        printf("Since all the characters present in the string are vowels : ");
        printf("YES");
    }
    else
    {
        printf("Since all the characters present in the string are not vowels : ");
        printf("NO");
    }
}

void N_characters_most_consonant() //26 may
{
    int n,cf=0,cl=0,ind;
    char s[1000];
    printf("\n\n*******************************************************************************\nDESCRIPTION:\nThis program divides the string into two halves based on N value\nAnd prints the half of the word which has more consonants\n*******************************************************************************\n\n");
    printf("\nEnter The String : ");
    scanf("%s",s);
    printf("\nEnter The Number : ");
    scanf("%d",&n);
    if(strlen(s)%2==0)
    {
        for(ind=0;ind<n;ind++)
            if(strchr("aeiou",s[ind])==0)
                cf++;
        for(ind=n;ind<strlen(s);ind++)
            if(strchr("aeiou",s[ind])==0)
                cl++;
        if(cf>cl)
        {
            printf("Since the maximum count of consonants are present\nIn the first half of the string the first half is printed : ");
            for(ind=0;ind<n;ind++)
                printf("%c",s[ind]);
        }
        else if(cl>cf)
        {
            printf("Since the maximum count of consonants are present\nIn the second half of the string the second half is printed : ");
            for(ind=n;ind<strlen(s);ind++)
                printf("%c",s[ind]);
        }
        else
        {
            printf("Since the string contains same count of consonants\nIn the both halves of the string the entire string is printed : ");
            printf("%s",s);
        }
    }
    if(strlen(s)%2!=0)
    {
         for(ind=0;ind<=n;ind++)
            if(strchr("aeiou",s[ind])==0)
                cf++;
        for(ind=n;ind<strlen(s);ind++)
            if(strchr("aeiou",s[ind])==0)
                cl++;
        if(cf>cl)
        {
            printf("Since the maximum count of consonants are present\nIn the first half of the string the first half is printed : ");
            for(ind=0;ind<=n;ind++)
                printf("%c",s[ind]);
        }
        else if(cl>cf)
        {
            printf("Since the maximum count of consonants are present\nIn the second half of the string the second half is printed : ");
            for(ind=strlen(s)-n;ind<strlen(s);ind++)
                printf("%c",s[ind]);
        }
        else
        {
            printf("Since the string contains same count of consonants\nIn the both halves of the string the entire string is printed : ");
            printf("%s",s);
        }
    }
}

void characters_at_multiples_of_x_reverse()//29 may
{
    char s[1000];
    int i,n,len;
    printf("\n\n*******************************************************************************\nDESCRIPTION:\nThis program prints the characters\nWhich are present at the positions of multiples of the Number\nin reverse order\n*******************************************************************************\n\n");
    printf("\nEnter the string : ");
    scanf("%s",s);
    printf("\nEnter the Number : ");
    scanf("%d",&n);
    len=strlen(s);
    printf("\nThe characters at the position of multiples of %d are : ",n);
    for(i=1;i<=len;i++)
        if(i%n==0)
            printf("%c ",s[i-1]);
}

void pattern_with_alphabet_and_star()//4 june
{
    int ind,itr,n,k;
    printf("\n\n*******************************************************************************\nDESCRIPTION:\nThis program prints the pattern using Alphabets and Stars\n*******************************************************************************\n\n");
    printf("\nEnter the no:of Rows : ");
    scanf("%d",&n);
    printf("\n");
    for(ind=1;ind<=n;ind++,printf("\n"))
    {
        k='a';
        for(itr=n;itr>=ind;itr--,k++)
            printf("%c ",k);
        for(itr=1;itr<=(2*ind)-1;itr++)
            printf("* ");
        for(itr=n;itr>=ind;itr--,k--)
            printf("%c",k-1);
    }
}

void second_half_and_first_half_of_vowels()//6 june
{
   int ind;
   char s[1000];
    printf("\n\n*******************************************************************************\nDESCRIPTION:\nThis program divides the string into two halves\nAnd prints the vowels present in second half\nFollowed by the vowels in the first half\n*******************************************************************************\n\n");
   printf("\nEnter the string : ");
   scanf("%s",s);
   printf("\n");
   for(ind=strlen(s)/2;ind<strlen(s);ind++)
        if(strchr("aeiou",s[ind])!=0)
            printf("%c",s[ind]);
   for(ind=0;ind<strlen(s)/2;ind++)
        if(strchr("aeiou",s[ind])!=0)
            printf("%c",s[ind]);
}

void atleast_one_uppercase_and_one_lowercase()//9 june
{
    int ind,c1=0,c2=0;
    char s[1000];
     printf("\n\n*******************************************************************************\nDESCRIPTION:\nThis program prints \"YES\" when the string contains \nAtleast one Uppercase and one Lowercase character\nElse \"NO\" is printed\n*******************************************************************************\n\n");
    printf("\nEnter the string : ");
    scanf("%s",s);
    for(ind=0;ind<strlen(s);ind++)
        if(strchr("aeiou",s[ind])!=0)
            c1++;
    for(ind=0;ind<strlen(s);ind++)
        if(strchr("AEIOU",s[ind])!=0)
            c2++;
    c1>=1&&c2>=1?printf("\nYES"):printf("\nNO");
}

void difference_count_of_two_strings()//10 june
{
  int ind,itr,count=0;
  char s1[1000],s2[1000];
  printf("\n\n*******************************************************************************\nDESCRIPTION:\nThis program prints the Difference count of the two strings\n*******************************************************************************\n\n");
  printf("\nEnter the Two strings with \"EQUAL LENGTH\"\n");
  printf("\nEnter the First string : ");
  scanf("%s",s1);
  printf("\nEnter the Second string : ");
  scanf("%s",s2);
  for(ind=0,itr=0;ind<strlen(s1);ind++,itr++)
        if(s1[ind]!=s2[itr])
            count++;
  printf("\nDifference count : %d\n",count);
}

void circular_string()//22 june
{
    int n,ind,itr,c=0;
    char arr[100];
    printf("\n\n*******************************************************************************\nDESCRIPTION:\nThis program prints the Alphabets or symbols in a circular triangular fashion\n*******************************************************************************\n\n");
    printf("\nEnter the no:of Rows : ");
    scanf("%d",&n);
    printf("\nEnter the Alphabets : ");
    scanf("%s",arr);
    for(ind=1;ind<=n;ind++,printf("\n"))
        for(itr=1;itr<=ind;itr++)
        {
            c=c%strlen(arr);
            printf("%c",arr[c]);
            c++;
        }
}
