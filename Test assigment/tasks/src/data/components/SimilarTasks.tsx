import Link from "next/link";
import { TASKS } from "@/src/data/TASKS";

const SimilarTasks = async ({
  topic,
  currentTaskId,
}: {
  topic: string;
  currentTaskId: number;
}) => {
  const similarTasks = TASKS.filter(
    (task) => task.topic === topic && task.id !== currentTaskId,
  );

  if (similarTasks.length === 0) {
    return null;
  }

  await new Promise((resolve) => setTimeout(resolve, 2000));

  return (
    <section>
      <div className="mb-4"></div>

      <div className="grid gap-3 sm:grid-cols-2">
        {similarTasks.map((task) => (
          <Link
            key={task.id}
            href={`/task/${task.id}`}
            className="
              group block rounded-xl
              border border-gray-200
              bg-white
              p-5
              shadow-sm
              transition
              hover:-translate-y-0.5
              hover:border-gray-300
              hover:shadow-md
              dark:border-gray-800
              dark:bg-gray-900
              dark:hover:border-gray-700
            "
          >
            <div className="flex items-start justify-between gap-3">
              <div className="min-w-0">
                <p className="text-xs font-medium text-gray-400 dark:text-gray-500">
                  {task.topic}
                </p>

                <h3 className="mt-1 truncate font-semibold text-gray-900 dark:text-white">
                  {task.title}
                </h3>

                <p className="mt-2 text-sm text-gray-500 dark:text-gray-400">
                  Created {task.createdAt}
                </p>
              </div>

              <span className="shrink-0 text-gray-400 transition-transform group-hover:translate-x-1 dark:text-gray-500">
                →
              </span>
            </div>
          </Link>
        ))}
      </div>
    </section>
  );
};

export default SimilarTasks;