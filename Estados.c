#include <stdio.h>

int main(void) {
char estado[2];
char AC[2], AL[2], AP[2], AM[2], BA[2], CE[2], DF[2], MT[2];
char MS[2], MG[2], PA[2], PB[2], PR[2], PE[2], PI[2], RJ[2];
char RN[2], RS[2], RO[2], RR[2], SC[2], SP[2], SE[2], TO[2];
char ES[2], GO[2], MA[2];  

printf("\t\t----Estados do Brasil----\n");

  printf("\n-Escolha a região-\n");
  printf("\nAcre - AC\nAlagoas - AL\nAmapa - AP\nAmazonas - AM");
  printf("\nBahia - BA\nCeara - CE\nDistrito Federal - DF");
  printf("\nEspirito Santo - ES\nGoias - GO\nMaranhao - MA");
  printf("\nMato Grosso - MT\nMato Grosso do Sul - MS\nMinas Gerais - MG");
  printf("\nPara - PA\nParaiba - PB\nParana - PR\nPernambuco - PE");
  printf("\nPiaui - PI\nRio de Janeiro - RJ\nRio Grande do Norte - RN");
  printf("\nRio Grande do Sul - RS\nRondonia - RO\nRoraima - RR");
  printf("\nSanta Catarina - SC\nSao Paulo - SP\nSergipe - SE");
  printf("\nTocantins - TO");
  printf("\nEstado: ");
  gets(estado);
  
  printf("\n\n");
  
  strcpy(AC,"AC"); strcpy(AL,"AL"); strcpy(AP,"AP"); strcpy(AM,"AM");
  strcpy(BA,"BA"); strcpy(CE,"CE"); strcpy(DF,"DF"); strcpy(MT,"MT");     
  strcpy(MS,"MS"); strcpy(MG,"MG"); strcpy(PA,"PA"); strcpy(PB,"PB");
  strcpy(PR,"PR"); strcpy(PE,"PE"); strcpy(PI,"PI"); strcpy(RJ,"RJ");
  strcpy(RN,"RN"); strcpy(RS,"RS"); strcpy(RO,"RO"); strcpy(RR,"RR");
  strcpy(SC,"SC"); strcpy(SP,"SP"); strcpy(SE,"SE"); strcpy(TO,"TO");
  strcpy(GO,"GO"); strcpy(ES,"ES"); strcpy(MA,"MA");  

  if(strcmp(estado,AC) == 0){
            printf("Acre - Rio Branco: Regiao Norte");          
          }
  else if(strcmp(estado,AL) == 0){
            printf("Alagoas - Maceio: Regiao Nordeste");          
          }
  else if(strcmp(estado,AP) == 0){
            printf("Amapa - Macapa: Regiao Norte");          
          }
  else if(strcmp(estado,AM) == 0){
            printf("Amazonas - Manaus: Regiao Norte");          
          }
  else if(strcmp(estado,BA) == 0){
            printf("Bahia - Salvador: Regiao Nordeste");          
          }
  else if(strcmp(estado,CE) == 0){
            printf("Ceara - Fortaleza: Regiao Nordeste");          
          }
  else if(strcmp(estado,DF) == 0){
            printf("Distrito Federal - Brasilia: Regiao Centro-Oeste");
          }
  else if(strcmp(estado,MT) == 0){
            printf("Mato Grosso - Cuiaba: Regiao Centro-Oeste");          
          }
  else if(strcmp(estado,MS) == 0){
            printf("Mato Grosso do Sul - Campo Grande: Regiao Centro-Oeste");          
          }
  else if(strcmp(estado,MG) == 0){
            printf("Minas Gerais - Belo Horizonte: Regiao Sudeste");   
          }
  else if(strcmp(estado,PA) == 0){
            printf("Para - Belem: Regiao Norte");          
          }
  else if(strcmp(estado,PB) == 0){
            printf("Paraiba - Joao Pessoa: Regiao Nordeste");          
        }
  else if(strcmp(estado,PE) == 0){
            printf("Pernambuco - Recife: Regiao Nordeste");          
          }
  else if(strcmp(estado,PR) == 0){
            printf("Paraná - Curitiba: Regiao Sul");          
          }
  else if(strcmp(estado,RJ) == 0){
            printf("Rio de Janeiro - Rio de Janeiro: Regiao Sudeste");
          }
  else if(strcmp(estado,RN) == 0){
            printf("Rio Grande do Norte - Natal: Regiao Nordeste"); 
          }
  else if(strcmp(estado,RO) == 0){
            printf("Rondonia - Porto Velho: Regiao Norte");          
          }
  else if(strcmp(estado,RR) == 0){
            printf("Roraima - Boa Vista: Regiao Norte");          
          }
  else if(strcmp(estado,RS) == 0){
            printf("Rio Grande do Sul - Porto Alegre: Regiao Sul"); 
          }
  else if(strcmp(estado,SC) == 0){
            printf("Santa Catarina - Florianopolis: Regiao Sul");          
          }
  else if(strcmp(estado,SE) == 0){
            printf("Sergipe - Aracaju: Regiao Nordeste");          
          }
  else if(strcmp(estado,SP) == 0){
            printf("Sao Paulo - Sao Paulo: Regiao Sudeste");          
          }
  else if(strcmp(estado,TO) == 0){
            printf("Tocantins - Palmas: Regiao Norte");          
          }
  else if(strcmp(estado,GO) == 0){
            printf("Goias - Goiania: Regiao Centro-Oeste");          
          }
  else if(strcmp(estado,ES) == 0){
            printf("Espirito Santo - Vitoria: Regiao Sudeste");          
          }
  else if(strcmp(estado,MA) == 0){
            printf("Maranhao - Sao Luis: Regiao Nordeste");          
          }
  else if(strcmp(estado,PI) == 0){
            printf("Piaui - Teresina: Regiao Nordeste");          
          }  
  else{
      printf("Estado Inexistente");          
          }
  
  return 0;
}
