
typedef struct Clientes{
  int key;
  char *value;


}Clientes;

typedef struct ClientesA{
   char a;
   int size;
   Clientes *arr;
   


}ClientesA;

typedef struct Vendas{

  char *codP;
  float preco;
  int unidades;
  char tc;
  char *codC;
  int mes;
  int filial;
 }Vendas;
void initC(ClientesA *a);
Vendas* copiaV(FILE* f);
char** verificaC(Vendas *v,ClientesA *c);
void switchs(char s[],char h[]);

int verificaCod(char **c,char *v);

char**  cop(FILE* fp);

char** retCP(char **v);
int verificaCP(char *cv,char **cp);

char ** retCC(char **v);
char ** guardaE(char ** v,char **p);
ClientesA* copiaS(FILE* f);
char** split(char *p);
