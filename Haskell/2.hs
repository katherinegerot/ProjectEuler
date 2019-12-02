main :: IO ()
main = putStrLn $ "" ++ show (fibsum 4000000)
fibs = 1 : 1 : [ n | x <-[2..], let n = ((fibs !! (x-1)) + (fibs !! (x-2)))]
fibsum n = foldl1 (\ct x -> ct + x) ([x | x <- fibs, x < n, x `mod` 2 == 0])
