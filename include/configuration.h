//This is the configuration file. Here you can setup your remote to fit your needs.


//**COMMANDS**
//This is the commands section. Here you can define, which keys have to pressed for the different functions.
//Alphanumerical keys are written as numbers(1) or lowercase letters(a)
//The same applies to common symbols like ; - * etc.
//Special keys and modifier-keys are written as key-codes(KEY_LEFT_CTRL)
//You can find all the key-codes at: https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/
//Each function can have up to 3 keys pressed simultaneously but doesn't have to
//The second an thitd key can be disabled for each function

//Function: Mute
#define MUTE_KEY_1 KEY_LEFT_CTRL
#define MUTE_EN_2 true
#define MUTE_KEY_2 KEY_LEFT_SHIFT
#define MUTE_EN_3 true
#define MUTE_KEY_3 m

//Function: Un-Mute
#define UNMUTE_KEY_1 KEY_LEFT_CTRL
#define UNMUTE_EN_2 true
#define UNMUTE_KEY_2 KEY_LEFT_SHIFT
#define UNMUTE_EN_3 true
#define UNMUTE_KEY_3 m

//Function Raise-Hand
#define RAISE_KEY_1 KEY_LEFT_CTRL
#define RAISE_EN_2 true
#define RAISE_KEY_2 KEY_LEFT_SHIFT
#define RAISE_EN_3 true
#define RAISE_KEY_3 k

//Function Un-Raise-Hand
#define UNRAISE_KEY_1 KEY_LEFT_CTRL
#define UNRAISE_EN_2 true
#define UNRAISE_KEY_2 KEY_LEFT_SHIFT
#define UNRAISE_EN_3 true
#define UNRAISE_KEY_3 k