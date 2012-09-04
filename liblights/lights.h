char const*const RED_LED_FILE    = "/sys/devices/virtual/misc/rgb_led/rgb_led/red:brightness";
char const*const GREEN_LED_FILE  = "/sys/devices/virtual/misc/rgb_led/rgb_led/green:brightness";
char const*const BLUE_LED_FILE   = "/sys/devices/virtual/misc/rgb_led/rgb_led/blue:brightness";
char const*const FREQ_FILE       = "/sys/devices/virtual/misc/rgb_led/rgb_led/frequency";
char const*const PWM_FILE        = "/sys/devices/virtual/misc/rgb_led/rgb_led/pwm";
char const*const BLINK_FILE      = "/sys/devices/virtual/misc/rgb_led/rgb_led/blink";
char const*const POWER_FILE      = "/sys/devices/virtual/misc/rgb_led/rgb_led/power";

char const*const LCD_FILE = "/sys/devices/platform/i2c-adapter/i2c-0/0-0036/br::intensity";
char const*const ALS_FILE = "/sys/devices/platform/i2c-adapter/i2c-0/0-0036/als::value";

char const*const BUTTON_FILE     = "";

char const*const KEYBOARD_BACKLIGHT_FILE = "/sys/devices/platform/msm_pmic_misc_led.0/brightness";
char const*const KEYBOARD_ALS_FILE = "/sys/devices/platform/msm_pmic_misc_led.0/als::value";

