import { createBottomTabNavigator } from "@react-navigation/bottom-tabs";
import { NavigationContainer } from "@react-navigation/native";
import { FavoriteContext, useFavorites } from "../context/FavoriteContext";
import FavoritesScreen from "./FavoritesScreen";
import RecipeStack from "./RecipeStack";
import { Ionicons } from "@expo/vector-icons";
const Tab = createBottomTabNavigator();
const Tabs = () => {
  const { favorites } = useFavorites();
  return (
    <>
      <Tab.Navigator
        screenOptions={({ route }) => ({
                tabBarActiveTintColor: "#e91e63",
                tabBarInactiveTintColor: "gray",
                tabBarStyle: {
                  backgroundColor: "#fff",
                  borderTopWidth: 0,
                  elevation: 5,
                  shadowOpacity: 0.1,
                  shadowRadius: 10,
                  shadowOffset: { width: 0, height: -3 },
                },
                tabBarIcon: ({ color, size, focused }) => {
                  return (<Ionicons
                    name={
                      route.name === "Recipes"
                        ? "restaurant"
                        : (focused
                        ? "heart"
                        : "heart-outline")
                    }
                    size={size}
                    color={color}
                  />)
                }
              })}>
        <Tab.Screen
          name="Recipes"
          component={RecipeStack}
          options={({ route }) => ({
            headerShown: false,
            title: "Рецепты",
            tabBarStyle: {
                display: route.name === "RecipeDetails" ? "none" : "flex",
            }
          })}
        />
        <Tab.Screen
          name="Favorites"
          component={FavoritesScreen}
          options={{
            tabBarBadge: favorites.length || undefined,
            title: "Избранное",
          }}
        />
      </Tab.Navigator>
    </>
  );
};

export default Tabs;
