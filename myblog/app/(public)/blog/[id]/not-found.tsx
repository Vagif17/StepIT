const NotFound = () => {
  return (
      <div className="mx-auto mt-20 max-w-3xl px-6">
        <div className="rounded-xl border border-red-500/30 bg-zinc-900 p-6">
          <h1 className="text-2xl font-bold text-red-400">
            Page not found
          </h1>
          <p className="mt-2 text-zinc-400">
            The requested article does not exist.
          </p>
        </div>
      </div>
    );
}

export default NotFound