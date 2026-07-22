export default function Layout({
  children,
}: {
  children: React.ReactNode;
}) {
  return (
    <div>
      <div>layout</div>
      {children}
    </div>
  );
}