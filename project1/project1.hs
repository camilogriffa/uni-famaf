--ejercicio 1 (a)
esCero :: Int -> Bool
esCero x  | x==0 = True
          | otherwise = False

--ejercicio 1 (b)
esPositivo :: Int -> Bool
esPositivo x  | x>0 = True
              | otherwise = False

--ejercicio 1 (c)
esVocal :: Char -> Bool
esVocal n   | (n=='a') || (n=='e') || (n=='i') || (n=='o') || (n=='u') = True
            | otherwise = False

--ejercicio 2 (a)
paratodo :: [Bool] -> Bool
paratodo [] = True
paratodo (False:_) = False
paratodo (True:xs) = paratodo xs

--ejercicio 2 (b)
sumatoria :: [Int] -> Int
sumatoria = sum

--ejercicio 2 (c)
productoria :: [Int] -> Int
productoria = product

--ejercicio 2 (d)
factorial :: Int -> Int
factorial 0 = 1
factorial n = n * factorial (n-1)

--ejercicio 2 (e)
promedio :: [Int] -> Int
promedio [] = 0
promedio (x:xs) = div (sumatoria(x:xs)) (length (x:xs))

--ejercicio 3
pertenece :: Int -> [Int] -> Bool
pertenece n (x:xs) =  n `elem` (x:xs)

--ejercicio 4 (a)
paratodo' :: [a] -> (a -> Bool) -> Bool
paratodo' (x:xs) t = all t (x:xs)

--ejercicio 4 (b)
existe' :: [a] -> (a -> Bool) -> Bool
existe' (x:xs) t = any t (x:xs)

--ejercicio 4 (c)
sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' (x:xs) t = sum (map t (x:xs))

--ejercicio 4 (d)
productoria' :: [a] -> (a -> Int) -> Int
productoria' (x:xs) t = product (map t (x:xs))

--ejercicio 5
paratodo'' :: [a] -> (a -> Bool) -> Bool
paratodo'' (x:xs) t = paratodo' (x:xs) t

--ejercicio 6 (a)
todosPares :: [Int] -> Bool
todosPares (x:xs) = paratodo' (x:xs) even

--ejercicio 6 (b)
hayMultiplo :: Int -> [Int] -> Bool
hayMultiplo _[] = False
hayMultiplo f (_:xs) = existe' xs (\x -> x `mod` f == 0)

--ejercicio 6 (c)
sumaCuadrados :: Int -> Int
sumaCuadrados n = sumatoria' [0 .. n-1] (^2)

--ejercicio 6 (d)
factorial' :: Int -> Int
factorial' n = productoria' [1 .. n] id

--ejercicio 6 (e)
multiplicaPares :: [Int] -> Int
multiplicaPares xs = productoria' (filter even xs) id

--ejercicio 7
--
-- Indagár sobre funciones map y filter
--
-- ¿Que hacen estas funciones?
-- La función "map" toma una función y una lista,
-- y devuelve la lista con la función aplicada
-- a cada uno de sus elementos.
-- La función "filter" toma una función y una lista,
-- y devuelve una lista con los elementos que cumplen
-- la función.
--
-- ¿A que equivale la expresion map succ [1, -4, 6, 2, -8], donde succ n = n+1?
-- Esta expresion equivale a equivale a map (+1) [1, -4, 6, 2, -8]
-- y retorna la lista [2, -3, 7, 3, -7]
--
-- ¿Y la expresion filter esPositivo [1, -4, 6, 2, -8]?
-- Esta expresion equivale a equivale a filter (>=0) [1, -4, 6, 2, -8]
-- y devuelve la lista [1, 6, 2]
--

--ejercicio 8 (a)
-- Definicion usando recursion:
duplica :: [Int] -> [Int]
duplica [] = []
duplica (x:xs) = (x*2) : duplica xs

--ejercicio 8 (b)
-- Definicion usando "map":
duplica' :: [Int] -> [Int]
duplica' (x:xs) = map (*2) (x:xs)

--ejercicio 9 (a)
-- Definicion usando recursion:
soloPares :: [Int] -> [Int]
soloPares [] = []
soloPares (x:xs) | mod x 2 == 0 = x : soloPares xs
                 | otherwise = soloPares xs

--ejercicio 9 (b)
-- Definicion usando "filter":
soloPares' :: [Int] -> [Int]
soloPares' (x:xs) = filter even (x:xs)

--ejercicio 9 (c)
multiplicaPares' :: [Int] -> Int
multiplicaPares' xs = productoria (filter (\x -> mod x 2 == 0) xs)

--ejercicio 10 (a)
-- Definicion usando recursion:
primIgualesA :: Eq a => a -> [a] -> [a]
primIgualesA n [] = []
primIgualesA n (x:xs) | x == n = x : primIgualesA n xs
                      | x /= n = []

--ejercicio 10 (b)
-- Definicion usando "takeWhile":
primIgualesA' :: Eq a => a -> [a] -> [a]
primIgualesA' n xs = takeWhile (==n) xs

--ejercicio 11 (a)
-- Definicion usando recursion:
primIguales :: Eq a => [a] -> [a]
primIguales [] = []
primIguales [x] = [x]
primIguales (x:y:xs) | x == y = x : primIguales (y:xs)
                     | x /= y = [x]

--ejercicio 11 (b)
-- Definicion usando primIgualesA:
primIguales' :: Eq a => [a] -> [a]
primIguales' xs | xs == [] = xs
                | xs /= [] = primIgualesA (head xs) xs


