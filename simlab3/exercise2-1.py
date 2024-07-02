# My code

def retrieveArrayValue(array, index):
    # Retrieve the element from the array at the specified index
    return array[index]

# code produced by CGT

def get_value_from_array(array, index):
    # Retrieve the element from the array at the specified index
    return array[index]

# Example usage
array = [10, 20, 30, 40, 50]
index = 2
value = get_value_from_array(array, index)
print(f"The value at index {index} is {value}")

# my revised code

def retrieveArrayValue(array, index):
    # Check if array is of valid type
    if not isinstance(array, (list, tuple)):
        raise TypeError("array must be a list or tuple")
    
    # Check if index is of valid type
    if not isinstance(index, int):
        raise TypeError("index must be an integer")

    # Check if index is within bounds
    if index < 0 or index >= len(array):
        raise IndexError("index out of bounds")

    # Retrieve the element from the array at the specified index
    return array[index]

# Example usage
array = [10, 20, 30, 40, 50]
index = 2
try:
    value = retrieveArrayValue(array, index)
    print(f"The value at index {index} is {value}")
except (TypeError, IndexError) as e:
    print(f"Error: {e}")

# cgt-generated revised code

def get_value_from_array(array, index):
    # Check if index is within bounds
    if index < 0 or index >= len(array):
        raise IndexError("Index out of bounds")
    # Retrieve the element from the array at the specified index
    return array[index]

# Example usage
array = [10, 20, 30, 40, 50]
index = 2
try:
    value = get_value_from_array(array, index)
    print(f"The value at index {index} is {value}")
except IndexError as e:
    print(e)

