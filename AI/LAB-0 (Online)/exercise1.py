mark = int(input("Please enter your course mark (0-100): "))

if mark < 0 or mark > 100:
    print("Invalid mark. Please enter a number between 0 and 100.")
elif mark >= 90:
    print("Grade: A")
elif mark >= 80:
    print("Grade: B")
elif mark >= 70:
    print("Grade: C")
elif mark >= 60:
    print("Grade: D")
else:
    print("Grade: F")