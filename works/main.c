#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    /*
    Dairenin cevresini ve alanini bulan program
    1- ihtiyacimiz olan variables bul ve tanimla
    2- variables type bul
    3- formulu tanimla alan=pi*r*r cevre=2*pi*r
    4- kullanicidan verileri al
    5- islem yap
    6- cikti ver
    */
    /*
    float r,circumference,area;
    const float PI=3.1415;
    printf("Dairenin yaricapini girin:");
    scanf("%f",&r);
    circumference=2*PI*r;
    area=PI*r*r;
    printf("circumference of circle:%f\n",circumference);
    printf("area of circle:%f",area);
    */
    // 4 adet sayi alip bunlarin karesini ve kupunu bulan program

    /*
   float s_1,s_2,s_3,s_4;
        s_1=0.0;
        s_2=0.0;
        s_3=0.0;
        s_4=0.0;

        printf("Enter four numbers:");
        scanf("%f %f %f %f",&s_1,&s_2,&s_3,&s_4);

        printf("The number \t\t");
        printf("Square of number\t\t");
        printf("Cube of number\t\t\n");

        printf("-----------\t\t");
        printf("----------------\t\t");
        printf("-----------\t\t\n");

        printf("%f\t\t",s_1);
        printf("%f\t\t\t",s_1*s_1);
        printf("%f\t\t\n",s_1*s_1*s_1);

        printf("%f\t\t",s_2);
        printf("%f\t\t\t",s_2*s_2);
        printf("%f\t\t\n",s_2*s_2*s_2);

        printf("%f\t\t",s_3);
        printf("%f\t\t\t",s_3*s_3);
        printf("%f\t\t\n",s_3*s_3*s_3);

        printf("%f\t\t",s_4);
        printf("%f\t\t\t",s_4*s_4);
        printf("%f\t\t\n",s_4*s_4*s_4);


        printf("\n\n");
            */

 /* Bir elektrik dagitim sirketi verdikleri hizmet karsiliginda musterilerinden aylik olarak harcanan toplam kilowatt saat miktarinca
 ve belirli bir abonelik ucreti talep etmektedir . Birim kilowatt saat ucreti ve abonelik ucreti her ay aylik enflasyon oraninda artmaktadýr
 Buna gore musterinin bir aya ait odeyecegi elektrik faturasinin miktarini hesaplayan program
 Fatura Miktari= Harcanan elektrik * Birim fiyat + Abone ucreti


    float odenecekFatura,eskiBirimFiyat,yeniBirimFiyat;
    float enflasyon,eskiAboneUcreti,yeniAboneUcreti;
    int yeniOkuma,eskiOkuma,toplamHarcananElektrik;
    printf("Enflasyon oranini giriniz:");
    scanf("%f",&enflasyon);
    printf("Onceki aya ait birim fiyat miktarini giriniz:");
    scanf("%f",&eskiBirimFiyat);
    printf("Onceki aya ait abonelik ucretini giriniz:");
    scanf("%f",&eskiAboneUcreti);
    printf("Onceki aya ait okuma degerini giriniz:");
    scanf("%d",&eskiOkuma);
    printf("Bu aya ait okuma degerini giriniz:");
    scanf("%d",&yeniOkuma);
    toplamHarcananElektrik=yeniOkuma-eskiOkuma;
    yeniBirimFiyat=eskiBirimFiyat*(1+enflasyon/100);
    yeniAboneUcreti=eskiAboneUcreti*(1+enflasyon/100);
    odenecekFatura=toplamHarcananElektrik*yeniBirimFiyat+yeniAboneUcreti;
    printf("Odeyeceginiz fatura ucreti:%f",odenecekFatura);

    */
    /*
    // Girilen sayinin onlar ve birler basamagini bulan program

    int sayi,birler,onlar;
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    birler= sayi % 10;
    onlar= (sayi/10) % 10;
    printf("Girdiginiz sayininin birler basamagi:%d\n",birler);
    printf("Girdiginiz sayinin onlar basamagi:%d",onlar);
    */
    /*
    // Girilen dort sayinin aritmetik ortalamasini bulan prgram

    float sayi_1,sayi_2,sayi_3,sayi_4,sonuc;

    printf("Birinci sayiyi giriniz:");
    scanf("%f",&sayi_1);
    printf("Ikinci sayiyi giriniz:");
    scanf("%f",&sayi_2);
    printf("Ucuncu sayiyi giriniz:");
    scanf("%f",&sayi_3);
    printf("Dorduncu sayiyi giriniz:");
    scanf("%f",&sayi_4);
    sonuc=(sayi_1+sayi_2+sayi_3+sayi_4)/4;
    printf("Girdiginiz sayilarin aritmetik ortalamasi:%f\n",sonuc);
    */
    /*
    // Basit bir kitap siparis ve indirim programi

    int bookPrice,orderQuantity; // kitabin fiyati ve siparis miktari
    float discountRate,noDiscountPrice,discountPrice,sum; // indirim orani,indirimsiz ve indirimli fiyat,toplam
    bookPrice=20;
    orderQuantity=0;

    printf("Kac adet kitap siparis etmek istiyorsunuz:");
    scanf("%d",&orderQuantity);
    if(orderQuantity>=60){
        discountRate=0.30;
    }else{
        if(orderQuantity>=30 && orderQuantity <60){
            discountRate=0.20;
        }else if(orderQuantity>=10 && orderQuantity <30) {
            discountRate=0.12;
        }else{
            discountRate=0.01;
        }
    }
    noDiscountPrice=orderQuantity * bookPrice;
    printf("Kitabin indirimsiz tutari:%f TL\n",noDiscountPrice);
    discountPrice=orderQuantity * bookPrice * discountRate;
    printf("Indirim tutariniz:%f TL\n",discountPrice);
    sum=noDiscountPrice - discountPrice;
    printf("Siparislerinizin toplam tutari:%f TL\n",sum);
*/
/*
    // TBMM'de toplanti yeter sayisinin saglanip saglanamadigini kontrol eden program

    int partyA,partyB,partyC,currentCouncilor; // mevcut meclis uyesi
    const int sumCouncilor=600; // toplam uye

    printf("Meclisteki partilerin milletvekili sayilarini girin:");
    scanf("%d%d%d",&partyA,&partyB,&partyC);

    currentCouncilor=partyA+partyB+partyC;
    if(currentCouncilor<200) {
        printf("Gerekli toplanti yeter sayisi bulunamadigindan toplantiya ara verildi\n Toplanti yeter sayisi 200'dur.");
    }else{
        printf("Meclis toplantiya hazir");
    }
*/
/*
    // Girilen sayinin tek mi cift mi oldugunu bulan program

    int sayi;
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    if(sayi%2==0){
        printf("Cift");
    }else{
        printf("Tek");
    }
*/
/*
    // kullanicidan alinan uc sayinin en buyugunu ve en kucugunu bulan program

    int sayi_1, sayi_2, sayi_3;
printf("Uc adet sayi giriniz:");
scanf("%d %d %d", &sayi_1, &sayi_2, &sayi_3);

if (sayi_1 > sayi_2 && sayi_1 > sayi_3) {
    if (sayi_2 > sayi_3) {
        printf("En buyuk sayi: %d\n", sayi_1);
        printf("En kucuk sayi: %d\n", sayi_3);
    } else {
        printf("En buyuk sayi: %d\n", sayi_1);
        printf("En kucuk sayi: %d\n", sayi_2);
    }
} else if (sayi_2 > sayi_1 && sayi_2 > sayi_3) {
    if (sayi_1 > sayi_3) {
        printf("En buyuk sayi: %d\n", sayi_2);
        printf("En kucuk sayi: %d\n", sayi_3);
    } else {
        printf("En buyuk sayi: %d\n", sayi_2);
        printf("En kucuk sayi: %d\n", sayi_1);
    }
} else {
    if (sayi_1 > sayi_2) {
        printf("En buyuk sayi: %d\n", sayi_3);
        printf("En kucuk sayi: %d\n", sayi_2);
    } else {
        printf("En buyuk sayi: %d\n", sayi_3);
        printf("En kucuk sayi: %d\n", sayi_1);
    }
}

*/
/*
    // girilen 4 basamakli sayinin ozel sayi olup olmadigini tespit eden program (abcd=(ab+cd)^2)

    int number,newNumber,part1,part2;
    printf("Dort basamakli bir sayi giriniz:");
    scanf("%d",&number);

    part1=number/100;
    part2=number%100;
    newNumber=(part1+part2)*(part1+part2);
    if(newNumber==number){
        printf("%d aradigimiz ozel sayimiz\n",number);
    }else{
        printf("%d ozel sayi degil",number);
    }
*/
/*    // girilen sayinin karekokunun bir tam sayi olup olmadigini bulan program

    int number,squareRoot;

    printf("Enter a positive number:");
    scanf("%d",&number);
    if(number < 0){
        printf("Please do not do this!\n");
    }else{
        squareRoot=sqrt(number); // sayinin kokunu boyle buluruz
        if(squareRoot*squareRoot==number){
            printf("square root of %d is an integer\n");
            printf("square root of %d\n",squareRoot);
        }else{
            printf("No it is not\n");
        }
    }
*/
/*
    // Bir gsm operatoru 4 dk kadar konusma ucretini 0.30 tl olarak belirlemistir. ancak konusma suresi 4 dakikayi asarsa bundan sonraki her dakika icin ek olarak
    // 0.07 tl almaktadir . TElefon gorusmesinin suresini dakika cinsinden girdi olarak alan ve konusma ucretini hesaplayan program

    int dakika;
    float ucret;
    printf("Kac dakika konustunuz:");
    scanf("%d",&dakika);
    if(dakika<=4){
        ucret=dakika*0.30;
        printf("Ucret:%f",ucret);
    }else{
        ucret=((dakika-4) * (0.37))+(1.20);
        printf("Ucret:%f",ucret);
    }

*/
/*
    // Bir ucgenin acilarini girdi olarak alan ve bu ucgenin eskenar,ikizkenar veya cesitkenar ucgen olup olmadigini belirleyen program

    int aci1,aci2,aci3;
    printf("Ucgenin acilarini giriniz:");
    scanf("%d%d%d",&aci1,&aci2,&aci3);
    if(aci1==60 && aci2==60 && aci3==60){
        printf("Eskenar Ucgen");
    }else{
        if(aci1!=aci2 && aci2!=aci3 && aci1!=aci3){
            printf("Cesitkenar Ucgen");
        }else{
            printf("Ikizkenar Ucgen");
        }
    }
*/
/*
    // Herhangi bir karakteri girdi olarak alan ve bu karakterin bir harf olup olmadigini ve kucuk harf mi buyuk harf mi oldugunu soyleyen program

    char myCharacter;

    printf("Enter a character:");
    scanf("%c",&myCharacter);

    if((myCharacter>='A') && (myCharacter<='Z')){
        printf("%c is an uppercase letter\n",myCharacter);
    }else if((myCharacter>='a') && (myCharacter<='z')){
        printf("%c is a lowercase letter\n",myCharacter);
    }else{
        printf("%c is not a letter\n",myCharacter);
    }
*/
/*
    // dort islem operatorlerinden birini ve iki reel sasayiyi girdi olarak alan ve girilen operatore gore islem sonucunu bulan program

    char myOperator;
    float number1,number2;

    printf("Chose operator (+,-,*,/):");
    scanf("%c",&myOperator);

    printf("Enter two numbers:");
    scanf("%f%f",&number1,&number2);

    printf("\noperator=%c\nnumber1=%f\nnumber2=%f\n",myOperator,number1,number2);

    switch(myOperator){
        case '/':printf("%f",number1/number2);break;
        case '*':printf("%f",number1*number2);break;
        case '-':printf("%f",number1-number2);break;
        case '+':printf("%f",number1+number2);break;
        default: printf("You entered the wrong operator\n\n");
    }
*/
/*
    // switch ile tek cift sayi bulma

    int sayi;
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    switch(sayi%2){
        case 0:printf("%d bir cift sayidir",sayi);break;
        case 1:printf("%d bir tek sayidir",sayi);break;
    }
*/
/*
    // sesli veya sessiz harf bulma uygulamsi

    char letter;
    printf("Enter a letter:");
    scanf("%c",&letter);

    switch(letter){
        case 'a':
        case 'e':
        case 'i':
        case 'u':
        case 'o':printf("%c is a wowel\n",letter);break;
        default:printf("%c is a consonant\n",letter);
                printf("or not a letter\n");
    }
*/
/*
    // girilen ayin kac gun oldugunu bulan program

    int monthNumber;

    printf("Which month:");
    scanf("%d",&monthNumber);

    switch(monthNumber){
    case 4:
    case 6:
    case 9:
    case 11:printf("There are 30 days in the %dth month\n",monthNumber);break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:printf("There are 31 days in the %dth month\n",monthNumber);break;
    case 2:printf("There are 28 days in the %dth month\n",monthNumber);break;
    default:printf("There is no %dth month \n",monthNumber);
    }
*/
/*
    // donguleri kullanarak basit carpim tablosu

    int i,number;
    number=0;
    i=1;

    printf("Enter a number from 1 to 10:");
    scanf("%d",&number);

    if(number <1 || number > 10){
        printf("Please don't do that\n");
        return 0;
    }
    while(i<=10){
        printf("%d x %d = %d \n",number,i,number*i);
        i++;
    }
*/
/*
    // Asal sayi bulan program  // eger bir sayi kendisinin yarisina kadar olan sayilara bolunmuyorsa asal sayidir

    int number,i;
    number=0;
    i=2;

    printf("Enter a positive number:");
    scanf("%d",&number);

    if(number<0){
        printf("Please enter a positive number\n");
        return 0;
    }
    while(i<= number/2){
        if(number%i==0){
            printf("%d divided by %d  so it can't be a prime number",number,i);
            return 0;
        }
        i++;
    }
    printf("%d is a prime number",number);
*/
/*
    // for dongusu ile yapilisi
int number,i;
    number=0;
    printf("Enter a positive number:");
    scanf("%d",&number);

    if(number<0){
        printf("Please enter a positive number\n");
        return 0;
    }
    for(i=2;i<=number/2;i++){
        if(number%i==0){
            printf("%d divided by %d  so it can't be a prime number",number,i);
            return 0;
        }
    }
    printf("%d is a prime number",number);
*/

