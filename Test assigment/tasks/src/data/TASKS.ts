export interface Task {
  id: number;
  title: string;
  topic: string;
  description: string;
  done: boolean;
  createdAt: string;
}

export const TASKS: Task[] = [
  {
    id: 1,
    title: "Learn Next.js",
    topic: "Next.js",
    description:
      "Learn the basics of Next.js, App Router, Server Components and routing.",
    done: false,
    createdAt: "2026-08-26",
  },
  {
    id: 2,
    title: "Create a task manager",
    topic: "Next.js",
    description:
      "Build a simple task manager using Next.js, TypeScript and Tailwind CSS.",
    done: false,
    createdAt: "2026-08-25",
  },
  {
    id: 3,
    title: "Learn TypeScript",
    topic: "TypeScript",
    description:
      "Practice interfaces, types, generics and type-safe development.",
    done: true,
    createdAt: "2026-08-24",
  },
  {
    id: 4,
    title: "Create TypeScript interfaces",
    topic: "TypeScript",
    description:
      "Create and use TypeScript interfaces to describe the structure of application data.",
    done: false,
    createdAt: "2026-08-23",
  },
  {
    id: 5,
    title: "Practice React",
    topic: "React",
    description:
      "Practice React components, props, state and hooks.",
    done: false,
    createdAt: "2026-08-22",
  },
  {
    id: 6,
    title: "Learn React Hooks",
    topic: "React",
    description:
      "Learn how to use useState, useEffect and other React hooks.",
    done: true,
    createdAt: "2026-08-21",
  },
  {
    id: 7,
    title: "Read Next.js documentation",
    topic: "Next.js",
    description:
      "Read the official Next.js documentation and explore the App Router.",
    done: true,
    createdAt: "2026-08-20",
  },
];