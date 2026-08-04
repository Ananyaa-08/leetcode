<h2><a href="https://leetcode.com/problems/contains-duplicate-ii">219. Contains Duplicate II</a></h2>

<h3>Easy</h3>

<p>Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.</p>

<h3>Solution</h3>

<pre><code>#include &lt;vector&gt;
#include &lt;unordered_set&gt;

class Solution {
public:
    bool containsNearbyDuplicate(std::vector&lt;int&gt;&amp; nums, int k) {
        std::unordered_set&lt;int&gt; set;

        for (int i = 0; i &lt; nums.size(); ++i) {
            if (i &gt; k) {
                set.erase(nums[i - k - 1]);
            }

            if (set.count(nums[i])) {
                return true;
            }

            set.insert(nums[i]);
        }

        return false;
    }
};
</code></pre>
