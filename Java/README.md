## Common Java Nomenclature

Ascii code from character
```java
int asciiCode = (int) charLetter;
```

Compare strings
```java
boolean result = str1.equals(str2);
```

String Length
```java
int len = str.length();
```

For each loop java
```java
for(char c: s.toCharArray()) {
    hash[c]++;
}
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

Return array without declaration
```java
return new int[]{-1, -1};
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

Largest and smallest Integer values
```java
int mini = Integer.MAX_VALUE;
int maxi = Integer.MIN_VALUE;
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

ArrayList
```java
int size = arrayList. size();
arrayList.add(1);
arrayList.get(0);
```