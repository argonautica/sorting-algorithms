letters = [b, d, e, a, c]
letters.sort
=> ["a", "b", "c", "d", "e"]

# checking letters again shows the original array
letters
=> ["b", "d", "e", "a", "c"]

letters.sort!
=> ["a", "b", "c", "d", "e"]
letters
=> ["a", "b", "c", "d", "e"]

# using .sort! (with the exclamation mark) mutates your original letters array.