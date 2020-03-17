
typedef struct Clientes{
  int key;
  char *value;


}Clientes;

typedef struct ClientesA{
   char a;
   int size;
   Clientes *arr;
   


}ClientesA;

typedef struct Produtos{
   char a;
   ClientesA *ca;
 


}Produtos;
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
void initP(Produtos *p);
Vendas* copiaV(FILE* f,Vendas *v);
char** verificaC(Vendas *v,ClientesA *c,char **e);
void switchs(char s[],char h[]);
char** verificaP(Vendas *v,Produtos *p,char **e);
int verificaCod(char **c,char *v);

char**  cop(FILE* fp);

char** retCP(char **v);
int verificaCP(char *cv,char **cp);

char ** retCC(char **v);
char ** guardaE(char ** v,char **p);
ClientesA* copiaS(FILE* f,ClientesA *ca);
char** split(char *p);
Produtos* copiaP(FILE* f,Produtos *p);

int consultaProdutos(char c, Produtos *p);
