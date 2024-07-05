#include <stdio.h>
#include <stdlib.h>

struct candidateInfo{
    char* name;
    char* lastname;
    int age;
    int note;
    float average;
};
struct interview{
    char* interviewer;
    char* interviewDate;
    struct candidateInfo candidate;
    int interviewNote;
};

int main()
{
    struct interview y;
    y.interviewer="Mehmet Bulut";
    y.interviewDate="28.10.2023";
    y.interviewNote=90;

    y.candidate.name="Ali";
    y.candidate.lastname="Veli";
    y.candidate.age=25;
    y.candidate.note=80;
    y.candidate.average=2.69;

    printf("Mulakati yapan:%s\n",y.interviewer);
    printf("Mulakat tarihi:%s\n",y.interviewDate);
    printf("Mulakat notu:%d\n\n",y.interviewNote);

    printf("Adayin adi:%s\n",y.candidate.name);
    printf("Adayin soyadi:%s\n",y.candidate.lastname);
    printf("Adayin yasi:%d\n",y.candidate.age);
    printf("Adayin sinav notu:%d\n",y.candidate.note);
    printf("Adayin lisans ortalamasi:%.2f\n",y.candidate.average);
    return 0;
}
