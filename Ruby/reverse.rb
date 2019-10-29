letters = ["b", "d", "e", "a", "c"]
=> ["b", "d", "e", "a", "c"]
# Ruby doesn't care about the alphabetical pattern, it only reverses the order of the array
letters.reverse
=> ["c", "a", "e", "d", "b"]
# The original array wasn't mutated because bang(!) wasn't used.
letters
=> ["b", "d", "e", "a", "c"]

# Using bang(!) here mutates the array so the order has changes
letters.reverse!
=> ["c", "a", "e", "d", "b"]
letters
=> ["c", "a", "e", "d", "b"]