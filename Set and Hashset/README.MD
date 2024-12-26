# Sets vs Hashset

Topics | Sets | Hashsets
--- | --- | ---
Insertion | log(n) + rebalance | O(1) Avg
Deletion | log(n) + rebalance | O(1) Avg
Search | log(n) + rebalance | O(1) Avg
Ordering | Increasing order | No order
Implemention | Self balancing BST | Hash table

*Worst case hashset time complexity is O(n). In the worst case scenario, all the items in the set have the same hash code and are therefore stored in the same bucket. In this case, you'll need to iterate over all of them serially, which would be an O(n) operation.