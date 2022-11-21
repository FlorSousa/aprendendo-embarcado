#include <16F628A.h>
#fuses XT, NOWDT, NOPROTECT, NOPUT
#use delay(clock=4MHz)

void main(){
    /*
        B0 g
        B1 f
        B2 a
        B3 b
        B4 define qual display vai trabalhar
        B5 c
        B6 d
        B7 e
    */
    int numbers[9] = {0b11101110,0b00101000,0b11001101,0b01101101,0b00101011,0b01100111,0b11100111,0b00101100,0b11101111};
    int i = 0;
    while (true){
        output_b(numbers[i]);
        delay_ms(200); 
        i = i<8? i+1 : 0;
    }
}
