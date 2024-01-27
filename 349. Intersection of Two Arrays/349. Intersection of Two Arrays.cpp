class Solution(object):
    def intersection(self, nums1, nums2):
        nums1=set(nums1)
        nums2=set(nums2)
        ans=nums1.intersection(nums2)
        return ans

