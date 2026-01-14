# String Character Replacer

This project implements a string manipulation function in C that substitutes specific characters with new ones.

## ⚙️ Logic

1.  **Function:** `void Karakter_Degistir(char str[], char old, char new)`
2.  **Traversal:** Loops through the string index by index.
3.  **Condition:** If `str[i] == old`, assign `str[i] = new`.
4.  **Result:** The input string is modified in-place.

## 🚀 Example Output

Based on Question 5:
**Input String:** `"MERHABA"`
**Replace:** `'A'` with `'X'`

* Index 1 ('E'): No change
* **Index 4 ('A'):** Change to 'X'
* **Index 6 ('A'):** Change to 'X'

```text
--- Karakter Degistirme Programi ---
Orijinal Metin: MERHABA
Degisecek: 'A' -> Yeni: 'X'
Yeni Metin:     MERHXHX
