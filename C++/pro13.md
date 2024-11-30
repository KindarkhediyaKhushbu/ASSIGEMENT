### Explain the difference between implicit and explicit type conversion in C++.
 </b></h1>

| Feature      | Implicit Type Conversion  |Explicit Type Conversion|
|----------|--------|---------|
|Definition|Automatic conversion of one type to another by the compiler.|Manual conversion of one type to another by the programmer.|
|Trigger|Happens automatically when a value is assigned to a variable of a compatible type.|The programmer explicitly specifies the conversion.|
|Control|No control over the conversion; done by the compiler.|Full control over how the conversion happens.|
|Safety|Typically safe, as the compiler ensures no loss of data or precision (e.g., smaller type to larger type).|May involve risks like loss of data or precision (e.g., converting from double to int).|
|Syntax|No special syntax needed; done automatically.|Requires specific syntax, either with a cast operator (type) or static_cast<type>(expression).|
|Example|double d = 5; int i = d; (Implicit conversion from double to int).|double d = 3.14; int i = (int)d; (Explicit conversion from double to int).|
