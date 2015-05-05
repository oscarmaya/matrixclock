#ifndef MTIMER_H
#define MTIMER_H

#include <inttypes.h>
#include "pins.h"

#define TEMP_MEASURE_TIME	750
#define TEMP_POLL_INTERVAL	1000

#define BTN_STATE_0		0b000
#define BTN_1			0b001
#define BTN_2			0b010
#define BTN_3			0b100

/* Handling long press actions */
#define SHORT_PRESS		50
#define LONG_PRESS		500

enum {
	CMD_BTN_1,
	CMD_BTN_2,
	CMD_BTN_3,
	CMD_BTN_1_LONG,
	CMD_BTN_2_LONG,
	CMD_BTN_3_LONG,
	CMD_BTN_2_3_LONG,
	CMD_BTN_1_2_3_LONG,
	CMD_EMPTY = 0xFF
};

void mTimerInit(void);

uint16_t getTempConvertTimer(void);
void setTempConvertTimer(uint16_t val);
uint16_t getTempStartTimer(void);
void setTempStartTimer(uint16_t val);

void startBeeper(uint16_t time);
uint16_t getBeepTimer(void);
void stopBeeper(void);

uint8_t getBtnCmd(void);

#endif /* MTIMER_H */
