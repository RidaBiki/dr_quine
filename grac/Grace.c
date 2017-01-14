#include <stdio.h>
#define fake main
/*premier commentaire*/
#define Q(x) int fake(){FILE *fp = fopen("Grace_kid.c", "w");fprintf(fp, "#include <stdio.h>\n#define fake main\n/*premier commentaire*/\n#define Q(x) %s\nQ(%s);\n", #x, #x);fclose(fp);return(0);}
Q(int fake(){FILE *fp = fopen("Grace_kid.c", "w");fprintf(fp, "#include <stdio.h>\n#define fake main\n/*premier commentaire*/\n#define Q(x) %s\nQ(%s);\n", #x, #x);fclose(fp);return(0);});
