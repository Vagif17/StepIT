import { createNativeStackNavigator } from "@react-navigation/native-stack";
import RecipeDetailScreen from "./RecipeDetailScreen";
import RecipeListScreen from "./RecipeListScreen";
import { Pressable, Text, View } from "react-native";
import { RECIPES } from "../data/recipes";

const Stack = createNativeStackNavigator();

const RecipeStack = () => {
  return (
    <Stack.Navigator
      initialRouteName="RecipeList"
      screenOptions={{
        headerStyle: { backgroundColor: "#20232A" },
        headerTintColor: "#61DAFB",
        headerTitleStyle: { fontWeight: "bold" },
      }}
    >
      <Stack.Screen
        name="RecipeList"
        component={RecipeListScreen}
        options={{ title: "Что приготовить" }}
      />
      <Stack.Screen
        name="RecipeDetail"
        component={RecipeDetailScreen}
        options={({ route, navigation }) => ({
          title: route.params.recipe.name,
          headerRight: () => {
            const r = RECIPES[Math.floor(Math.random() * RECIPES.length)];

            return (
              <Pressable
                onPress={() => navigation.push("RecipeDetail", { recipe: r })}
              >
                <Text>Случайный рецепт</Text>
              </Pressable>
            );
          },
        })}
        //options={{ title: 'Рецепт' }}
      />
    </Stack.Navigator>
  );
};

export default RecipeStack;
