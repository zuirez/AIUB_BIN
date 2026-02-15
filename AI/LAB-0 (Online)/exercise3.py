def sum_two_lists(list1, list2):
    result_list = []
    
    for i in range(len(list1)):
        total = list1[i] + list2[i]
        result_list.append(total)
        
    return result_list

list_a = [3, 4, 5, 1]
list_b = [6, 7, 2, 8]

final_result = sum_two_lists(list_a, list_b)
print(f"Input: {list_a} and {list_b}")
print(f"Output: {final_result}")