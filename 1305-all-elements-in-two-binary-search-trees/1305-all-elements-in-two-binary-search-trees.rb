# Definition for a binary tree node.
# class TreeNode
#     attr_accessor :val, :left, :right
#     def initialize(val = 0, left = nil, right = nil)
#         @val = val
#         @left = left
#         @right = right
#     end
# end
# @param {TreeNode} root1
# @param {TreeNode} root2
# @return {Integer[]}
def print_elem(root, a)
    return a if root == nil
    print_elem(root.left, a)
    a.append(root.val)
    print_elem(root.right, a)
end
def get_all_elements(root1, root2)
    a=[]
    b=print_elem(root1,a)
    puts "hello"
    b=print_elem(root2,a)
    b.sort
end