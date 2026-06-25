import {View, StyleSheet, Text, Image, Pressable, useWindowDimensions} from "react-native";


export default function ({ name, role, pfpUri, description, onPress, isSelected, isOnline }){

    const { width, height } = useWindowDimensions();

    const isLandscape = width > height;

    return (
        <Pressable onPress={onPress}>

            <View style={[
                styles.container,
                {
                    width: isLandscape ? width / 2 - 24 : width - 32,
                    flexDirection: isLandscape ? "column" : "row",
                },
                isSelected && {
                    borderColor: "#60A5FA",
                    backgroundColor: "#1F2937"
                }
            ]}>

                <View style={styles.leftSide}>

                    <View>
                        <Image
                            source={{uri: pfpUri}}
                            style={styles.image}
                        />

                        <Text style={styles.status}>
                            {isOnline ? "🟢" : "🔴"}
                        </Text>

                    </View>


                    <View style={[
                        styles.textBlock,
                        isLandscape && {marginLeft:0, marginTop:10}
                    ]}>

                        <Text style={styles.name}>
                            {name}
                        </Text>

                        <Text style={styles.role}>
                            {role}
                        </Text>

                    </View>

                </View>


                <Text style={[
                    styles.description,
                    isLandscape && {
                        marginLeft:0,
                        marginTop:15,
                        textAlign:"center"
                    }
                ]}>
                    {description}
                </Text>


            </View>

        </Pressable>
    )
}


const styles = StyleSheet.create({

    container: {
        backgroundColor: "#111827",
        borderWidth: 2,
        padding: 16,
        borderRadius: 16,
        marginHorizontal: 16,
        marginVertical: 8,
        alignItems: "center",
        justifyContent: "center",
    },


    leftSide: {
        flexDirection: "row",
        alignItems: "center",
    },


    textBlock: {
        marginLeft: 12,
    },


    name:{
        color:"#FFFFFF",
        fontSize:16,
    },


    role:{
        color:"#9CA3AF",
        fontSize:10,
    },


    image:{
        backgroundColor:"#FDE68A",
        width:40,
        height:40,
        borderRadius:40,
    },


    status:{
        position:"absolute",
        right:-7,
        bottom:0,
        fontSize:10,
    },


    description:{
        flex:1,
        marginLeft:20,
        color:"#D1D5DB",
        fontSize:12,
    },

})