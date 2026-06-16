import {View, StyleSheet, Text, Image, Dimensions, Pressable} from "react-native";


export default function ({ name, role, pfpUri, description, onPress, isSelected }){

    return (
        <>
            <Pressable onPress={(onPress)}>
                <View style={[ styles.container, isSelected &&  { borderColor: "#60A5FA",backgroundColor: "#1F2937" }]}>
                    <View style={styles.leftSide}>
                    <Image
                        source={{uri: pfpUri}}
                        style={styles.image}
                    />

                    <View style={styles.textBlock}>
                        <Text style={styles.name}>{name}</Text>
                        <Text style={styles.role}>{role}</Text>
                    </View>
                </View>


                <Text style={styles.description}>
                    {description}
                </Text>

            </View>
            </Pressable>
        </>
    )
}

const styles = StyleSheet.create({
 // C цветами помогал GPT
    container: {
        backgroundColor: "#111827",
        borderWidth: 2,
        width: Dimensions.get("window").width ,
        padding: 16,
        borderRadius: 16,
        marginHorizontal: 16,
        flexDirection: "row",
        alignItems: "center",
        justifyContent: "space-between",
    },

    leftSide: { // ChatGPT Предложил, я хотел сделать Аватарку,имя и роль слева, а на оставшуеся часть описание
        flexDirection: "row",
        alignItems: "center",
    },

    textBlock: {
        marginLeft: 12,
    },

    name:{
        color: "#FFFFFF",
        fontSize: 16,
    },

    role:{
        color: "#9CA3AF",
        fontSize: 10,
    },

    image:{
        backgroundColor: "#FDE68A",
        width: 40,
        height: 40,
        borderRadius: 40,
    },

    description:{
        flex: 1,
        marginLeft: 20,
        color: "#D1D5DB",
        fontSize: 12,
    },
})