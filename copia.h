
typedef struct Clientes{
  int key;
  char *value;


}Clientes;

typedef struct ClientesA{
   char a;
   int size;
   Clientes *arr;
   


}ClientesA;
void initC(ClientesA *a);

char* switchs(char *s);

int verificaCod(char **c,char *v);

char**  cop(FILE* fp);

char** retCP(char **v);
int verificaCP(char *cv,char **cp);

char ** retCC(char **v);
char ** guardaE(char ** v,char **p);
ClientesA* copiaS(FILE* f);
