(defn sum-nums [] (->> (range 1000)
     (filter #(or (= 0 (rem %1 5)) (= 0 (rem %1 3))))
     (apply +)))
(sum-nums)
