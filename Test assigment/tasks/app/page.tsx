import Link from "next/link";
import { TASKS } from "@/src/data/TASKS";

const HomePage = () => {
  return (
    <main className="min-h-screen bg-gray-50 px-6 py-12 dark:bg-gray-950">
      {" "}
      <div className="mx-auto max-w-3xl">
        <div className="mb-8">
          <p className="text-sm font-medium text-gray-500 dark:text-gray-400">
            Task Manager
          </p>

          <h1 className="mt-1 text-3xl font-bold tracking-tight text-gray-900 dark:text-white">
            All tasks
          </h1>

          <p className="mt-2 text-gray-500 dark:text-gray-400">
            {TASKS.length} tasks in total
          </p>
        </div>

        <div className="space-y-3">
          {TASKS.map((task) => (
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
              <div className="flex items-center justify-between gap-4">
                <div className="min-w-0">
                  <div className="flex items-center gap-2">
                    <h2 className="truncate font-semibold text-gray-900 dark:text-white">
                      {task.title}
                    </h2>
                    
                    <span className="hidden rounded-md bg-gray-100 px-2 py-0.5 text-xs text-gray-500 dark:bg-gray-800 dark:text-gray-400 sm:block">
                      {task.topic}
                    </span>
                  </div>

                  <p className="mt-1 text-sm text-gray-500">
                    Created {task.createdAt}
                  </p>
                </div>

                <div className="flex shrink-0 items-center gap-3">
                  <span
                    className={`rounded-full px-3 py-1 text-xs font-semibold ${
                      task.done
                        ? "bg-green-100 text-green-700"
                        : "bg-yellow-100 text-yellow-700"
                    }`}
                  >
                    {task.done ? "Completed" : "In progress"}
                  </span>

                  <span className="text-gray-400 transition-transform group-hover:translate-x-1">
                    →
                  </span>
                </div>
              </div>
            </Link>
          ))}
        </div>
      </div>
    </main>
  );
};

export default HomePage;
