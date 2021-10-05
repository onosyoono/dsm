regex_integer_in_range = r"^[1-9][\d]{5}$"	# Do not delete 'r'. First digit must be between 1 and 9 whereas the rest of them must be any digit but there must be 5 digits making the total a six digit number
regex_alternating_repetitive_digit_pair = r"(\d)(?=\d\1)"	# Do not delete 'r'.


import re
P = input()

print (bool(re.match(regex_integer_in_range, P)) 
and len(re.findall(regex_alternating_repetitive_digit_pair, P)) < 2)
