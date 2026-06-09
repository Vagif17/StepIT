import {Button, Text} from "react-native";
import {useState} from "react";

export default function LikeButton ()
{
    const [count, setCount] = useState(0);

    return <>
        <Button
            title="Like"
            onPress={() => { setCount(count + 1);  }}
            color={"red"}

        />

        <Text>{count}</Text>
    </>
}