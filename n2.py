import re

phoneNumRegex = re.compile(r'\d\d\d\d-\d\d\d-\d\d\d')
result = phoneNumRegex.findall('0928,123456')
number = ''.join(result)
print(number.replace("-", "_"))

result = phoneNumRegex.findall('0928,234-567')
number = ''.join(result)
print(number.replace("-", "_"))

result = phoneNumRegex.findall('0928, 345-678')
number = ''.join(result)
print(number.replace("-", "_"))

result = phoneNumRegex.findall('0927-456-789')
number = ''.join(result)
print(number.replace("-", "_"))

result = phoneNumRegex.findall('0930 567  891')
number = ''.join(result)
print(number.replace("-", "_"))

result = phoneNumRegex.findall('0935  678-910')
number = ''.join(result)
print(number.replace("-", "_"))
