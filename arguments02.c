#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  int opt;
  while((opt = getopt(argc, argv, "if:lrp:")) != -1){
    
    switch(opt){
    case 'i':
    case 'l':
    case 'r':
      printf("option: %c\n", opt);
      break;
    case 'f':
      printf("filename: %s\n", optarg);
      break;
    case ':':
      printf("option needs a value\n");
      break;
    case '?':
      printf("unknow option: %c\n", optopt);
      break;
    }
  }
  for( ; optind < argc; optind++){
    printf("%d\n",optind);
    printf("argument: %s\n", argv[optind]);    
  }

  return 1;
}
