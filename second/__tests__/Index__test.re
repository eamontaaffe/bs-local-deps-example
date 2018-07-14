open Jest;
open Expect;

describe("First", () => {
  test("hello", () =>
    expect(hello)
    |> toEqual("Hello World!")
  );
});
