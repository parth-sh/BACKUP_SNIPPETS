words = ["apple", "banana", "cherry"]
has_short_word = any(len(word) < 5 for word in words)
print(has_short_word)