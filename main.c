#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void welcome();
void user_stats(int, int);

void evento1_1(int* money, int* keys);
void evento1_2(int* money, int* keys);
void evento1_3(int* money, int* keys);
void evento1_4(int* money, int* keys);
void evento1_5(int* money, int* keys);
void evento1_6(int* money, int* keys);
void evento1_7(int* money, int* keys);
void evento1_8(int* money, int* keys);
void evento1_9(int* money, int* keys);
void evento1_10(int* money, int* keys);
void evento1_11(int* money, int* keys);
void evento1_12(int* money, int* keys);
void evento1_13(int* money, int* keys);
void evento1_14(int* money, int* keys);
void evento1_15(int* money, int* keys);

#define NEventi 15

int main(){
  void (*evento[NEventi])(int*, int*)= { evento1_1, evento1_2, evento1_3, evento1_4, evento1_5, evento1_6, evento1_7, evento1_8, evento1_9, evento1_10, evento1_11,
                                         evento1_12, evento1_13, evento1_14, evento1_15 };
  unsigned int decade = 10;
  int money = 0, keys = 0;

  srand(time(NULL));
  welcome();

  do{
    user_stats(money, keys);
    (*evento[ (rand() % 16)]) (&money, &keys);
    --decade;
  }while(decade > 0);



  return 0;
}

void welcome(){

  puts("         *****  VENTESIMA DECADE  *****\n"
       "*********** Sei stato maledetto senza nessun motivo. **********\n"
       "** Non so cosa hai fatto, ma sicuramente te lo sei meritato. **\n"
       "*** Ora non pensarci, cerca di guadagna il piu' possibile  ****\n"
       "*** Buona Fortuna. ****\n");
}

void user_stats(int money, int keys){
  printf("%6s %2d\n"
         "%6s %2d\n","Soldi", money,"Chiavi", keys);

  puts("NON CI SEI NEANCHE VICINO.");
}

void evento1_1(int* money, int* keys){
}
void evento1_2(int* money, int* keys){
}
void evento1_3(int* money, int* keys){
}
void evento1_4(int* money, int* keys){
}
void evento1_5(int* money, int* keys){
}
void evento1_6(int* money, int* keys){
}
void evento1_7(int* money, int* keys){
}
void evento1_8(int* money, int* keys){
}
void evento1_9(int* money, int* keys){
}
void evento1_10(int* money, int* keys){
}
void evento1_11(int* money, int* keys){
}
void evento1_12(int* money, int* keys){
}
void evento1_13(int* money, int* keys){
}
void evento1_14(int* money, int* keys){
}
void evento1_15(int* money, int* keys){
}


