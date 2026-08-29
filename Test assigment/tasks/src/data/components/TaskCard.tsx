"use client";

import { useState } from "react";
import { Task } from "../TASKS";

const TaskCard = ({
  children,
  task,
}: {
  children: React.ReactNode;
  task: Task;
}) => {
  const [isDetailsVisible, setIsDetailsVisible] = useState(false);

  return (
    <div className="overflow-hidden rounded-2xl border border-gray-200 bg-white shadow-sm dark:border-gray-800 dark:bg-gray-900">
      <div className="p-6 sm:p-8">
        <div className="flex items-start justify-between gap-6">
          <div>
            <p className="mb-2 text-sm font-medium text-gray-400 dark:text-gray-500">
              Task #{task.id}
            </p>

            <h1 className="text-3xl font-bold tracking-tight text-gray-900 dark:text-white">
              {task.title}
            </h1>

            <p className="mt-2 text-sm text-gray-500 dark:text-gray-400">
              {task.topic}
            </p>
          </div>

          <span
            className={`shrink-0 rounded-full px-3 py-1.5 text-xs font-semibold ${
              task.done
                ? "bg-green-100 text-green-700 dark:bg-green-900/40 dark:text-green-400"
                : "bg-yellow-100 text-yellow-700 dark:bg-yellow-900/40 dark:text-yellow-400"
            }`}
          >
            {task.done ? "Completed" : "In progress"}
          </span>
        </div>

        <button
          onClick={() => setIsDetailsVisible((prev) => !prev)}
          className="mt-8 inline-flex items-center gap-2 rounded-lg bg-gray-900 px-4 py-2.5 text-sm font-medium text-white transition hover:bg-gray-700 active:scale-95 dark:bg-white dark:text-gray-900 dark:hover:bg-gray-200"
        >
          {isDetailsVisible ? "Hide details" : "Show details"}

          <span
            className={`transition-transform ${
              isDetailsVisible ? "rotate-180" : ""
            }`}
          >
            ↓
          </span>
        </button>

        {isDetailsVisible && <div className="mt-6">{children}</div>}
      </div>
    </div>
  );
};

export default TaskCard;