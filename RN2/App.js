import { StyleSheet, Text, View } from 'react-native';
import LikeButton from "./components/LikeButton";
import TextBlock from "./components/TextBlock";
import ProfileCard from "./components/ProfileCard";

export default function App() {
  return (
    <View style={styles.container}>
      <LikeButton/>
      <TextBlock/>
      <ProfileCard Name={"Burito"} Description={"Food"} />
      <ProfileCard Name={"Shaurma"} Description={"Food"} />
      <ProfileCard Name={"Pizza"} Description={"Food"} />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
});
