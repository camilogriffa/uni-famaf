--ejercicio 1
-- data Deporte = Futbol | Basket | Tenis | Valorant | Dota2
type MinJugadores = Int

minimaCantidad :: Deporte -> MinJugadores
minimaCantidad Futbol = 14
minimaCantidad Basket = 6
minimaCantidad Tenis = 2
minimaCantidad Valorant = 4
minimaCantidad Dota2 = 6

-- minimaCantidad Basket => 6

--ejercicio 2
-- type NombrePersona = String
-- data PracticoDeporte = Ninguna | AgregaDeporte Deporte NombrePersona PracticoDeporte deriving Eq

-- deporte :: PracticoDeporte -> Deporte -> NombrePersona -> Bool
-- deporte (Ninguna) d n = False
-- deporte (AgregaDeporte deporteP nombre nuevodeporte) deporteP' nombre' | ((deporteP == deporteP') && (nombre == nombre')) = True
--                                                                        | otherwise = deporte nuevodeporte deporteP' nombre'

-- -- deporte (AgregaDeporte Tenis "Camilo" (AgregaDeporte Futbol "Camilo"(Ninguna)))

data Deporte = Futbol | Basket | Tenis | Valorant | Dota2 deriving Eq
type NombrePersona = String
data PracticoDeporte = Ninguna | AgregaDeporte Deporte NombrePersona PracticoDeporte deriving Eq

deporte :: PracticoDeporte -> Deporte -> NombrePersona -> Bool
deporte (Ninguna) d n = False
deporte (AgregaDeporte deporteP nombre nuevodeporte) deporteP' nombre' | ((deporteP == deporteP') && (nombre == nombre')) = True
                                                                       | otherwise = deporte nuevodeporte deporteP' nombre'

-- deporte (AgregaDeporte Tenis "Camilo" (AgregaDeporte Futbol "Camilo"(Ninguna)))