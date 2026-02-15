def get_first_last_name(full_name):
    name_parts = full_name.split()
    
    first_name = name_parts[0]
    
    last_name = name_parts[-1]
    
    return first_name, last_name

input_name = "Rashedul Islam Shawon"
first, last = get_first_last_name(input_name)

print(f"First name: {first}, Last name: {last}")
