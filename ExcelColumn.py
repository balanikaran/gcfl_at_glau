column = int(input())

splitedDigits = [int(x) for x in str(column)]

excelColumn = ""

while column > 26:
    tComplete = column // 26
    excelColumn += chr(65+tComplete-1)
    column %= 26
else:
    excelColumn += chr(65+column-1)

print(excelColumn)
