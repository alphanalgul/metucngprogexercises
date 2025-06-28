--Creating a complete ternary tree and defining a variety of operations on it such as completeternaryheight which returns the height of the tree,
--childnoternary which returns a list in which the first element is the number of nodes with 3 children, second element number of node with 2 children
--third element number of nodes with 1 children and finally the fourth element number of nodes with 0 children
--childlistternary creates a list of list in which the first list is the nodes with 3 children, the second list is the nodes with 2 children, the third
--list is nodes with 1 children and the fourth list is the elements with 0 children


-- Data Type for Ternary Tree
data TernaryTree = Empty | Node Int TernaryTree TernaryTree TernaryTree  deriving (Show,Eq,Ord)

 
----------------------------------------------------------------------------------------------------------------------------------------------------------------

-- completeternary
data TernaryTree = Empty | Node Int TernaryTree TernaryTree TernaryTree  deriving (Show) 
build i n = if i > n then Empty else Node i (build (3*i - 1) n)  (build (3*i) n)  (build (3*i + 1) n) 
completeternary n = build 1 n 
					   


----------------------------------------------------------------------------------------------------------------------------------------------------------------



----------------------------------------------------------------------------------------------------------------------------------------------------------------

-- completeternaryheight
completeternaryheight :: TernaryTree -> Int

-- Height of an empty tree 0
completeternaryheight Empty = 0

-- Height of a tree with single node 0 (no children)
completeternaryheight (Node _ Empty Empty Empty) = 0 

-- Height of a tree with children 1 (edge connection to the root) +  maximum [completeternaryheight left, completeternaryheight mid, completeternaryheight right]
completeternaryheight (Node _ left mid right) = 1 + maximum [completeternaryheight left, completeternaryheight mid, completeternaryheight right]

----------------------------------------------------------------------------------------------------------------------------------------------------------------

----------------------------------------------------------------------------------------------------------------------------------------------------------------
-- childnoternary
childnoternary :: TernaryTree -> [Int]
childnoternary Empty = [0, 0, 0, 0] 
childnoternary (Node _ left middle right) =
   -- counting the no of children in the subtrees
    let [left_3, left_2, left_1, left_0] = childnoternary left 
        [middle_3, middle_2, middle_1, middle_0] = childnoternary middle
        [right_3, right_2, right_1, right_0] = childnoternary right 

        -- Finding the no. of children of the current node
        children = [left, middle, right]
        childrencount = length (filter (/= Empty) children) -- counting the children (filtering out the empty children)

        -- Finding the total children for each child number
        totalchild_3 = left_3 + middle_3 + right_3 
        totalchild_2 = left_2 + middle_2 + right_2 
        totalchild_1 = left_1 + middle_1 + right_1
        totalchild_0 = left_0 + middle_0 + right_0 

     -- Upgrade the total num of children
    in case childrencount of
        3 -> [totalchild_3 + 1, totalchild_2, totalchild_1, totalchild_0]
        2 -> [totalchild_3, totalchild_2 + 1, totalchild_1, totalchild_0]
        1 -> [totalchild_3, totalchild_2, totalchild_1 + 1, totalchild_0]
        0 -> [totalchild_3, totalchild_2, totalchild_1, totalchild_0 + 1]

----------------------------------------------------------------------------------------------------------------------------------------------------------------
-- childlistternary
-- Basically the same function as the childnoternary
childlistternary :: TernaryTree -> [[Int]]
childlistternary Empty = [[], [], [], []] 
childlistternary (Node x left middle right) =
    -- counting the no of children in the subtrees 
    let [left_3, left_2, left_1, left_0] = childlistternary left 
        [middle_3, middle_2, middle_1, middle_0] = childlistternary middle 
        [right_3, right_2, right_1, right_0] = childlistternary right 
        
		-- Finding the no. of children of the current node
        children = [left, middle, right]
        childrencount = length (filter (/= Empty) children) -- counting the children (filtering out the empty children)

        -- combine the ones with the same no. of children
        child_3 = left_3 ++ middle_3 ++ right_3
        child_2 = left_2 ++ middle_2 ++ right_2
        child_1 = left_1 ++ middle_1 ++ right_1
        child_0 = left_0 ++ middle_0 ++ right_0

    -- create the list of lists based on no. of children
    in case childrencount of
        3 -> [x:child_3, child_2, child_1, child_0]
        2 -> [child_3, x:child_2, child_1, child_0]
        1 -> [child_3, child_2, x:child_1, child_0]
        0 -> [child_3, child_2, child_1, x:child_0]

----------------------------------------------------------------------------------------------------------------------------------------------------------------

