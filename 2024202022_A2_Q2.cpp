#include <stdio.h>
#include<bits/stdc++.h> 
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <ctime>
using namespace  std;
 // namespace  
int main(int arg_no, char *args[]) {
    struct stat stats_old, stats_new, stats_dir;
    char *newfile = args[1];
    char *oldfile = args[2];
    char *dir = args[3];
  int new1 = 1, old = 1, drr = 1;

string file_name1 = args[1];
string p1 = args[1];
const char* path = p1.c_str();
int nf1 = open(path,O_RDWR | O_CREAT ,0707);

string file_name2 = args[2];
string p2 = args[2];
const char* path2 = p2.c_str();
int nf2 = open(path,O_RDWR | O_CREAT ,0707);
cout<<nf1<<nf2;
struct stat filedetails1;
struct stat filedetails2;

//stat("/home/hexlive63/CODE AOS c++/a.txt",&filedetails1);
 //int fileofsize1=filedetails1.st_size;
 stat(path2,&filedetails2);
 int fileofsize2=filedetails2.st_size;
 stat(path,&filedetails1);
 int fileofsize1=filedetails1.st_size;
char buffer1[fileofsize1];
char buffer2[fileofsize1];

if (fileofsize1!=fileofsize2){
    perror("FILES ARE NOT SAME");
    
}
    int index1=0;
    int index2=0;
    int f=-1;
    int mod=fileofsize1%fileofsize1;
    int nef=f;
    cout<<f<<endl;
    int cnt=0,i,j;
    lseek(nf2,fileofsize1-1,SEEK_SET);
    for(int j =0;j<f;j++)
    {
        index1=index1-10;
        index2+=10; 
        lseek(nf1,index1,SEEK_END);
       // cout<<buffer2<<endl;

        int n1 =read(nf1,buffer1,10);
        int n2= read(nf2,buffer2,10);
        lseek(nf2,index2,SEEK_CUR);
        //check_buffer(buffer1, buffer2, 40);
        i=0;
        j=10-1;
                    cout<< buffer2[1]<<buffer2[8]<<endl;

        while(i<10 && j>=0){
            if (buffer1[i]!=buffer2[j]) {
                cout<<"files are not reversed1"<<"\n";
            
                exit(0);
            }
            i++;
            j--;
        } 
    //lseek(nf2,index2,SEEK_CUR);  
}

        int pointermod= fileofsize1 - f*10;
        char buff1[pointermod];
        char buff2[pointermod];
        lseek(nf1,index1,SEEK_END);
        lseek(nf2,index2,SEEK_SET);

        int m1=read(nf1,buff1,pointermod);
        int m2=read(nf2,buff2,pointermod);

        // if(m1!=m2) {
        //     cout<<"files are not reversed2"<<m1<<"\n";
        //     exit(0);
        // }
        i=0;
        j=m2-1;
        while(i<m1 && j>=0){
            if (buff1[i]!=buff2[j]) {
                cout<<"files are not reversed3"<<"\n";
            
                exit(0);
            }
            i++;
            j--;
        }  
    cout<<"files are reversed"<<"\n";  
         








    if (stat(oldfile, &stats_old) == -1) {
        perror("Error :: old file does not exist");
        old = 0;
    }
    if (stat(newfile, &stats_new) == -1) {
        perror("Error :: new file does not exist");
        new1= 0;
    }
  

    if (stat(dir, &stats_dir) == 0 && (S_IFDIR & stats_dir.st_mode)) {
        char message[100];
        int size = sprintf(message, "Directory is created: Yes\n");
        write(1, message, size);

    } else {
        char message[100];
        int size = sprintf(message, "Directory is created: No\n");
        write(1, message, size);
    }
    if(stats_new.st_mode & S_IRUSR)
    {
        cout << "USER HAS READ PERMISSION ON NEW FILE :"<<"YES"<<endl;
    }
    else{
        cout << "USER HAS READ PERMISSION ON NEW FILE :"<<"NO"<<endl;

    }
    if(stats_new.st_mode & S_IWUSR)
    {
        cout << "USER HAS WRITE PERMISSION ON NEW FILE :"<<"YES"<<endl;
    }
    else
    {
        cout <<"USER HAS WRITE PERMISSION ON NEW FILE :"<<"NO"<<endl;

    }
    if(stats_new.st_mode & S_IXUSR)
    {
        cout<<"USER HAS EXECUTE PERMISSION ON NEW FILE :"<<"YES"<<endl;
    }
    else{
        cout<<"USER HAS EXECUTE PERMISSION ON NEW FILE :"<<"NO"<<endl;
    }
    if(stats_new.st_mode & S_IRGRP)
    {
        cout<<"GROUP HAS READ PERMISSION ON NEW FILE : "<<"YES"<<endl;

    }
    else{
        cout<<"GROUP HAS READ PERMISSION ON NEW FILE : "<<"NO"<<endl;
    }
    if(stats_new.st_mode & S_IWGRP)
    {
        cout<<"GROUP HAS WRITE PERMISSION ON NEW FILE :"<<"YES"<<endl;

    }
    else{
        cout<<"GROUP HAS WRITE PERMISSION ON NEW FILE :"<<"NO"<<endl;
    }
    if(stats_new.st_mode & S_IXGRP)
    {
        cout<<"GROUP HAS EXECUTE PERMISSION ON NEW FILE :"<<"YES"<<endl;
    }
    else{
        cout<<"GROUP HAS EXECUTE PERMISSION ON NEW FILE :"<<"NO"<<endl;
    }
    if(stats_new.st_mode & S_IROTH)
    {
        cout<<"OTHERS HAS READ PERMISSION ON NEW FILE :"<<"YES"<<endl;
    }
    else
    {
        cout<<"OTHERS HAS READ PERMISSION ON NEW FILE :"<<"NO"<<endl;
    }
    if(stats_new.st_mode & S_IWOTH)
    {
        cout<<"OTHERS HAS WRITE PERMISSION ON NEW FILE : "<<"YES"<<endl;
    }
    else
    {
        cout<<"OTHERS HAS WRITE PERMISSION ON NEW FILE :"<<"NO"<<endl;
    } 
    if(stats_new.st_mode & S_IXOTH)
    {
        cout<<"OTHERS HAS EXECUTE PERMISSION ON NEW FILE :"<<"YES"<<endl;
    }
    else
    {
        cout<<"OTHERS HAS EXECUTE PERMISSION ON NEW FILE :"<<"NO"<<endl;
    }
    if(stats_old.st_mode & S_IRUSR)
    {
        cout<<"USER HAS READ PERMISSION ON OLD FILE :"<<"YES"<<endl;
    }
    else
    {
        cout<<"USER HAS READ PERMISSION ON OLD FILE :"<<"NO"<<endl;
    }
    if(stats_old.st_mode & S_IWUSR)
    {
        cout<<"USER HAS WRITE PERMISSION ON OLD FILE :"<<"YES"<<endl;
    }
    else
    {
            cout<<"USER HAS WRITE PERMISSION ON OLD FILE :"<<"NO"<<endl;
    }
    if(stats_old.st_mode & S_IXUSR)
    {
        cout<<"USER HAS EXECUTE PERMISSION ON OLD FILE :"<<"YES"<<endl;
    }
    else
    {
        cout<<"USER HAS EXECUTE PERMISSION ON OLD FILE :"<<"NO"<<endl;
    }
    if(stats_old.st_mode & S_IRGRP)
    {
        cout<<"GROUP HAS READ PERMISSION ON OLD FILE :"<<"YES"<<endl;
    }
    else
    {
        cout<<"GROUP HAS READ PERMISSION ON OLD FILE :"<<"NO"<<endl;
    }
    if(stats_old.st_mode & S_IWGRP)
    {
        cout<<"GROUP HAS WRITE PERMISSION ON OLD FILE :"<<"YES"<<endl;
    }
    else
    {
        cout<<"GROUP HAS WRITE PERMISSION ON OLD FILE :"<<"NO"<<endl;
    }
    if(stats_old.st_mode & S_IXGRP)
    {
        cout<<"GROUP HAS EXECUTE PERMISSION ON OLD FILE :"<<"YES"<<endl;
    }
    else
    {
        cout<<"GROUP HAS EXECUTE PERMISSION ON OLD FILE :"<<"NO"<<endl;
    }
    if(stats_old.st_mode & S_IROTH)
    {
        cout<<"OTHERS HAS READ PERMISSION ON OLD FILE :"<<"YES"<<endl;
    }
    else
    {
        cout<<"OTHERS HAS READ PERMISSION ON OLD FILE :"<<"NO"<<endl;
    }
if(stats_old.st_mode & S_IWOTH)
{
    cout<<"OTHERS HAS WRITE PERMISSION ON OLD FILE :"<<"YES"<<endl;
}

else
{
    cout<<"OTHERS HAS WRITE PERMISSION ON OLD FILE :"<<"NO"<<endl;
}
if(stats_old.st_mode & S_IXOTH)
{
    cout<<"OTHERS HAS EXECUTE PERMISSION ON OLD FILE :"<<"YES"<<endl;
}

else
{
    cout<<"OTHERS HAS EXECUTE PERMISSION ON OLD FILE :"<<"NO"<<endl;
}




    if(stats_dir.st_mode & S_IRUSR)
    {
        cout<<"USER HAS READ PERMISSION ON DIRECTORY :"<<"YES"<<endl;
    }
    else
    {
        cout<<"USER HAS READ PERMISSION ON DIRECTORY :"<<"NO"<<endl;
    }
    if(stats_dir.st_mode & S_IWUSR)
    {
        cout<<"USER HAS WRITE PERMISSION ON DIRECTORY :"<<"YES"<<endl;
    }
    else{
        cout<<"USER HAS WRITE PERMISSION ON DIRECTORY :"<<"NO"<<endl;
    }
    if(stats_dir.st_mode & S_IXUSR)
    {
        cout<<"USER HAS EXECUTE PERMISSION ON DIRECTORY :"<<"YES"<<endl;
    }
    else
    {
        cout<<"USER HAS EXECUTE PERMISSION ON DIRECTORY :"<<"NO"<<endl;
    }
    if(stats_dir.st_mode & S_IRGRP)
    {
        cout<<"GROUP HAS READ PERMISSION ON DIRECOTRY :"<<"YES"<<endl;
    }
    else
    {
        cout<<"GROUP HAS READ PERMISSION ON DIRECTORY :"<<"NO"<<endl;
    }
    if(stats_dir.st_mode & S_IWGRP)
    {
        cout<<"GROUP HAS WRITE PERMISSION ON DIRECTORY :"<<"YES"<<endl;
    }
    else
    {
        cout<<"GROUP HAS WRITE PERMISSION ON DIRECTORY :"<<"NO"<<endl;
    }
    if(stats_dir.st_mode & S_IXGRP)
    {
        cout<<"GROUP HAS EXECUTE PERMISSION ON DIRECTORY :"<<"YES"<<endl;
    }
    else{
        cout<<"GROUP HAS EXECUTE PERMISSION ON DIRECTORY: "<<"NO"<<endl;
    }
    if(stats_dir.st_mode & S_IROTH)
    {
        cout<<"OTHERS HAS READ PERMISSION ON DIRECTORY :"<<"YES"<<endl;
    }
    else
    {
        cout<<"OTHERS HAS READ PERMISSION ON DIRECTORY :"<<"NO"<<endl;
    }
    if(stats_dir.st_mode & S_IWOTH)
    {
        cout<<"OTHERS HAS WRITE PERMISSION ON DIRECTORY :"<<"YES"<<endl;
    }
    else
    {
        cout<<"OTHERS HAS WRITE PERMISSION ON DIRECTORY :"<<"NO"<<endl;
    }
    if(stats_dir.st_mode & S_IXOTH)
    {
        cout<<"OTHERS HAS EXECUTE PERMISSION ON DIRECTORY :"<<"YES"<<endl;
    }
    else
    {
        cout<<"OTHERS HAS EXECUTE PERMISSION ON DIRECOTRY :"<<"NO"<<endl;
    }



}

    