#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include<iostream>
using namespace std;

int main()
{
    printf("#########################  VOTING PROCESS WORLDWIDE  ###########################\n");
        FILE *in1,*in2,*in3,*in4,*in5,*in6,*in7,*in8,*in9;
        char evm[99999],in[99999],mvm[99999],mmb[99999],pc[99999],oth[99999],noinfo[99999],novote[99999],t[9];
        printf("                         ELECTRONIC VOTING MACHINE(EVM)\n");
        printf("                              INTERNET VOTING(INT)\n");
        printf("                          MECHANICAL VOTING MACHINE(MVM)\n");
        printf("                         MANUALLY MAKING OF BALLOTS(MMB)\n");
        printf("                               PUNCH CARD(PC)\n");
        printf("                                OTHERS(OTH)\n");
        printf("                            NO INFORMATION! (NOINFO)\n");
        printf("                            NOT APPLICABLE! (NOVOTE)\n");
        printf("\n================================================================================\n================================================================================\n");
        printf("Enter your choice in short: (EVM,INT,MVM,MMB,PC,OTH,NOINFO,NOVOTE)\n");
        printf("(UPPER case latters only)\nTo stop this program type END \n");
    while(1)
    {
        gets(t);
        if(strcmp(t,"EVM")==0)
        {
            printf("\nFollowing countries have EVM\n\n");
            in1 = fopen("EVM.txt","r");
            while(!feof(in1))
           {
                fgets(evm,99999,in1);
                //puts(evm);
                cout<<evm;
           }
            printf("\n\nEnter next choice: (EVM,INT,MVM,MMB,PC,OTH,NOINFO,NOVOTE) \n");
        }
        else if(strcmp(t,"INT")==0)
        {
            printf("\nFollowing countries have INT\n\n");
            in2 = fopen("INT.txt","r");
            while(!feof(in2))
            {
                fgets(in,99999,in2);
                //puts(in);
                cout<<in;
            }
            printf("\n\nEnter next choice: (EVM,INT,MVM,MMB,PC,OTH,NOINFO,NOVOTE) \n");
        }
         else if(strcmp(t,"MVM")==0)
        {
            printf("\nFollowing countries have MVM\n\n");
            in3 = fopen("MVM.txt","r");
            while(!feof(in3))
           {
                fgets(mvm,99999,in3);
                //puts(mvm);
                cout<<mvm;
           }
            printf("\n\nEnter next choice: (EVM,INT,MVM,MMB,PC,OTH,NOINFO,NOVOTE) \n");
        }
         else if(strcmp(t,"MMB")==0)
        {
            printf("\nFollowing countries have MMB\n\n");
            in4 = fopen("MMB.txt","r");
            while(!feof(in4))
            {
                fgets(mmb,99999,in4);
                //puts(mmb);
                cout<<mmb;
            }
            printf("\n\nEnter next choice: (EVM,INT,MVM,MMB,PC,OTH,NOINFO,NOVOTE) \n");
        }
          else if(strcmp(t,"PC")==0)
        {
            printf("\nFollowing country has PC\n\n");
            in9 = fopen("PC.txt","r");
            while(!feof(in9))
            {
                fgets(pc,99999,in9);
                //puts(mmb);
                cout<<pc;
            }
            printf("\n\nEnter next choice: (EVM,INT,MVM,MMB,PC,OTH,NOINFO,NOVOTE) \n");
        }
         else if(strcmp(t,"OTH")==0)
        {
            printf("\nFollowing countries have Other Process\n\n");
            in5 = fopen("OTH.txt","r");
            while(!feof(in5))
           {
                fgets(oth,99999,in5);
               // puts(oth);
                cout<<oth;
           }
            printf("\n\nEnter next choice: (EVM,INT,MVM,MMB,PC,OTH,NOINFO,NOVOTE) \n");
        }
         else if(strcmp(t,"NOINFO")==0)
        {
            printf("\nWe have no info on following countries\n\n");
            in6 = fopen("NOINFO.txt","r");
            while(!feof(in6))
            {
                fgets(noinfo,99999,in6);
                //puts(noinfo);
                cout<<noinfo;
            }
            printf("\n\nEnter next choice: (EVM,INT,MVM,MMB,PC,OTH,NOINFO,NOVOTE) \n");
        }
         else if(strcmp(t,"NOVOTE")==0)
        {
            printf("\nFollowing countries don't have any voting system\n\n");
            in7 = fopen("NOVOTE.txt","r");
            while(!feof(in7))
           {
                fgets(novote,999,in7);
                //puts(novote);
                cout<<novote;
           }
            printf("\n\nEnter next choice: (EVM,INT,MVM,MMB,PC,OTH,NOINFO,NOVOTE) \n");
        }
        else if(strcmp(t,"END")==0) break;
        else
        {
            printf("\nSorry,the keyword is not correct!\n");
            printf("Please try again : (EVM,INT,MVM,MMB,PC,OTH,NOINFO,NOVOTE) \n");
        }
    }
    return 0;
}

