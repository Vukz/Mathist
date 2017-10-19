#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int eingabe, EAuswahl, KRechnung, KRW, KRWR;
float KRWR1, KRWR2, KRWR3, KRWR4, KRWRErgebnisR, KRWRErgebnisP;


int main()
{


printf("Willkommen im Elektrotechnik/Mathematik Hilfsprogramm!\nWaehle zwischen Mathe (1) oder Elektrotechnik (0)\n");
scanf("%i", &eingabe);

    if (eingabe==0){
        printf("Du hast dich fuer Elektrotechnik entschieden! \nUeber welches Themengebiet willst mehr erfahren?\nGrundelemente (0)\nOhmsche Gesetz (1)\nWiderstaende (2)\nKondensatoren (3)\nSpulen (4)\nKomplexe Schaltungen (5)\nTestaufgaben(6)\n");
        scanf("%i", &EAuswahl);
    }
        if (EAuswahl==0){
            printf("Du willst mehr ueber die Grundelemente erfahren?\n\n -Elementzeichen- -Bezeichnung- -Werteinheit-\n\n   U,      Spannung,           Volt (V)\n   I,      Strom ,             Ampere (A)     \n   R,      Widerstand,         Ohm (Omega)\n   C,      Kondensator,        Farad (F)\n   L,      Spule,              Henry (H)");
        }
        else if(EAuswahl==1){
            printf("Du willst das Ohmsche Gesetz kennenlernen?\n\nU = R*I (Spannung = Widerstand*Strom)\nR = U/I (Widerstand = Spannung/Strom\nI = U/R (Strom = Spannung/Widerstand");
        }
        else if(EAuswahl==2){
            printf("Du willst die Funktion eines Widerstands erfahren?\n\nEin ohmscher Widerstand ist das Bauelement, das am haeufigsten in diskreten Schaltungen verwendetet wird.\nEs handelt sich bei ohmschen Widerstaenden um sogenannte passive Bauelemente,\nweil sie keinen verstaerkenden Charakter besitzten - ganz im Gegenteil:\nEin Widerstand behindert den Stromfluss. Widerstaende werden vielfaeltig eingesetzt,\nsei es als Strombegrenzung, Spannungsteiler, Pull-Up- oder Pull-Down-Widerstand, als Lastwiderstand,\nin Verbindung mit Kondensatoren und/oder Spulen in Filterschaltungen und vieles mehr.");
        }
        else if(EAuswahl==3){
            printf("Du interessierst dich für Kondensatoren?\n\nIn einem Kondensator kann elektrische Ladung bzw. elektrische Energie gespeichert werden.\nDieser besteht aus zwei leitenden Schichten, die durch einen Isolator voneinander getrennt sind.\nDer so genannte Plattenkondensator stellt eine einfache Bauform des Kondensators dar.\nDieser besteht aus einem Paar voneinander isolierter Metallplatten,\ndie mit je einem Pol einer Spannungsquelle verbunden sind.");
        }
        else if (EAuswahl==4){
            printf("Du hast die Kategorie Spulen ausgewählt.\n\nIn einer Spule ist der Leitungsdraht in sehr vielen Windungen übereinander gewickelt.\nJede einzelne Wicklungsschleife wirkt wie ein kreisfoermiger Leiter.\nDie einzelnen Magnetfelder, die jede der Wicklungsschleifen umgeben,\nueberlagern sich zu einem intensiven Gesamtfeld.\nHaeufig befindet sich in der Spule ein Eisenkern, durch den das Magnetfeld zusaetzlich verstaerkt wird.\nIm Magnetfeld einer Spule wird Feldenergie gespeichert.");
        }
        else if (EAuswahl==5){
            printf("Du bist im Themenbereich Komplexe Rechnung\nWähle aus zwischen:\nWiderstandsberechnung(0)\nStromberechnung(1)\nSpannungsberechnung(2)\n");
            scanf("%i", &KRechnung);

            if (KRechnung==0){ //Komplexe Rechnung Menü
                printf("Was moechtest du berechnen?\nWiderstaende in Reihe (0)\nWiderstaende parallel (1)\nGemischte Schaltungen(3)\n");
                scanf("%i", &KRW);

                if(KRW==0); //Widerstände in Reihe
                printf("Welcher Wert hat der erste Widerstand? (in Ohm)\n");
                scanf("%f", &KRWR1);

                printf("Wert des zweiten Widerstands? (in Ohm)\n");
                scanf("%f", &KRWR2);

                KRWRErgebnisR = (KRWR1+KRWR2);

                printf("Der gesuchte Gesamtwiderstandswert betraegt: %f Ohm",KRWRErgebnisR);

                    }else if (KRW==1){ //Widerstände parallel
                    printf("Welcher Wert hat der erste Widerstand? (in Ohm)\n");
                    scanf("%f", &KRWR3);

                    printf("Wert des zweiten Widerstands? (in Ohm)\n");
                    scanf("%f", &KRWR4);

                    KRWRErgebnisP = (KRWR3*KRWR4)/(KRWR3+KRWR4);
                    printf("Der gesuchte Gesamtwiderstandswert betraegt: %f Ohm",KRWRErgebnisP);
                    }

            return 0;
}

