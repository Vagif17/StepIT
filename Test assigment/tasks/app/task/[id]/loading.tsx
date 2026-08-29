const Loading = () => {
  return (
    <main className="flex min-h-screen items-center justify-center bg-gray-50 dark:bg-gray-950">
      {" "}
      <div className="flex flex-col items-center gap-4">
        <div className="h-10 w-10 animate-spin rounded-full border-4 border-gray-200 border-t-gray-900" />

        <p className="text-sm font-medium text-gray-500 dark:text-gray-400">
          Loading...
        </p>
      </div>
    </main>
  );
};

export default Loading;
