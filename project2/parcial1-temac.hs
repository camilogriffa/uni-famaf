--Ejercicio 1

data Deporte = Futbol | Basket | Tenis | Valorant | Dota2
    deriving (Show, Eq, Ord)
type MinJugadores = Int

minimaCantidad :: Deporte -> MinJugadores
minimaCantidad Futbol = 22
minimaCantidad Basket = 10
minimaCantidad Tenis = 2
minimaCantidad Valorant = 8
minimaCantidad Dota2 = 16

{-
    Ejemplo de ejecución

    ghci> minimaCantidad Futbol
    22
-}

--Ejercicio 2

data PracticoDeporte = AgregaDeporte Deporte NombrePersona PracticoDeporte | Ninguna
    deriving (Show, Eq, Ord)
type NombrePersona = String


deporte :: PracticoDeporte -> Deporte -> NombrePersona -> Bool
deporte Ninguna d n = True
deporte (AgregaDeporte deport nombre p) d1 n1
    | deport == d1 && nombre == n1 = True
    | otherwise = False

{-
    Ejemplo de ejecución

    ghci> deporte (AgregaDeporte Futbol "Fabricio" Ninguna) Futbol "Fabricio"
    True

-}


-- Ejercicio 3

data ListaAsoc a b = Vacia | Nodo a b (ListaAsoc a b)
    deriving (Show, Eq, Ord)
type EquipoFavorito = String

agregaEquipoFavorito :: ListaAsoc Deporte EquipoFavorito -> Deporte -> EquipoFavorito -> ListaAsoc Deporte EquipoFavorito 
agregarEquipoFavorito Vacia _ _ = Vacia
agregaEquipoFavorito Vacia d e = Nodo d e Vacia
agregaEquipoFavorito (Nodo d e lista) d1 e1
    | d == d1 = Nodo d e $ agregaEquipoFavorito lista d1 e1
    | otherwise = agregaEquipoFavorito lista d1 e1

{-
    Ejemplo de ejecución

     Si agrego un equipo a una lista de equipos ya existentes de futbol, se suma a esta lista

     ghci> agregaEquipoFavorito (Nodo Futbol "Racing" (Nodo Futbol "River" Vacia)) Futbol "Boca"
     Nodo Futbol "Racing" (Nodo Futbol "River" (Nodo Futbol "Boca" Vacia))

     En cambio, si cambio el deporte, se creará una lista nueva con el equipo correspondiente
     ghci> agregaEquipoFavorito (Nodo Futbol "Racing" (Nodo Futbol "River" Vacia)) Basket "Boca"
     Nodo Basket "Boca" Vacia
-}


ecoGen :: [a] -> [a] -> Bool
ecoGen [] ys = False
ecoGen (x:xs) ys = (xs = ys ++ [x]) && ecoGen xs (ys ++ [x])