#generates a frequency dictionary for a given string input
#parameters:
#   input_string has to be of type string
#   ignore_case has to be a boolean value, by default set to True
#returns a dictionary with a (character, integer) pair.
# The integer representing frequency of the character in the string

def generate_freq_dict(input_string, ignore_case=True):
    try:
        assert isinstance(input_string, str), \
        "first parameter was not a string"                                      
        assert isinstance(ignore_case, bool), \
        "second parameter was not a boolean"                                    #type checking

        if len(input_string) == 0:
            return dict()
        frequency_dict = dict()

        if ignore_case:
            input_string = input_string.lower()                                 #if ignore_case flag set to true, converts to lower case 

        for character in input_string:

            if frequency_dict.get(character, False) == False:                   #if character not present
                frequency_dict[character] = 1                                   #set frequency to 1
            else:                                                               #if character present
                frequency_dict[character]+=1                                    #increment frequency by 1

        return frequency_dict                                                   #returning the frequency dictionary
    except:
        None

print(generate_freq_dict("HeLLo WOrld", True))
print(generate_freq_dict("HeLLo WOrld", False))
print(generate_freq_dict("", False))
print(generate_freq_dict(None, True))
print(generate_freq_dict("87424234/324/567/867'678", False))