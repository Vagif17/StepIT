import { NavigationContainer } from "@react-navigation/native";
import Tabs from "./screens/Tabs";
import FavoritesProvider from "./context/FavoriteContext";

export default function App() {
  return (
    <FavoritesProvider>
      <NavigationContainer>
        <Tabs />
      </NavigationContainer>
    </FavoritesProvider>
  );
}
