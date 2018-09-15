#include "Structs.h"
#include "MyFuncs.h"
#include <stdio.h>
#include <string>
char DateiMitarb[20] = "MitarbeiterTemp.txt";
char DateiAbt[24] = "AbteilungenTemp.txt";
void ToTemp() {
    strcpy(DateiMitarb, "MitarbeiterTemp.txt");
    strcpy(DateiAbt, "AbteilungenTemp.txt");
}

void ToMain() {
    strcpy(DateiMitarb, "Mitarbeiter.txt");
    strcpy(DateiAbt, "Abteilungen.txt");
}
void LoadTemp() {
    MITARB ma[101];
    ABT abt[7];
    ToMain();
    getMitarbeiter(ma);
    getAbteilungen(abt);
    ToTemp();
    saveAbteilungen(abt);
    saveMitarbeiter(ma);
}


void Save() {
    MITARB ma[101];
    ABT abt[7];
    getMitarbeiter(ma);
    getAbteilungen(abt);
    ToMain();
    saveAbteilungen(abt);
    saveMitarbeiter(ma);
    ToTemp();
}

void getMitarbeiter(MITARB *ma) {
    FILE *file;
    file = fopen(DateiMitarb, "r");
    if (file == NULL)
    {
        file = fopen(DateiMitarb, "w");
    }
    else
    {
        fread(ma, sizeof(ma[0]), 101, file);
    }
    fclose(file);
}



void saveMitarbeiter(MITARB *ma) {
    FILE *file;
    file = fopen(DateiMitarb, "w");
    fwrite(ma, sizeof(ma[0]), 101, file);
    fclose(file);
}
void getAbteilungen(ABT *abt) {
    FILE *file;
    file = fopen(DateiAbt, "r");
    if (file == NULL)
    {
        AbteilungenSetzen(abt);
        file = fopen(DateiAbt, "w");
        fwrite(abt, sizeof(abt[0]), 7, file);
    }
    else
    {
        fread(abt, sizeof(abt[0]), 7, file);
    }
    fclose(file);
}
void saveAbteilungen(ABT *abt) {
    FILE *file;
    file = fopen(DateiAbt, "w");
    fwrite(abt, sizeof(abt[0]), 7, file);
    fclose(file);
}
void AbteilungenSetzen(ABT *abt)
{
    strcpy(abt[1].abtName, "Geschaeftsleitung\n");
    strcpy(abt[1].strasse, "Auf der Loge\n");
    strcpy(abt[1].hausnr, "8 b\n");
    strcpy(abt[1].plz, "21726\n");
    strcpy(abt[1].stadt, "Oldendorf\n");
    strcpy(abt[1].sitz, "Schloss\n");

    strcpy(abt[2].abtName, "Marketing\n");
    strcpy(abt[2].strasse, "Hagener Str.\n");
    strcpy(abt[2].hausnr, "261\n");
    strcpy(abt[2].plz, "57223\n");
    strcpy(abt[2].stadt, "Kreuztal\n");
    strcpy(abt[2].sitz, "Erdgeschoss\n");

    strcpy(abt[3].abtName, "Finanzen\n");
    strcpy(abt[3].strasse, "Ehrenbergstrasse\n");
    strcpy(abt[3].hausnr, "19\n");
    strcpy(abt[3].plz, "10245\n");
    strcpy(abt[3].stadt, "Berlin\n");
    strcpy(abt[3].sitz, "1. Obergeschoss\n");

    strcpy(abt[4].abtName, "Controlling\n");
    strcpy(abt[4].strasse, "Franz-Bohmert-Strasse\n");
    strcpy(abt[4].hausnr, "1\n");
    strcpy(abt[4].plz, "28205\n");
    strcpy(abt[4].stadt, "Bremen\n");
    strcpy(abt[4].sitz, "Stadion\n");

    strcpy(abt[5].abtName, "Entwicklung\n");
    strcpy(abt[5].strasse, "Platz der Republik\n");
    strcpy(abt[5].hausnr, "1\n");
    strcpy(abt[5].plz, "11011\n");
    strcpy(abt[5].stadt, "Berlin\n");
    strcpy(abt[5].sitz, "Atrium\n");

    strcpy(abt[6].abtName, "Produktion\n");
    strcpy(abt[6].strasse, "Strothmannsweg\n");
    strcpy(abt[6].hausnr, "1\n");
    strcpy(abt[6].plz, "49086\n");
    strcpy(abt[6].stadt, "Osnabrueck\n");
    strcpy(abt[6].sitz, "Halle 1\n");
}