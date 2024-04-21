def calculate_distances_with_wraparound(keyboard_matrix, start_position, word):
    result = []
    current_position = start_position

    # Create a dictionary to store the position of each character
    char_positions = {}
    for row_index, row in enumerate(keyboard_matrix):
        for col_index, char in enumerate(row):
            char_positions[char] = (row_index, col_index)

    def get_wrapped_position(row, col):
        # Helper function to get the wrapped position for both rows and columns
        wrapped_row = row % len(keyboard_matrix)
        wrapped_col = col % len(keyboard_matrix[wrapped_row])
        return wrapped_row, wrapped_col

    for char in word:
        if char not in char_positions:
            raise ValueError(f"Character '{char}' not found in the keyboard matrix.")

        next_position = char_positions[char]
        wrapped_next_position = get_wrapped_position(*next_position)

        # Calculate minimum vertical and horizontal distances considering wraparound
        distance = (
            min((next_position[0] - current_position[0]) % len(keyboard_matrix),
                (wrapped_next_position[0] - current_position[0]) % len(keyboard_matrix)),
            min(next_position[1] - current_position[1], wrapped_next_position[1] - current_position[1])
        )
        result.append(distance)
        current_position = next_position

    return result
