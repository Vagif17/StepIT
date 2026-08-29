import { Task } from "../TASKS";

const TaskDetails = ({ task }: { task: Task }) => {
  return (
    <div className="border-t border-gray-200 pt-6 dark:border-gray-800">
      <div className="grid gap-4 sm:grid-cols-2">
        <div className="rounded-xl bg-gray-50 p-4 dark:bg-gray-800">
          <p className="text-xs font-medium uppercase tracking-wide text-gray-400">
            Topic
          </p>

          <p className="mt-1 font-medium text-gray-900 dark:text-white">
            {task.topic}
          </p>
        </div>

        <div className="rounded-xl bg-gray-50 p-4 dark:bg-gray-800">
          <p className="text-xs font-medium uppercase tracking-wide text-gray-400">
            Created
          </p>

          <p className="mt-1 font-medium text-gray-900 dark:text-white">
            {task.createdAt}
          </p>
        </div>
      </div>

      <div className="mt-4 rounded-xl bg-gray-50 p-4 dark:bg-gray-800">
        <p className="text-xs font-medium uppercase tracking-wide text-gray-400">
          Description
        </p>

        <p className="mt-2 leading-6 text-gray-700 dark:text-gray-300">
          {task.description}
        </p>
      </div>

      <div className="mt-4 flex items-center gap-2">
        <span className="text-sm font-medium text-gray-500 dark:text-gray-400">
          Status:
        </span>

        <span
          className={`text-sm font-semibold ${
            task.done
              ? "text-green-600 dark:text-green-400"
              : "text-yellow-600 dark:text-yellow-400"
          }`}
        >
          {task.done ? "Completed" : "In progress"}
        </span>
      </div>
    </div>
  );
};

export default TaskDetails;