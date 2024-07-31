#include <stdio.h>
#include <stdlib.h>
#include "baslik.h.txt"
#include "menu.h.txt"
#include "telara.h.txt"
#include "telekle.h.txt"
#include "tellist.h.txt"
#include "no ara.h.txt"
#include "soyara.h.txt"






int main()
{


menu();
int secim,sayi;
char isimara[20];
int telsay;
int sec;

do{

printf("\nyapmak istediginiz islemi seciniz:\n");
scanf("%d",&secim);
switch(secim)
{


case 1:
    if(telekle()==0)
        printf("\ntelefon dogru bir sekilde eklendi.\n");
    else
     printf("telefon dogru bir sekilde eklenemedi.\n");
     break;
case 2: if(tellist()==0)
        printf("\ntelefon dogru bir sekilde listelendi.\n");
    else
     printf("telefon dogru bir sekilde listelenemedi.\n");

    break;
case 3:
    printf("neye gore arama yapmak istersin(1.isim 2.soyisim 3.tel no)");
    scanf("%d",&sec);
    if(sec==1)
    {
        printf("aranacak kisinin ismini giriniz:");
        scanf("%s",&isimara);
        int isimsayi=telara(isimara);
    if(sayi==0)
        printf("\naranan kisi bulunamadi.\n");
    else
     printf("%d kisi bulundu\n",isimsayi);

    }
    else if(sec==2)
    {
           printf("aranacak kisinin soyadini giriniz:");
        scanf("%s",&isimara);
        int isimsayi=soyara(isimara);
    if(sayi==0)
        printf("\naranan kisi bulunamadi.\n");
    else
     printf("%d kisi bulundu\n",isimsayi);

    }
    else if(sec==3)
    {
           printf("aranacak kisinin telefon numarasini giriniz:");
        scanf("%s",&isimara);
        int isimsayi=noara(isimara);
    if(sayi==0)
        printf("\naranan kisi bulunamadi.\n");
    else
     printf("%d kisi bulundu\n",isimsayi);

    }
    else
        printf("yanlis giris yaptiniz!");


     break;
case 4:printf("\ncikis yaptiniz.hosca kalin\n");
      return 0;
      break;
 default:printf("lutfen(1-4)arasi bir secim yapiniz\n");
}



}while(secim!=4);


return 0;



}









/*


int main()
{
menu();
int secim,sayi;
char isimara[20];
int telsay;

do{

printf("\nyapmak istediginiz islemi seciniz:\n");
scanf("%d",&secim);
switch(secim)
{


case 1:
    if(telekle()==0)
        printf("\ntelefon dogru bir sekilde eklendi.\n");
    else
     printf("telefon dogru bir sekilde eklenemedi.\n");
     break;
case 2: if(tellist()==0)
        printf("\ntelefon dogru bir sekilde listelendi.\n");
    else
     printf("telefon dogru bir sekilde listelenemedi.\n");

    break;
case 3:
    printf("aranacak ismi giriniz:");
    scanf("%s",isimara);

int isimsayi=telara(isimara);
    if(sayi==0)
        printf("\naranan kisi bulunamadi.\n");
    else
     printf("%d kisi bulundu\n",isimsayi);

     break;
case 4:printf("\ncikis yaptiniz.hosca kalin\n");
      return 0;
      break;
 default:printf("lutfen(1-4)arasi bir secim yapiniz\n");
}



}while(secim!=4);


return 0;



}






















// Ýsim listesi
char *isimler[20] = {
    "Ahmet",
    "Mehmet",
    "Ali",
    "Fatma",
    "Mustafa",
    "Emre",
    "Zeynep",
    "Hakan",
    "Elif",
    "ibrahim",

};
char *soyisimler[20] = {
    "Yilmaz",
    "Kaya",
    "Demir",
    "celik",
    "Arslan",
    "Koc",
    "sahin",
    "Erdogan",
    "Toprak",
    "Aslan",
    // Ýstediðiniz kadar soyisim ekleyebilirsiniz
};
int fon (){


int x,y,i;


x=rand()%9;

y=rand()%9;


printf("%s %s\n",isimler[x],soyisimler[y]);
}




int main()

{

    srand(time(NULL));
  for(int i=0;i<9;i++)
{
    fon();

}


}






















int fon()
{
int dizi[10],i;

 for(i=0;i<8;i++)
    {
        dizi[i]=rand()%900000+1000000;
        printf("%d",dizi[i]);
         printf("\n");
    }




}



int main()
{
    srand(time(NULL));

        fon();
}


























   if(fcopy==NULL)
        printf("datacopy.txt dosya acma basarisiz");
    else
    {
        while(!feof(fptr))
        {
            putc(getc(fptr),fcopy);

        }
        printf("kopyalama islemi basarili");












 while(dizi!=EOF)
  {
      dizi=getc(fptr);
      printf("%c",dizi);
  }


 fprintf(fptr," %d in ASCII kodu kardiligi %d dir\n",d,c);
      fprintf(fptr,"C guzel bir dildir\n");
      fprintf(fptr,"%d in ASCII kodu kardiligi %d dir\n",x,y);
      printf("bir cumle giriniz:");
      fgets(dizi,30,stdin);
      fprintf(fptr,"%s",dizi);




  printf("konum gostergecinin yeri:%d\n",ftell(fptr));
        fseek(fptr,50,SEEK_SET);
     printf("konum gostergecinin yeri:%d\n",ftell(fptr));
     fgets(dizi,50,fptr);
     printf("%s",dizi);
     printf("konum gostergecinin yeri:%d\n",ftell(fptr));
     rewind(fptr);
     printf("konum gostergecinin yeri:%d\n",ftell(fptr));
     fgets(dizi,72,fptr);
     printf("%s",dizi);
;












*/
