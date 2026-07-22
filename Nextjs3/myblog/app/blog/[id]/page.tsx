import { ARTICLES } from "@/data/ARTICLES";
import { notFound } from 'next/navigation';

export default async function  BlogPost ({ params }: { params: Promise<{ id: string }> }) {

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
          By{" "}
          <span className="font-medium text-lime-400">
            {data.user}
          </span>{" "}
          • {data.date}
        </p>

        <h1 className="mb-6 text-4xl font-bold tracking-tight text-white">
          {data.title}
        </h1>

        <div className="space-y-4 text-lg leading-8 text-zinc-300">
          <p>{data.content}</p>
        </div>
      </div>
    </article>
  );
};

export function generateStaticParams() {
    return ARTICLES.map(article => ({
        id: article.id,
    }));
}