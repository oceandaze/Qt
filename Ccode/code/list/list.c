#include <stdio.h>
#include <io.h>

int main (void)
{
  _finddata_t fileDir;
 
 
  long lfDir;
 
 
  if((lfDir = _findfirst(dir,&fileDir))==-1l)
    printf("No file is found\n");
  else{
    printf("file list:\n");
    do{
      printf("%s\n",fileDir.name);
    }while( _findnext( lfDir, &fileDir ) == 0 );
  }
  _findclose(lfDir);
 
 
  return 0;
}