import { NextResponse, NextRequest } from "next/server";
import { TASKS } from "@/src/data/TASKS";

export async function GET() {
  return NextResponse.json(TASKS);
}

export async function POST(request: NextRequest) {
  const body = await request.json();

  const newTask = {
    id: TASKS.length + 1,
    title: body.title,
    topic: body.topic,
    description: body.description,
    done: false,
    createdAt: new Date().toISOString(),
  };

  TASKS.push(newTask);

  return NextResponse.json(newTask, { status: 201 });
}
