class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = ''.join(char for char in s.lower() if char.isalnum())
        return True if s == s[::-1] else False