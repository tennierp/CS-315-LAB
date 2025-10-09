# Lab 07 — Building a Huffman Tree

**Due:** No Due Date  
**Points:** 30  
**Submission:** On paper

## Overview

This on-paper lab is based on Project 3 and covers all steps of Huffman coding by hand using a short text. You will:

1. Tokenize the text
2. Build a binary search tree (BST)
3. Create a priority queue (PQ)
4. Construct the Huffman tree
5. Generate both the header and encoded message

> **Important:** Read and follow the algorithms as specified in the main Huffman project statement. Your process here should mirror those algorithms exactly (tokenization rules, BST behavior, PQ ordering, Huffman merging and tie-breaking).

## Logistics

- **Format:** On paper
- **Group Size:** Work in groups of two
- **Submission:** Submit one lab per group with both members' names on every sheet

---

## Input Text

Use the following sentence as your input:

```
the moon shines bright at night, the night is full of light, and the stars shine bright
```

---

## Checkpoint 1 — Tokenization

Write each token (word) in lowercase, one per line, in the order they appear.

**Record:**
- Total tokens: _____
- Distinct words: _____

> **Checkpoint:** Call the instructor to verify all words are present and ordered as they appeared in input.

---

## Checkpoint 2 — Build BST and Frequency Table

Insert each token, in the order your scanner produced them, into an empty BST keyed by the word (dictionary order). For each node, note the frequency count of that word.

Produce a frequency table by performing an **in-order traversal** of the tree.

### Sample Format (partial)

| Word | Frequency |
|------|-----------|
| and | 1 |
| at | 1 |
| bright | 2 |
| … | … |

### Required Calculations

- BST height: _____
- BST unique words: _____
- Total tokens: _____
- Min frequency: _____
- Max frequency: _____

> **Checkpoint:** Call the instructor when this checkpoint is ready.

---

## Checkpoint 3 — Build Priority Queue

Take your (word, frequency) pairs from the BST and sort them using the project's rules:

1. **Descending by frequency** (largest count first)
2. **Ties broken lexicographically** (a–z)

### Sample PQ Output Format (partial)

| Count | Word |
|-------|------|
| 3 | the |
| 2 | bright |
| 2 | night |
| 1 | and |
| 1 | at |
| … | … |

> **Checkpoint:** Have the instructor check your PQ ordering before proceeding.

---

## Checkpoint 4 — Build Huffman Tree

Using the sorted list from Checkpoint 3, construct the Huffman tree step-by-step. Refer to the project statement for the algorithm.

**Requirements:**
- Each internal node should contain a count and a word, just as the leaf nodes
- Follow the merging algorithm exactly as specified in the project

> **Checkpoint:** Call the instructor once your Huffman tree is complete.

---

## Checkpoint 5 — Generate Huffman Codes (Header)

1. Assign **0** to all left edges and **1** to all right edges
2. Perform a **pre-order traversal** of the tree
3. Collect binary bits until you reach a leaf node
4. Write down the word and its binary code
5. Check that all codes are **prefix-free**

### Sample Header Style (partial)

```
and 0000
at 0001
bright 01
...
night 101
the 11
```

> **Checkpoint:** Ask the instructor to verify your codes before encoding the message.

---

## Checkpoint 6 — Header and Encoded Message

Using the header output from the previous step, write the encoded version of the input text. Separate each code with a single space to make checking easy.

### Sample Encoded Message Style (partial)

```
11 0110 1000 01 0001 101 11 ...
```

> **Checkpoint:** Have the instructor check your encoded message before submitting your lab.

---

## Submission Requirements

Your submission should include:

- [ ] Token list
- [ ] BST frequency table
- [ ] PQ ordering
- [ ] Final Huffman tree
- [ ] Complete header
- [ ] Encoded message

**Remember:** Put both names on every page!