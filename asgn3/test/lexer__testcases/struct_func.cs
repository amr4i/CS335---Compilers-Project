using System;

public struct T
{
  public char a;
  public int b;
  public char c;
  public short d;
  public double e;
  public string name;
  public char f;
};

public class Test
{
  public void f (T x)
  {
    x.a = 'a';
    x.b = 47114711;
    x.c = 'c';
    x.d = 1234;
    x.e = 3.141592897932;
    x.f = '*';
    x.name = "abc";
  }

  public int Main(string[] argv)
  {
    T k=new T();
    Test test = new Test();
    test.f(k);
    return 0;
  }

}
