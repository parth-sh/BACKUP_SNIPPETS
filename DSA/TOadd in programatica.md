
Compare strings
```java
boolean result = str1.equals(str2);
```

String Length
```java
int len = str.length();
```


Increament over hashmap
```java
for(int n: nums) {
    hash.put(n, hash.getOrDefault(n, 0) + 1);
}
```

Iterate over hashMap
```java
HashMap<Integer, Integer> hash = new HashMap<>();
for (HashMap.Entry<Integer, Integer> entry : hash.entrySet()) {
    System.out.println(entry.getKey() + "->" + entry.getValue());
}
hash.forEach((key, value) -> System.out.println(key + ": " + value));
```

String toCharArray
```java
String str = "jhgjhgjhgjh";
char[] arr = str.toCharArray();
```

Char array to String
```java
String.valueOf(arr);
```

String to lower case
```java
str.toLowerCase();
```

Remove alphanumeric from string
```java
str.replaceAll("[^a-zA-Z0-9]", "");
```

Remove all white spaces from string
```java
str.replaceAll("\\s+","");
```


StringBuilder append , insert replace

string.substring(start, end +1)



# Ordered HashMap

# Iterate
for key, value in hash.items():