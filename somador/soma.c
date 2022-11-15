#include <16F628A.h>
#fuses XT, NOWDT, NOPROTECT, NOPUT
#use delay(clock=4MHz)

void main(){
    int saida = 0;
    while (true){
       output_b(saida);
       delay_ms(1000);
       saida++;
    }
}
