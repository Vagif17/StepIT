import { useEffect } from "react";
import {Button, Image, ScrollView, StyleSheet, Text, View} from "react-native";
import { useNavigation } from "@react-navigation/native";
import { useRoute } from "@react-navigation/native";
import { RECIPES } from "../data/recipes";

const RecipeDetailScreen = () => {
  const { recipe } = useRoute().params;
  const navigation = useNavigation();

  const fromThisCategory = () => {
    navigation.push("RecipeList", {
      category: recipe.category
    });
  };


  return (
    <ScrollView style={styles.screen}>
      <Image source={{ uri: recipe.thumb }} style={styles.image} />
      <View style={styles.body}>
        <Text style={styles.title}>{recipe.name}</Text>
        <Text style={styles.meta}>
          {recipe.category} * {recipe.area}
        </Text>
        <Text style={styles.section}>Ингредиенты</Text>
        <Text style={styles.text}>
          * Заглушка - настоящие ингредиенты придут с API в Модуле 5
        </Text>
        <Button title={"Ещё из этой категории"} onPress={fromThisCategory}/>
      </View>
    </ScrollView>
  );
};
const styles = StyleSheet.create({
  screen: { flex: 1, backgroundColor: "#fff" },
  image: { width: "100%", height: 240 },
  body: { padding: 16 },
  title: { fontSize: 24, fontWeight: "bold", color: "#1e293b" },
  meta: { fontSize: 14, color: "#64748b", marginTop: 4 },
  section: {
    fontSize: 18,
    fontWeight: "bold",
    marginTop: 20,
    marginBottom: 6,
    color: "#1e293b",
  },
  text: { fontSize: 15, color: "#334155", lineHeight: 22 },
});

export default RecipeDetailScreen;
