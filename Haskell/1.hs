main :: IO ()
main = putStrLn $ "" ++ show (mult 999)
mult n = foldl1 (\ct x -> ct + x) (rmdups([3,6..n] ++ [5,10..n]))
rmdups = foldl (\f x -> if x `elem` f then f else f ++ [x]) []
