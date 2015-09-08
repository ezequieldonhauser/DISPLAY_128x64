#include <18F452.h>
#FUSES NOWDT                    //No Watch Dog Timer
#FUSES WDT128                   //Watch Dog Timer uses 1:128 Postscale
#FUSES XT                       //High speed osc with HW enabled 4X PLL
#FUSES NOPROTECT                //Code not protected from reading
#FUSES NOOSCSEN                 //Oscillator switching is disabled, main oscillator is source
#FUSES NOBROWNOUT               //No brownout reset
#FUSES BORV20                   //Brownout reset at 2.0V
#FUSES PUT                      //Power Up Timer
#FUSES STVREN                   //Stack full/underflow will cause reset
#FUSES NODEBUG                  //No Debug mode for ICD
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
#FUSES NOWRT                    //Program memory not write protected
#FUSES NOWRTD                   //Data EEPROM not write protected
#FUSES NOWRTB                   //Boot block not write protected
#FUSES NOWRTC                   //configuration not registers write protected
#FUSES NOCPD                    //No EE protection
#FUSES NOCPB                    //No Boot Block code protection
#FUSES NOEBTR                   //Memory not protected from table reads
#FUSES NOEBTRB                  //Boot block not protected from table reads
#use delay(clock=4000000)      //cristal de 4mhz

//bibliotecas
#include <LIB_HDM64GS12.c>
#include <LIB_GRAPHICS.C>
#include <LIB_BMP_LCD.C>

void main(){
   
   //CHAR letA[]="A";
   //CHAR letB[]="B";
   //CHAR letC[]="C";
   //CHAR espera[]="teste";
   
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_psp(PSP_DISABLED);
   setup_spi(SPI_SS_DISABLED);
   setup_wdt(WDT_OFF);
   setup_timer_0(RTCC_INTERNAL);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_timer_3(T3_DISABLED|T3_DIV_BY_1);

   glcd_init(ON);   //inicializa o display
   glcd_fillScreen(0); //limpa display inteiro
   
   //glcd_text57(34, 55, letA, 1, 1);
   //glcd_rect(46,53,60,63,1,1);
   //glcd_text57(48,  55, letB, 1, 0);

   while(TRUE){
   
   glcd_imagem(1);
   delay_ms(3000);
   glcd_fillScreen(0); //limpa display inteiro
   glcd_imagem(2);
   delay_ms(3000);
   glcd_fillScreen(0); //limpa display inteiro
   
   }
}