#ifndef _bsp_H_
#define _bsp_H_

//#include <msp430.h>      //MSP430
#include  <msp430G2553.h>

#define   LcdsArrPort       &P1OUT
#define   LcdsArrPortDir    &P1DIR
#define   LcdsArrPortSel    &P1SEL

#define   PBsArrPort        &P2OUT
#define   PBsArrPortDir     &P2DIR
#define   PBsArrPortSEL     &P2SEL


;#define   PBsArrPort        &P2IN
#define   PBsArrIntPend      &P2IFG
#define   PBsArrIntEN        &P2IE
#define   PBsArrIntEdeSEL    &P2IES
#define   PBsArrPortSEL      &P2SEL
#define   PBsArrPortDir      &P2DIR

#endif
