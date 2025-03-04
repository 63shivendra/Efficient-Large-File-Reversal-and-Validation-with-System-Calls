#include <stdio.h>
#include<bits/stdc++.h> 
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <ctime>
using namespace std;
int remblocks=0;
int totalblocks=0;
char buffer[40];
int main ( int assign, char  *strings[] ) 
{  


    int flag;
    flag= stoll(strings[2]) ;


            if(flag==0){

int  h= open(strings[1],O_RDWR,0707);
read( h,  buffer, sizeof(buffer));

struct stat filedetails;



stat(strings[1],&filedetails);
 int fileofsize=filedetails.st_size;
 mkdir("ASSIGNMENT1",0707);
 string s2="ASSIGNMENT1/0_";
 s2 = s2 + strings[1];
 int i=open(s2.c_str(),O_RDWR | O_CREAT,00400 | 00200 | 00100);
 int index=0;
 int f=fileofsize/40;
 int mod=fileofsize%40;
 int nef=f;
 cout<<f<<endl;
 int cnt=0;
 for(int j =0;j<f;j++)
 {
     index=index-40;
     lseek(h,index,SEEK_END);


     int n =read(h,buffer,40);

             for(int i =0;i<n/2;i++)
                             {  cnt=cnt+2;
                                 swap(buffer[i],buffer[n-i-1]);
    
                             }
     write(i,buffer,40);
    
     cout<< "PROGRESS"<<" "<<cnt /double(fileofsize) * 100 <<'\r';
     sleep(1);
          fflush(stdout); 
 }

 int pointermod= fileofsize - f*40;
 char buff[pointermod];
 lseek(h,0,SEEK_SET);
 int m=read(h,buff,pointermod);

 for(int i =0;i<m/2;i++)
 {

 swap(buff[i],buff[m-i-1]);
 }
 write(i,buff,pointermod); 
            }
///////////////////////////////////////
///////////////////////////////////////
// make a directory and renaming of file according with the question//////////////////////////////////////
/////////////////////////////////////

 if(flag==1){
 int start,end;
//cin >> start >> end;
start =stoll(strings[3]);
end=stoll(strings[4]);
int q;
int n1=open(strings[1],O_RDWR);
read(n1,buffer,sizeof(buffer));
string file_name = strings[1];
 q=mkdir("ASSIGNMENT1",0707);
 cout<<q<<endl;
string p1 = "ASSIGNMENT1/1_"+file_name;
const char* path = p1.c_str();
int  n2= open(path,O_RDWR | O_CREAT ,0707);


cout<<n1<<endl;
int curr=lseek(n1,start,SEEK_SET);

while(curr>=0)
{    
    
    if(curr-40>=0)

  { 
    lseek(n1,-40,SEEK_CUR);
    read(n1,buffer,40);
    
    for(int i =0;i<40/2;i++)
                            
                            {  
                                swap(buffer[i],buffer[40-i-1]);
    
                            }
        write(n2,buffer,40);
        curr-=40;

        

  }
     

      else      {

        lseek(n1,-curr,SEEK_CUR);
        int  n3 = read(n1,buffer,curr);

        for(int i =0;i<curr/2;i++)
                            {  
                                swap(buffer[i],buffer[curr-i-1]);
    
         
                            }
            write(n2,buffer,curr);
            curr=-1;

      }
}

curr=lseek(n1,start,SEEK_SET);
while(curr<end)

{
    if(end - curr >=sizeof(buffer))
    {
        read(n1,buffer,sizeof(buffer));
        write(n2,buffer,sizeof(buffer));
        curr =curr + sizeof(buffer);
    }

    else    
    {  
            read(n1,buffer,end-curr);
            write(n2,buffer,end-curr);
            curr=end+1;

    }
}

///// THE LAST PART  //////

curr=lseek(n1,0,SEEK_END);
cout<<curr;
while(curr >=end )
{ 

    if(curr-end >= sizeof(buffer))
    {   curr=curr-sizeof(buffer);
        lseek(n1,curr,SEEK_SET);
        read(n1,buffer,sizeof(buffer));


        for(int i =0;i<40/2;i++)
           { swap(buffer[i],buffer[40-i-1]);}
        write(n2,buffer,sizeof(buffer));                  
    }

else    
{
    lseek(n1,end,SEEK_SET);
    int n4= read(n1,buffer,curr-end);
     for(int i =0;i<n4/2;i++)
                            {  
                                swap(buffer[i],buffer[n4-i-1]);
    
         
                            }
  write(n2,buffer,n4);
  curr=end-1;


}
} }
}


