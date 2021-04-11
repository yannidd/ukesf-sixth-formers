// TODO: Try your own values for the `time_unit` and `message` variables below.
// Time unit in ms (see https://bit.ly/3cTXhVV).
const unsigned int time_unit = 125;
// The message to translate to morse.
const String message = String("SOS");

/**
 * Sets the built-in LED high for `time_unit` ms, then sets it to low.
 */
void dot() {
  // TODO: Complete this function.
}

/**
 * Sets the built-in LED high for 3 * `time_unit` ms, then sets it to low.
 */
void dash() {
  // TODO: Complete this function.
}

/**
 * Converts an uppercase English character [A-Z] or a number [0-9] to its Morse
 * encoding. For any other character, the function returns an empty string.
 *
 * @param symbol The English character.
 * @return The Morse string.
 */
String english_to_morse(char symbol) {
  if (symbol == 'A')
    return String(".-");
  else if (symbol == 'B')
    return String("-...");
  else if (symbol == 'C')
    return String("-.-.");
  else if (symbol == 'D')
    return String("-..");
  else if (symbol == 'E')
    return String(".");
  else if (symbol == 'F')
    return String("..-.");
  else if (symbol == 'G')
    return String("--.");
  else if (symbol == 'H')
    return String("....");
  else if (symbol == 'I')
    return String("..");
  else if (symbol == 'J')
    return String(".---");
  else if (symbol == 'K')
    return String("-.-");
  else if (symbol == 'L')
    return String(".-..");
  else if (symbol == 'M')
    return String("--");
  else if (symbol == 'N')
    return String("-.");
  else if (symbol == 'O')
    return String("---");
  else if (symbol == 'P')
    return String(".--.");
  else if (symbol == 'Q')
    return String("--.-");
  else if (symbol == 'R')
    return String(".-.");
  else if (symbol == 'S')
    return String("...");
  else if (symbol == 'T')
    return String("-");
  else if (symbol == 'U')
    return String("..-");
  else if (symbol == 'V')
    return String("...-");
  else if (symbol == 'W')
    return String(".--");
  else if (symbol == 'X')
    return String("-..-");
  else if (symbol == 'Y')
    return String("-.--");
  else if (symbol == 'Z')
    return String("--..");
  else if (symbol == '0')
    return String("-----");
  else if (symbol == '1')
    return String(".----");
  else if (symbol == '2')
    return String("..---");
  else if (symbol == '3')
    return String("...--");
  else if (symbol == '4')
    return String("....-");
  else if (symbol == '5')
    return String(".....");
  else if (symbol == '6')
    return String("-....");
  else if (symbol == '7')
    return String("--...");
  else if (symbol == '8')
    return String("---..");
  else if (symbol == '9')
    return String("----.");
  else
    return String("");
}

/**
 * Converts an English string to its Morse encoding, and then transmits it using
 * the `dot()` and `dash()` functions.
 *
 * The encoding is based on the description in https://bit.ly/3cPObJV.
 *
 * @param english The string to be transmitted.
 */
void morse(String english) {
  for (unsigned int i = 0; i < english.length(); i++) {
    char symbol = english.charAt(i);
    if (symbol == ' ') {
      // Medium gap.
      delay(7 * time_unit);
    } else {
      String morse_sequence = english_to_morse(symbol);

      for (unsigned int j = 0; j < morse_sequence.length(); j++) {
        if (morse_sequence.charAt(j) == '-')
          dash();
        else if (morse_sequence.charAt(j) == '.')
          dot();

        // Inter-element gap.
        delay(time_unit * (j < morse_sequence.length() - 1));
      }

      // Short gap.
      delay(3 * time_unit * (i < english.length() - 1));
    }
  }
}

void setup() {
  // Set the built-in LED to be an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Transmit the message in Morse.
  morse(message);
  // Wait two seconds before the next message.
  delay(2000);
}