/*
    // girilen sayiya kadar olan tum asal sayilari ekrana yazdirma

    int number,i,control,j;

    printf("Enter a number:");
    scanf("%d",&number);
     for(i=2;i<=number;i++){
             control=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                control=0;
                break;
            }
        } // ic for bitti
        if(control !=0){
            printf("%d ",i);
        }
     } // dis for bitti
*/
/*

    // Girilen notlari toplayip ortalamasini alan program

    int i;
    float examGrade,sumGrade;
    i=1;
    examGrade=0.0;
    sumGrade=0.0;
    do{
        printf("%dth exam grade:",i);
        scanf("%f",&examGrade);
        if(examGrade == 0){
            break;
        }
        if(examGrade<0){
            printf("Please enter a positive number\n");
            continue; // kisi negatif sayi girdiginde donguden cikmak icin kullandik uyari veriyoruz ve devam etmeyip basa donuyoruz
        }else{
            sumGrade += examGrade;
        }
        i++;
    }while(examGrade !=0);

    printf("\nyou entered %d exam grades\n",i-1); // i-1 yazmamizin nedeni kullanicinin donguden cikmak icin son not olarak 0 girmesidir
    printf("average:%f\n",sumGrade/(i-1));
*/
/*
    // her bir satranc karesi icin 1den baslayarak oncekinin 2 kati kadar bugday veriliyor . toplam verilecek bugdayi hesaplayalim

    int i;
    double wheat=1;     // double kullandik cunku cikacak rakamlar cok buyuk olacak     wheat=bugday
    double sumWheat=0;

    for(i=1;i<=64;i++){
        printf("%d. kare icin verilecek bugday sayisi:%20.0f\n",i,wheat);  // cok basamak olacagi icin %20.0 kullandik
        sumWheat += wheat;
        wheat *=2;
    }
    printf("\n verilecek toplam bugday sayisi:%20.0f\n",sumWheat);
*/
/*
    // faktoriyel hesaplama

    int i,factorial,number;
    factorial=1;

    printf("Enter a number:");
    scanf("%d",&number);

    for(i=1;i<=number;i++){
        factorial*=i;
    }
    printf("%d!=%d\n",number,factorial);
*/
/*
    // ic ice dongu ile dik ucgen deseni

    int i,j,sharp=0;

    printf("Enter the number of the sharps:");
    scanf("%d",&sharp);
        for(i=1;i<=sharp;i++){
                for(j=1;j<=i;j++){
                    printf("#");
                }
            printf("\n");
        }
*/
/*
    // ters ucgen ekledik

    int i,j,sharp=0;

    printf("Enter the number of the sharps:");
    scanf("%d",&sharp);
        for(i=1;i<=sharp;i++){
                for(j=1;j<=i;j++){
                    printf("#");
                }
            printf("\n");
        }
        for(i=1;i<=sharp;i++){
                for(j=sharp;j>=i;j--){
                    printf("#");
                }
            printf("\n");
        }
*/
/*
    // girilen sayinin en buygunu ve en kucugunu bulan program

    int number,i=1,smallestNumber=0,largestNumber=0;

    do{
    printf("%dth number:",i);
    scanf("%d",&number);

    if(number == 0) break;
    if(number<smallestNumber) smallestNumber=number;
    if(number>largestNumber) largestNumber=number;

    i++;
    }while(number !=0);
    printf("\nthe largest number:%d\n",largestNumber);
    printf("\nthe smallest number:%d\n",smallestNumber);
*/
/*
    // fibonacci dizisi algoritmasi

    int first,second,third,i,number;
    first=1;
    second=1;
    third=1;
    printf("Enter a number:");
    scanf("%d",&number);
    printf("1 1 ");
    for(i=1;i<=number;i++){
        first=second;
        second=third;
        third=first+second;
        printf("%d ",third);
    }
*/
/*
    // sayilar ile sekil

    int i,j,number;

    printf("Enter a number value:");
    scanf("%d",&number);
     for(i=1;i<=number;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
     }
*/
/* // tersi
    int i,j,number;

    printf("Enter a number value:");
    scanf("%d",&number);
     for(i=0;i<number;i++){
        for(j=1;j<=number-i;j++){
            printf("%d",i+1);
        }
        printf("\n");
     }
*/
/*
    // yildizlarla ici bos kare deseni olusturma

    int i,j,number;

    printf("Enter a number value:");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
            for(j=1;j<=number;j++){
                if(i==1 || i==number || j==1 || j==number){
                    printf("* ");
                    }else{
                    printf("  ");
                    }
            }
            printf("\n");
    }
*/

    // yildizlarla ucgen piramit yapma
