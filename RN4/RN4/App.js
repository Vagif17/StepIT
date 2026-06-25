  import {FlatList, Pressable, StyleSheet, Text, View} from 'react-native';
  import ProfileCard from "./components/ProfileCard";
  import { useState } from "react";
  import {useWindowDimensions} from "react-native";


  export default function App() {




    const {height, width} = useWindowDimensions();

    const [profiles, setProfiles] = useState([
      {
        id: 1,
        name: "V",
        role: "Mercenary",
        description: "Night City survivor",
        pfpUri: "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTsBQeTUJHnWdEkUTRiNAZSaKtD5P_FyhRvBgMuUA5tS7SpASphD6uvxIg&s=10",
        isOnline: true,

      },
      {
        id: 2,
        name: "Johnny",
        role: "Rocker",
        description: "Legendary terrorist musician",
        pfpUri: "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTHi3A3fG1NSat6osSaJs0Wrv3R7eQsoAESyevrNKRFMQ&s=10",
        isOnline: true,
      },
      {
        id: 3,
        name: "Judy",
        role: "Braindancer",
        description: "Tech specialist",
        pfpUri: "https://cdn.displate.com/artwork/270x380/2023-03-30/e35b386e319c03003b706ea93c91d405_f8b47b5d1b4279e13eefc2460f4b9abe.jpg",
        isOnline: true,
      },
      {
        id: 4,
        name: "Panam",
        role: "Nomad",
        description: "Aldecaldo warrior",
        pfpUri: "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcT2lwGseqLC8PhvEo6MzbfZ4p4wRdxV7JMco0n5--dUSQ&s=10",
        isOnline: false,
      },
      {
        id: 5,
        name: "Takemura",
        role: "Bodyguard",
        description: "Former Arasaka agent",
        pfpUri: "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSNnbk4S2mrUvBjv-i5g1BfONoH3brr3uGB0stzTj9C-g&s=10",
        isOnline: true,
      },
      {
        id: 6,
        name: "Smasher",
        role: "Cyborg",
        description: "Ultimate weapon",
        pfpUri: "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRZzx_Ot64iD2V2l2b1uWsEqN8ByGZFVBBjG4zCR3DeJg&s=10",
        isOnline: false,
      }
    ]);
    const [selectedCard, setSelectedCard] = useState(null);


    return (
        <View style={styles.container}>

          <FlatList

              data={profiles}
              ListEmptyComponent={() => { return(

                <Text style={{ color: "white", fontSize: 20 }}>List is empty</Text>)}
              }
              keyExtractor={(item) => item.id}
              renderItem={({ item }) => (
                  <ProfileCard
                      {...item}
                      onPress={() => setSelectedCard(item.id)}
                      isSelected={selectedCard === item.id}
                  />
              )}
              ListHeaderComponent={() => (<Text style={{

                color: "white",
                fontSize: 20,
                textAlign: "center"
              }}>
                CyberPunk 2077
              </Text>)}

              ItemSeparatorComponent={() => { return (<Text style={{color: "#60A5FA"}}>---------------------------------------------------------------</Text>)}}

          />


          <Pressable style={{bottom:50, backgroundColor:"#1F2937", borderRadius:10, height:22, width:110, position:"relative" }} onPress=
              {
                () => {
                  setProfiles(prev =>
                      prev.filter(item => item.id !== selectedCard)
                  );
                  setSelectedCard(null);
                }
              }>
            <Text style={{color:"white", left:5, top:2}}>Delete selected</Text>
          </Pressable>

          <Text style={{ color: "white",}}>Width {width} Height {height}</Text>

        </View>
    );
  }

  const styles = StyleSheet.create({
    container: {
      flex: 1,
      backgroundColor: "black",
      alignItems: "center",
      paddingTop: 60,
    }
  });
