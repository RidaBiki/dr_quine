#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i = 1;
#define Q(x) int main(){if(i>0){i--;char file[100];char exfile[100];sprintf(exfile, "Sully_%i ",i);sprintf(file, "Sully_%i.c", i);FILE *fp = fopen(file, "w");fprintf(fp, "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\nint i = %i;\n#define Q(x) %s\nQ(%s);\n", i--, #x, #x);fclose(fp);char cmd[100];strcat(cmd, "gcc -Wall -Wextra -Werror -o ");strcat(cmd, exfile);strcat(cmd, file);strcat(cmd, " && ./");strcat(cmd, exfile);printf("%s\n", cmd);system(cmd);}return (0);}
Q(int main(){if(i>0){i--;char file[100];char exfile[100];sprintf(exfile, "Sully_%i ",i);sprintf(file, "Sully_%i.c", i);FILE *fp = fopen(file, "w");fprintf(fp, "#include <stdio.h>\n#include <stdlib.h>\n#include <string.h>\nint i = %i;\n#define Q(x) %s\nQ(%s);\n", i--, #x, #x);fclose(fp);char cmd[100];strcat(cmd, "gcc -Wall -Wextra -Werror -o ");strcat(cmd, exfile);strcat(cmd, file);strcat(cmd, " && ./");strcat(cmd, exfile);printf("%s\n", cmd);system(cmd);}return (0);});
