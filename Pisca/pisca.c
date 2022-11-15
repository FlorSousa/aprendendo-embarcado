#include <16F628A.h>
#fuses XT, NOWDT, NOPROTECT, NOPUT
#use delay(clock=4MHz)

void main(){
    while (true){
       output_high(PIN_B1);
       delay_ms(1000);
       output_low(PIN_B1);
       delay_ms(1000);
    }
}