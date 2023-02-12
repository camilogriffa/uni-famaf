--ejercicio 1 (a) y ejercicio 2 (a)
data Carrera = Matematica | Fisica | Computacion | Astronomia deriving (Eq, Ord, Show)

--ejercicio 1 (b)
titulo :: Carrera -> String
titulo Matematica = "Licenciatura en Matematica"
titulo Fisica = "Licenciatura en Fisica"
titulo Computacion = "Licenciatura en Computacion"
titulo Astronomia = "Licenciatura en Astronomia"

--ejercicio 3 (a)
type Ingreso = Int
data Cargo = Titular | Asociado | Adjunto | Asistente | Auxiliar deriving (Eq, Show)
data Area = Administrativa | Ensenanza | Economica | Postgrado deriving (Eq, Show)
data Persona = Decane | Docente Cargo | NoDocente Area | Estudiante Carrera Ingreso deriving (Eq, Show)

--ejercicio 3 (b)
-- El tipo del constructor "Docente" es Docente :: Cargo -> Persona

--ejercicio 3 (c) y (d)
cuantos_doc :: [Persona] -> Cargo -> Int
cuantos_doc xs c = length(filter (==Docente c) xs)

--ejercicio 4 (a)
primerElemento :: [a] -> Maybe a
primerElemento [] = Nothing
primerElemento (x:xs) = Just x

--ejercicio 5
--
data Cola = VaciaC | Encolada Persona Cola deriving Show
--
--ejercicio 5 (a) (1)
atender :: Cola -> Maybe Cola
atender VaciaC = Nothing
atender (Encolada p c) = Just c

--ejercicio 5 (a) (2)
encolar :: Persona -> Cola -> Cola
encolar p VaciaC = Encolada p VaciaC
encolar p (Encolada p' c) = Encolada p' (Encolada p c)

--ejercicio 5 (a) (3)
busca :: Cola -> Cargo -> Maybe Persona
busca VaciaC cargo = Nothing
busca (Encolada p c) cargo | p == (Docente cargo) = Just p
                           | otherwise = busca c cargo

--ejercicio 5 (b)
-- Cola se parece al tipo Lista (x:xs)

--ejercicio 6
--
data ListaAsoc a b = Vacia | Nodo a b (ListaAsoc a b)
type Diccionario = ListaAsoc String String
type Padron = ListaAsoc Int String
--
--ejercicio 6 (a)
type GuiaTelefonica = ListaAsoc Int String

--ejercicio 6 (b) (1)
la_long :: ListaAsoc a b -> Int
la_long Vacia = 0
la_long (Nodo a b c) = 1 + la_long c

--ejercicio 6 (b) (2)
la_concat :: ListaAsoc a b -> ListaAsoc a b -> ListaAsoc a b
la_concat Vacia d = d
la_concat (Nodo a b c) d = Nodo a b (la_concat c d)

--ejercicio 6 (b) (3)
la_pares :: ListaAsoc a b -> [(a, b)]
la_pares Vacia = []
la_pares (Nodo a b c) = (a, b) : la_pares c

--ejercicio 6 (b) (4)
la_busca :: Eq a => ListaAsoc a b -> a -> Maybe b
la_busca Vacia d = Nothing
la_busca (Nodo a b c) d | d == a = Just b
                        | otherwise = la_busca c d

--ejercicio 6 (b) (5)
la_borrar :: Eq a => a -> ListaAsoc a b -> ListaAsoc a b
la_borrar d Vacia = Vacia
la_borrar d (Nodo a b c) | d == a = la_borrar d c
                         | otherwise = Nodo a b (la_borrar d c)



