#include <stdbool.h>
#include <stdint.h>
#include "nrf_gpio.h"




/**
 * main() function
 * @return 0. int return type required by ANSI/ISO standard.
 */
int main( void )
{
  // Configure LED-pins as outputs
  nrf_gpio_range_cfg_output( 28u, 31u );

  while ( 1 )
  {
    nrf_gpio_pin_toggle( 28u );
    nrf_gpio_pin_toggle( 29u );
    nrf_gpio_pin_toggle( 30u );
    nrf_gpio_pin_toggle( 31u );

    for ( uint32_t i = 1000000; i > 0; i-- );
  }
}
