//This is the configuration file. Here you can setup your remote to fit your needs.


//**COMMANDS**
//This is the commands section. Here you can define, which keys have to pressed for the different functions.
//Alphanumerical keys are written as numbers(1) or lowercase letters(a)
//The same applies to common symbols like ; - * etc.
//Special keys and modifier-keys are written as key-codes(KEY_LEFT_CTRL)
//You can find all the key-codes at: https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/
//Each function can have up to 3 keys pressed simultaneously but doesn't have to
//The second an thitd key can be disabled for each function

//Command: Mute
#define MUTE_KEY_1 KEY_LEFT_CTRL
#define MUTE_EN_2 true
#define MUTE_KEY_2 KEY_LEFT_SHIFT
#define MUTE_EN_3 true
#define MUTE_KEY_3 m

//Command: Un-Mute
#define UNMUTE_KEY_1 KEY_LEFT_CTRL
#define UNMUTE_EN_2 true
#define UNMUTE_KEY_2 KEY_LEFT_SHIFT
#define UNMUTE_EN_3 true
#define UNMUTE_KEY_3 m

//Command Raise-Hand
#define RAISE_KEY_1 KEY_LEFT_CTRL
#define RAISE_EN_2 true
#define RAISE_KEY_2 KEY_LEFT_SHIFT
#define RAISE_EN_3 true
#define RAISE_KEY_3 k

//Command Un-Raise-Hand
#define UNRAISE_KEY_1 KEY_LEFT_CTRL
#define UNRAISE_EN_2 true
#define UNRAISE_KEY_2 KEY_LEFT_SHIFT
#define UNRAISE_EN_3 true
#define UNRAISE_KEY_3 k


//**BUTTONS**
//This is the buttons section. Here you can define, how your buttons work
//In general, there are 2 settings:
//  1. Enabling or disabling Buttons completely (LED_xx_EN). Disable Buttons if not connected.
//  2. Inverting the Buttons polarity (BT_xx_INV). This inverts buttons in ther on/off state. Can be used if Normaly-Closed Buttons are used.

//Button: Mute
#define BT_MUTE_EN true
#define BT_MUTE_INV false

//Button: Raise-Hand
#define BT_RAISE_EN true
#define BT_RAISE_INV false


//**LIGHTING**
//This is the lighting section. Here you can define, how your buttons should light up
//In general, there are 2 settings:
//  1. Enabling or disabling LEDs completely (LED_xx_yy_EN). Disable LEDs if not connected, or not wanted to light up
//  2. Inverting the LEDs output (LED_xx_yy_INV). This can be used when LEDs inverted in their on/off state, for example when using a transistor to control them

//Lighting: Mute
#define LED_MUTE_ON_EN true
#define LED_MUTE_ON_INV false
#define LED_MUTE_OFF_EN true
#define LED_MUTE_OFF_INV false

//Lighting: Mute
#define LED_RAISE_ON_EN true
#define LED_RAISE_ON_INV false
#define LED_RAISE_OFF_EN true
#define LED_RAISE_OFF_INV false
