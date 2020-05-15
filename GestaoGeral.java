package compila;

import java.io.*;
import java.util.*;

// Classe que guarda toda a informacao do sistema é basicamente o sgv do projeto de C

    public class GestaoGeral implements java.io.Serializable {

        private CatalogoProdutos catalogoProdutos;
        private CatalogoClientes catalogoClientes;
        private TodasFaturacoes faturacaoGlobal;
        private Filial vendasFilial1;
        private Filial vendasFilial2;
        private Filial vendasFilial3;

        //construtor parametrizado
        public GestaoGeral(){
            this.catalogoProdutos = new CatalogoProdutos();
            this.catalogoClientes = new CatalogoClientes();
            this.faturacaoGlobal = new TodasFaturacoes();
            this.vendasFilial1 = new Filial();
            this.vendasFilial2 = new Filial();
            this.vendasFilial3 = new Filial();
        }

        //construtor parametrizado
        public GestaoGeral(CatalogoProdutos catalogoProdutos, CatalogoClientes catalogoClientes, TodasFaturacoes faturacao, Filial vendasFilial1, Filial vendasFilial2, Filial vendasFilial3, ArrayList<Integer> comprasMes, int vendasErradas) {
            this.catalogoProdutos = catalogoProdutos;
            this.catalogoClientes = catalogoClientes;
            this.faturacaoGlobal = faturacao;
            this.vendasFilial1 = vendasFilial1;
            this.vendasFilial2 = vendasFilial2;
            this.vendasFilial3 = vendasFilial3;
        }

        //construtor com objetos
        public GestaoGeral(GestaoGeral h){
            this.catalogoProdutos = h.getCatalogoProdutos();
            this.catalogoClientes = h.getCatalogoClientes();
            this.faturacaoGlobal = h.getFaturacao();
            this.vendasFilial1 = h.getVendasFilial1();
            this.vendasFilial2 = h.getVendasFilial2();
            this.vendasFilial3 = h.getVendasFilial3();
        }


        //getters
        public CatalogoProdutos getCatalogoProdutos() {
            return catalogoProdutos;
        }

        public CatalogoClientes getCatalogoClientes() {
            return catalogoClientes;
        }

        public TodasFaturacoes getFaturacao() {
            return faturacaoGlobal;
        }

        public Filial getVendasFilial1() {
            return vendasFilial1;
        }

        public Filial getVendasFilial2() {
            return vendasFilial2;
        }

        public Filial getVendasFilial3() {
            return vendasFilial3;
        }

        //setters
        public void setCatalogoProdutos(CatalogoProdutos catalogoProdutos) {
            this.catalogoProdutos = catalogoProdutos;
        }

        public void setCatalogoClientes(CatalogoClientes catalogoClientes) {
            this.catalogoClientes = catalogoClientes;
        }

        public void setFaturacao(TodasFaturacoes faturacaoGlobal) {
            this.faturacaoGlobal = faturacaoGlobal;
        }

        public void setVendasFilial1(Filial vendasFilial1) {
            this.vendasFilial1 = vendasFilial1;
        }

        public void setVendasFilial2(Filial vendasFilial2) {
            this.vendasFilial2 = vendasFilial2;
        }

        public void setVendasFilial3(Filial vendasFilial3) {
            this.vendasFilial3 = vendasFilial3;
        }





        public void carrega(){

            loadPr("../docs/Clientes.txt");
            loadCl("../docs/Produtos.txt");
            loadV("../docs/Vendas1M.txt");

        }

        public void loadPr(String path){


            try{
                BufferedReader le = new BufferedReader(new FileReader(path));
                String linha=null;
                while((linha=le.readLine())!=null){

                    Produto c=new Produto(linha);
                    catalogoProdutos.addProduto(c);

                }

            }catch (IOException e){e.printStackTrace();}
        }



        public void loadCl(String path){


            try{
                BufferedReader le = new BufferedReader(new FileReader(path));
                String linha=null;
                while((linha=le.readLine())!=null){

                    Cliente c=new Cliente(linha);
                    catalogoClientes.addCliente(c);

                }

            }catch (IOException e){e.printStackTrace();}
        }


        public void loadV(String path){

            try{
                BufferedReader le = new BufferedReader(new FileReader(path));
                String linha=null;
                while((linha=le.readLine())!=null){
                    String[] arr=linha.split(" ");
                    double pr=Double.parseDouble(arr[1]);
                    int u = Integer.parseInt(arr[2]);
                    char m=arr[3].charAt(0);
                    int me = Integer.parseInt(arr[5]);
                    int f= Integer.parseInt(arr[6]);
                    Vendas v= new Vendas(arr[0],pr,u,m,arr[4],me,f);

                    if(f==1){

                    }else if(f==2){

                    }else if (f==3){

                    }


                }

            }catch (IOException e){e.printStackTrace();}
        }




    }
