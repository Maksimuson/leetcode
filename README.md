<div align="center">

# 🧠 LeetCode Solutions

**Problems solved. Code saved. Progress tracked.**

My personal archive of accepted LeetCode solutions in C++ (and SQL for database problems),
sorted by difficulty and numbered like on LeetCode.

![LeetCode](https://img.shields.io/badge/LeetCode-solutions-FFA116?logo=leetcode&logoColor=white)
![C++](https://img.shields.io/badge/language-C%2B%2B-00599C?logo=cplusplus&logoColor=white)
![Solved](https://img.shields.io/badge/solved-30-brightgreen)
![Easy](https://img.shields.io/badge/Easy-25-00B8A3)
![Medium](https://img.shields.io/badge/Medium-4-FFB800)
![Hard](https://img.shields.io/badge/Hard-1-F63636)
![Last commit](https://img.shields.io/github/last-commit/Maksimuson/leetcode?logo=git&logoColor=white)
![Repo size](https://img.shields.io/github/repo-size/Maksimuson/leetcode)
![Commits](https://img.shields.io/github/commit-activity/t/Maksimuson/leetcode?logo=github)

[Progress](#-progress) · [Topics](#-topics) · [Easy](#-easy) · [Medium](#-medium) · [Hard](#-hard) · [Conventions](#-conventions)

</div>

---

## ✨ About

- 🗂️ **Code only.** Every file is one accepted solution, with no extra noise.
- 🎚️ **Sorted by difficulty.** Solutions live in `Easy`, `Medium` and `Hard` folders.
- 🔢 **Numbered.** Files are named `NNNN-problem-name.cpp`, where `NNNN` is the LeetCode problem number, so they sort in order.
- 🔎 **Easy to browse.** Press `t` on the repo page and type a number or a name to jump straight to the file.

## 📊 Progress

| Difficulty | Solved | Share |
|---|:---:|---|
| 🟢 Easy | 25 | `█████████████████░░░` 83% |
| 🟡 Medium | 4 | `███░░░░░░░░░░░░░░░░░` 13% |
| 🔴 Hard | 1 | `█░░░░░░░░░░░░░░░░░░░` 3% |
| **Total** | **30** | |

## 🧩 Topics

| Topic | Solved | Problems |
|---|:---:|---|
| Array | 6 | #1, #26, #27, #66, #88, #169 |
| Tree | 6 | #94, #100, #101, #104, #108, #110 |
| String | 5 | #13, #14, #28, #58, #67 |
| Stack & Parentheses | 4 | #20, #22, #32, #678 |
| Linked List | 3 | #2, #21, #83 |
| Binary Search | 2 | #35, #69 |
| Dynamic Programming | 1 | #70 |
| Greedy | 1 | #1488 |
| Math | 1 | #9 |
| Database (SQL) | 1 | #175 |

## 📁 Repository layout

```
leetcode/
├── Easy/
│   ├── 0001-two-sum.cpp
│   ├── 0009-palindrome-number.cpp
│   ├── 0013-roman-to-integer.cpp
│   ├── 0175-combine-two-tables.sql
│   └── ...
├── Medium/
│   ├── 0002-add-two-numbers.cpp
│   ├── 0022-generate-parentheses.cpp
│   ├── 0678-valid-parenthesis-string.cpp
│   └── 1488-avoid-flood-in-the-city.cpp
├── Hard/
│   └── 0032-longest-valid-parentheses.cpp
└── README.md
```

## 🟢 Easy

| # | Problem | Topics | Solution |
|---|---|---|---|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | Array, Hash Table | [0001-two-sum.cpp](Easy/0001-two-sum.cpp) |
| 9 | [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | Math | [0009-palindrome-number.cpp](Easy/0009-palindrome-number.cpp) |
| 13 | [Roman to Integer](https://leetcode.com/problems/roman-to-integer/) | Hash Table, String | [0013-roman-to-integer.cpp](Easy/0013-roman-to-integer.cpp) |
| 14 | [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/) | String | [0014-longest-common-prefix.cpp](Easy/0014-longest-common-prefix.cpp) |
| 20 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | Stack, String | [0020-valid-parentheses.cpp](Easy/0020-valid-parentheses.cpp) |
| 21 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | Linked List | [0021-merge-two-sorted-lists.cpp](Easy/0021-merge-two-sorted-lists.cpp) |
| 26 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | Array, Two Pointers | [0026-remove-duplicates-from-sorted-array.cpp](Easy/0026-remove-duplicates-from-sorted-array.cpp) |
| 27 | [Remove Element](https://leetcode.com/problems/remove-element/) | Array, Two Pointers | [0027-remove-element.cpp](Easy/0027-remove-element.cpp) |
| 28 | [Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/) | String | [0028-find-the-index-of-the-first-occurrence-in-a-string.cpp](Easy/0028-find-the-index-of-the-first-occurrence-in-a-string.cpp) |
| 35 | [Search Insert Position](https://leetcode.com/problems/search-insert-position/) | Binary Search | [0035-search-insert-position.cpp](Easy/0035-search-insert-position.cpp) |
| 58 | [Length of Last Word](https://leetcode.com/problems/length-of-last-word/) | String | [0058-length-of-last-word.cpp](Easy/0058-length-of-last-word.cpp) |
| 66 | [Plus One](https://leetcode.com/problems/plus-one/) | Array, Math | [0066-plus-one.cpp](Easy/0066-plus-one.cpp) |
| 67 | [Add Binary](https://leetcode.com/problems/add-binary/) | String, Math | [0067-add-binary.cpp](Easy/0067-add-binary.cpp) |
| 69 | [Sqrt(x)](https://leetcode.com/problems/sqrtx/) | Binary Search, Math | [0069-sqrt(x).cpp](Easy/0069-sqrt%28x%29.cpp) |
| 70 | [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) | DP | [0070-climbing-stairs.cpp](Easy/0070-climbing-stairs.cpp) |
| 83 | [Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/) | Linked List | [0083-remove-duplicates-from-sorted-list.cpp](Easy/0083-remove-duplicates-from-sorted-list.cpp) |
| 88 | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) | Array, Two Pointers | [0088-merege-sorted-array.cpp](Easy/0088-merege-sorted-array.cpp) |
| 94 | [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/) | Tree, DFS | [0094-binary-tree-inorder-traversal.cpp](Easy/0094-binary-tree-inorder-traversal.cpp) |
| 100 | [Same Tree](https://leetcode.com/problems/same-tree/) | Tree, DFS | [0100-same-tree.cpp](Easy/0100-same-tree.cpp) |
| 101 | [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/) | Tree, DFS | [0101-symmetric-tree.cpp](Easy/0101-symmetric-tree.cpp) |
| 104 | [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/) | Tree, DFS | [0104-maximum-depth-of-binary-tree.cpp](Easy/0104-maximum-depth-of-binary-tree.cpp) |
| 108 | [Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/) | Tree, Divide and Conquer | [0108-convert-sorted-array-to-binary-search-tree.cpp](Easy/0108-convert-sorted-array-to-binary-search-tree.cpp) |
| 110 | [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/) | Tree, DFS | [0110-bakanced-binary-tree.cpp](Easy/0110-bakanced-binary-tree.cpp) |
| 169 | [Majority Element](https://leetcode.com/problems/majority-element/) | Array, Sorting | [0169-majority-element.cpp](Easy/0169-majority-element.cpp) |
| 175 | [Combine Two Tables](https://leetcode.com/problems/combine-two-tables/) | Database, SQL | [0175-combine-two-tables.sql](Easy/0175-combine-two-tables.sql) |

## 🟡 Medium

| # | Problem | Topics | Solution |
|---|---|---|---|
| 2 | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | Linked List, Math | [0002-add-two-numbers.cpp](Medium/0002-add-two-numbers.cpp) |
| 22 | [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/) | Backtracking, String | [0022-generate-parentheses.cpp](Medium/0022-generate-parentheses.cpp) |
| 678 | [Valid Parenthesis String](https://leetcode.com/problems/valid-parenthesis-string/) | String, Greedy | [0678-valid-parenthesis-string.cpp](Medium/0678-valid-parenthesis-string.cpp) |
| 1488 | [Avoid Flood in The City](https://leetcode.com/problems/avoid-flood-in-the-city/) | Greedy, Hash Table | [1488-avoid-flood-in-the-city.cpp](Medium/1488-avoid-flood-in-the-city.cpp) |

## 🔴 Hard

| # | Problem | Topics | Solution |
|---|---|---|---|
| 32 | [Longest Valid Parentheses](https://leetcode.com/problems/longest-valid-parentheses/) | DP, Stack | [0032-longest-valid-parentheses.cpp](Hard/0032-longest-valid-parentheses.cpp) |

## 🔍 Finding a solution

| I want to... | Do this |
|---|---|
| Jump to a problem by number or name | Press `t` on the repo page and type it |
| See what I solved recently | Open the [commit history](https://github.com/Maksimuson/leetcode/commits) |
| Search inside the code | Use GitHub's code search (`/`) with a keyword or an algorithm name |

## 🧭 Conventions

- One accepted solution per problem.
- Solutions are stored as submitted to LeetCode, so they keep LeetCode's `class Solution` signatures. Database problems are plain `.sql` files.
- Folders are by difficulty: `Easy`, `Medium`, `Hard`.
- Adding a solution? Add its row to the table in this README too, and bump the counters.

## ⚠️ Disclaimer

These solutions are here for my own practice and reference. If you are working through the same problems,
try solving them yourself first and use this repo to compare approaches afterwards. Every platform's rules
on sharing solutions differ, so check them before reusing code in contests or assessments.

---

<div align="center">

If this repo helped you, a ⭐ is always appreciated.

</div>