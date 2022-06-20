import re

phoneNumRegex = re.compile(r'\d\d\d\d\d\d\d\d\d\d')
result = re.sub(r"\s+", "", '0928,123456')
result = re.sub(r",", "", result)
result = re.sub(r"-", "", result)

split_phone = list(result)
split_phone.insert(7, '_')
split_phone.insert(4, '_')
phone = ''.join(split_phone)

print(phone)

result = re.sub(r"\s+", "", '0928,234-567')
result = re.sub(r",", "", result)
result = re.sub(r"-", "", result)
split_phone = list(result)
split_phone.insert(7, '_')
split_phone.insert(4, '_')
phone = ''.join(split_phone)

print(phone)

result = re.sub(r"\s+", "", '0928, 345-678')
result = re.sub(r",", "", result)
result = re.sub(r"-", "", result)
split_phone = list(result)
split_phone.insert(7, '_')
split_phone.insert(4, '_')
phone = ''.join(split_phone)

print(phone)

result = re.sub(r"\s+", "", '0927-456-789')
result = re.sub(r",", "", result)
result = re.sub(r"-", "", result)
split_phone = list(result)
split_phone.insert(7, '_')
split_phone.insert(4, '_')
phone = ''.join(split_phone)
print(phone)


result = re.sub(r"\s+", "", '0930 567  891')
result = re.sub(r",", "", result)
result = re.sub(r"-", "", result)
split_phone = list(result)
split_phone.insert(7, '_')
split_phone.insert(4, '_')
phone = ''.join(split_phone)
print(phone)


result = re.sub(r"\s+", "", '0935  678-910')
result = re.sub(r",", "", result)
result = re.sub(r"-", "", result)
split_phone = list(result)
split_phone.insert(7, '_')
split_phone.insert(4, '_')
phone = ''.join(split_phone)
print(phone)
