"use client";

import { useActionState } from "react";
import { addTask } from "@/app/action";

const initialState = {
  error: "",
  success: false,
};

const NewTaskPage = () => {
  const [state, formAction, isPending] = useActionState(
    addTask,
    initialState,
  );

  return (
    <main className="min-h-screen bg-gray-50 px-6 py-12 dark:bg-gray-950">
      <div className="mx-auto max-w-2xl">
        <div className="mb-8">
          <p className="text-sm font-medium text-gray-500 dark:text-gray-400">
            Task Manager
          </p>

          <h1 className="mt-1 text-3xl font-bold tracking-tight text-gray-900 dark:text-white">
            Create new task
          </h1>

          <p className="mt-2 text-gray-500 dark:text-gray-400">
            Add a new task to your list.
          </p>
        </div>

        <form
          action={formAction}
          className="rounded-2xl border border-gray-200 bg-white p-6 shadow-sm dark:border-gray-800 dark:bg-gray-900 sm:p-8"
        >
          <div className="space-y-6">
            <div>
              <label
                htmlFor="title"
                className="mb-2 block text-sm font-semibold text-gray-900 dark:text-gray-100"
              >
                Title
              </label>

              <input
                type="text"
                id="title"
                name="title"
                placeholder="e.g. Learn Next.js"
                className="
                  w-full rounded-lg
                  border border-gray-300
                  bg-white
                  px-4 py-3
                  text-sm text-gray-900
                  outline-none
                  transition
                  placeholder:text-gray-400
                  focus:border-gray-900
                  focus:ring-2
                  focus:ring-gray-900/10

                  dark:border-gray-700
                  dark:bg-gray-800
                  dark:text-white
                  dark:placeholder:text-gray-500
                  dark:focus:border-gray-400
                "
              />

              {state.error && (
                <p className="mt-2 text-sm font-medium text-red-600 dark:text-red-400">
                  {state.error}
                </p>
              )}
            </div>

            <div>
              <label
                htmlFor="topic"
                className="mb-2 block text-sm font-semibold text-gray-900 dark:text-gray-100"
              >
                Topic
              </label>

              <input
                type="text"
                id="topic"
                name="topic"
                placeholder="e.g. Next.js"
                className="
                  w-full rounded-lg
                  border border-gray-300
                  bg-white
                  px-4 py-3
                  text-sm text-gray-900
                  outline-none
                  transition
                  placeholder:text-gray-400
                  focus:border-gray-900
                  focus:ring-2
                  focus:ring-gray-900/10

                  dark:border-gray-700
                  dark:bg-gray-800
                  dark:text-white
                  dark:placeholder:text-gray-500
                  dark:focus:border-gray-400
                "
              />
            </div>

            <div>
              <label
                htmlFor="description"
                className="mb-2 block text-sm font-semibold text-gray-900 dark:text-gray-100"
              >
                Description
              </label>

              <textarea
                id="description"
                name="description"
                rows={5}
                placeholder="Describe what you need to do..."
                className="
                  w-full resize-none rounded-lg
                  border border-gray-300
                  bg-white
                  px-4 py-3
                  text-sm text-gray-900
                  outline-none
                  transition
                  placeholder:text-gray-400
                  focus:border-gray-900
                  focus:ring-2
                  focus:ring-gray-900/10

                  dark:border-gray-700
                  dark:bg-gray-800
                  dark:text-white
                  dark:placeholder:text-gray-500
                  dark:focus:border-gray-400
                "
              />
            </div>

            {state.success && (
              <div className="rounded-lg bg-green-50 px-4 py-3 text-sm font-medium text-green-700 dark:bg-green-900/20 dark:text-green-400">
                Task successfully created!
              </div>
            )}

            <div className="flex justify-end border-t border-gray-100 pt-6 dark:border-gray-800">
              <button
                type="submit"
                disabled={isPending}
                className="
                  rounded-lg
                  bg-brand
                  px-5 py-2.5
                  text-sm font-semibold text-white
                  transition
                  hover:bg-brand/90
                  active:scale-95
                  disabled:cursor-not-allowed
                  disabled:opacity-50
                "
              >
                {isPending ? "Creating..." : "Create Task"}
              </button>
            </div>
          </div>
        </form>
      </div>
    </main>
  );
};

export default NewTaskPage;