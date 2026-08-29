"use server";

import { revalidatePath } from "next/cache";
import { z } from "zod";
import { TASKS } from "@/src/data/TASKS";

const taskSchema = z.object({
  title: z.string().trim().min(1, "Title is required"),
});

export type AddTaskState = {
  error?: string;
  success?: boolean;
};

export async function addTask(
  prevState: AddTaskState,
  formData: FormData,
): Promise<AddTaskState> {
  const title = formData.get("title");

  const result = taskSchema.safeParse({
    title,
  });

  if (!result.success) {
    return {
      error: result.error.issues[0].message,
      success: false,
    };
  }

  const topic = String(formData.get("topic") ?? "");
  const description = String(formData.get("description") ?? "");

  const newTask = {
    id: TASKS.length + 1,
    title: result.data.title,
    topic,
    description,
    done: false,
    createdAt: new Date().toISOString().split("T")[0],
  };

  TASKS.push(newTask);

  revalidatePath("/tasks");

  return {
    success: true,
  };
}