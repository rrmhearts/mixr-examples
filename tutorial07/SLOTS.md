# Slots

This code is part of a **Domain Specific Language (DSL)** written using C++ macros, likely from the **OpenEaagles** or **Mixr** simulation frameworks. Its purpose is to map string-based configuration attributes (from a file) to specific setter functions in your C++ classes.

Think of it as a "switchboard" that connects data coming in from a configuration file to the correct internal variables.

---

### What is `ON_SLOT` doing?

In short, `ON_SLOT` is a conditional handler. It checks if the current index being processed matches its own assigned index, attempts to convert the input data to the correct type, and then calls a specific function.

Here is the step-by-step breakdown of the logic inside the macro:

1.  **Check Status (`if (!_ok)`):** It first checks if a previous `ON_SLOT` has already successfully handled this request. If `_ok` is true, it skips everything.
2.  **Type Safety (`dynamic_cast`):** It tries to cast the incoming `Object*` into the specific type you're expecting (e.g., `mixr::base::Number`). This ensures you aren't trying to pass a "Color" object into a "Speed" function.
3.  **Index Matching (`idx == _n1`):** It checks if the `slotindex` provided by the system matches the number you assigned (e.g., `1` or `2`). 
    * *Note:* `_n1` is the relative index calculated in `BEGIN_SLOT_MAP`.
4.  **Execution (`setFunc(_msg)`):** If the index matches and the data type is correct, it calls your setter function (`setSlotSpeed`) and stores the result (usually `true`) in `_ok`.

---

### The Big Picture: Inheritance & Chaining

The reason this code is so complex is to handle **Inheritance**.

| Section | What it does |
| :--- | :--- |
| **Slot Table** | Creates a list of string names (`"speed"`, `"startAngle"`) so the parser knows which words are valid for this class. |
| **The Offset (`_n`)** | In `BEGIN_SLOT_MAP`, the code asks the `BaseClass` how many slots it has. If you have a `Worm` inheriting from `Animal`, and `Animal` has 5 slots, the `Worm` slots will start at index 6. |
| **The Dispatch** | When the parser finds `"speed"`, it sees it is index 1 for the `Worm`. `ON_SLOT(1, ...)` catches it. |

### Example Scenario
When your config file says `speed: 50`:
1. The system looks up `"speed"` in the `slotnames` array.
2. It finds it at index 1.
3. It calls `setSlotByIndex(slotindex, obj)`.
4. `ON_SLOT(1, setSlotSpeed, ...)` sees that `idx (1)` matches the requested index.
5. It casts the value `50` to a `Number`.
6. It calls `setSlotSpeed(50)`.

---

### Why is `ON_SLOT(2, ...)` there twice?
You�ll notice in your example:
```cpp
ON_SLOT(2, setSlotAngle, mixr::base::Angle)
ON_SLOT(2, setSlotAngle, mixr::base::Number)
```
This is **Function Overloading** via macros. It allows the `startAngle` slot to accept *either* a formal `Angle` object (like `( Degrees 90 )`) or a raw `Number`. If the first `ON_SLOT` fails because the input wasn't an `Angle`, the second one tries to handle it as a `Number`.

**Would you like me to explain how to write the corresponding `setSlotSpeed` function to work with this map?**