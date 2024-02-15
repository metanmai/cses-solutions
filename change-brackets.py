str, newStr = '[5,5,5]', ''

for ch in str:
	if ch == '[':
		newStr += '{'

	elif ch == ']':
		newStr += '}'

	else:
		newStr += ch

print('\n ---------------------------------------------------------------------- \n')
print(newStr)