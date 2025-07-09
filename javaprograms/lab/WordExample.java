 public class WordExample { 
    private String strdata; 
    public WordExample(String str) { 
    this.strdata = str.trim(); 
    } 
    private boolean isVowel(char ch) { 
    return "AEIOU".indexOf(ch) != -1; 
    } 
    public void countWord() { 
    String[] words = strdata.split("\\s+"); 
    int count = 0; 
    for (String word : words) { 
    word = word.replaceAll("[.?!]", ""); 
    if (word.length() > 0 && isVowel(word.charAt(0)) && isVowel(word.charAt(word.length() - 
    1))) { 
    } 
    count++; 
    } 
    System.out.println("Number of words beginning and ending with a vowel: " + count); 
    } 
    public void placeWord() { 
    String[] words = strdata.split("\\s+"); 
    StringBuilder vowelWords = new StringBuilder(); 
    StringBuilder otherWords = new StringBuilder(); 
    for (String word : words) { 
    String cleanWord = word.replaceAll("[.?!]", ""); 
    if (cleanWord.length() > 0 && isVowel(cleanWord.charAt(0)) && 
    isVowel(cleanWord.charAt(cleanWord.length() - 1))) { 
    vowelWords.append(word).append(" "); 
    } else { 
    otherWords.append(word).append(" "); 
    } 
    } 
    String result = (vowelWords.toString() + otherWords.toString()).trim(); 
    System.out.println("Rearranged Sentence: " + result); 
    } 
    public static void main(String[] args) { 
    WordExample example = new WordExample("ARE YOU OKAY!"); 
    example.countWord(); 
    example.placeWord(); 
    } 
    } 
