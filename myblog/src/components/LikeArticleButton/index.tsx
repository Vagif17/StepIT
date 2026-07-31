'use client'
import {useState} from "react";

const LikeArticleButton = () => {
  const [liked, setLiked] = useState(false);

  const handleLike = () => {
    setLiked(!liked);
  };

  return (
    <button onClick={handleLike}
      className="
        mt-5 
        flex items-center 
        justify-between rounded-lg
        border
        border-zinc-700
        bg-zinc-800
        px-4
        py-2
        text-sm
        font-medium
        text-zinc-200
        transition-all
        duration-200
        hover:border-lime-500
        hover:bg-zinc-700
        hover:text-lime-400
        active:scale-95
      "
    >
      {liked ? "❤️ Liked" : "🤍 Like"}
    </button>
  );
};

export default LikeArticleButton;