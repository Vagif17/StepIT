import {Button, Text, View} from "react-native";
import {useState} from "react";

export default  function ProfileCard ({ Name , Description,}){
    const [isSelected, setIsSelected] = useState(false);

    return <View style={{
        backgroundColor: isSelected ? "cyan" : "white",
        padding: 16,
        borderRadius: 8,
        height: 90
    }
    }>
        <Text>{Name}</Text>
        <Text>{Description}</Text>


        <Button
            title={isSelected ? "Selected" : "Select"}
            onPress={() => setIsSelected(!isSelected)}
        />    </View>
}
