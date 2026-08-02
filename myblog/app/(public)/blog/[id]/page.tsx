import LikeArticleButton from "@/src/components/LikeArticleButton";
import { ARTICLES } from "@/src/data/ARTICLES";
import Link from "next/link";
import { notFound } from "next/navigation";
import { Suspense } from "react";

export default async function BlogPost({
  params,
}: {
  params: Promise<{ id: string }>;
}) {
  const { id } = await params;
  const articleId = Number(id);

  const data = ARTICLES.find((article) => article.id === articleId);

  if (!data) {
    notFound();
  }

  return (
    <article className="mx-auto mt-10 max-w-3xl px-6">
      <div
        className="
          rounded-2xl
          border
          border-zinc-800
          bg-zinc-900
          p-8
          shadow-lg
          transition-all
          hover:border-lime-500
        "
      >
        <p className="mb-3 text-sm text-zinc-500">
          By <span className="font-medium text-lime-400">{data.user}</span> •{" "}
          {data.date}
        </p>

        <h1 className="mb-6 text-4xl font-bold tracking-tight text-white">
          {data.title}
        </h1>

        <div className="space-y-4 text-lg leading-8 text-zinc-300">
          <p>{data.content}</p>
        </div>
        <div className="mt-2 flex flex-wrap gap-2">
          {data.tags.map((tag, tagIndex) => (
            <span
              key={tagIndex}
              className="rounded-full bg-lime-400 px-3 py-1 text-sm font-semibold text-black"
            >
              {tag}
            </span>
          ))}
        </div>
        <LikeArticleButton />
      </div>

      <div className="mt-10">
        <h2 className="mb-6 text-3xl font-bold text-white">Similar Articles</h2>

        <div className="space-y-6">
          {ARTICLES.filter(
            (article) =>
              article.id !== data.id &&
              article.tags.some((tag) => data.tags.includes(tag)),
          ).map((article) => (
            <div
              key={article.id}
              className="
          rounded-xl
          border
          border-zinc-800
          bg-zinc-900
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
    </article>
  );
}

export function generateStaticParams() {
  return ARTICLES.map((article) => ({
    id: article.id.toString(),
  }));
}
