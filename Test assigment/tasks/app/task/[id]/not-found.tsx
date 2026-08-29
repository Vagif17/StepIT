import Link from "next/link";

const NotFound = () => {
  return (
    <main className="flex min-h-screen items-center justify-center bg-gray-50 px-6">
      <div className="text-center">
        <p className="text-8xl font-bold tracking-tight text-gray-900 dark:text-white">
          404
        </p>

        <h1 className="mt-4 text-3xl font-bold text-gray-900 dark:text-white">
          Task not found
        </h1>

        <p className="mt-3 text-gray-500 dark:text-gray-400">
          The task you are looking for doesn&apos;t exist or has been deleted.
        </p>

        <Link
          href="/"
          className="mt-8 inline-flex rounded-lg bg-gray-900 px-5 py-3 text-sm font-medium text-white transition hover:bg-gray-700"
        >
          Back to tasks
        </Link>
      </div>
    </main>
  );
};

export default NotFound;
