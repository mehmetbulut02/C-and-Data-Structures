#include <stdio.h>
#include <stdlib.h>

int main()
{
    // this is my comment
    /*
    this is my second comment
    machine can`t see this
    this is great
    */
    /*
    printf("My first c code\n"); // \n komutu ile program bir alt satýra inmesi gerektigini anliyor.
    //printf("My second c code");//
    printf("My third c code\nI am learning c code\nThis is wonderful\n"); // Bu sekilde \n kullanarak yanyana yazabiliriz.Fakat okunulurlugu zor.
    printf("MY c code\n\n"); // arka arkaya 2 tane \n kullanirsak bosluk birakiriz.
    printf("My fourth c\b code\n"); // \b bir önceki karakteri siler ne kadar kullanirsan o kadar karakter siler.
    printf("I am\t learning c code\n"); // \t bir sekme bosluk birakir.
    printf("This \"is\" amazing\n"); // " özel bir kullanimdir bu yuzden kullanimi icin \" kullanilir.
    printf(" This is \\my code\n"); // \ özel bir kullanimdir bu karakteri kullanmak icin \\ kullanilir.

    char myLetter = 'C'; // char tek bir karakter harf sayı veya ASCII degerini saklar.
    int myNumber = 7; // int tüm tam sayıları tutar
    float myNumber2 =2.56; // Bir veya daha fazla ondalik iceren kesirli sayilari saklar. 7 basamak saklamak icin yeterli.
    double myNumber3 = 213.568; // Bir veya daha fazla ondalik iceren kesirli sayilari saklar 16 basamak saklamak icin yeterli.
    // varibles bir harf veya alt cizgi ile baslamalidir.

    printf("%c\n",myLetter); // %C char veri tipini yazdırmak icin kullanilir.
    printf("%d\n",myNumber); // %D int veri tipini yazdirir
    printf("%f\n",myNumber2); // %f float veri tipini yazdirir
    printf("%lf\n\n",myNumber3); // %lf double veri turunu yazdirir
    printf("%s\n","Where have you been?"); // Metinsel ifadeleri yazdirir
    printf("My luckey number is %d\n\n",myNumber);

    printf("size char:%d\n", sizeof(char)); // sizeof bellekte kac bayt kapladigini gösterir
    printf("size int:%d\n", sizeof(int));
    printf("size float:%d\n", sizeof(float));
    printf("size double:%d\n\n", sizeof(double));

    int myNumber5;
    myNumber5=15; // bu sekilde alt alta tanımlamak daha dogru
    printf("My number is %d\n\n", myNumber);

    int number1,number2,number3,sum;
    number1=7;
    number2=10;
    number3=5;
    sum=number1 + number2 + number3; // + toplama oparotoru
    printf("sum: %d\n",sum);
    /*
     - cikarma (extraction) operatoru
     / bölme (division) operatoru
     * carpma (multiplication) operatoru
    */
    /*
    int myNumer0;
    printf("Enter a number:");
    scanf("%d", &myNumer0); // kullanicidan girdi almak icin kullanilir
    printf("The number you entered is %d",myNumer0);

    /* iki veya daha fazla sayida girebiliriz
    int myNumber,myNumber2;
    printf("Enter two number:");
    scanf("%d %d",&myNumber,&myNumber2);
    printf("The number you entered is %d - %d",myNumber,myNumber2);



    char myNumber=84; // char hafizada tutar
    printf("Karakterimizin sayisal degeri:%d\n\n",myNumber);
    printf("Karakterimizin ASCII degeri:%c\n",myNumber); // ASCII ozel degerlerdir
    printf("\n\n");



    char myCity[10]="Van"; // 10 degeri hafizada ne kadar karakter tutabilecegini belirler. Van icin 3den fazla olmalidir
    printf("My city is:%s\n",myCity); // metinsel ifadeler icin %s
    printf("\n\n");



    char myCity[16];
    printf("Enter a city:");
    scanf("%s",&myCity);
    printf("Your city is %s",myCity);
    printf("\n\n");

    */
    /*
    int myNumber,myNumber2,myNumber3; // operatorleri kullandık
    myNumber=7+12;
    myNumber2=myNumber+1;
    myNumber3=myNumber+myNumber2;
    printf("My Number Is %d\n",myNumber);
    printf("My Number2 Is %d\n",myNumber2);
    printf("My Number3 Is %d\n",myNumber3);

    /*
    + ekleme operatoru
    - cikarma operatoru
    * carpma operatoru
    / bolme operatoru
    % mod alma operatoru , mod bir sayiyi digerine boldugumuzde kalan rakamdir
    ++ arttirma operatoru , 1 artirmak icin kullanilir
    -- eksiltme operatoru


    int sum,sub,multi;
    float x,y,div;
    x=5;
    y=2;
    sum=x+y;
    sub=x-y;
    multi=x*y;
    div=x/y;

    printf("Sum: %d\n",sum);
    printf("Substraction: %d\n",sub);
    printf("Multiplication: %d\n",multi);
    printf("Division: %f\n",div);

    */
    /*
    int myNumber;
    myNumber=7;
    printf("%d\n",myNumber);

    myNumber++; // myNumber=myNumber + 1;
    printf("myNumber++:%d\n",myNumber);
    */
    /*
    int myNumber;
    myNumber=7;
    printf("%d\n",myNumber); //7
    printf("++myNumber:%d\n",++myNumber); //8 sag ve sol ++ operatorleri farklidir, ++ onceyse ilk olarak artiriyor sonra cikti veriyor .++ sondaysa il cikti veriyor sonra artiriyor
    printf("myNumber++:%d\n",myNumber++); //8
      printf("myNumber:%d\n",myNumber); //9
     */
    /*
    int myNumber;
    myNumber=7;
    printf("%d\n",myNumber); //7
    printf("--myNumber:%d\n",--myNumber); //6
    printf("myNumber--:%d\n",myNumber--); //6
      printf("myNumber:%d\n",myNumber); //5

    */
    /*
    int myNumber;
    myNumber=7;
    myNumber +=12; //19
    myNumber -=5; // 14
    myNumber *=2; //28
    myNumber /=4; //7
    myNumber %=2; //1
    printf("My number is:%d\n",myNumber);
    */
    /*
    int myNumber;
    myNumber=7;
    myNumber &=12; // and sonuc 4 cikar bit duzeyinde islem yaptik ikiside basarili olacak ( 1 basarili 0 basarisiz)

    printf("My number is:%d\n",myNumber);

    *//*
    int myNumber;
    myNumber=7;
    myNumber |=12; // or 1 ve 0 lara gore islem yapiyoruz sadece birinin basarili olmasi yeterli

    printf("My number is:%d\n",myNumber); //15
    */
    /*
    int myNumber;
    myNumber=7;
    myNumber ^=3; // xor 0 veya 1 lere gore islem biri basarili biri basarisiz

    printf("My number is:%d\n",myNumber);
    */
    /*
    int myNumber;
    myNumber=7;
    myNumber <<=2; // bitleri 2 birim sola kaydir (28)

    printf("My number is:%d\n",myNumber);
    */
    /*
    int myNumber;
    myNumber=7;
    myNumber >>=3; // bitleri 3 birim saga kaydir (0)

    printf("My number is:%d\n",myNumber);
    */
    /*
    // 4 basamakli sayinin rakamlari toplamimi bulma
    int myNumber,bolum,kalan,sum;
    sum=0;

    printf("4 basamakli bir sayi giriniz:"); //9871
    scanf("%d",&myNumber);
    // 4.basamagi bul
    bolum=myNumber / 1000; //9
    sum += bolum; // 0 + 9
    kalan= myNumber % 1000; // 871
    // 3.basamagi bul
    bolum=kalan / 100; // 8
    sum += bolum; // 0 + 9 + 8
    kalan= kalan % 100; // 71
    // 2. basamagi bul
    bolum=kalan / 10; // 7
    sum += bolum; // 0 + 9 + 8 + 7
    kalan= kalan % 10; // 1
    sum += kalan; // 9 + 8 +  7 + 1

    printf("Girdginiz sayinin rakamalari toplami:%d",sum);

    */
    /*
    // karsilastirma operatorleri

    int x,y;
    x=7;
    y=2;
    printf("result x=y:%d\n",x==y); // 0 (false) == esit operatoru
    printf(" result x!=y:%d\n",x!=y); // 1 (true) != esit degildir operatoru
    printf("result x>y:%d\n",x>y); // 1 true > buyuktur
    printf("result x<y:%d\n",x<y); // 0 false < kucuktur
    // >= buyuk esittir   <= kucuk esittir
    */

    /*
    // logical operators
    // && her iki ifadede dogruysa true dondurur (logical and)
    // || ifadelerden biri dogruysa true dondurur (logical or)
    // ! sonucu tersine cevirin , sonuc dogruysa yanlis dondurur (logical not)

    int x,y;
    x=7;
    y=2;
    printf("result:%d\n", (x>5 && x<10)); // 1 true
    printf("result:%d\n", (x>3 || x<6)); // 1 true
    printf("result:%d\n", (x>5 || x<10)); // 1 true
    printf("result:%d\n", (x>9 || x<2)); // 0 flse
    printf("result:%d\n", !(x>5)); // 0 false
    */
    /*
    // kapali bir kaptaki gazin basincini hesaplayan program
    // basinc=(mol sayisi * R sabiti * sicaklik) / hacim

    float pressure,constantR;
    int numberOfMoles,volume,heat;
    constantR=0.82;

    printf("Kabin hacmini giriniz:");
    scanf("%d",&volume);
    printf("Kaptaki mol sayisini giriniz:");
    scanf("%d",&numberOfMoles);
    printf("Ortam sicakligini giriniz:");
    scanf("%d",&heat);
    pressure=(numberOfMoles * constantR * heat)/volume;
    printf("Kaptaki gazin basinci:%f",pressure);
    */

    /*
    kosullu ifadeler:
    if: Belirtilen kosul dogruysa yurutulecek kod blogunu belirtmek icin kullanilir
    else: ayni kosul yanlissa yurutulecek kod blogunu belirtmek icin kullanilir
    else if: ilk kosul yanlissa , test edilecek yeni bir kosul belirtmek icin kullanilir
    switch: yurutulecek bir cok alternatif kod blogu belirtmek icin kullanilir


    if(70>19){
        printf("70 is greater than 19\n\n");
    }
*/

    /*
    int myNumber1,myNumber2;
    myNumber1=70;
    myNumber2=19;
    if(myNumber1>myNumber2){
        printf("%d is greater than %d\n\n",myNumber1,myNumber2);
    }
*/
/*
    int score;
    printf("Enter a score:");
    scanf("%d",&score);
    if(score>60){
        printf("Congratulations you passed the exam\n");
        printf("Your score:%d\n\n",score);
    }
    printf("The program continues to run\n\n"); // program if icindekileri yazdiktan sonra devam eder.
*/
/*
    int score;
    printf("Enter a score:");
    scanf("%d",&score);
    if(score>=60){
        printf("Congratulations you passed the exam\n");
        printf("Your score:%d\n\n",score);
    }else{
        printf("Unfortunately you did not pass the exam\n\n");
    }
*/
/* // sayinin isaretini bulma

    int myNumber;
    printf("Enter a number:");
    scanf("%d",&myNumber);
    if(myNumber>0){
        printf("The value is a positive number\n\n");
    }else if(myNumber<0){
        printf("The value is a negative number\n\n");
    }else{
        printf("Your number is 0");
    }
*/
/*
    int myNumber;
    printf("Enter a number:");
    scanf("%d",&myNumber);
    if(myNumber>0){
        if(myNumber==100){
            printf("It is incredible\n\n");
        }else{
            printf("It is not incredible\n\n");
        }
        printf("The value is a positive number\n\n");
    }else if(myNumber<0){
        printf("The value is a negative number\n\n");
    }else{
        printf("Your number is 0");
    }
*/
/*
    int score;
    score=59;
    (score>=60)? printf("You passed the exam\n") :printf("You failed the exam\n"); // sadece tek satirlik if else komutu icin bu yontem kullanilir (?=if ,:=else)
*/
/* // kullanicidan alinan sayilarin karsilastirilmasi

    int number1,number2;
    number1=0;
    number2=0;
    printf("Enter two number:");
    scanf("%d %d",&number1,&number2);
    if(number1>number2){
        printf("Number1 is greater than Number2 variable\n");
    }else if(number2>number1){
        printf("Number2 is greater than Number1 variable\n");
    }else{
        printf("Number1 is equal to Number2");
    }
*/
/*

 // switch case yapisi

 int day=7;
 switch(day){
    case 1:printf("Monday\n");
        break;
    case 2:printf("Tuesday\n");
        break;
    case 3:printf("Wednesay\n");
        break;
    case 4:printf("Thursday\n");
        break;
    case 5:printf("Friday\n");
        break;
    case 6:printf("Saturday\n");
        break;
    case 7:printf("Sunday\n");
        break;
    default:printf("There is no much day\n");     // kosullarin hicbiri saglanmazsa
 }
*/
/*
    // ic ice switch case yapisi

    int x,y,z;
    x=3;
    y=12;

    switch(x){
        case 7: z=19;
                break;
        default:switch(y){
            case 12:z=10;break;
            default: z=-90;
        }
    }
    printf("%d\n",z); // 10 ciktisini verir
*/
/* // toplam kac satis yaptigini gosteren uygulama
    int numberOfProducts,day;
    char *dayName;
    numberOfProducts=0;
    day=0;

    printf("Enter a number of day (1-7): ");
    scanf("%d",&day);
    switch(day){
        case 7:numberOfProducts+=25;
              if(day == 7){dayName="Pazar";}
        case 6:numberOfProducts+=19;
              if(day == 6){dayName="Cumartesi";}
        case 5:numberOfProducts+=15;
              if(day == 5){dayName="Cuma";}
        case 4:numberOfProducts+=10;
              if(day == 4){dayName="Persembe";}
        case 3:numberOfProducts+=7;
              if(day == 3){dayName="Carsamba";}
        case 2:numberOfProducts+=5;
              if(day == 2){dayName="Sali";}
        case 1:numberOfProducts+=2;     // 1.gunu en sona yazmamizin sebebi gun 1 girildigi zaman diger gunler toplanmasin
              if(day == 1){dayName="Pazartesi";}
    }
    printf("%s gunu sonunda toplam %d urun satisi yapildi\n\n",dayName,numberOfProducts);
*/
/*
    //Programlamada dongu mantıgı (while , do while , for)

    int i=1;

    while(i<=5){
        printf("%d\n",i);
        i++;
    }
*/
/* // Tekrar tekrar printf yapmak yerine while dongusunu kullanabiliriz
    int i=1;

    while(i<=7){
        printf("C is a fantastic language\n");
        i++;
    }
*/
/*
// do while komutunun while komutundan farki ne olursa olsun ilk donguyu calistirmasidir . do while cok kullanilmaz
// Asagidaki ornekte while ile calistirilirse hicbir cikti vermez . Do while ile calistirilirsa 20 ciktisini verir

    int i=20;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=7);
*/
/*
    // for dongusu

    int i;

    for(i=0;i<7;i++){
        printf("%d\n",i);
    }
*/
/*
    // break komutu

    int i;
    for(i=0;i<=10;i++){
        if(i==7){
            break; // i 7ye esit oldugunda dongu kirilir 0dan 6ya kadar olan rakamlar yazdirilir
        }
        printf("%d\n",i);
    }
*/
/*
    int i=0;
    while(i<=10){
        if(i==5){
            break; // i 5e esit oldugunda dongu kirilir 0dan 4e kadar olan rakam ciktisi verir
        }
        printf("%d\n",i);
        i++;
    }
*/
/*
    // continue

    int i;
    for(i=0;i<=10;i++){
        if(i==5){
            continue; // continue atla komutudur i 5e esit oldugunda dongu atlanir . 0dan 10a kadar cikti verir 5 haric. dongu 5e geldiginde atlanir
        }
        printf("%d\n",i);
    }
*/
/*
    int i=0;
    while(i<=10){
        if(i==6){
            i++; // buraya i++ yazmamizin sebebi continue ile atlandigi icin printf altindaki i++ da atlanir o yüzden if komutunun icine i++ eklemeliyiz
            continue;
        }
        printf("%d\n",i);
        i++;
    }
*/

    // ic ice dongu mantigi

    int i,j;

    for(i=1;i<=4;i++){

        for(j=1;j<=3;j++){
            printf("Hello C\n");
        }// ic for bitti
        printf("________\n");
    }// dis for bitti

    return 0;
}
