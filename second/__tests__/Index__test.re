open Jest;
open Expect;

describe("First", () => {
  test("hello!!!", () =>
    expect(First.hello)
    |> toEqual("Hello World!")
  );
});
