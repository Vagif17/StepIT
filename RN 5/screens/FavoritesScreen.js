import { View, Text, FlatList } from "react-native";
import { useFavorites } from "../context/FavoriteContext";
import { RECIPES } from "../data/recipes";
import RecipeCard from "../components/RecipeCard";

const FavoritesScreen = () => {
  const {favorites}= useFavorites();
  const list = RECIPES.filter(r=> favorites.includes(r.id));
  return (
    <FlatList
      data={list}
      keyExtractor={(item) => item.id}
      contentContainerStyle={{ padding: 6, gap: 6 }}
      renderItem={({ item }) => (
        <RecipeCard recipe={item}/>
      )}
      ListEmptyComponent={(<Text>Нет избранных рецептов</Text>)}
    />
  );
};
export default FavoritesScreen;
