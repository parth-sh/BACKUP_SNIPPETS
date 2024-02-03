## Common Java Nomenclature

Ascii code from character
```java
int asciiCode = (int) charLetter;
```

Input
```java
import java.util.Scanner;
Scanner scanner = new Scanner(System.in);
String input = scanner.nextLine();
char charInput = scanner.nextLine().charAt(0);
int intInput = scanner.nextInt();
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

Integer array length
```java
int n = nums.length;
```

Increament over hashmap
```java
for(int n: nums) {
    hash.put(n, hash.getOrDefault(n, 0) + 1);
}
```

Iterate over hashMap
```java
for (Map.Entry<Integer, Integer> entry : hash.entrySet()) {
    System.out.println(entry.getKey() + "->" + entry.getValue());
}
```

Return array without declaration
```java
return new int[]{-1, -1};
```

String to char array (Most used for string questions)
```java
String str = "jhgjhgjhgjh";
char[] arr = str.toCharArray();
```

Largest and smallest Integer values
```java
int nini = Integer.MAX_VALUE;
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
