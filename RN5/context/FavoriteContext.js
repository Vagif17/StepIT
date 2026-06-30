import { createContext } from "react";
import { useState } from "react";
import { useContext } from "react";
export const FavoriteContext = createContext();

const FavoritesProvider = ({ children }) => {
  const [favorites, setFavorites] = useState([]);
  const toggleFavorite = (id) => {
    setFavorites((prev) =>
      prev.includes(id) ? prev.filter((item) => item !== id) : [...prev, id]
    );
  };

  const isFavorite = (id) => {
    return favorites.includes(id);
  };

  return (
    <FavoriteContext.Provider value={{ favorites, toggleFavorite, isFavorite }}>
      {children}
    </FavoriteContext.Provider>
  );
};
export const useFavorites = () => {
  const context = useContext(FavoriteContext);
  return context;
};
export default FavoritesProvider;