/*
    int i,j,number;

    printf("Enter a number value:");
    scanf("%d",&number);
     for(i=1;i<=number;i++){
        for(j=1;j<=number-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
     }
*/
/*
    // ters ucgen ile birlestirme

    int i,j,number;

    printf("Enter a number value:");
    scanf("%d",&number);
     for(i=1;i<=number;i++){
         for(j=1;j<=number-i;j++){
            printf(" ");
         }
         for(j=1;j<=i*2-1;j++){
            printf("*");
         }
         printf("\n");
     }
     for(i=1;i<=number;i++){
         for(j=1;j<=i;j++){
            printf(" ");
         }
         for(j=1;j<=number*2-1-(i*2);j++){
            printf("*");
         }
         printf("\n");

     }
*/
/*
        // harf piramidi

        int i,j;
        char input,character='A';

        printf("Enter a uppercase letter:");
        scanf("%c",&input);
        for(i=1;i<=(input-'A'+1);i++){
            for(j=1;j<=i;j++){
                printf("%c",character);
            }
            character++;
            printf("\n");
        }
*/


/*
    // pascal ucgeni

    int space,i,rows,j,number=1;

    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for (i=0;i<rows;i++){
        for(space=1;space<=rows-i;space++)
          printf("  ");
        for(j=0;j<=i;j++){
            if(j==0 || i==0)
            number=1;
            else
            number=number*(i-j+1)/j;

          printf("%4d",number);
        }
     printf("\n");
    }
*/
/*
  // harflerle sag ok deseni

  int i,j,row,a=0;
  char myLetter;

  printf("Please enter a letter:");
  scanf("%c",&myLetter);
  printf("Please enter the number of row (odd  number):");
  scanf("%d",&row);
  for(i=0;i<row;i++){
      if(i<=row/2)
          a++;
      else
          a--;
      for(j=1;j<a;j++)
          printf(" ");

      printf("%c\n",myLetter);
  }

*/
/*
    // EBOB ve EKOK bulma girilen iki sayi icin

    int x,y,OBEB=0,OKEK=0,smallNumber;

    printf("OBEB'i ve OKEK'i bulunacak iki sayiyi giriniz:");
    scanf("%d%d",&x,&y);
    if(x<y)
        smallNumber=x;
    else

        smallNumber=y;
    for(int i=2;i<=smallNumber;i++){
        if((x%i==0) && (y%i==0))
            OBEB=i;

    }
    if(OBEB != 0){
        OKEK=OBEB*x/OBEB*y/OBEB;
        printf("%d ve %d sayilarinin OBEB'i:%d\n",x,y,OBEB);
        printf("%d ve %d sayilarinin OKEK'i:%d\n",x,y,OKEK);
    }else{
        OKEK=x*y;
        printf("Bu sayilarinin OBEB'i yoktur");
        printf("%d ve %d sayilarinin OKEK'i:%d\n",x,y,OKEK);
    }
*/



    return 0;
}
