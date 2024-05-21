main::IO()
main = do

let x = 4
{-In Haskell, variables are not mutable boxes; they are just names for 
values!Put another way, = does not denote “assignment” 
like it does in many other languages. Instead, = denotes definition, 
like it does in mathematics. That is, x = 4 should not be read as 
“x gets 4” or “assign 4 to x”, but as “x is defined to be 4”.-}

putStrLn "Hello World!"

{-GHCi is an interactive Haskell REPL (Read-Eval-Print-Loop) that 
comes with GHC. At the GHCi prompt, you can evaluate expressions,
 load Haskell files with :load (:l) (and reload them with :reload (:r)),
  ask for the type of an expression with :type (:t), and many other
   things (try :? for a list of commands).-}

{-Addition is only between values of the same numeric type,
 and Haskell does not do implicit conversion. 
 You must explicitly convert with:
 
fromIntegral: converts from any integral type (Int or Integer) to any other numeric type.

round, floor, ceiling: convert floating-point numbers to Int or Integer.
-}

{-Notice that if-expressions are very different than if-statements. 
For example, with an if-statement, the else part can be optional;
an omitted else clause means “if the test evaluates to False then do
nothing”. With an if-expression, on the other hand, the else part 
is required, since the if-expression must result in some value.-}

-- Basic Function: Compute the sum of the integers from 1 to n.
