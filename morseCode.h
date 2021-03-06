const char* getMorseCodeByChar(char);

const char* getMorseCodeByChar(char character) {
  switch (character) {
    case ('A'):
      return ".-";
      break;

    case ('B'):
      return "-...";
      break;
 
    case ('C'):
      return "-.-.";
      break;
 
    case ('D'):
      return "-..";
      break;
 
    case ('E'):
      return ".";
      break;
 
    case ('F'):
      return "..-.";
      break;

		/* ADD THE OTHER CASES HERE */
    
		case (32): //space
      return "/";
      break;
 
    default: //any other char
			return "";
	}
}