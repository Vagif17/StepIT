import { NextRequest, NextResponse } from "next/server";

export function proxy(request: NextRequest) {
  const method = request.method;

  if (method === "GET") {
    return NextResponse.next();
  }

  if (["POST", "PUT", "DELETE"].includes(method)) {
    const authorization = request.headers.get("authorization");

    if (!authorization) {
      return NextResponse.json(
        { error: "Authorization header is required" },
        { status: 401 },
      );
    }

    if (!authorization.startsWith("Bearer ")) {
      return NextResponse.json(~
        { error: "Invalid Authorization format" },
        { status: 401 },
      );
    }

    const token = authorization.substring(7);

    if (!token) {
      return NextResponse.json({ error: "Token is required" }, { status: 401 });
    }
  }

  return NextResponse.next();
}

export const config = {
  matcher: "/api/tasks/:path*",
};
