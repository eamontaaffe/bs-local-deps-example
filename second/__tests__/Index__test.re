open Jest;
open Expect;

describe("First", () => {
  /* This breaks the compiler */
  test("hello!!!", () =>
    expect(First.hello)
    |> toEqual("Hello World!")
  );
});
