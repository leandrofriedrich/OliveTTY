#ifndef _INCLUDE_CFG_MMCI_H_
#define _INCLUDE_CFG_MMCI_H_

/*
 * Do not edit! Automatically generated on Tue Jun  7 21:58:03 2011
 */

#ifndef MMC_BLOCK_SIZE
#define MMC_BLOCK_SIZE 512
#endif

#ifndef MMC_MAX_INIT_POLLS
#define MMC_MAX_INIT_POLLS 512
#endif

#ifndef MMC_MAX_RESET_POLLS
#define MMC_MAX_RESET_POLLS 255
#endif

#ifndef MMC_MAX_WRITE_POLLS
#define MMC_MAX_WRITE_POLLS 1024
#endif

#ifndef MMC_MAX_WRITE_RETRIES
#define MMC_MAX_WRITE_RETRIES 32
#endif

#ifndef MMC_MAX_READ_RETRIES
#define MMC_MAX_READ_RETRIES 8
#endif

#ifndef MMC_MAX_REG_POLLS
#define MMC_MAX_REG_POLLS 512
#endif

#ifndef MMC_MAX_CMDACK_POLLS
#define MMC_MAX_CMDACK_POLLS 1024
#endif

#ifndef SPI_MMC_CLK
#define SPI_MMC_CLK 33000000
#endif

#ifndef SPI_MMC_CS
#define SPI_MMC_CS 1
#endif

#ifndef MMC_CD_PIN
#define MMC_CD_PIN 18
#endif

#ifndef MMC_CD_PORT
#define MMC_CD_PORT NUTGPIO_PORTB
#endif

#ifndef MMC_MAX_R1_POLLS
#define MMC_MAX_R1_POLLS 1024
#endif


#endif
