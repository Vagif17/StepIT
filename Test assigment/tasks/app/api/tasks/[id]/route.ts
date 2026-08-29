import { NextRequest } from "next/server";
import { TASKS } from "@/src/data/TASKS";

export async function PUT(
  request: NextRequest,
  { params }: { params: Promise<{ id: string }> },
) {
  const { id } = await params;

  const task = TASKS.find((task) => task.id === Number(id));

  if (task?.done === false) {
    task.done = true;
  }

  return Response.json(task);
}

export async function DELETE(
  request: NextRequest,
  { params }: { params: Promise<{ id: string }> },
) {
  const { id } = await params;

  const task = TASKS.find((task) => task.id === Number(id));
  TASKS.splice(TASKS.indexOf(task!), 1);
  return Response.json(task);
}
