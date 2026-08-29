import { notFound } from "next/navigation";
import { TASKS } from "@/src/data/TASKS";
import TaskCard from "@/src/data/components/TaskCard";
import TaskDetails from "@/src/data/components/TaskDetails";
import SimilarTasks from "@/src/data/components/SimilarTasks";
import { Suspense } from "react";

const TaskPage = async ({ params }: { params: Promise<{ id: string }> }) => {
  const { id } = await params;

  const task = TASKS.find((task) => task.id === Number(id));

  await new Promise((resolve) => setTimeout(resolve, 2000));

  if (!task) {
    notFound();
  }

  return (
    <main className="min-h-screen bg-gray-50 px-6 py-12 dark:bg-gray-950">
      <div className="mx-auto max-w-3xl space-y-6">
        <TaskCard task={task}>
          <TaskDetails task={task} />
        </TaskCard>

        <p className="text-sm font-medium text-gray-500">More like this</p>

        <Suspense>
          <SimilarTasks topic={task.topic} currentTaskId={task.id} />
        </Suspense>
      </div>
    </main>
  );
};

export default TaskPage;
