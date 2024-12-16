//time complexity :- amount of time taken by algorithm to run a code
//type :-      1} constant time  O(0)
//             2} linear time    O(n)
//             3} logarithmic time O(log(n))
//             4} Quadratic time O(n^2)
//             5} Cubic  time O(n^3)



//  Order of time complextiy 
// O(n!)>  O(2^n)>  O(n^3)  > O(n^2)  > O(nlog(n))  >  O(n)  >  O(log(n))  > O(1)
//  ^^More time comlexity            <<                    ^^Less time complexity 
  



// Question :- 
//f(n) = 2n^2 + 3n        >> O(n^2)   lower degree must be ignored & higher degree is considered 
//f(n) = 4n^4 + 3n^3      >> O(n^4)   

//f(n) =  n^2 +  log(n)   >> O(n^2)

// time complexity for two differrent for loop is :-  O(n+m)
//{   for(int i=0;i<n;i++){                     }
//
///}    for(int i=0;i<m;i++){                   }


//time complexity for nested for loop is :-    O(n*m)
//for(int i=0;i<n;i++){
//  for(int i=0;i<m;i++){
//  }
//}
