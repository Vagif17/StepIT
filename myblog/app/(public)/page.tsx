import LikeArticleButton from "@/src/components/LikeArticleButton";
import { ARTICLES } from "@/src/data/ARTICLES";
import Link from "next/link";

export const revalidate = 3000;
// Использую чтобы страница не кэшировалась и обновлялась каждые 3 секунды, чтобы видеть изменения в реальном времени.

export default function Home() {
  return (
    <div className="flex flex-col flex-1 items-center justify-center bg-zinc-50 font-sans dark:bg-black">
      <div className="flex flex-1 w-full max-w-3xl flex-col py-32 px-16 bg-white dark:bg-black">
        {ARTICLES.map((article, index) => (
          <div
            key={index}
            className="
          mb-6
          rounded-xl
          bg-zinc-900
          border
          border-zinc-800
          p-6
          shadow-md
          transition-all
          hover:border-lime-500
          hover:shadow-lg
        "
          >
            <h2 className="text-2xl font-bold text-gray-800 dark:text-white">
              {article.title}
            </h2>
            <p className="text-gray-600 dark:text-gray-300">
              {article.content}
            </p>
            <p className="text-sm text-gray-500 dark:text-gray-400">
              By {article.user} on {article.date}
            </p>
            <div className="mt-4">
              <Link
                href={`/blog/${article.id}`}
                className="text-lime-400 transition-colors hover:text-lime-300"
              >
                Read more
              </Link>

              <div className="mt-2 flex flex-wrap gap-2">
                {article.tags.map((tag, tagIndex) => (
                  <span
                    key={tagIndex}
                    className="rounded-full bg-lime-400 px-3 py-1 text-sm font-semibold text-black"
                  >
                    {tag}
                  </span>
                ))}
              </div>
            </div>
            <LikeArticleButton />
          </div>
        ))}
      </div>
    </div>
  );
}
