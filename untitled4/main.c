#include <stdio.h>
#include <stdlib.h>
#include <time.h>                               //für echten zufall
int main(){

 /* Von: Jimmy Neitzert
  * Hinweise: Ein (vierstelliges) Schaltjahr ist durch 4,100 und 400 restlos teilbar, deshalb der modulo operator.
  *
  *
  */

 int jahr;
 printf("Aufgabe 1: Schaltjahrberechnung\n");
 printf("Gib die Jahreszahl ein:");
 scanf("%d", &jahr);
  if (jahr % 4 ==0)                                   //1:Wenn teilbar durch 4 dann prüfen ob durch 100, sonst siehe "HIER!!!"
 {
  if (jahr % 100==0)                                  // 2:Wenn teilbar durch 100 prüfen ob teilbar durch 400
  {
  if (jahr %400 ==0)
   printf("%d ist ein Schaltjahr.\n", jahr);          //3:Wenn auch teilbar durch 400 dann => Garantiert schaltjahr
  else
   printf("%d ist kein Schaltjahr.\n", jahr);         //3:Wenn nicht teilbar durch 400 aber durch 100 => Kein schaltjahr
  }
  else
   printf("%d ist Schaltjahr.\n", jahr);               //2:Hier: Im else-statement schaltjahr da auch zahlen unter 40 schaltjahre sein können
  }
  else
   printf("%d ist kein Schaltjahr.\n",  jahr);        //1:Kein schaltjahr (HIER!!!)

   //AUFGABE 2



   int primzahl,i,buffer;
   buffer = 0;
   printf("Gib die Zahl ein um zu Prüfen ob sie eine Primzahl ist : ");
   scanf("%d", &primzahl);

  for (i = 2; i<primzahl; i++) {                                            //schleife dient hier nur zum um zu prüfen ob 2 bis n durch "primzahl" teilbar ist

   if (primzahl % i == 0) {
    printf("%d ist keine primzahl\n", primzahl);
    break;
   }                                                                        //wenn momentaner i wert mit "primzahl" teilbar ist wird sofort abgebrochen
   else {buffer++;}                                                         //buffer um unnötige textausgaben zu vermeiden und code zu optimieren
   if(buffer==primzahl-2){                                                  //-2 da mit 2 begonnen wird
    printf("%d ist eine primzahl!",primzahl);}                              //siehe line 46,47
    //printf("%d ist eine primzahl\n", primzahl);} //break; }               //sonst wird die schleife beendet und festgestellt dass x eine primzahl ist

  }



///AUFGABE 3.
srand (time(NULL));                                                   //echter zufall
int a,r;
long sum = 0;
for (int z = 0; z<1001; z++) {                                     //neue schleife für durchschnitt
 sum=0;                                                           //summe auf null für immer neuen wert
 for (a = 0; a < 1000; a++) {
  r = rand() % 1000;
  //printf ("%d %d\n",a,r);                                      auskommentiert für kürzere laufzeit
  sum += r;
 }
 printf("m=%.1f\n", (float) sum / 1000);                         //float für genauere angabe /erste nachkommastelle
}
 return 170798;
}