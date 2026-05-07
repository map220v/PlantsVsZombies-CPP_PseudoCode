// Class: Sexy::TypedKey<Sexy::Point>


/* Sexy::TypedKey<Sexy::Point>::TypedKey() */

void __thiscall Sexy::TypedKey<Sexy::Point>::TypedKey(TypedKey<Sexy::Point> *this)

{
  Point::Point((Point *)(this + 8));
  return;
}


/* Sexy::TypedKey<Sexy::Point>::TypedKey(Sexy::TypedKey<Sexy::Point>&&) */

void __thiscall Sexy::TypedKey<Sexy::Point>::TypedKey(TypedKey<Sexy::Point> *this,TypedKey *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  Point::Point((Point *)(this + 8),(TPoint *)(param_1 + 8));
  return;
}


/* Sexy::TypedKey<Sexy::Color>::TypedKey() */

void __thiscall Sexy::TypedKey<Sexy::Color>::TypedKey(TypedKey<Sexy::Color> *this)

{
  Color::Color((Color *)(this + 8));
  return;
}


/* Sexy::TypedKey<Sexy::Color>::TypedKey(Sexy::TypedKey<Sexy::Color>&&) */

void __thiscall Sexy::TypedKey<Sexy::Color>::TypedKey(TypedKey<Sexy::Color> *this,TypedKey *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  Insets::Insets((Insets *)(this + 8),(Insets *)(param_1 + 8));
  return;
}

