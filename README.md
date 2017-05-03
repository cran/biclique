Maximal Complete Bipartite Graphs
=================================

Description
-----------
A tool for enumerating maximal complete bipartite graphs. The input file should be tab delimited. This package supports edgelist and binary matrix format. You can try the example files in the inst directory. The output are maximal complete bipartite graphs.

Installation
------------
The latest version can be obtained via:

    devtools::install_github("YupingLu/biclique")

Examples
--------
Load the package
    
    library(biclique)

Add the number of vertices and edges to the original input graph. If your input file already has these values, you don't have to run this command.
    
    bi.format("example2.el")       #edgelist format
    bi.format("example5.bmat", 1)  #binary matrix format

Input: edgelist format.

    degreelist = bi.degree("example1.el")  #Compute the degree of each vertex
    bicliques = bi.clique("example1.el")   #Compute the bicliques
    bi.print()                             #Print the bicliques

You can also choose the threshold size for computed bicliques.
    
    bicliques = bi.clique("example1.el", 3, 2)  #bicliques larger or equal to K3,2

Input: binary matrix format.

    degreelist = bi.degree("example4.bmat", filetype = 1)  #Compute the degree of each vertex
    bicliques = bi.clique("example4.bmat", filetype = 1)   #Compute the bicliques
    bi.print()                                             #Print the bicliques

For more details, please check the documentation.

Ask Questions 
-------------
* Please use [biclique/issues](https://github.com/YupingLu/biclique/issues) for how to use biclique and reporting bugs

License
-------
© Contributors, 2017. Licensed under an [GPL-2.0](https://github.com/YupingLu/biclique/blob/master/LICENSE) license.

Reference Paper
---------------

Zhang Y, Phillips CA, Rogers GL, Baker EJ, Chesler EJ, Langston MA. On finding bicliques in bipartite
graphs: a novel algorithm and its application to the integration of diverse biological data types. BMC bioinformatics.
2014; 15(1):110. doi: 10.1186/1471-2105-15-110 PMID: 24731198