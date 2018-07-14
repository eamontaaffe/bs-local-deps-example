open Jest;
open Expect;

describe("bs-anon", () => {
  test("hello", () =>
    expect(First.hello)
    |> toEqual("Hello world!")
  );
});
