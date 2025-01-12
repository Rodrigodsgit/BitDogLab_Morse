
#include "pico/stdlib.h"
#include <stdio.h>



#ifndef LED_GPIO_PIN
#define LED_GPIO_PIN 11 
#endif 

int pico_led_init(void) {
    gpio_init(LED_GPIO_PIN);       
    gpio_set_dir(LED_GPIO_PIN, GPIO_OUT); 
    return PICO_OK;                
}

void pico_set_led(bool led_on) {
    gpio_put(LED_GPIO_PIN, led_on); 
}

void dot() {
    pico_set_led(true);  
    sleep_ms(200);       
    pico_set_led(false); 
    sleep_ms(125);       
}
void dash() {
    pico_set_led(true);  
    sleep_ms(800);       
    pico_set_led(false); 
    sleep_ms(125);       
}

void sos() {
    dot();
    dot();
    dot();
    sleep_ms(250);

    dash();
    dash();
    dash();
    sleep_ms(250); 

    dot();
    dot();
    dot();
    sleep_ms(3000); 
}

int main() {
    stdio_init_all();
    int rc = pico_led_init(); 
    hard_assert(rc == PICO_OK);

    while (true) {
        sos(); 
    }
}