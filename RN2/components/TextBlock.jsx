import {Button, Text} from "react-native";
import {useState} from "react";

export default function TextBlock (props) {
    const [isVisible, setVisible] = useState(true);

    return <>
        <Button
            title={"Hide/show"}
            onPress={() => { setVisible(!isVisible); }}
        />
        {isVisible ? <Text>I am here</Text> : null}

    </>
}