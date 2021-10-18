static class SuffixTree {
		class Edge {
			/*
			 * s[first : last] = label (inclusive)
			 * 
			 * if an edge is a leaf we will set immediately last as text.length() - 1, instead of 
			 * using a global variable. This because at any step the suffix to insert is less long than 
			 * any other path already in the tree.
			 * 
			 * PAY ATTENTION: THIS version IS NOT online. To make it online we should introduce the global variable 
			 * 'end'.
			 */
			
			
			int first, last;
			
			public Edge(int f, int l) {
				first = f;
				last = l;
			}
		}
		
		class Node {
			/*
			 * Assuming that the alphabet is just {'a', ..., 'z'}.
			 * For case with bigger alphabet we could pass to an implementation with AVL Tree or better.
			 */
			
			Node[] nodes = new Node['z' - 'a' + 1];
			Edge[] edges = new Edge['z' - 'a' + 1];
			
			int pathLabelLength;
			int additionalEdge = -1;
			
			Node father = null;
			Node suffixLink = null;
			
			int position;
			int depth;
			int numberOfLeaves;
			
			public Node(int pll, int p) {
				pathLabelLength = pll;
				position = p;
			}
		}
		
		Node root;
		char[] text;
		
		Node[] treeNodes;
		
		public SuffixTree(String t) {
			root = new Node(0, 0);
			text = (t + "$").toCharArray();
			
			treeNodes = new Node[text.length];
			
			buildTree();
		}
		
		private void buildTree() {
			root.suffixLink = root;
			
			int firstSuffixToCompute = 0;
			
			Node currentNode = root;
			
			int nodesCounter = 0;
			treeNodes[nodesCounter] = root;
			nodesCounter ++;
			
			for(int i = 0; i < text.length; i ++) {
				boolean rule3 = false;
				Node lastInternalNode = null;
				
				for(int j = firstSuffixToCompute; j <= i; j ++) {
					Node newInternalNode = null;
					int numberOfTraversedCharacters = currentNode.pathLabelLength;
					
					while(true) {
						char nextCharacter = text[j + numberOfTraversedCharacters];
						
						/*
						 * If the current node has not an edge which starts with 'nextCharacter'
						 * we just have to add it.
						 * 
						 * PAY ATTENTION: 'j + numberOfTraversedCharacters == j + currentSuffixLength - 1' 
						 * is ALWAYS true IN FIRST 2 METHODS (in the rest of the loop it is not).
						 */
						
						if(nextCharacter == '$') {
							currentNode.additionalEdge = j + numberOfTraversedCharacters;
							firstSuffixToCompute ++;
							break;
						}
						
						if(currentNode.edges[nextCharacter - 'a'] == null) {
							currentNode.edges[nextCharacter - 'a'] = new Edge(j + numberOfTraversedCharacters, text.length - 1); // because it is a new leaf
							break;
						}
						
						int currentSuffixLength = i - j + 1;
						int edgeLength = currentNode.edges[nextCharacter - 'a'].last - currentNode.edges[nextCharacter - 'a'].first + 1;
						
						if(edgeLength < currentSuffixLength - numberOfTraversedCharacters) {
							numberOfTraversedCharacters += edgeLength;
							currentNode = currentNode.nodes[nextCharacter - 'a'];
							continue;
						}
						
						/*
						 * Checking for rule3.
						 */
						
						char edgeCharacter = text[currentNode.edges[nextCharacter - 'a'].first + (currentSuffixLength - numberOfTraversedCharacters) - 1];
						char pathCharacter = text[j + currentSuffixLength - 1];
						
						rule3 = edgeCharacter == pathCharacter;
						
						if(rule3)
							break;
						
						/*
						 * New internal node.
						 */
						
						newInternalNode = new Node(currentSuffixLength - 1, nodesCounter);
						
						treeNodes[nodesCounter] = newInternalNode;
						nodesCounter ++;
						
						newInternalNode.edges[edgeCharacter - 'a'] = new Edge(currentNode.edges[nextCharacter - 'a'].first + (currentSuffixLength - numberOfTraversedCharacters) - 1, currentNode.edges[nextCharacter - 'a'].last);
						newInternalNode.nodes[edgeCharacter - 'a'] = currentNode.nodes[nextCharacter - 'a'];
						
						if(currentNode.nodes[nextCharacter - 'a'] != null)
							currentNode.nodes[nextCharacter - 'a'].father = newInternalNode;
						
						currentNode.edges[nextCharacter - 'a'].last = currentNode.edges[nextCharacter - 'a'].first + (currentSuffixLength - numberOfTraversedCharacters) - 2; // because this is not a leaf anymore
						currentNode.nodes[nextCharacter - 'a'] = newInternalNode;
						
						newInternalNode.father = currentNode;
						
						if(pathCharacter == '$')
							newInternalNode.additionalEdge = j + currentSuffixLength - 1;
						else
							newInternalNode.edges[pathCharacter - 'a'] = new Edge(j + currentSuffixLength - 1, text.length - 1); // because this is a new leaf
					
						break;
					}
					
					/*
					 * Suffix link assignment.
				     */
							
					if(lastInternalNode != null) {
						lastInternalNode.suffixLink = newInternalNode == null ? currentNode : newInternalNode;
						lastInternalNode = null;
					}
							
					/*
					 * If the path label of the new internal node is long just 1 character 
					 * we already know its suffix link and it is the root.
					 */
					
					if(newInternalNode != null) {
						if(newInternalNode.pathLabelLength == 1)
							newInternalNode.suffixLink = root;
						else
							lastInternalNode = newInternalNode;
					}
					
					if(rule3)
						break;
					
					/*
					 * If not it means that has been added a leaf, so we have to decrease the depth (of AT MOST 2).
					 */
	 
					if(currentNode.suffixLink != null)
						currentNode = currentNode.suffixLink;
					else
						currentNode = currentNode.father.suffixLink;
					
					firstSuffixToCompute ++;
				}
			}
		}
		
		public int[] getSuffixArray() {
			/*
			 * Because there was not the terminal character '$' in the original text.
			 */
			
			int[] suffixArray = new int[text.length - 1];
			int c = 0;
	 
			Node[] nodes = new Node[text.length];
			int[] nextCharacter = new int[text.length];
			int nextToPop = -1;
			
			nodes[++ nextToPop] = root;
			nextCharacter[nextToPop] = 0;
			
			while(nextToPop >= 0) {
				Node currentNode = nodes[nextToPop];
				int next = nextCharacter[nextToPop --];
				
				/*
				 * We will not include the empty suffix
				 */
				
				if(currentNode.additionalEdge != -1 && next == 0 && currentNode != root)
					suffixArray[c ++] = currentNode.additionalEdge - currentNode.pathLabelLength;
				
				for(int i = next; i <= 'z' - 'a'; i ++) {
					if(currentNode.edges[i] != null) {
						if(currentNode.edges[i].last == text.length - 1) {
							suffixArray[c ++] = currentNode.edges[i].first - currentNode.pathLabelLength;
						} else {
							nodes[++ nextToPop] = currentNode;
							nextCharacter[nextToPop] = i + 1;
							nodes[++ nextToPop] = currentNode.nodes[i];
							nextCharacter[nextToPop] = 0;
							break;
						}
					}
				}
			}
			
			return suffixArray;
		}
	}
	
	private static int[] LCP(int[] suffixArray, String Ss) {//longest common prefix
		Ss+="$";
		char[] S = Ss.toCharArray();
		int len = suffixArray.length,h = 0;
		int rank[] = new int[len];
		int LCP[] = new int[len];
		for(int i=0; i<len; i++)rank[suffixArray[i]] = i;
		for(int i=0; i<len; i++) {
			if(rank[i] > 0) {
				int k = suffixArray[rank[i] - 1];
				while(S[i+h] == S[k+h])h++;
				LCP[rank[i]] = h;
				if(h > 0)h--;
			}
		}
		return LCP;
	}

	public static void process() throws IOException {
		String str = sc.next();
		
		int[] suffixarr = new SuffixTree(str).getSuffixArray();
		System.out.println(Arrays.toString(suffixarr));
		int[] lcp = LCP(suffixarr, str);
		System.out.println(Arrays.toString(lcp));
		
	}
