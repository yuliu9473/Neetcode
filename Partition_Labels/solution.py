class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        last_idx = {}
        for i in range(len(s)):
            last_idx[s[i]] = i
        result = []
        size = 0
        substring_last = 0
        for i in range(len(s)):
            substring_last = max(substring_last, last_idx[s[i]])
            size += 1
            if i is substring_last:
                result.append(size)
                size = 0

        return result

